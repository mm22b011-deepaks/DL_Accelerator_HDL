import functions::*; // Please to check

// -----------------------------------------------------------------
interface MAC_IFC;
        method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
        method ActionValue#(Bit#(32)) get_result;
endinterface : MAC_IFC
// -----------------------------------------------------------------

// -----------------------------------------------------------------
module mkUnpipelined (MAC_IFC);
	Reg#(Bit#(16)) a_16 	<- mkReg(0);
	Reg#(Bit#(16)) b_16 	<- mkReg(0);
	Reg#(Bit#(32)) c_32     <- mkReg(0);
	Reg#(Bit#(1))  s1_or_s2 <- mkReg(0);
	Reg#(Bool)     status   <- mkReg(False);
	Reg#(Bit#(32)) result   <- mkReg(0);
	Reg#(Bit#(8))  a_8	<- mkReg(0);
	Reg#(Bit#(8))  b_8	<- mkReg(0);
/*	

	method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
		s1_or_s2 <= s1_or_s2_in;
		
		if(s1_or_s2 == 1) begin
			a_16  <= a_in;
			b_16  <= b_in;
		end
		else begin
			a_8   <= a_in[7:0];
			b_8   <= b_in[7:0];
		end

		c_32     <= c_in;
	endmethod : put  

	method ActionValue#(Bit#(32)) get_result;
		return result;
	endmethod : get_result
*/	
	Reg#(Bit#(16)) product <- mkDWire(0);

	rule rl_computeMultiplication_integer if(s1_or_s2 == 1);
		product <= int8_multiply(a_8, b_8);    // Can I use unpack like this for fucntion calls?
	endrule : rl_computeMultiplication_integer

	rule rl_computeAddition_integer if(s1_or_s2 == 1);
		result  <= int32_add(product, c_32);  // Can I use unpack like this for function calls?
	endrule : rl_computeAddition_integer

	rule rl_computeMultiplication_bfloat16 if(s1_or_s2 == 0);
		product <= bfloat16_multiply(a_16, b_16);  // this function is wrong, check function.bsv
	endrule : rl_computeMultiplication_bfloat16

	rule rl_computeAddition_bfloat16 if(s1_or_s2 == 0);
		result  <= bfloat16_add_Float32(product, c_32);  // this function is wrong, check functions.bsv
	endrule : rl_computeAddition_bfloat16

method Action put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
        s1_or_s2 <= s1_or_s2_in;
    
        if(s1_or_s2 == 1) begin
                 a_16  <= a_in;
                 b_16  <= b_in;
        end 
        else begin
                 a_8   <= a_in[7:0];
                 b_8   <= b_in[7:0];
        end 

        c_32     <= c_in;
endmethod : put  

method ActionValue#(Bit#(32)) get_result;
        return result;
endmethod : get_result
endmodule : mkUnpipelined
// -----------------------------------------------------------------

// NOTE: Check if there is a way to convert to one-cycle implementation
// return result has to be changed to method
