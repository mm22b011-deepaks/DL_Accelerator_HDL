package systolic_array;

import SpecialFIFOs::*;
import FIFO::*;
import unpipelined::*;

typedef struct {
    Bit#(1)  s;
    Bit#(16) b;
    Bit#(32) mac;
} Mod_out_down deriving (Bits, Eq);

typedef struct {
    Bit#(16) a;
} Mod_out_right deriving (Bits, Eq);

interface IFC_systolic;
    method Action input_a(Bit#(256) a);
    method Action input_b(Bit#(256) b);
    method Action input_c(Bit#(512) c);
    method Action input_s(Bit#(16) s);
    method ActionValue#(Bit#(512)) mac_out;
endinterface : IFC_systolic

module mk_systolic(IFC_systolic);

    // Instantiate MAC modules
    MAC_IFC macs[4][4];
    for (Integer i = 0; i < 4; i = i + 1) begin
        for (Integer j = 0; j < 4; j = j + 1) begin
            macs[i][j] <- mkUnpipelined();
        end
    end

    // FIFOs for data movement
    FIFO#(Mod_out_down) down[4][4];
    FIFO#(Mod_out_right) right[4][4];
    for (Integer i = 0; i < 4; i = i + 1) begin
        for (Integer j = 0; j < 4; j = j + 1) begin
            down[i][j] <- mkPipelineFIFO();
            right[i][j] <- mkPipelineFIFO();
        end
    end

    Reg#(Bit#(512)) mac_result <- mkReg(0);

    // Method for inputting data to the systolic array
    method Action input_a(Bit#(256) a);
        for (Integer i = 0; i < 16; i = i + 1) begin
            Bit#(16) chunk = a[(i + 1) * 16 - 1 : i * 16];
            let row = i / 4;
            right[row][0].enq(Mod_out_right { a: chunk });
        end
    endmethod : input_a

    method Action input_b(Bit#(256) b);
        for (Integer i = 0; i < 16; i = i + 1) begin
            Bit#(16) chunk = b[(i + 1) * 16 - 1 : i * 16];
            let col = i % 4;
            down[0][col].enq(Mod_out_down { b: chunk, s: 0, mac: 0 });
        end
    endmethod : input_b

    method Action input_c(Bit#(512) c);
        for (Integer i = 0; i < 16; i = i + 1) begin
            Bit#(32) chunk = c[(i + 1) * 32 - 1 : i * 32];
            let col = i % 4;
            let mod_down = down[0][col].first();
            down[0][col].deq();
            down[0][col].enq(mod_down with { mac = chunk });
        end
    endmethod : input_c

    method Action input_s(Bit#(16) s);
        for (Integer i = 0; i < 16; i = i + 1) begin
            Bit#(1) chunk = s[i];
            let col = i % 4;
            let mod_down = down[0][col].first();
            down[0][col].deq();
            down[0][col].enq(mod_down with { s = chunk });
        end
    endmethod : input_s

    // Rule to compute results
    rule compute_mac;
        for (Integer i = 0; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                let in_a = right[i][j].first();
                let in_b = down[i][j].first();
                macs[i][j].put(in_a.a, in_b.b, in_b.mac, in_b.s);
                let result = macs[i][j].get_result();
                if (j == 3) begin
                    mac_result[(i * 128) + (j * 32) +: 32] = result;
                end
                right[i][j].deq();
                down[i][j].deq();
                if (i < 3) right[i + 1][j].enq(in_a);
                if (j < 3) down[i][j + 1].enq(in_b);
            end
        end
    endrule

    method ActionValue#(Bit#(512)) mac_out;
        return mac_result;
    endmethod : mac_out

endmodule : mk_systolic

endpackage : systolic_array
