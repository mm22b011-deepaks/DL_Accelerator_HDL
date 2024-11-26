package tb_pe;
import pe::*;

(* synthesize *)
module mkTestbench(Empty);

    Ifc_pe pe <- mk_pe();
    rule run_tests;

        $display("\n[TESTBENCH] Starting tests for mk_pe module...");


        $display("[TESTBENCH] Resetting the module...");
        pe.reset_mod;

        $display("[TESTBENCH] Test 1: Basic MAC operation");

        pe.putA(3);
        pe.putB(4);
        pe.putS(1);
        Bit#(32) output_ = pe.getC();
        $display("The value of output: %b", output_);
        $finish;
     endrule
        
endmodule

endpackage