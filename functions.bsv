typedef struct {
        Bit#(1) sign;
        Bit#(8) exponent;
        Bit#(7) mantissa;
} Bfloat16
deriving(Bits,Eq);

typedef struct {
	Bit#(1)  sign;
	Bit#(8)  exponent;
	Bit#(23) mantissa;
} Float32
deriving(Bits, Eq);



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

function Bit#(32) ripple_carry_adder(Bit#(32) x, Bit#(32) y, Bit#(1) carry, Integer num_bits);
    Bit#(32) sum = 0;
    for (Integer i = 0; i < num_bits; i = i + 1) begin
        sum[i] = x[i] ^ y[i] ^ carry;     
        carry = (x[i] & y[i]) | (x[i] & carry) | (y[i] & carry); 
    end
    return sum;
endfunction

function Bit#(32) bfloat16_multiply(Bit#(16) a, Bit#(16) b);
    Bit#(1) result_sign = a[15] ^ b[15];
    Bit#(8) exp_a = a[14:7];
    Bit#(8) exp_b = b[14:7];   
    Bit#(8) mant_a = {1'b1, a[6:0]}; 
    Bit#(8) mant_b = {1'b1, b[6:0]}; 

    Bit#(32) mant_mult = 0;
    for (Integer i = 0; i < 8; i = i + 1) begin
        if (mant_b[i] == 1) begin
            mant_mult = ripple_carry_adder(mant_mult, zeroExtend(mant_a) << i, 0, 16);
        end
    end

    Bit#(32) adjusted_exponent = 0;
    Bit#(23) normalized_mantissa;
    adjusted_exponent = ripple_carry_adder(zeroExtend(exp_a), zeroExtend(exp_b), 0, 8); 
    adjusted_exponent = ripple_carry_adder(adjusted_exponent, ~127, 1, 8);
    
    if (mant_mult[15] == 1) begin
        if (mant_mult[7]==1 && (mant_mult[6:0] != 0)) begin 
            mant_mult = ripple_carry_adder(mant_mult, 256, 0, 16);
        end
        mant_mult = mant_mult >>1;
        adjusted_exponent = ripple_carry_adder(adjusted_exponent, 1, 0,  8); 
    end else begin
        if (mant_mult[6]==1 && (mant_mult[5:0] != 0)) begin 
            mant_mult = ripple_carry_adder(mant_mult, 128, 0, 16);
        end
        if (mant_mult[15]==1) begin
            mant_mult = mant_mult>>1;
            adjusted_exponent = ripple_carry_adder(adjusted_exponent, 1, 0, 8);
        end
    end
    normalized_mantissa = {mant_mult[13:7], 16'b0};
    
    Bit#(32) final_result;
    final_result = {result_sign, adjusted_exponent[7:0], normalized_mantissa[22:0]}; 
    return final_result;
endfunction


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


function Bit#(32) bfloat16_add_Float32(Bit#(32) x, Bit#(32) y);
    
    Bit#(1) sign_x = x[31], sign_y = y[31];
    Bit#(32) exp_x = {24'b0, x[30:23]};
    Bit#(32) exp_y = {24'b0, y[30:23]};
    Bit#(32) mant_x = {1'b0, 1'b1, x[22:0], 7'b0}; 
    Bit#(32) mant_y = {1'b0, 1'b1, y[22:0], 7'b0}; 

    if (exp_x > exp_y) begin
        mant_y = mant_y >> (exp_x - exp_y);
    end else if (exp_y > exp_x) begin
        mant_x = mant_x >> (exp_y - exp_x);
        exp_x = exp_y; 
    end

    Bit#(32) mant_result;
    if (sign_x == sign_y) begin
        mant_result = ripple_carry_adder(mant_x, mant_y, 0, 32); 
    end else if (mant_x >= mant_y) begin
        mant_result = ripple_carry_adder(mant_x, ~mant_y, 1, 32);
    end else begin
        mant_result = ripple_carry_adder(~mant_y, mant_x, 1, 32); 
        sign_x = sign_y; 
    end

    if (mant_result[31] == 1) begin
        mant_result = mant_result >> 1;
        exp_x = ripple_carry_adder(exp_x, 1, 0, 8); 
    end

    if (mant_result[6] == 1 ) begin
        mant_result = ripple_carry_adder(mant_result, 128, 0, 32);
    end
    Bit#(32) result;
    result = {sign_x, exp_x[7:0], mant_result[29:7]}; 
    return result;

endfunction



interface IFC_main;
	method Action put(Bfloat16 x, Bfloat16 y);
	method ActionValue#(Bit#(16)) get_result;
endinterface : IFC_main
