//(* synthesize *)
// ------------------------------------------------------------------
typedef struct {
        Bit#(1) sign;
        Bit#(8) exponent;
        Bit#(7) mantissa;
} Bfloat16
deriving(Bits,Eq);
// ------------------------------------------------------------------

// -----------------------------------------------------------------
typedef struct {
	Bit#(1)  sign;
	Bit#(8)  exponent;
	Bit#(23) mantissa;
} Float32
deriving(Bits, Eq);
// -----------------------------------------------------------------

//(* synthesize *)
// ------------------------------------------------------------------
// ------------------------------------------------------------------

//(* synthesize *)
// ------------------------------------------------------------------
//function Bit#(14) multiply(Bit#(7) a, Bit#(7) b);
//        Bit#(14) product = 0;
//
//       for (Bit#(3) i = 0; i < 8; i = i+ 1) begin
//                if (b[i]) begin
//                        product = product + (a << i);
//                end
//        end
//
//        return product;
//endfunction : multiply
// ------------------------------------------------------------------

// ------------------------------------------------------------------
function Bit#(16) multiply8(Bit#(8) a,Bit#(8) b);
	Bit#(16) product = 0;
	Bit#(16) a_extended = zeroExtend(a); // Then use a_extended << i.
	for(Integer i = 0; i < 8; i = i + 1) begin
		if (b[i] == 1) begin
			product = product + (a_extended << i);   // Ask prof for this part
		end
	end

	return product;
endfunction : multiply8
// ------------------------------------------------------------------

/*
function Bit#(16) multiply8(Bit#(8) a, Bit#(8) b);
	//Bit#(16) result;

	return (zeroExtend(a)*zeroExtend(b));
endfunction
*/
function Bit#(7) multiply7(Bit#(7) a,Bit#(7) b);
	Bit#(8) product = 0;
	Bit#(8) a_extended = zeroExtend(a); // Then use a_extended << i.
	for(Integer i = 0; i < 7; i = i + 1) begin
		if (b[i] == 1) begin
			product = product + (a_extended << i);   // Ask prof for this part
		end
	end

	return product[6:0];
endfunction : multiply7

