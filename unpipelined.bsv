import functions::*; // Please to check

interface MAC_IFC;
        method ActionValue#(Bit#(32)) put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
endinterface : MAC_IFC
(*synthesize*)
module mkUnpipelined (MAC_IFC);

method ActionValue#(Bit#(32)) put(Bit#(16) a_in, Bit#(16) b_in, Bit#(32) c_in, Bit#(1) s1_or_s2_in);
    	 Bit#(16) a_16 	 = 0;
		 Bit#(16) b_16 	 = 0;
		 Bit#(32) c_32      = 0;
		 Bit#(1)  s1_or_s2  = 0;
		 Bool     status = False;
		 Bit#(32) result    = 0;
		 Bit#(8)  a_8	 = 0;
		 Bit#(8)  b_8 = 0;
		 Bit#(32) product = 0 ; 
		
		c_32     = c_in;
		s1_or_s2 = s1_or_s2_in;
    
        if(s1_or_s2 == 0) begin
                 a_16  = a_in;
                 b_16  = b_in;
				 product = bfloat16_multiply(a_16, b_16); 
				 result  = bfloat16_add_Float32(product, c_32);
        end 
        else begin
                 a_8   = a_in[7:0];
                 b_8   = b_in[7:0];
				 product = signExtend(multiply8(a_8, b_8));
				 result  = int32_add((product), c_32);

        end 
		return result;
endmethod : put  

        
endmodule : mkUnpipelined




(* synthesize *)
module mkTB_unpipelined(Empty);



	MAC_IFC mac_ifc <- mkUnpipelined();

	rule rl_testpipelined ; 
		Bit#(16) a = 16'b01100011;
        Bit#(16) b = 16'b00001101;
        Bit#(32) c = 32'b00000000000000000000000110001101;
		Bit#(16) d = 16'b0100000010000000;
        Bit#(1) s1_or_s2 = 1'b1;
		 Bit#(32) product_test = bfloat16_multiply(a,b);
		ActionValue#(Bit#(32)) result = mac_ifc.put( a,b, c, s1_or_s2);
		$display("result: %b", result);
		$finish(0); 
	endrule

endmodule
