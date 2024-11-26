import functions::*; 
import FIFO::*;
import SpecialFIFOs::*;

interface MAC_IFC;
        method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
        method ActionValue#(Bit#(32)) get_result;
endinterface : MAC_IFC

typedef struct {
	Bit#(16) a;
	Bit#(16) b;
	Bit#(32) c;
	Bit#(1)  s1_or_s2;
} Input_buf
deriving(Bits, Eq);

typedef struct {
	Bit#(32) product;
	Bit#(32) c;
} Pipeline_buf
deriving(Bits, Eq);

typedef struct {
	Bit#(32) result;
} Output_buf
deriving(Bits, Eq);

(* synthesize *)
module mkPipelined (MAC_IFC);

	FIFO#(Input_buf)    mac_input   <- mkPipelineFIFO();
	FIFO#(Pipeline_buf) mult_buffer <- mkPipelineFIFO();
	FIFO#(Bit#(32))     mac_result  <- mkPipelineFIFO();

	rule rl_pipe_stage1_int if (mac_input.first().s1_or_s2 == 1) ;
		Input_buf   inp_stage1 = mac_input.first();
		Bit#(8)     a          = inp_stage1.a[7:0];
		Bit#(8)     b          = inp_stage1.b[7:0];
		Bit#(32)    c          = inp_stage1.c;  
		Bit#(16)    mul_result = multiply8(a,b);

		Pipeline_buf out_stage1;
		out_stage1.product = signExtend(mul_result);
		out_stage1.c       = unpack(c); 

		mac_input.deq();
		mult_buffer.enq(out_stage1);
	endrule : rl_pipe_stage1_int 

	rule rl_pipe_stage2_int if(mac_input.first().s1_or_s2 == 1);
		Pipeline_buf inp_stage2 = mult_buffer.first();
		Bit#(32)     product    = signExtend(inp_stage2.product);
		Bit#(32)     c 	 	    = inp_stage2.c;
		Bit#(32)     result     = int32_add(product, c);

		mult_buffer.deq();
		mac_result.enq(result);
	endrule : rl_pipe_stage2_int

	rule rl_pipe_stage1_bfloat16 if(mac_input.first().s1_or_s2 == 0);
		Input_buf inp_stage1 = mac_input.first();
		Bit#(16)       a 	      = inp_stage1.a;
		Bit#(16) 	   b	      = inp_stage1.b;
		Bit#(32)  	   c	      = inp_stage1.c;
		Bit#(32) 	   mul_result = bfloat16_multiply(a, b);
		
		Pipeline_buf out_stage1;
		out_stage1.product = mul_result;
		out_stage1.c	   = c;
		mac_input.deq();
		mult_buffer.enq(out_stage1);
	endrule : rl_pipe_stage1_bfloat16

	rule rl_pipe_stage2_bfloat16 if(mac_input.first().s1_or_s2 == 0);
		Pipeline_buf inp_stage2 = mult_buffer.first();
		Bit#(32) 	      product    = inp_stage2.product;
		Bit#(32)  	      c    	 = inp_stage2.c;
		Bit#(32)  	      result     = bfloat16_add_Float32(product, c);
		mult_buffer.deq();

		mac_result.enq(result);
	endrule : rl_pipe_stage2_bfloat16

	method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in); 
                Input_buf input_tmp;
                input_tmp.s1_or_s2 = s1_or_s2_in;
                input_tmp.a        = a_in;
                input_tmp.b        = b_in;
                input_tmp.c        = c_in;
    
                mac_input.enq(input_tmp);
    endmethod : put 

	method ActionValue#(Bit#(32)) get_result; 
			Bit#(32) output_tmp;
			output_tmp = mac_result.first();
			mac_result.deq();
			return output_tmp;
	endmethod : get_result

endmodule 

(* synthesize *)
module mkTB_pipelined(Empty);



	MAC_IFC mac_ifc <- mkPipelined();

	rule rl_testpipelined ; 
		Bit#(16) a = 16'b1100000000000000;
        Bit#(16) b = 16'b1100000000000000;
        Bit#(32) c = 32'b01000000000000000000000000000000;
		Bit#(16) d = 16'b0100000010000000;
        Bit#(1) s1_or_s2 = 1'b0;
		 Bit#(32) product_test = bfloat16_multiply(a,b);
		mac_ifc.put( a,b, c, s1_or_s2);
	
	endrule

    

	rule rl_check_result; 
		$display("hi");
        ActionValue#(Bit#(32)) result = mac_ifc.get_result(); 
		$display("value is %b", result);

        $finish(0); 
    endrule


endmodule

