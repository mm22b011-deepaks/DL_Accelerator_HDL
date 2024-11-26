    module float_multiplier ( 
        input [31:0] a, // First floating point number 
        input [31:0] b, // Second floating point number 
        output [31:0] product // Resulting floating point number 
    ); 
     
        // Extract sign, exponent, and mantissa 
        wire sign_a = a[31]; 
        wire sign_b = b[31]; 
        wire [7:0] exp_a = a[30:23]; 
        wire [7:0] exp_b = b[30:23]; 
        wire [23:0] mant_a = {1'b1, a[22:0]}; // Implicit leading 1 
        wire [23:0] mant_b = {1'b1, b[22:0]}; // Implicit leading 1 
     
        // Multiply mantissas 
        wire [47:0] mant_product = mant_a * mant_b; // 24 bits * 24 bits = 48 bits 
     
        // Add exponents (subtract bias of 127) 
        wire [8:0] exp_sum = {1'b0, exp_a} + {1'b0, exp_b} - 8'd127; 
     
        // Determine sign of product 
        wire sign_product = sign_a ^ sign_b; 
     
        // Normalize the result 
        wire [23:0] normalized_mant; 
        wire [7:0] normalized_exp; 
        wire is_normalized; 
     
        assign is_normalized = mant_product[47]; // Check if the product is normalized 
        assign normalized_mant = is_normalized ? mant_product[46:24] : mant_product[45:23]; 
        assign normalized_exp = is_normalized ? exp_sum : exp_sum - 1; 
     
        // Pack the result 
        assign product = {sign_product, normalized_exp[7:0], normalized_mant[22:0]}; 
     
    endmodule 