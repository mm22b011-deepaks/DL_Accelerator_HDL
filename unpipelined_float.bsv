(* synthesize *)
// ------------------------------------------------------------------
typedef struct {
        Bit#(1) sign;
        Bit#(8) exponent;
        Bit#(7) mantissa;
} bfloat16;
// ------------------------------------------------------------------

(* synthesize *)
// ------------------------------------------------------------------
function Bit#(8) add(Bit#(8) a, Bit#(8) b);
        Bit#(8) sum = a;

        for (Bit#(3) o = 0; i < 8; i = i+1) begin // Can I use Bit#(3) (I guess yes). Also can i use "+" here? 
                sum = sum + ((b >> i) & 1);
        end

        return sum;
endfunction : add
// ------------------------------------------------------------------

(* synthesize *)
// ------------------------------------------------------------------
function Bit#(14) multiply(Bit#(7) a, Bit#(7) b);
        Bit#(14) product = 0;

        for (Bit#(3) i = 0; i < 8; i = i+ 1) begin
                if (b[i]) begin
                        product = product + (a << i);
                end
        end

        return product;
endfunction : multiply
// ------------------------------------------------------------------

(* synthesize *)
// ------------------------------------------------------------------
function Bit#(8) bfloat16_add(Bit#(8) temp_a, Bit#(8) temp_b);
        Bit#(8) sum;
        Bit#(8) carry;
        // Bit#(8) temp_a = a;                 // Can I do this, ask prof
        // Bit#(8) temp_b = b;                 // Can I do this, ask prof

        //############## Verify Logic From Here again ###############
        Bit#(8) sum = temp_a ^ temp_b;
        Bit#(8) carry = (temp_a ^ temp_b) << 1;

        while (carry != 0) {
                Bit#(8) new_sum = sum ^ carry;
                carry = (sum & carry) << 1;
                sum = new_sum;
        }
        //############## Verify Logic till here again ############### 

        return sum;
endfunction : bfloat16_add
// ------------------------------------------------------------------

(* synthesize *)
// ------------------------------------------------------------------
function bfloat16 bfloat16_multiply(bfloat16 a, bfloat16 b);
        Bit#(1) result_sign = a.sign ^ b.sign;
        Bit#(8) result_exponent = add(a.exponent, b.exponent) - 8'd127;
        Bit#(14) mantissa_product;

        mantissa_product = multiply({1'b1, a.mantissa}, {1'b1, b.mantissa}); // Is this correct way to concatenate?
        if (mantissa_product[13]) begin  // Checking for normalisation
                mantissa_product = mantissa_product >> 1;
                result_exponent = add(result_exponent, 8'd1);
        end

        return {result_sign, result_exponent[7:0], mantissa_product[12:6]} // Ask prof if it is a right way to return
endfunction : bfloat16_multiply
// ------------------------------------------------------------------

(* synthesize *)
// ------------------------------------------------------------------
module Float_Arithmetic {
        Reg#(Bit#(16)) A;
        Reg#(Bit#(16)) B;
        Reg#(Bit#(32)) C;
};

        Reg#(Bit#(16)) product <- mkReg(0);
        Reg#(Bit#(32)) Output  <- mkReg(0);

        function bfloat16 computeProduct(Bit#(16) A, Bit#(16) B);
                Bit#(16) product;

        endfunction : computeProduct
endmodule : Float_Arithmetic
// ------------------------------------------------------------------
