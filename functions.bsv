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


// Tested and working
function Bit#(8) add8(Bit#(8) a, Bit#(8) b);
    Bit#(8) sum=0, carry=0;

    sum[0] = a[0] ^ b[0];
    carry[0] = a[0] & b[0];

    for (Integer i = 1; i < 8; i = i+1) begin
        sum[i] = a[i] ^ b[i] ^ carry[i-1];

        carry[i] = (carry[i-1] & (a[i] | b[i])) | (a[i] & b[i]);
    end

    return (sum);
endfunction

// function Bit#(8) add8(Bit#(8) a, Bit#(8) b);
//     Bit#(8) sum = 0;
//     Bit#(8) carry = 0;

//     // Initialize carry for the first bit
//     carry[0] = 0;

//     for (Integer i = 0; i < 8; i = i + 1) begin
//         sum[i] = a[i] ^ b[i] ^ carry[i];

//         // Calculate carry for the next bit
//         if (i < 7) begin
//             carry[i + 1] = (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
//         end
//     end

//     // Check for overflow (when the sign bit changes)
//     if (carry[7] != carry[6]) begin
//         // Handle overflow if necessary (e.g., set a flag)
//     end

//     return sum;
// endfunction


function Bit#(16) int_add16(Bit#(16) a, Bit#(16) b);
    Bit#(16) sum=0, carry=0;

    sum[0] = a[0] ^ b[0];
    carry[0] = 0;

    for (Integer i = 1; i < 16; i = i+1) begin
        sum[i] = a[i] ^ b[i] ^ carry[i-1];

        carry[i] = (carry[i-1] & (a[i] | b[i])) | (a[i] & b[i]);
    end

    return (sum);
endfunction

function Bit#(14) int_add14(Bit#(14) a, Bit#(14) b);
    Bit#(14) sum=0, carry=0;

    sum[0] = a[0] ^ b[0];
    carry[0] = 0;

    for (Integer i = 1; i < 14; i = i+1) begin
        sum[i] = a[i] ^ b[i] ^ carry[i-1];

        carry[i] = (carry[i-1] & (a[i] | b[i])) | (a[i] & b[i]);
    end

    return (sum);
endfunction


// Tested and working
function Bit#(32) int32_add(Bit#(32) a, Bit#(32) b);
    Bit#(32) sum=0, carry=0;

    sum[0] = a[0] ^ b[0];
    carry[0] = 0;

    for (Integer i = 1; i < 32; i = i+1) begin
        sum[i] = a[i] ^ b[i] ^ carry[i-1];

        carry[i] = (carry[i-1] & (a[i] | b[i])) | (a[i] & b[i]);
    end

    return (sum);
endfunction

// Tested and working
function Bit#(16) multiply8(Bit#(8) a, Bit#(8) b);  //Integer multiplication
    Bit#(16) product = 0;
    Bit#(16) a_extended = (a[7] == 1) ? {8'd-1, a} : {8'd0, a};
    Bit#(16) b_extended = (b[7] == 1) ? {8'd-1, b} : {8'd0, b};

    for(Integer i = 0; i < 16; i = i + 1) begin
        if (b_extended[i] == 1) begin
            product = pack(int_add16(product, (a_extended << i)));  
        end
    end

    return product;
endfunction

function Bit#(16) multiply7(Bit#(7) a, Bit#(7) b);  // Integer multiplication
    Bit#(14) product = 0;
    Bit#(14) a_extended = (a[6] == 1) ? {7'd-1, a} : {7'd0, a};
    Bit#(14) b_extended = (b[6] == 1) ? {7'd-1, b} : {7'd0, b};

    for(Integer i = 0; i < 14; i = i + 1) begin
        if (b_extended[i] == 1) begin
            product = pack(int_add14(product, (a_extended << i)));  
        end
    end

    return signExtend(product);
endfunction





// function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);
//     Bit#(16) result;

//     Bit#(8)  mantissa_a       = {1'b1, a[6:0]}; //{1'b1, a.mantissa};
//     Bit#(8)  mantissa_b       = {1'b1, b[6:0]}; //{1'b1, b.mantissa};
//     Bit#(16) mantissa_product = pack(multiply8(mantissa_a, mantissa_b));

//     Bit#(8)  exponent_sum     = pack(add8(add8(a[14:7], b[14:7]), -127));
    