// ------------------------------------------------------------------
//function Bfloat16 Bfloat16_add (Bfloat16 a, Bfloat16 b);  // Check and see for both Bfloat16_add and Bfloat16_multiply satisfies "edge" cases
//        Bfloat16 result;
//
//        Bit#(8) exponent_difference = a.exponent - b.exponent // Ask prof if I can use "-" operator
//
//        Bit#(7) mantissa_a = a.mantissa;
//        Bit#(7) mantissa_b = b.mantissa;
//
//        if(exponent_difference > 0) begin
//                mantissa_b = mantissa_b >> exponent_difference;
//        end
//        else if (exponent_difference < 0) begin
//                mantissa_a = mantissa_a >> -exponent_difference;
//        end
//
//        Bit#(8) sum_mantissa = add8(mantissa_a, mantissa_b);
//
//        // Check for carry cases
//
//        result.sign     = a.sign;
//        result.exponent = ;
//        result.mantissa = ;
// ------------------------------------------------------------------
/*
/// -----------------------------------------------------------------
function Float32 unpackFloat32(Bit#(32) value);
	Float32 result;
  	result.sign = value[31];
  	result.exp = value[30:23];
   	result.significand = value[22:0];
   	return result;
endfunction

function Bit#(32) packFloat32(Float32 components);
   	return {components.sign, components.exp, components.significand};
endfunction

// Function to multiply two float32 values and return the result as float32
function Bit#(32) fn_fpu_multiply(Bit#(32) a, Bit#(32) b);
  	 // Unpack both inputs into sign, exponent, and significand
  	 Float32 opA = unpackFloat32(a);
 	 Float32 opB = unpackFloat32(b);

   	// Handle special cases: zero or infinity inputs
   	if (opA.exp == 8'hFF || opB.exp == 8'hFF) begin
      		// Return NaN if one input is NaN
      		if ((opA.exp == 8'hFF && opA.significand != 0) || (opB.exp == 8'hFF && opB.significand != 0)) begin
        		 return 32'h7FC00000; // Canonical NaN for float32
      		end
      // Return infinity if one input is infinity and the other is non-zero
      		if ((opA.exp == 8'hFF && opA.significand == 0) || (opB.exp == 8'hFF && opB.significand == 0)) begin
        		 return packFloat32(Float32{opA.sign ^ opB.sign, 8'hFF, 0});
      		end
   	end

   	// Compute sign of the result
  	Bit#(1) result_sign = opA.sign ^ opB.sign;

   	// Adjust significands to include implicit leading 1
   	Bit#(24) sigA = {1'b1, opA.significand};
   	Bit#(24) sigB = {1'b1, opB.significand};

   	// Multiply significands
   	Bit#(48) sigProduct = sigA * sigB;

   	// Compute the exponent sum, adjusting for the bias (127 for float32)
   	Int#(10) expSum = opA.exp + opB.exp - 8'd127;

   	// Normalize the product (shift and adjust exponent if necessary)
   	Bit#(23) result_significand;
   	Bit#(8) result_exp;

   	if (sigProduct[47]) begin
      		// If the most significant bit is set, shift right
      		result_significand = sigProduct[46:24];
      		result_exp = expSum + 1;
   	end
   	else begin
      		// Otherwise, no shift needed
      		result_significand = sigProduct[45:23];
      		result_exp = expSum;
   	end

   // Handle underflow/overflow by clamping exponent
   	if (result_exp >= 8'hFF) begin
      		// Overflow to infinity
      		return packFloat32(Float32{result_sign, 8'hFF, 0});
   	end
   	else if (result_exp <= 0) begin
      		// Underflow to zero
      		return packFloat32(Float32{result_sign, 8'h00, 0});
   	end

  	 // Pack the result and return it
   		return packFloat32(Float32{result_sign, result_exp[7:0], result_significand});
endfunction

/// -----------------------------------------------------------------
*/
// ------------------------------------------------------------------
// function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);  
// 	Bit#(16) result;

// 	Bit#(8)  mantissa_a       = a[6:0]//zeroExtend(a[6:0]); //{1'b1, a[6:0]}; //{1'b1, a.mantissa};
// 	Bit#(8)  mantissa_b       = b[6:0];//zeroExtend(b[6:0]);//{ 'b1, b[6:0]}; //{1'b1, b.mantissa};
// 	Bit#(16) mantissa_product = multiply8(mantissa_a, mantissa_b);

// 	Bit#(8)  exponent_sum     = add8(a[14:7], b[14:7])[7:0] - 127;  // Sus max  // Not sus max its good
	
// 	// Normalisation of the product
// 	if (mantissa_product[15] == 1) begin
// 		mantissa_product  = mantissa_product >> 1;
// 		exponent_sum = add8(exponent_sum, 1)[7:0]; //exponent_sum + 1;
// 	end

// 	// Rounding
// 	// Bit#(1)  rounding_bit = mantissa_product[7];
	
// 	//if (rounding_bit == 1) begin
// 	//	mantissa_product = mantissa_product + 0;
// 	//end

// 	result[6:0] = mantissa_product[15:9];
// 	result[14:7] = exponent_sum;
// 	result[15]     = a[15] ^ b[15];


// 	return result;
// endfunction : bfloat16_multiply
// -----------------------------------------------------------------

