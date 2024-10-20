// ------------------------------------------------------------------------------- 
        module Integer_Arithmetic {
                Reg#(Bit#(8)) A,
                Reg#(Bit#(8)) B,
                Reg#(Bit#(32)) C,
        };  
                Reg#(Bit#(16)) product <- mkReg(0);
                Reg#(Bit#(32)) Output <- mkReg(0);

                function Bit#(16) computeProduct(Bit#(8) A, Bit#(8) B);
                        Bit#(16) product = 0;
   
                        for (Integer i =0; i< 8; i = i+1) begin
                                if (b[i]) begin
                                        product = product ^ (A << i)
                                end
                        end 
                 
                        return product;
                endfunction

                function Bit#(32) computeSum(Bit#(16) product, Bit#(32) C)
                        Bit#(32) Sum;
                        Bit#(33) carry;                    // Ask prof if needed, i dont see its mention in the PDF
                        Bit#(32) product_32bit;

                        carry[0]      = 0;                 // Can I do this?
                        product_32bit = {16'b0, product}   //Can I concatenate like this? Ask prof

                        for (Integer i = 0; i < 32; i = i+1) //can we use "+" operator here? Again ask prof
                                Sum[i]     = (C[i] ^ product_32bit[i] ^ carry[i]);
                                carry[i+1] = (C[i] & product_32bit[i] | carry[i] & (product_32bit[i] ^ C[i]);
                        end

                        return Sum;
                endfunction

                rule rl_calculateResult;
                        product <= computeProduct(A,B);
                        Output  <= computeSum(C, product);
                endrule : calculateResult

                return Output
        endmodule : Integer_Arithmetic
// ---------------------------------------------------------