//     // Normalisation of the product
//     if (mantissa_product[15] == 1) begin
//         mantissa_product  = mantissa_product >> 1;
//         exponent_sum = pack(add8(exponent_sum, 1));
//     end

//    // Rounding
//     Bit#(1)  rounding_bit = mantissa_product[7];
    
//     if (rounding_bit == 1) begin
//      mantissa_product = pack(int_add16(mantissa_product, 1));
//     end

//     result[6:0]     = mantissa_product[14:8];
//     result[14:7]    = exponent_sum;
//     result[15]      = a[15] ^ b[15];

//     return result;
// endfunction

// function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);
// 	Int#(8) expA, expB;
// 	Bit#(8) expP;
// 	bit signA, signB, signP;
// 	Int#(8) manA, manB;
// 	Int#(16) manP;

// 	signA = a[15];
// 	manA  = unpack(signExtend(a[6:0]));
// 	expA  = unpack(a[14:7]);

// 	signB = b[15];
// 	manB  = unpack(signExtend(b[6:0]));
// 	expB  = unpack(b[14:7]);

// 	signP = signA ^ signB;

// 	expP =unpack(add8(add8(pack(expA), pack(expB)), -8'd127));

// 	manP = unpack(multiply8(signExtend(a[6:0]), signExtend(b[6:0])));

// 	if (pack(manP)[15] == 1) begin
// 		manP = manP >> 1;
// 		expP = (add8(expP, 1));
// 	end

// 	return {signP, (expP), pack(manP)[15:9]};
// endfunction


typedef struct{
        Bit#(32) carry;
        Bit#(32) sum;
    } CSAresult deriving(Bits, Eq);

typedef struct{
        Bit#(1)  overflow;
        Bit#(32) sum;
    } AdderResult deriving(Bits, Eq);