function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);  
    Bit#(16) result;

    // Extracting the mantissas and normalizing them
    Bit#(8)  mantissa_a = zeroExtend(a[6:0]); // Implicit leading 1 for normalized values
    Bit#(8)  mantissa_b = zeroExtend(b[6:0]); // Same as above

    // Multiply the mantissas
    Bit#(16) mantissa_product = multiply8(mantissa_a, mantissa_b);

    // Calculate the exponent sum
    Bit#(8)  exponent_sum = (add8(a[14:7], b[14:7]) - 127)[7:0];  // This works, dont question, 

    // Normalization of the product
    if (mantissa_product[15] == 1) begin
        // Shift right and increase the exponent
        mantissa_product = mantissa_product >> 1;
        exponent_sum = exponent_sum + 1; // increment exponent
    end

    // Handle overflow in mantissa_product
    if (mantissa_product[15] == 0) begin
        // If mantissa_product is less than 1, we need to shift left and decrease exponent
        while (mantissa_product[14] == 0 && exponent_sum > 0) begin
            mantissa_product = mantissa_product << 1;
            exponent_sum = exponent_sum - 1; // decrement exponent
        end
    end

    // Rounding (if needed, implement rounding logic here)
    // Bit#(1) rounding_bit = mantissa_product[7];
    // if (rounding_bit == 1) begin
    //     mantissa_product = mantissa_product + 1;
    // end

    // Prepare the result
    result[6:0] = mantissa_product[14:8]; // Take the upper 7 bits of the mantissa
    result[14:7] = exponent_sum[7:0]; // 8-bit exponent
    result[15]     = a[15] ^ b[15]; // Sign bit

    return result;
endfunction : bfloat16_multiply

/*function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);
	// Extract sign, exponent, and mantissa
	bit sign_a = a[15];
	bit sign_b = b[15];
	Bit#(8) exp_a = a[14:7];
	Bit#(8) exp_b = b[14:7];
	Bit#(8) mant_a = {1'b1, a[6:0]}; // implicit leading 1
	Bit#(8) mant_b = {1'b1, b[6:0]}; // implicit leading 1
	
	// Compute sign
	bit sign_product = sign_a ^ sign_b;
	
	// Compute exponent
	Bit#(16) exp_product = (add8(exp_a, exp_b) - 127); // Subtract bias
	
	// Compute mantissa (multiply)
	Bit#(16) mant_product = multiply8(mant_a, mant_b);

	// Normalize the result
	Bit#(8) mant_final = mant_product[15:8]; // Keep the top 8 bits for bfloat16
	Bit#(8) exp_final = exp_product[7:0];

	// Assemble final product
	Bit#(16) result = {sign_product, exp_final, mant_final[6:0]};
	return result;
endfunction : bfloat16_multiply
*/
function Bit#(23) int23_add(Bit#(23) a, Bit#(23) b);
    Bit#(23) sum   = 0;
    Bit#(1)  carry = 0;

    for (Integer i = 0; i < 23; i = i + 1) begin
        Bit#(1) a_bit   = a[i];
        Bit#(1) b_bit   = b[i];

        Bit#(1) sum_bit = a_bit ^ b_bit ^ carry;
        carry = (a_bit & b_bit) | (a_bit & carry) | (b_bit & carry);

        sum[i] = sum_bit;
    end

    return sum;
endfunction : int23_add


