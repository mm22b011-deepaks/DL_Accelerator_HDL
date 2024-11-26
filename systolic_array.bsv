package systolic_array;

import SpecialFIFOs::*;
import FIFO::*;
import Vector::*;
import unpipelined::*;
import FixedPoint::*;

typedef struct{
	Bit#(1)  s;
	Bit#(16) b;
	Bit#(16) mac;
} Mod_out_down deriving(Bits, Eq);

typedef struct{
	Bit#(16) a;
} Mod_out_right deriving(Bits, Eq);

interface IFC_systolic;
	method Action input_a(Bit#(256) a);
	method Action input_b(Bit#(256) b);
	method Action input_c(Bit#(512) c);
	method Action input_s(Bit#(16) s);
	method ActionValue#(Bit#(512)) mac_out;
endinterface : IFC_systolic

module mk_systolic(IFC_systolic);
	MAC_IFC mac_ifc <- mkUnpipelined;
	
	FIFO#(Mod_out_down)   downinput1 <- mkSizedFIFO(4);   // Ask this
	FIFO#(Mod_out_down)   downinput2 <- mkSizedFIFO(4);
	FIFO#(Mod_out_down)   downinput3 <- mkSizedFIFO(4);
	FIFO#(Mod_out_down)   downinput4 <- mkSizedFIFO(4);
	FIFO#(Mod_out_down)   down11 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down12 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down13 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down14 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down21 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down22 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down23 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down24 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down31 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down32 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down33 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down34 <- mkPipelineFIFO();
	FIFO#(Mod_out_down)   down41 <- mkFIFO();
	FIFO#(Mod_out_down)   down42 <- mkFIFO();
	FIFO#(Mod_out_down)   down43 <- mkFIFO();
	FIFO#(Mod_out_down)   down44 <- mkFIFO();

	FIFO#(Mod_out_right) rightinput1 <- mkFIFO();
	FIFO#(Mod_out_right) rightinput2 <- mkFIFO();
	FIFO#(Mod_out_right) rightinput3 <- mkFIFO();
	FIFO#(Mod_out_right) rightinput4 <- mkFIFO();
	FIFO#(Mod_out_right) right11 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right12 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right13 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right14 <- mkFIFO();
	FIFO#(Mod_out_right) right21 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right22 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right23 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right24 <- mkFIFO();
	FIFO#(Mod_out_right) right31 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right32 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right33 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right34 <- mkFIFO();
	FIFO#(Mod_out_right) right41 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right42 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right43 <- mkPipelineFIFO();
	FIFO#(Mod_out_right) right44 <- mkFIFO();

	Reg#(Bit#(512)) mac_result <- mkReg(0);

	rule rl_row1;
		Bit#(16) in_a11 = rightinput1.a.first();  // Check the syntax once
		Bit#(16) in_b11 = downinput1.b.first();
		Bit#(32) in_c11 = downinput1.c.first();
		Bit#(1)  in_s11 = downinput1.s.first();

		Bit#(16) in_a12 = rightinput1.a.first();  // Check the syntax once
		Bit#(16) in_b12 = downinput2.b.first();
		Bit#(32) in_c12 = downinput2.c.first();
		Bit#(1)  in_s12 = downinput2.s.first();

		Bit#(16) in_a13 = rightinput1.a.first();  // Check the syntax once
		Bit#(16) in_b13 = downinput3.b.first();
		Bit#(32) in_c13 = downinput3.c.first();
		Bit#(1)  in_s13 = downinput3.s.first();

		Bit#(16) in_a14 = rightinput1.a.first();  // Check the syntax once
		Bit#(16) in_b14 = downinput4.b.first();
		Bit#(32) in_c14 = downinput4.c.first();
		Bit#(1)  in_s14 = downinput4.s.first();
		
		//Ask this, how to call unpipelined module here with correct inputs

		//Later store the same output with 

	endrule : rl_row1

method Action input_a(Bit#(256) a);
    for (Integer i = 0; i < 16; i = i+1) begin
        Bit#(16) chunk = a[(i+1)*16-1 : i*16];
        
        if (i % 4 == 0) begin
            rightinput1.a.enq(chunk);
        end
        if (i % 4 == 1) begin
            rightinput2.a.enq(chunk);
        end
        if (i % 4 == 2) begin
            rightinput3.a.enq(chunk);
        end
        if (i % 4 == 3) begin
            rightinput4.a.enq(chunk);
        end
    end
endmethod : input_a

method Action input_b(Bit#(256) b);
    for (Integer i = 0; i < 16; i = i+1) begin
       
        Bit#(16) chunk = b[(i+1)*16-1 : i*16];
        
        if (i % 4 == 0) begin
            downinput1.b.enq(chunk);
        end
        if (i % 4 == 1) begin
            downinput2.b.enq(chunk);
        end
        if (i % 4 == 2) begin
            downinput3.b.enq(chunk);
        end
        if (i % 4 == 3) begin
            downinput4.b.enq(chunk);
        end
    end
endmethod : input_b


method Action input_c(Bit#(512) c);
    for (Integer i = 0; i < 16; i = i+1) begin
        
        Bit#(32) chunk = c[(i+1)*32-1 : i*32];
        
        
        if (i % 4 == 0) begin
            downinput1.c.enq(chunk);
        end
        if (i % 4 == 1) begin
            downinput2.c.enq(chunk);
        end
        if (i % 4 == 2) begin
            downinput3.c.enq(chunk);
        end
        if (i % 4 == 3) begin
            downinput4.c.enq(chunk);
        end
    end
endmethod : input_c


method Action input_s(Bit#(16) s);
    for (Integer i = 0; i < 16; i = i+1) begin
        
        Bit#(1) chunk = s[i];
        
        if (i % 4 == 0) begin
            downinput1.s.enq(chunk);
        end
        if (i % 4 == 1) begin
            downinput2.s.enq(chunk);
        end
        if (i % 4 == 2) begin
            downinput3.s.enq(chunk);
        end
        if (i % 4 == 3) begin
            downinput4.s.enq(chunk);
        end
    end
endmethod : input_s


	method ActionValue#(Bit#(512)) mac_out;
		return mac_result;
	endmethod : mac_out

endmodule : mk_systolic

endpackage : systolic_array
	
