import functions::*; // I know its wrong, need to fix the syntax
import FIFO::*;
import SpecialFIFOs::*;

// -----------------------------------------------------------------
interface MAC_IFC;
        method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
        method ActionValue#(Bit#(32)) get_result;
endinterface : MAC_IFC
// -----------------------------------------------------------------
/*
// -----------------------------------------------------------------
//typedef struct {
//	Int#(32) product;
//	Int#(32) c;
//} Int_multiply_pipeline 
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	Int#(8)  a;
	Int#(8)  b;
	Int#(32) c;
} Int_mac_input
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	Int#(32) mac;
} Int_mac_output
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	bfloat16 A;
	bfloat16 B;
	float32  C;
} Bfloat16_mac_input
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	float32  product;
	float32  C;
} Bfloat16_mac_pipeline
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	float32 mac;
} Bfloat16_mac_output
deriving(Bits, Eq);
// -----------------------------------------------------------------
*/


// -----------------------------------------------------------------
typedef struct {
	Bit#(16) a;
	Bit#(16) b;
	Bit#(32) c;
	Bit#(1)  s1_or_s2;
} Input_buf
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	Bit#(16) product;
	Bit#(32) c;
	Bit#(1) s1_or_s2_new;
} Pipeline_buf
deriving(Bits, Eq);
// -----------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	Bit#(32) result;
} Output_buf
deriving(Bits, Eq);
// -----------------------------------------------------------------

(* synthesize *)
// -----------------------------------------------------------------
module mkPipelined (MAC_IFC);
//	FIFO#(Int_mac_input)	     mac_input   <- mkPipelineFIFO();
//	FIFO#(Int_multiply_pipeline) mult_buffer <- mkPipelineFIFO();
//	FIFO#(Int_mac_output)        mac_result  <- mkPipelineFIFO();	

	FIFO#(Input_buf)    mac_input   <- mkPipelineFIFO();
	FIFO#(Pipeline_buf) mult_buffer <- mkPipelineFIFO();
	FIFO#(Bit#(32))   mac_result  <- mkPipelineFIFO();
//	Reg#(Bool) 	    status      <- mkReg(False);	

//	mac_input   inp_stage1;
//	mult_buffer inp_stage2;
//	mac_result  output_result;
/*
        method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(16) c_in, Bit#(1) s1_or_s2_in);
		Input_buf input_tmp;

		status	           <= True;
		input_tmp.s1_or_s2 = s1_or_s2_in;
		input_tmp.a 	   = a_in;
		input_tmp.b 	   = b_in;
		input_tmp.c 	   = c_in;
		
		mac_input.enq(input_tmp);
	endmethod : put

	method ActionValue#(Bit#(32)) get_result if(status == True);  // Ask prof if i can do this
		Bit#(32) output_tmp;

		status     <= False;
		output_tmp = mac_result.first();
		mac_result.deq();
		
		return pack(output_tmp.result);
	endmethod : get_result
*/
	rule rl_pipe_stage1_int if (mac_input.first().s1_or_s2 == 1) ;
		Input_buf   inp_stage1 = mac_input.first();
		Bit#(8)     a          = inp_stage1.a[7:0];
		Bit#(8)     b          = inp_stage1.b[7:0];
		Bit#(32)    c          = inp_stage1.c;  // Is this necessary?
		Bit#(16)    mul_result = int8_multiply(a,b);

		Pipeline_buf out_stage1;
		out_stage1.product = mul_result;
		out_stage1.c       = c;
		out_stage1.s1_or_s2_new = mac_input.first().s1_or_s2; 

		mac_input.deq();
		mult_buffer.enq(out_stage1);
	endrule : rl_pipe_stage1_int 

	rule rl_pipe_stage2_int if(mult_buffer.first().s1_or_s2_new == 1);
		Pipeline_buf inp_stage2 = mult_buffer.first();
		Bit#(16)     product    = inp_stage2.product;
		Bit#(32)     c 	 	= inp_stage2.c;
		Bit#(32)     result     = int32_add(product, c);

		mult_buffer.deq();
		mac_result.enq(result);
	endrule : rl_pipe_stage2_int
// -----------------------------------------------------------------

	rule rl_pipe_stage1_bfloat16 if(mac_input.first().s1_or_s2 == 0);
		Input_buf inp_stage1 = mac_input.first();
		Bit#(16)           a 	      = inp_stage1.a;
		Bit#(16) 	   b	      = inp_stage1.b;
		Bit#(32)  	   c	      = inp_stage1.c;
		Bit#(16) 	   mul_result = bfloat16_multiply(a, b);
		
		Pipeline_buf out_stage1;
		out_stage1.product = mul_result;
		out_stage1.c	   = c;
		out_stage1.s1_or_s2_new = mac_input.first().s1_or_s2;

		mac_input.deq();
		mult_buffer.enq(out_stage1);
	endrule : rl_pipe_stage1_bfloat16

	rule rl_pipe_stage2_bfloat16 if(mult_buffer.first().s1_or_s2_new == 0);
		Pipeline_buf inp_stage2 = mult_buffer.first();
		Bit#(16) 	      product    = inp_stage2.product;
		Bit#(32)  	      c    	 = inp_stage2.c;
		Bit#(32)  	      result     = bfloat16_add_Float32(product, c);
		mult_buffer.deq();

		mac_result.enq(result);
	endrule : rl_pipe_stage2_bfloat16

	method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in); // if (status == False);
                Input_buf input_tmp;

//                status             <= True;
                input_tmp.s1_or_s2 = s1_or_s2_in;
                input_tmp.a        = a_in;
                input_tmp.b        = b_in;
                input_tmp.c        = c_in;
    
                mac_input.enq(input_tmp);
        endmethod : put 

        method ActionValue#(Bit#(32)) get_result; //  if(status == True);  // Ask prof if i can do this
                Bit#(32) output_tmp;

  //              status     <= False;
                output_tmp = mac_result.first();
                mac_result.deq();
    
                return output_tmp;
        endmethod : get_result

endmodule 
// -----------------------------------------------------------------