// -----------------------------------------------------------------
function Bit#(32) bfloat16_add_Float32(Bit#(16) a_a, Bit#(32) b_a);  // Wrong, Float32*Float32
	Float32 result;
	
	Bfloat16 a = unpack(a_a);
	Float32  b = unpack(b_a);
	
	Bit#(8)  exponent_b = b.exponent;
	Bit#(23) mantissa_b = b.mantissa;

	Bit#(8)  exponent_a = a.exponent;
	Bit#(23) mantissa_a = {a.mantissa, 16'b0};     // sus

	Bit#(8) exponent_difference = exponent_a - exponent_b;

	if (exponent_difference > 0) begin
		mantissa_b = mantissa_b >> exponent_difference; // Shift b if a is larger
		result.exponent = exponent_a;
	end
	else if (exponent_difference < 0) begin
		mantissa_a = mantissa_a >> -exponent_difference; // Shift a if b is larger
		result.exponent = exponent_b;
	end


	else begin
		result.exponent = exponent_a;
	end

	Bit#(23) sum_mantissa = int23_add(mantissa_a, mantissa_b); //mantissa_a + mantissa_b;  // Change this for sure
	
	// Normalisation
	if (sum_mantissa[22] == 1) begin // Check if MSB is set
		result.exponent = (add8(result.exponent,1))[7:0]; // Increment exponent
		sum_mantissa = sum_mantissa >> 1; // Shift right
	end


	// Rounding
	Bit#(1) rounding_bit = sum_mantissa[0];

	if (rounding_bit == 1) begin
		sum_mantissa = sum_mantissa + 1;
		if (sum_mantissa[23] == 1) begin
			result.exponent = result.exponent + 1; // Adjust exponent if overflow
			sum_mantissa = sum_mantissa >> 1; // Shift right
		end
	end

	result.mantissa = sum_mantissa[22:0];   // Sus
	result.sign   = (a.sign == b.sign) ? a.sign : (mantissa_a > mantissa_b ? a.sign : b.sign);
	
	return pack(result);
endfunction : bfloat16_add_Float32 

// -----------------------------------------------------------------
/*
function Bit#(32) bfloat16_add_Float32(Bit#(16) a_a, Bit#(32) b_a);  // Wrong, Float32*Float32
	Float32 result;
	
	Bfloat16 a = unpack(a_a);
	Float32  b = unpack(b_a);
	
	Bit#(8)  exponent_b = b.exponent;
	Bit#(23) mantissa_b = b.mantissa;

	Bit#(8)  exponent_a = a.exponent;
	Bit#(23) mantissa_a = {a.mantissa, 16'b0};     // sus

	Bit#(8) exponent_difference = exponent_a - exponent_b;

	if (exponent_difference > 0) begin
		mantissa_b = mantissa_b >> exponent_difference; // Shift b if a is larger
		result.exponent = exponent_a;
	end
	else if (exponent_difference < 0) begin
		mantissa_a = mantissa_a >> -exponent_difference; // Shift a if b is larger
		result.exponent = exponent_b;
	end


	else begin
		result.exponent = exponent_a;
	end

	Bit#(23) sum_mantissa = mantissa_a + mantissa_b; //mantissa_a + mantissa_b;  // Change this for sure
	
	// Normalisation
	if (sum_mantissa[22] == 1) begin // Check if MSB is set
		result.exponent = result.exponent + 1; // Increment exponent
		sum_mantissa = sum_mantissa >> 1; // Shift right
	end


	// Rounding
	Bit#(1) rounding_bit = sum_mantissa[0];

	if (rounding_bit == 1) begin
		sum_mantissa = sum_mantissa + 1;
		if (sum_mantissa[23] == 1) begin
			result.exponent = result.exponent + 1; // Adjust exponent if overflow
			sum_mantissa = sum_mantissa >> 1; // Shift right
		end
	end

	result.mantissa = sum_mantissa[22:0];   // Sus
	result.sign   = (a.sign == b.sign) ? a.sign : (mantissa_a > mantissa_b ? a.sign : b.sign);
	
	return pack(result);
endfunction : bfloat16_add_Float32
*/
// -----------------------------------------------------------------
function Bit#(16) int8_multiply(Bit#(8) a, Bit#(8) b);
	Bit#(16) product = 0;
	Bit#(16) a_extended = zeroExtend(a); //Then use a_extended << i.
	for (Integer i = 0; i < 8; i = i +1) begin
		if (b[i] == 1) begin
			product = product + (extend(a_extended) << i);
		end
	end

	return product;
endfunction : int8_multiply
// -----------------------------------------------------------------

