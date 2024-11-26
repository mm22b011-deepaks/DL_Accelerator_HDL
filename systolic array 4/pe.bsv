package pe;

    `include "types.bsv"

    interface Ifc_pe;
        method Action putA(SysType in_a);
        method Action putB(SysType in_b);
        method SysType getC();
        method Action reset();
    endinterface

    (* synthesize *)
    module mk_pe(Ifc_pe);
        Reg#(SysType) reg_a <- mkReg(unpack(0));
        Reg#(SysType) reg_b <- mkReg(unpack(0));
        Reg#(SysType) reg_c <- mkReg(unpack(0));

        rule mac;
            reg_c <= fxptAdd(reg_c, fxptMult(reg_a, reg_b));
        endrule

        method Action putA(SysType in_a);
            reg_a <= in_a;
        endmethod

        method Action putB(SysType in_b);
            reg_b <= in_b;
        endmethod

        method SysType getC = reg_c;

        method Action reset();
            reg_a <= unpack(0);
            reg_b <= unpack(0);
            reg_c <= unpack(0);
        endmethod
    endmodule

endpackage