function CSAresult carry_save_adder (
        Bit#(32) a,
        Bit#(32) b,
        Bit#(32) cin
    );
        Bit#(32) sum;
        Bit#(32) cout;
        CSAresult result;

        sum = a ^ b ^ cin;
        cout = (a & b) | (b & cin) | (cin & a);
        cout = cout << 1;

        result.sum = sum;
        result.carry = cout;

    return result;
    endfunction : carry_save_adder


	function AdderResult ripple_carry_addition (
        Bit#(32) a,
        Bit#(32) b,
        Bit#(1)  cin
    );
        Bit#(32) sum;
        Bit#(33) carry = '0;

        carry[0] = cin;

        for (Integer i = 0; i < 32; i = i + 1) begin
            sum  [i]   = (a[i] ^ b[i] ^ carry[i]);
            carry[i+1] = (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
        end

        AdderResult out;
        out.sum      = sum;
        out.overflow = carry[32];

        return out;

    endfunction : ripple_carry_addition


function Bit#(16) bfloat16_multiply (
        Bit#(16)  a,
        Bit#(16)  b
    );
        Bit#(1) sign_a = a[15];
        Bit#(8) exp_a = a[14:7];
        Bit#(8) mant_a = {1'b1, a[6:0]};
            
        Bit#(1) sign_b = b[15];
    	Bit#(8) exp_b = b[14:7];
        Bit#(8) mant_b = {1'b1, b[6:0]};
            
        Bit#(32) product = 0;
        Bit#(32) carry = 0;
        Bit#(1) prod_sign = sign_a ^ sign_b;
        for(Integer i = 0; i < 8; i = i + 1) begin
            if(mant_b[i] == 1'b1) begin
                Bit#(32) partial_product = {24'b0, mant_a} << i;
                CSAresult csa_result;

                csa_result = carry_save_adder(partial_product, carry, product);

                product = csa_result.sum;
                carry = csa_result.carry;
            end
        end

        AdderResult fin = ripple_carry_addition(product, carry, 1'b0);
        product = fin.sum;
            
	    Bit#(32) fraction = 32'b0;  
	    Bit#(23) prod_mant = 23'b0;
	    Bit#(1) round_carry = 1'b0;
        if(product[15] == 1) begin 
      		fraction = zeroExtend(product[14:8]);
      			if (product[7] == 1 && product[8:0] != 9'b010000000) begin
	        		AdderResult ripple1 = ripple_carry_addition(fraction, 32'b1, 1'b0);
	         		fraction = ripple1.sum;
	      		end
	    end
	  
	    else if(product[15] == 0) begin
	      fraction = zeroExtend(product[14:7]); 	
	      if (product[6] == 1 && product[7:0] != 8'b01000000) begin
	      	AdderResult ripple2 = ripple_carry_addition(fraction, 32'b1, 1'b0);
	        fraction = ripple2.sum;
	        if(fraction[8] == 1) begin
		   		AdderResult ripple3 = ripple_carry_addition((fraction>>1), {31'b0, fraction[0]}, 1'b0);
		   		fraction = ripple3.sum;
		   		round_carry = 1'b1;
	        end
	      end
	    end
	    prod_mant = {fraction[6:0], 16'b0};
	  
	  	Bit#(8) prod_exp = 8'b0;
	  	Bit#(32) bias = 32'b0;
	  
	  	if((product[15] == 1)||(round_carry == 1)) bias = 126;
	  	else if(product[15] == 0) bias = 127;
	  
	  	AdderResult ripple4 = ripple_carry_addition({24'b0, exp_a}, {24'b0, exp_b}, 1'b0);
	  	Bit#(32) intermediate = ripple4.sum;
	  	AdderResult ripple5 = ripple_carry_addition(intermediate, ~bias, 1'b1);
	  	prod_exp = ripple5.sum[7:0];
	  	Bit#(32) result = {prod_sign,prod_exp,prod_mant};
	  	return result[31:16]; 
            
    endfunction 
    // function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);
//     // Unpack input bfloat16 components
//     Bit#(1) sign_a = a[15];
//     Bit#(8) exp_a = a[14:7];
//     Bit#(7) frac_a = a[6:0];
    
//     Bit#(1) sign_b = b[15];
//     Bit#(8) exp_b = b[14:7];
//     Bit#(7) frac_b = b[6:0];
    
   
    
//     // Sign Calculation
//     Bit#(1) sign_c = sign_a ^ sign_b;
    
//     // Exponent Calculation with Bias Adjustment
//     Bit#(8) exp_c = add_exponents(exp_a, exp_b);
    
//     // Fraction (Mantissa) Multiplication using RCA
//     Bit#(16) temp_A = zeroExtend({1'b1, frac_a});
//     Bit#(16) temp_B = zeroExtend({1'b1, frac_b});
//     Bit#(16) temp_prod = 0;
    
//     for (Integer i = 0; i < 8; i = i + 1) begin
//         if (temp_B[0] == 1) begin
//             temp_prod = rca(temp_prod, temp_A);
//         end
//         temp_A = temp_A << 1;
//         temp_B = temp_B >> 1;
//     end

//     // Rounding
//     Bit#(15) man_c_and_final_exp = round(temp_prod, exp_c);
    
//     // Assemble final result
//     return {sign_c, man_c_and_final_exp[14:7], man_c_and_final_exp[6:0]};
//  //   if ((exp_a == 8'b0 && frac_a == 7'b0) || (exp_b == 8'b0 && frac_b == 7'b0)) begin
//  //         return 16'b0;
//  //   end
// endfunction

// function Bit#(16) bfloat16_multiply(Bit#(16) a, Bit#(16) b);
//     Int#(8) expA, expB;
//     Bit#(8) expP;
//     bit signA, signB, signP;
//     Int#(8) manA, manB;
//     Int#(16) manP;

//     // Extract sign, exponent, and mantissa from inputs
//     signA = a[15];
//     manA  = unpack(signExtend(a[6:0]));
//     expA  = unpack(a[14:7]);

//     signB = b[15];
//     manB  = unpack(signExtend(b[6:0]));
//     expB  = unpack(b[14:7]);

//     // Compute sign of the product
//     signP = signA ^ signB;

//     // Calculate the exponent product
//     expP = add8(expA, expB) - 8'd127; // Adjust for bias

//     // Compute mantissa product
//     manP = unpack(multiply8(signExtend(a[6:0]), signExtend(b[6:0])));

//     // Check for normalization
//     if (pack(manP)[15] == 1) begin
//         manP = manP >> 1; // Right shift if overflow
//         expP = expP + 8'd1; // Adjust exponent
//     end else if (pack(manP)[14] == 0) begin
//         // Normalize mantissa if necessary (find leading 1)
//         // (This part is simplified, actual normalization may require a loop)
//         while (manP[15] == 0 && expP > 0) begin
//             manP = manP << 1; // Left shift to normalize
//             expP = expP - 8'd1; // Decrease exponent
//         end
//     end

//     // Pack the result
//     return {signP, pack(expP + 8'd127), pack(manP)[15:9]}; // Adjust back for bias
// endfunction


// // -----------------------------------------------------------------
function Bit#(23) int23_add(Bit#(23) a, Bit#(23) b);
    Bit#(23) sum=0, carry=0;

    sum[0] = a[0] ^ b[0];
    carry[0] = 0;

    for (Integer i = 1; i < 23; i = i+1) begin
        sum[i] = a[i] ^ b[i] ^ carry[i-1];

        carry[i] = (carry[i-1] & (a[i] | b[i])) | (a[i] & b[i]);
    end

    return (sum);
endfunction
// function Bit#(23) int23_add(Bit#(23) a, Bit#(23) b);
//     Bit#(23) sum   = 0;
//     Bit#(1)  carry = 0;

//     for (Integer i = 0; i < 23; i = i + 1) begin
//         Bit#(1) a_bit   = a[i];
//         Bit#(1) b_bit   = b[i];

//         Bit#(1) sum_bit = a_bit ^ b_bit ^ carry;
//         carry = (a_bit & b_bit) | (a_bit & carry) | (b_bit & carry);

//         sum[i] = sum_bit;
//     end

//     return sum;
// endfunction : int23_add


// -----------------------------------------------------------------
// function Bit#(32) bfloat16_add_Float32(Bit#(16) a_a, Bit#(32) b_a);  // Wrong, Float32*Float32
// 	Float32 result;
	
// 	Bfloat16 a = unpack(a_a);
// 	Float32  b = unpack(b_a);
	
// 	Bit#(8)  exponent_b = b.exponent;
// 	Bit#(23) mantissa_b = b.mantissa;

// 	Bit#(8)  exponent_a = a.exponent;
// 	Bit#(23) mantissa_a = {a.mantissa, 16'b0};     // sus

// 	Bit#(8) exponent_difference = exponent_a - exponent_b;

// 	if (exponent_difference > 0) begin
// 		mantissa_b      = mantissa_b >> exponent_difference;
// 		result.exponent = exponent_a;
// 	end

// 	else if (exponent_difference < 0) begin
// 		mantissa_b      = mantissa_a >> exponent_difference;
// 		result.exponent = exponent_b;
// 	end

// 	else begin
// 		result.exponent = exponent_a;
// 	end

// 	Bit#(23) sum_mantissa = int23_add(mantissa_a, mantissa_b); //mantissa_a + mantissa_b;  // Change this for sure
	
// 	// Normalisation
// 	if (sum_mantissa == 1) begin
// 		result.exponent = result.exponent + 1;
// 		sum_mantissa    = sum_mantissa >> 1;
// 	end 

// 	// Rounding
// 	Bit#(1) rounding_bit = sum_mantissa[0];
	
// 	if (rounding_bit == 1) begin
// 		sum_mantissa = sum_mantissa + 1;
// 		if (sum_mantissa[22] == 1) begin
// 			result.exponent = result.exponent + 1;
// 			sum_mantissa    = sum_mantissa >> 1;
// 		end
// 	end

// 	result.mantissa = sum_mantissa[22:0];   // Sus
// 	result.sign   = (a.sign == b.sign) ? a.sign : (mantissa_a > mantissa_b ? a.sign : b.sign);
	
// 	return pack(result);
// endfunction : bfloat16_add_Float32

function Bit#(32) bfloat16_add_Float32(Bit#(32) a, Bit#(32) b);
	  Bit#(1) sign_a = a[31];
	  Bit#(32) exp_a = zeroExtend(a[30:23]);
	  
	  Bit#(32) mant_a = zeroExtend(a[22:0]);
	  mant_a[23]=1;

	  Bit#(1) sign_b = b[31];
	  Bit#(32) exp_b = zeroExtend(b[30:23]);
	  
	  Bit#(32) mant_b = zeroExtend(b[22:0]);
	  mant_b[23]=1;

	  Bit#(32) exp_diff = 32'b0;
	  Bit#(32) mant_a_adj = 32'b0;
	  Bit#(32) mant_b_adj = 32'b0;
	  Bit#(32) sum_exp = 32'b0;
	  Bit#(32) mant_sum = 32'b0;
	  Bit#(1) sum_sign = 1'b0;
	  Bit#(32) mant_mid = 32'b0;
	  Bit#(32) sum_mant = 32'b0;
	  Bit#(32) bitmask = 32'b1;
	  
	  
	  if (exp_a > exp_b) begin
	    AdderResult ripple9 = ripple_carry_addition(exp_a, ~exp_b, 1'b1);
	    exp_diff = ripple9.sum;
	    mant_a_adj = mant_a;
	    AdderResult ripple10 = ripple_carry_addition(exp_diff, ~bitmask, 1'b1);
	    Bit#(32) exp_diff_sub = ripple10.sum;
	    AdderResult ripple11 = ripple_carry_addition(bitmask << exp_diff_sub, ~bitmask, 1'b1);
	    bitmask = ripple11.sum;
	    if(mant_b[exp_diff] == 0 && (bitmask & mant_b)==0) begin
	      mant_b_adj = mant_b >> exp_diff; 
	    end
	    else begin
	      AdderResult ripple12 = ripple_carry_addition(mant_b >> exp_diff, {31'b0,mant_b[exp_diff_sub]}, 1'b0);
	      mant_b_adj = ripple12.sum;
	    end
	    sum_exp = exp_a;
	  end 
	  else begin
	    AdderResult ripple13 = ripple_carry_addition(exp_b, ~exp_a, 1'b1);
	    exp_diff = ripple13.sum;
	    mant_b_adj = mant_b;
	    AdderResult ripple14 = ripple_carry_addition(exp_diff, ~bitmask, 1'b1);
	    Bit#(32) exp_diff_sub = ripple14.sum; 
	    AdderResult ripple15 = ripple_carry_addition(bitmask << exp_diff_sub, ~bitmask, 1'b1);
	    bitmask = ripple15.sum;  
	    if(mant_a[exp_diff] != 0 && (bitmask & mant_a)==0) begin
	      mant_a_adj = mant_a >> exp_diff; 
	    end
	    else begin
	      AdderResult ripple16 = ripple_carry_addition(mant_a >> exp_diff, {31'b0,mant_a[exp_diff_sub]}, 1'b0);
	      mant_a_adj = ripple16.sum;
	    end
	    sum_exp = exp_b;
	  end
	  AdderResult ripple17 = ripple_carry_addition(mant_a_adj, 32'b1, 1'b1);
	  Bit#(32) mant_a_adj_ = ripple17.sum;
	  AdderResult ripple18 = ripple_carry_addition(mant_b_adj, 32'b1, 1'b1);
	  Bit#(32) mant_b_adj_ = ripple18.sum;
	  if (sign_a == sign_b) begin
	    AdderResult ripple19 = ripple_carry_addition(mant_a_adj, mant_b_adj, 1'b0);
	    mant_sum = ripple19.sum;
	    sum_sign = sign_a;
	  end 
	  else begin
	    if (mant_a_adj >= mant_b_adj) begin
	      AdderResult ripple20 = ripple_carry_addition(mant_a_adj, ~mant_b_adj, 1'b1);
	      mant_sum = ripple20.sum;
	      sum_sign = sign_a;
	    end
	    else begin
	      AdderResult ripple21 = ripple_carry_addition(mant_b_adj, ~mant_a_adj, 1'b1);
	      mant_sum = ripple21.sum;
	      sum_sign = sign_b;
	    end
	  end

	  
	  if (mant_sum[24]==1) begin  
	    mant_mid = zeroExtend(mant_sum[23:1]);
	    if(mant_sum[1] != 0) begin
	      AdderResult ripple22 = ripple_carry_addition(mant_mid, {31'b0,mant_sum[0]}, 1'b0);
	      sum_mant = ripple22.sum;
	    end
	    else begin
	      sum_mant = mant_mid;
	    end
	    AdderResult ripple23 = ripple_carry_addition(sum_exp, 32'b1, 1'b0);
	    sum_exp = ripple23.sum;
	    if (sum_mant[23] ==1) begin 
	        AdderResult ripple24 = ripple_carry_addition(sum_exp, 32'b1, 1'b0);
	        sum_exp = ripple24.sum;
	    end
	  end 
	  else begin
	    sum_mant = zeroExtend(mant_sum[22:0]);
	  end

	  
	  return {sum_sign, sum_exp[7:0], sum_mant[22:0]};
	endfunction
// // -----------------------------------------------------------------


// function Bit#(32) bfloat16_add_Float32(Bit#(16) bfloat16_num, Bit#(32) float32_num);
//     // Extract components from bfloat16
//     bit sign_bfloat16 = bfloat16_num[15];
//     Bit#(8) exponent_bfloat16 = bfloat16_num[14:7];
//     Bit#(7) mantissa_bfloat16 = bfloat16_num[6:0];

//     // Convert bfloat16 to float32 by appending 23 zeros to the mantissa
//     Bit#(32) extended_bfloat16 = ({sign_bfloat16, exponent_bfloat16, mantissa_bfloat16, 23'b0});

//     // Extract components from float32
//     bit sign_float32 = float32_num[31];
//     Bit#(8) exponent_float32 = float32_num[30:23];
//     Bit#(23) mantissa_float32 = float32_num[22:0];

//     // Bias for float32 and bfloat16
//     Bit#(8) bias_float32 = 8'd127; // Bias for float32
//     Bit#(8) bias_bfloat16 = 8'd127; // Bias for bfloat16

//     // Normalize exponents
//     Bit#(8) exponent_diff;
//     if (exponent_bfloat16 == 0) begin
//         // If bfloat16 exponent is zero, treat it as a subnormal number
//         exponent_bfloat16 = 8'd1; // Adjust for subnormal
//     end
    
//     if (exponent_float32 == 0) begin
//         // If float32 exponent is zero, treat it as a subnormal number
//         exponent_float32 = 8'd1; // Adjust for subnormal
//     end

//     // Adjust exponents for bias
//     Bit#(8) exp_A = exponent_bfloat16 - bias_bfloat16; // Adjusted exponent for bfloat16
//     Bit#(8) exp_B = exponent_float32 - bias_float32;   // Adjusted exponent for float32

//     // Align mantissas
//     Bit#(23) mantissa_A = {mantissa_bfloat16, 16'b0}; // bfloat16 mantissa in float32 format
//     Bit#(23) mantissa_B = mantissa_float32; // float32 mantissa

//     // Adjust mantissa_A based on exponent difference
//     if (exp_A > exp_B) begin
//         mantissa_B = mantissa_B >> (exp_A - exp_B); // Right shift
//     end else if (exp_A < exp_B) begin
//         mantissa_A = mantissa_A >> (exp_B - exp_A); // Right shift
//     end

//     // Now add or subtract based on the sign
//     Bit#(23) mantissa_result;
//     bit result_sign;
//     if (((sign_bfloat16 == 1) && (sign_float32 == 1)) || ((sign_bfloat16 == 0) && (sign_float32 == 0)) ) begin
//         // Same sign, perform addition
//         mantissa_result = mantissa_A + mantissa_B;
//         result_sign = sign_bfloat16; // Keep the sign
// 	end else begin
//         // Different signs, perform subtraction
//         if (mantissa_A >= mantissa_B) begin
//             mantissa_result = mantissa_A - mantissa_B;
//             result_sign = sign_bfloat16; // Keep the sign of bfloat16
// 		end else begin
//             mantissa_result = mantissa_B - mantissa_A;
//             result_sign = sign_float32; // Result takes the sign of float32
//         end
// 	end
    

//     // Determine resulting exponent
//     Bit#(8) result_exponent;
//     if (mantissa_result == 0) begin
//         result_exponent = 0; // Result is zero
// 	end else begin
//         // Normalize the result
//         result_exponent = (exp_A > exp_B ? exp_A : exp_B) + bias_float32; // Bias it back
// 	end

//     // Pack the result into Bit#(32)
//     return ({result_sign, result_exponent, mantissa_result[22:0]});
// endfunction





interface IFC_main;
	method Action put(Bfloat16 x, Bfloat16 y);
	method ActionValue#(Bit#(16)) get_result;
endinterface : IFC_main

/*
(* synthesize *)
module mk_main(IFC_main);
	Reg#(Bfloat16) a 	   <- mkReg(unpack(0));
	Reg#(Bfloat16) b           <- mkReg(unpack(0));
	Reg#(Bfloat16) result_diff <- mkReg(unpack(0));
	Reg#(Bool) status  	   <- mkReg(False);
//	Bfloat16 a = 10.0;
	
	rule rl_callFunction(status);
		result_diff <= bfloat16_multiply(a,b);
		status 	    <= False;	
	endrule : rl_callFunction

	method Action put(Bfloat16 x, Bfloat16 y);
		status <= True;
		a      <= x;
		b      <= y;
	endmethod : put

	method ActionValue#(Bit#(16)) get_result if(status == True);
		status <= False;
		return pack(result_diff);
	endmethod : get_result
endmodule : mk_main

(* synthesize *)
(* descending_urgency = "stage, get_input1" *)
//(* descending_urgency = "get_input1, rl_callFunction" *)
//(* descending_urgency = "rl_callFunction, result" *)
module mkTb();
	Reg#(int)  status   <- mkReg(0);
	IFC_main   ifc_main <- mk_main;
	Reg#(Bool) hi	    <- mkReg(True);
	Bfloat16 bBfloat16;	

	bBfloat16.sign     = 1'b1;
	bBfloat16.exponent = 8'b1;
	bBfloat16.mantissa = 7'b1;
	
	rule stage if(hi == True);
		status <= status + 1;
	endrule : stage

	rule get_input1(status == 0);
		ifc_main.put(bBfloat16, bBfloat16);
	endrule : get_input1

//	rule get_input2(status == 1);
//		ifc_main.put(1.0, 1.0);
//	endrule : get_input2

//	rule get_input3(status == 2);
//		ifc_main.put(3.99, 2.9393);
//	endrule : get_input3

	rule result;
		let res <- ifc_main.get_result;
		$display($time, "Result = %f", res);
	endrule : result

	rule finish(status == 10);
		$finish(0);
		hi <= False;
	endrule : finish

endmodule: mkTb


function Bit#(n) int_add(Bit#(n) a, Bit#(n) b) provisos(Add(n,x,y));
	Bit#(n) sum   = 0;
	Bit#(n)  carry = 0;

	for (Integer i = 0; i < n; i = i + 1) begin
		bit a_bit   = a[i];
		bit b_bit   = b[i];
		bit sum_bit = a_bit ^ b_bit;

		if (i>0) begin
			sum_bit = sum_bit ^ carry[i-1];
		end

		carry[i] = (a_bit & b_bit) | (a_bit & carry[i-1]) | (b_bit & carry[i-1]);

		sum[i] = sum_bit;
	end

	return sum;
endfunction

(*synthesize*)
module mkTb_funcs(Empty);
	Reg#(int) status <- mkReg(0);

	rule test_add8 (status == 0);
		Bit#(8) a = 12, b = 8;
		$display("Test Add8: %d", add8(a, b));

		a = 255; b = 8;
		$display("Test Add8: %d", add8(a, b));

		a = 12; b = 8;
		$display("Test Add8: %d", add8(a, b));

		status <= 1;
	endrule

	rule test_mult8 (status == 1);
		Bit#(8) a = 12, b = 8;
		Bit#(16) c = multiply8(a, b);
		if (c==sdd) 
		$display("Test Mult8: %d", c);

		a = 255; b = 8;
		Bit#(16) c = multiply8(a, b);
		$display("Test Mult8: %d", c);

		a = 12; b = 8;
		Bit#(16) c = multiply8(a, b);
		$display("Test Mult8: %d", c);

		status <= 2;
	endrule

	rule test_bfloat16_mult (status == 2);
		Bit#(8) a = 12, b = 8;
		Bit#(16) c = multiply8(a, b);
		$display("Test Mult8: %d", c);

		a = 255; b = 8;
		Bit#(16) c = multiply8(a, b);
		$display("Test Mult8: %d", c);

		a = 12; b = 8;
		Bit#(16) c = multiply8(a, b);
		$display("Test Mult8: %d", c);

		status <= 2;
	endrule
endmodule
*/
// Issues:compile functions.bsv and check for errors import functions *, cocotb, interface within an interface, ask prof if pipelined and unpipelined should be compiled seperately, aslo how this S1_or_S2 error can be fixed. check if the functions in functions.bsv are correct please. check how to give pipelined or unpipelined seperately also which is pipelined, s1_ors2 = 1 or 0? Check if i can use unpack like this in function. pipeline method issue, in cocotb should i convert decimal to binary in python and then give input, can i enq and deq fifos in method? how to put if in rules for pipelined.