// -----------------------------------------------------------------
function Bit#(32) int32_add(Bit#(16) a_a, Bit#(32) b);
	Bit#(32) sum   = 0;
	Bit#(33)  carry = 0;
	
	Bit#(32) a = zeroExtend(a_a);

	for (Integer i = 0; i < 32; i = i + 1) begin
		Bit#(1) a_bit   = a[i];
		Bit#(1) b_bit   = b[i];

		Bit#(1) sum_bit = a_bit ^ b_bit ^ carry[i];
		carry[i+1] = (a_bit & b_bit) | (a_bit & carry[i]) | (b_bit & carry[i]);

		sum[i] = sum_bit;
	end

	return sum;

endfunction : int32_add 
// -----------------------------------------------------------------

function Bit#(16) add8(Bit#(8) a_a, Bit#(8) b); 
        Bit#(16) sum   = 0;
        Bit#(17)  carry = 0;
    
        Bit#(16) a = zeroExtend(a_a);

        for (Integer i = 0; i < 8; i = i + 1) begin
                Bit#(1) a_bit   = a[i];
                Bit#(1) b_bit   = b[i];

                Bit#(1) sum_bit = a_bit ^ b_bit ^ carry[i];
                carry[i+1] = (a_bit & b_bit) | (a_bit & carry[i]) | (b_bit & carry[i]);

                sum[i] = sum_bit;
        end 

        return sum;
endfunction //  : int32_add 



// Notes: Compile time code, hardware coding 

// Note: bit instead of Bit, int for Int#(32), have 32 bit carry bit, Use Integer for loops, check for negative numbers in int32_    add, polymorphorsism, ifdef


interface IFC_main;
	method Action put(Bfloat16 x, Bfloat16 y);
	method ActionValue#(Bit#(16)) get_result;
endinterface : IFC_main

