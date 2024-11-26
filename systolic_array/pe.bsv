//package pe;
    typedef Vector#(4, Bit#(16)) VecType;

    import Vector::*;

    import unpipelined::*;
    import functions::*;

    interface Ifc_pe;
        method Action putA(Bit#(16) in_a);
        method Action putB(Bit#(16) in_b);
        method Action putS(Bit#(1)  in_c);
        method Bit#(16) getA();
        method Bit#(16) getB();
        method Bit#(32) getC();
        method Bit#(1)  getS();
        method Bool validAB();
        method Action reset_mod();
    endinterface

    (* synthesize *)
    module mk_pe(Ifc_pe);
        MAC_IFC mac_pe <- mkUnpipelined();

        Wire#(Bit#(16)) wr_in_a <- mkDWire(unpack(0));
        Wire#(Bit#(16)) wr_in_b <- mkDWire(unpack(0));
        Wire#(Bit#(1))  wr_in_s <- mkDWire(unpack(0));

        Wire#(Bool) wr_valid_a <- mkDWire(False);
        Wire#(Bool) wr_valid_b <- mkDWire(False);
        Wire#(Bool) wr_valid_s <- mkDWire(True);   // Change this later to False, this is just to test out the code

        Reg#(Bit#(16)) rg_out_a <- mkReg(unpack(0));
        Reg#(Bit#(16)) rg_out_b <- mkReg(unpack(0));
        Reg#(Bit#(32)) rg_out_c <- mkReg(unpack(0));
        Reg#(Bool) valid_a_b <- mkReg(False);
        PulseWire reset_sig <- mkPulseWire;

        // rule mac;
        //     if (wr_valid_a && wr_valid_b) begin
        //         //TODO: Replace with an efficient MAC architecture ✅
        //         //$display($time, " [MAC] rule reached, performing compute\n");
        //         Bit#(16) lv_mult = fxptTruncate(fxptMult(wr_in_a, wr_in_b)); //NOT GENERALISED  // Has to be moodified with mine
        //         rg_out_c <= fxptTruncate(fxptAdd(lv_mult, rg_out_c));
        //         valid_a_b <= True;
        //     end
        //     else
        //         valid_a_b <= False;
        // endrule

        rule mac (!reset_sig);
            $display($time, "Reached mac0\n"); 
            $display($time, "Value of wr_valid_a: %b", pack(wr_valid_a));
            $display($time, "Value of wr_valid_b: %b", pack(wr_valid_b));
            $display($time, "Value of wr_valid_s: %b", pack(wr_valid_s));
              if (wr_valid_a && wr_valid_b && wr_valid_s) begin
                
                $display($time, "Reached mac\n"); 
                    let z <- mac_pe.put(wr_in_a, wr_in_b, rg_out_c, wr_in_s);
                    //let z <- mac_pe.get_result;
                    rg_out_c <= z;
                    valid_a_b <= True;
                    $display($time, "rg_out_c: %b\n", rg_out_c); 
              end
              else begin
                 valid_a_b <= False;
              end
        endrule

        // rule mac;
        //       if (wr_valid_a && wr_valid_b && wr_valid_s) begin 
        //             rg_out_c  <= int32_add(signExtend(multiply8(wr_in_a[7:0], wr_in_b[7:0])), rg_out_c);
        //             valid_a_b <= True;
        //       end
        //       else begin
        //          valid_a_b <= False;
        //       end
        // endrule

        // Make changes in the above rule.

        rule propagate (wr_valid_a && wr_valid_b && !reset_sig);
            rg_out_a <= wr_in_a;
            rg_out_b <= wr_in_b;
            $display($time, "\n Reached propagate\n");
        endrule

        method Action putA(Bit#(16) in_a);
            $display($time, " [MAC] method reached, putA\n");
            wr_in_a <= in_a;
            wr_valid_a <= True;
        endmethod

        method Action putB(Bit#(16) in_b);
            $display($time, " [MAC] method reached, putB\n");
            wr_in_b <= in_b;
            wr_valid_b <= True;
        endmethod

        method Action putS(Bit#(1)  in_s);
            $display($time, " [MAC] method reached, putS\n");
            wr_in_s <= in_s;
            wr_valid_s <= True;
        endmethod

        method Bit#(16) getA = rg_out_a;
        method Bit#(16) getB = rg_out_b;
        method Bool validAB = valid_a_b;
        method Bit#(32) getC = rg_out_c;
        method Bit#(1)  getS = wr_in_s;

        method Action reset_mod;
            $display($time, "Reached reset_mod method\n");
            reset_sig.send();
            rg_out_a <= 0;
            rg_out_b <= 0;
            rg_out_c <= 0;
        endmethod
    endmodule
//endpackage
