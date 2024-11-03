import functions::*; 
import FIFO::*;
import SpecialFIFOs::*;

// -----------------------------------------------------------------
interface MAC_IFC;
        method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
        method ActionValue#(Bit#(32)) get_result;
endinterface : MAC_IFC
// -----------------------------------------------------------------

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
		out_stage1.product = mul_result;
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
//-----------------------------------------------------------------

	rule rl_pipe_stage1_bfloat16 if(mac_input.first().s1_or_s2 == 0);
		Input_buf inp_stage1 = mac_input.first();
		Bit#(16)       a 	      = inp_stage1.a;
		Bit#(16) 	   b	      = inp_stage1.b;
		Bit#(32)  	   c	      = inp_stage1.c;
		Bit#(16) 	   mul_result = bfloat16_multiply(a, b);
		
		Pipeline_buf out_stage1;
		out_stage1.product = mul_result;
		out_stage1.c	   = c;
		mac_input.deq();
		mult_buffer.enq(out_stage1);
	endrule : rl_pipe_stage1_bfloat16

	rule rl_pipe_stage2_bfloat16 if(mac_input.first().s1_or_s2 == 0);
		Pipeline_buf inp_stage2 = mult_buffer.first();
		Bit#(16) 	      product    = inp_stage2.product;
		Bit#(32)  	      c    	 = inp_stage2.c;
		Bit#(32)  	      result     = bfloat16_add_Float32({product, 16'b0}, c);
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
// -----------------------------------------------------------------

(* synthesize *)
module mkTB_pipelined(Empty);



	MAC_IFC mac_ifc <- mkPipelined();

	rule rl_testpipelined ; 
		Bit#(16) a = 16'b0100000100101100;
        Bit#(16) b = 16'b0101010011100101;
        Bit#(32) c = 32'b01000001110010101100001010010000;
		Bit#(16) d = 16'b0100000010000000;
        Bit#(1) s1_or_s2 = 1'b0;
		Bit#(16) product = bfloat16_multiply(a,b);
		$display("product: %b", product);
		$display("mac:     %b", bfloat16_add_Float32({product, 16'b0}, c));
	//	mac_ifc.put( a,b, c, s1_or_s2);
	

















































	// $display("additoin of float: %b", bfloat16_add_Float32({d, 16'b0}, c));
	// Int#(8) expA = unpack(a[14:7]), expB = unpack(b[14:7]);
	// Bit#(8) expP;
	// bit signA, signB, signP;
	// Int#(16) manA = unpack(zeroExtend(a[6:0])), manB = unpack(zeroExtend(b[6:0]));
	// Int#(16) manP;
	// $display("bfloat16mul: %b", bfloat16_multiply(a,b));
	// $display("manA: %d", manA);
	// $display("manB: %d", manB);
	// Int#(16) product = manA * manB;
	// $display("mantissa product: %d", pack(product));
	// //Bit#(32) mac = bfloat16_add_Float32(product, c);
	// //$display("mac: %b", mac);
	// signA = a[15];
	// manA  = unpack((a[6] == 1) ? signExtend({1'd-1, a[6:0]}) : signExtend({1'd0, a[6:0]}));
	// $display("manA: %b", manA);
	// expA  = unpack(a[14:7]);
	// $display("expA: %b", expA);
	// signB = b[15];
	// manB  = unpack((b[6] == 1) ? signExtend({1'd-1, b[6:0]}) : signExtend({1'd0, b[6:0]}));
	// $display("manB: %b", manB);
	// expB  = unpack(b[14:7]);
	// $display("expA: %b", expB);

	// signP = signA ^ signB;

	// expP =unpack(add8(add8(pack(expA), pack(expB)), 8'b10000001));
	// $display("expP: %b", expP);
	// $display("we shall see: %d", unpack(add8(-8, 7)));
	// manP = unpack(multiply8(signExtend(a[6:0]), signExtend(b[6:0])));
	
	// if (pack(manP)[15] == 1) begin
	// 	manP = manP >> 1;
	// 	expP = (add8(expP, 1));
	// end
	// $display("exponent_sum: %b", unpack(expP));
	// $display("Final result: %d", {signP, (expP), pack(manP)[15:9]});
	$finish(0);
	endrule

//     Bit#(7)  mantissa_a       = a[6:0]; //{1'b1, a.mantissa};
//     Bit#(7)  mantissa_b       = b[6:0]; //{1'b1, b.mantissa};
//     Bit#(16) mantissa_product = pack(multiply7(mantissa_a, mantissa_b));
// 	$display("mantissa_product: %b", unpack(mantissa_product));
//     Bit#(8)  exponent_sum     = pack(add8(add8(a[14:7], b[14:7]), -127));
//     $display("exponent_sum: %d", unpack(exponent_sum));
//     // Normalisation of the product
//     if (mantissa_product[15] == 1) begin
//         mantissa_product  = mantissa_product >> 1;
//         exponent_sum = pack(add8(exponent_sum, 1));
//     end
// 	$display("mantissa_product exponent_sum after normalisation: %d %d", unpack(mantissa_product), unpack(exponent_sum));
//    // Rounding
//     Bit#(1)  rounding_bit = mantissa_product[7];
    
//     if (rounding_bit == 1) begin
//      mantissa_product = pack(int_add16(mantissa_product, 1));
//     end
// 	$display("mantissa_product after rounding: %d", unpack(mantissa_product));
//     result[6:0]     = mantissa_product[14:8];
//     result[14:7]    = exponent_sum;
//     result[15]      = a[15] ^ b[15];
 	// 	$finish(0);
    // endrule

	// rule rl_check_result; 
	// 	// Bit#(16) a = zeroExtend(8'b00100100);
    //     // Bit#(16) b = zeroExtend(8'b10000001);
    //     // Bit#(32) c = 32'b11111111111111111111111000001001;
    //     // Bit#(1) s1_or_s2 = 1'b1;
	// 	$display("hi");
    //     ActionValue#(Bit#(32)) result = mac_ifc.get_result(); 
	// 	$display("value is %b", result);
	// // // 	Bit#(16) product = 16'b1000000000100100;
	// // // 	Bit#(32) sum   = 0;
	// // // 	Bit#(33) carry = 0;
		
	// // // 	Bit#(32) a_extendednew = {product[15], zeroExtend(product)};

	// // // 	for (Integer i = 0; i < 31; i = i + 1) begin
	// // // 		Bit#(1) a_bit   = a_extendednew[i];
	// // // 		Bit#(1) b_bit   = c[i];

	// // // 		Bit#(1) sum_bit = a_bit ^ b_bit ^ carry[i];
	// // // 		carry[i+1] = (a_bit & b_bit) | (a_bit & carry[i]) | (b_bit & carry[i]);

	// // // 		sum[i] = sum_bit;
	// // // 	end


	// // // 	sum[31] = product[15] ^ c[31];

	// // // 	$display("the value of sum_with_sign %b", sum);
	// // // Bit#(8) aaa= 10;
	// // // Bit#(8) bbb= -5;
	// // // $display("multiply verify: %d", multiply8(aaa,bbb));

	// // Bit#(16) a_input = 16'b1011111110000000;
	// // Bit#(16) b_input = 16'b0100000001100000;
	// // Bit#(16) result_int = bfloat16_multiply(a_input, b_input);
	// // $display("product: %b" , result_int);

    //     $finish(0); 
    // endrule


endmodule