(*synthesize*)
module mkTb_funcs(Empty);
	Reg#(int) status <- mkReg(0);

	rule hi (status == 0);
		status <= 4;
	endrule
	// rule test_add8 (status == 0);
	// 	Bit#(8) a = 12, b = 8;
	// 	$display("Test Add8: %d", add8(a, b));

	// 	a = 255; b = 8;
	// 	$display("Test Add8: %d", add8(a, b));

	// 	a = 255; b = 255;
	// 	$display("Test Add8: %d", add8(a, b));

	// 	status <= 1;
	// endrule

	// rule test_mult8 (status == 1);
	// 	Bit#(8) a = 12, b = 8;
	// 	Bit#(16) c = multiply8(a, b);
	// 	$display("Test Mult8: %d", c);

	// 	a = 255; b = 8;
	// 	c = multiply8(a, b);
	// 	$display("Test Mult8: %d", c);

	// 	a = 255; b = 255;
	// 	c = multiply8(a, b);
	// 	$display("Test Mult8: %d", c);

	// 	status <= 2;
	// endrule

	// rule test_int23_add (status == 2);
	// 	Bit#(23) a = 12, b = 8;
	// 	Bit#(23) c = int23_add(a, b);
	// 	$display("Test int23_add: %d", c);

	// 	a = 255; b = 8;
	// 	c = int23_add(a, b);
	// 	$display("Test int23_add: %d", c);

	// 	a = 23'b1; b = 23'b1;
	// 	c = int23_add(a, b);
	// 	$display("Test int23_add: %d", c);

	// 	status <= 3;
	// endrule



	// rule test_int8_multiply (status == 3);
	// 	Bit#(8) a = 12, b = 8;
	// 	Bit#(16) c = int8_multiply(a, b);
	// 	$display("Test int8_multiply: %d", c);

	// 	a = 255; b = 8;
	// 	c = int8_multiply(a, b);
	// 	$display("Test int8_multiply: %d", c);

	// 	a = 23; b = 12;
	// 	c = int8_multiply(a, b);
	// 	$display("Test int8_multiply: %d", c);

	// 	status <= 4;
	// endrule

	rule test_bfloat16_multiply (status == 4);
		Bit#(16) a = 16'b0100000001001000;
		Bit#(16) b = 16'b0011111111001110;
		Bit#(16) c = bfloat16_multiply(a, b);
		$display("Test bfloat16_multiply: %b", c);

		a = 16'b0100111111010001; b = 16'b0101010011100101;
		c = bfloat16_multiply(a, b);
		$display("Test bfloat16_multiply: %b", c);

		a = 16'b0100001000111000; b = 16'b0101010011100101;
		c = bfloat16_multiply(a, b);
		$display("Test bfloat16_multiply: %b", c);

		status <= 5;
	endrule

	rule test_bfloat16_add_Float32 (status == 5);
		Bit#(16) a = 16'b0101011011001100;
		Bit#(32) b = 32'b01000001110010101100001010010000;
		Bit#(32) c = bfloat16_add_Float32(a, b);
		$display("5 Test bfloat16_add_Float32: %b", c);

		a = 16'b0110010101011101; b = 32'b01010100001111000110101010000000;
		c = bfloat16_add_Float32(a, b);
		$display("5 Test bfloat16_add_Float32: %b", c);

		a = 16'b0101011111010010; b = 32'b01001000000110111010010111100100;
		c = bfloat16_add_Float32(a, b);
		$display("5 Test bfloat16_add_Float32: %b", c);

		status <= 6;
	endrule
	
	rule rl_checklogic_1 (status == 6);
		Bit#(16) result;

		Bit#(16) a = 16'b0100001101111111;		// 3.14
		Bit#(16) b = 16'b0100001101111111;		// 1.61
        	Bit#(8)  mantissa_a       = {1'b0, a[6:0]}; //{1'b1, a.mantissa};
        	Bit#(8)  mantissa_b       = {1'b0, b[6:0]}; //{1'b1, b.mantissa};
        	Bit#(16) mantissa_product = multiply8(mantissa_a, mantissa_b);

        	Bit#(8)  exponent_sum     = add8(a[14:7], b[14:7])[7:0] - 127;  // Sus max  // Not sus max its good
		
		$display("6 Test hmmm, let's see exponent_sum before normalisation: %b", exponent_sum);		

        	// Normalisation of the product
        	if (mantissa_product[15] == 1) begin
                	mantissa_product  = mantissa_product >> 1;
                	exponent_sum = add8(exponent_sum, 1)[7:0]; //exponent_sum + 1;
        	end

		$display("6 Test hmmm, let's see exponent_sum after normalisation: %b", exponent_sum);		
		$display("6 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product[15:9]);		


        	// Rounding
        	// Bit#(1)  rounding_bit = mantissa_product[7];

        	//if (rounding_bit == 1) begin
        	//      mantissa_product = mantissa_product + 0;
        	//end

        	result[6:0] = mantissa_product[15:9];
        	result[14:7] = exponent_sum;
	        result[15]     = a[15] ^ b[15];
			$display("very imp Test hmmm, let's see result after rounding_bit: %b",result);
		status <= 7;


	endrule

		rule rl_checklogic2 (status == 7);
		Bit#(16) result;

		Bit#(16) a = 16'b0100001000111000;		// 1.91
		Bit#(16) b = 16'b0100101100010001;		// 2.34
        	Bit#(8)  mantissa_a       = {1'b1, a[6:0]}; //{1'b1, a.mantissa};
        	Bit#(8)  mantissa_b       = {1'b1, b[6:0]}; //{1'b1, b.mantissa};
        	Bit#(16) mantissa_product = multiply8(mantissa_a, mantissa_b);

        	Bit#(8)  exponent_sum     = add8(a[14:7], b[14:7])[7:0] - 127;  // Sus max  // Not sus max its good
		
		$display("7 Test hmmm, let's see exponent_sum before normalisation: %b", exponent_sum);		

        	// Normalisation of the product
        	if (mantissa_product[15] == 1) begin
                	mantissa_product  = mantissa_product >> 1;
                	exponent_sum = add8(exponent_sum, 1)[7:0]; //exponent_sum + 1;
        	end

		$display("7 Test hmmm, let's see exponent_sum after normalisation: %b", exponent_sum);		
		$display("7 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product[15:9]);		


        	// Rounding
        	// Bit#(1)  rounding_bit = mantissa_product[7];

        	//if (rounding_bit == 1) begin
        	//      mantissa_product = mantissa_product + 0;
        	//end

        	result[6:0] = mantissa_product[15:9];
        	result[14:7] = exponent_sum;
	        result[15]     = a[15] ^ b[15];
			
	$display("3rd imp Test hmmm, let's see result after rounding_bit: %b",result);			
		status <= 8;


	endrule

		rule rl_checklogic3 (status == 8);
		Bit#(16) result;

		Bit#(16) a = 16'b0100111111010001;	// 124.345
		Bit#(16) b = 16'b0101010010001001;  // 324.234
        	Bit#(8)  mantissa_a       = {1'b1, a[6:0]}; //{1'b1, a.mantissa};
        	Bit#(8)  mantissa_b       = {1'b1, b[6:0]}; //{1'b1, b.mantissa};
        	Bit#(16) mantissa_product = multiply8(mantissa_a, mantissa_b);

        	Bit#(8)  exponent_sum     = add8(a[14:7], b[14:7])[7:0] - 127;  // Sus max  // Not sus max its good
		
		$display("8 Test hmmm, let's see exponent_sum before normalisation: %b", exponent_sum);		

        	// Normalisation of the product
        	if (mantissa_product[15] == 1) begin
                	mantissa_product  = mantissa_product >> 1;
                	exponent_sum = add8(exponent_sum, 1)[7:0]; //exponent_sum + 1;
        	end

		$display("8 Test hmmm, let's see exponent_sum after normalisation: %b", exponent_sum);		
		$display("8 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product[15:9]);		


        	// Rounding
        	// Bit#(1)  rounding_bit = mantissa_product[7];

        	//if (rounding_bit == 1) begin
        	//      mantissa_product = mantissa_product + 0;
        	//end

        	result[6:0] = mantissa_product[15:9];
        	result[14:7] = exponent_sum;
	        result[15]     = a[15] ^ b[15];
		$display("2nd imp Test hmmm, let's see result after rounding_bit: %b",result);			
		status <= 9;


	endrule

		rule rl_checklogic4 (status == 9);
		Bit#(16) result;

		Bit#(16) a = 16'b0100000100101100;	// 	-3.23
		Bit#(16) b = 16'b0101010011100101;	//	21.11
		Bit#(8)  mantissa_a       = {1'b1, a[6:0]}; //{1'b1, a.mantissa};
		Bit#(8)  mantissa_b       = {1'b1, b[6:0]}; //{1'b1, b.mantissa};
		Bit#(16) mantissa_product = multiply8(mantissa_a, mantissa_b);

		Bit#(8)  exponent_sum     = add8(a[14:7], b[14:7])[7:0] - 127;  // Sus max  // Not sus max its good
		
		$display("9 Test hmmm, let's see mantissa_product before normalisation: %b", mantissa_product);		

        	// Normalisation of the product
		if (mantissa_product[15] == 1) begin
				mantissa_product  = mantissa_product >> 1;
				exponent_sum = add8(exponent_sum, 1)[7:0]; //exponent_sum + 1;
		end

//		$display("9 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product);		
		$display("9 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product[15:9]);		


        	// Rounding
		Bit#(1)  rounding_bit = mantissa_product[7];

		if (rounding_bit == 1) begin
				mantissa_product = mantissa_product + 1;
		end

		$display("9 Test hmmm, let's see mantissa_product after rounding_bit: %b", mantissa_product[15:9]);		
		//$display("9 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product[15:9]);		
		result[6:0] = mantissa_product[15:9];
		result[14:7] = exponent_sum;
		result[15]     = a[15] ^ b[15];
			
		$display("9 Test hmmm, let's see result after rounding_bit: %b",result);		
		//$display("9 Test hmmm, let's see mantissa_product after normalisation: %b", mantissa_product[15:9]);		
		status <= 10;
	

	endrule
	
	rule test_mac (status == 10);
		Bit#(16) a = 16'b0101011010100110;
		Bit#(32) b = 32'b01000001110010101100001010010000;
		Bit#(32) c = bfloat16_add_Float32(a, b);
		//Bit#(32) c = {a, 16'b0} + b;
		$display("main: Test bfloat16_add_Float32: %b", c);

		a = 16'b0110010010110111; b = 32'b01010100001111000110101010000000;
		c = bfloat16_add_Float32(a, b);
		$display("2nd main Test bfloat16_add_Float32: %b", c);

		a = 16'b0100110110110100; b = 32'b01001000000110111010010111100100;
		c = bfloat16_add_Float32(a, b);
		$display("3rd main Test bfloat16_add_Float32: %b", c);

		//  Bit#(8)  exponent_sum = (add8(a[14:7], b[14:7]) - 127)[7:0]; 
		//  $display("5 Test exponnelkjasdf: %b", exponent_sum);
	    //  exponent_sum = a[14:7]+ b[14:7] - 127; 
		//  $display("5 Test asdf: %b", exponent_sum);
/*
11111111111111111111111000001001
00000000000000000000000110001101
00000000000000000000001100000001
00000000000000000000010100111101
00000000000000000000000111111001
*/
		Bit#(8) a_ = 8'b00100100, b_ = 8'b10000001;
		Bit#(16) product_int = int8_multiply(a_,b_);
		$display("int 1 product: %b", product_int);
		Bit#(32) c_ = 32'b11111111111111111111111000001001;
		Bit#(32) result_int =  int32_add(product_int, c_);
		$display("int 1 output: %b", result_int);

		a_ = 8'b01100011;
		b_ = 8'b00001101;
		product_int = int8_multiply(a_,b_);
		$display("int 2 product: %b", product_int);
		c_ = 32'b00000000000000000000000110001101;
		result_int =  int32_add(product_int, c_);
		$display("int 2 output: %b", result_int);

		a_ = 8'b01100101;
		b_ = 8'b00010010;
		product_int = int8_multiply(a_,b_);
		$display("int 3 product: %b", product_int);
		c_ = 32'b00000000000000000000001100000001;
		result_int =  int32_add(product_int, c_);
		$display("int 3 output: %b", result_int);

		a_ = 8'b00001101;  //13
		b_ = 8'b10001100;  //140
		product_int = int8_multiply(a_,b_);  //1820
		$display("int 4 product: %b", product_int);
		c_ = 32'b00000000000000000000010100111101;  //1341
		result_int =  int32_add(product_int, c_);

		$display("int 4 output: %b", result_int); //3161

		$display("product of 4th value is %b", (32'b00000000000000000000101100111011 - 32'b00000000000000000000010100111101)[15:0]);  //1534

		status <= 11;
	endrule

	rule rl_finish (status == 11);
		$finish(0);
	endrule

	
endmodule

// Issues:compile functions.bsv and check for errors import functions *, cocotb, interface within an interface, ask prof if pipelined and unpipelined should be compiled seperately, aslo how this S1_or_S2 error can be fixed. check if the functions in functions.bsv are correct please. check how to give pipelined or unpipelined seperately also which is pipelined, s1_ors2 = 1 or 0? Check if i can use unpack like this in function. pipeline method issue, in cocotb should i convert decimal to binary in python and then give input, can i enq and deq fifos in method? how to put if in rules for pipelined.
/*
11111111111111111110110000101101
00000000000000000000011010010100
00000000000000000000101000011011
00000000000000000000101100111011
*/

//100000000000000000010010001110100