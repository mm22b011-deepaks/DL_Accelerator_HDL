package tb_pe;
import pe::*;

(* synthesize *)
module mkTestbench(Empty);
    Reg#(int) status <- mkReg(0); 
    Ifc_pe pe <- mk_pe();
    rule run_tests (status == 0);

        $display("\n[TESTBENCH] Starting tests for mk_pe module...");


        $display("[TESTBENCH] Resetting the module...");
        //pe.reset_mod;

        $display("[TESTBENCH] Test 1: Basic MAC operation");

        pe.putA(16'b10);
        pe.putB(16'b10);
        pe.putS(1'b0);
        status <= 1;
    endrule 

    rule run_tests_2 (status == 1);
        Bit#(32) output_ = pe.getC();
        $display("The value of output: %b", output_);
        status <= 2;
        $finish;
     endrule
    


        
endmodule

endpackage