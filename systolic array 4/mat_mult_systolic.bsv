package mat_mult_systolic;

    import pe::*;
    import FixedPoint::*;
    `include "types.bsv"

    interface Ifc_mat_mult;
        method Action putAB(MatType matA, MatType matB);
        method ActionValue#(MatType) getResult;
        method Bool isReady();
        method Action reset();
    endinterface

    (* synthesize *)
    module mkMatMult(Ifc_mat_mult);
        // Instantiate the PEs
        Vector#(`MAT_DIM, Vector#(`MAT_DIM, Ifc_pe)) pe_array <- replicateM(replicateM(mk_pe));

        Reg#(MatType) result <- mkReg(replicate(replicate(unpack(0))));
        Reg#(MatType) matA <- mkReg(replicate(replicate(unpack(0))));
        Reg#(MatType) matB <- mkReg(replicate(replicate(unpack(0))));

        Reg#(Bool) processing <- mkReg(False);
        Reg#(int) cycle_counter <- mkReg(0);

        // Control logic for systolic array computation
        rule startProcessing (!processing);
            processing <= True;
            cycle_counter <= 0;
        endrule

        rule process (processing);
            for (int i = 0; i < `MAT_DIM; i = i + 1) begin
                for (int j = 0; j < `MAT_DIM; j = j + 1) begin
                    // Feed inputs to the PEs
                    if (cycle_counter < `MAT_DIM) begin
                        if (i <= cycle_counter) begin
                            pe_array[i][j].putA(matA[i][cycle_counter - i]);
                            pe_array[i][j].putB(matB[cycle_counter - i][j]);
                        end
                    end

                    // Collect outputs from PEs
                    if (cycle_counter >= `MAT_DIM && (cycle_counter - `MAT_DIM) < `MAT_DIM) begin
                        result[i][j] <= pe_array[i][j].getC();
                    end
                end
            end

            cycle_counter <= cycle_counter + 1;
            if (cycle_counter == 2 * `MAT_DIM) begin
                processing <= False;
            end
        endrule

        method Action putAB(MatType inpA, MatType inpB);
            matA <= inpA;
            matB <= inpB;
        endmethod

        method ActionValue#(MatType) getResult if (!processing);
            return result;
        endmethod

        method Bool isReady() = !processing;

        method Action reset();
            for (int i = 0; i < `MAT_DIM; i = i + 1) begin
                for (int j = 0; j < `MAT_DIM; j = j + 1) begin
                    pe_array[i][j].reset();
                end
            end
        endmethod

    endmodule

endpackage
