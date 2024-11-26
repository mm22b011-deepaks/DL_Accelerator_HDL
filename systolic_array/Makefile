default: compile_and_simulate clean

compile_and_simulate: 
	@echo "Compiling tb_mat_mult.bsv..."
	bsc -u -verilog -vdir verilog -bdir bsv_build -u tb/tb_mult.bsv
	bsc -u -vdir verilog -e mk_tb_mult -u verilog/mk_tb_mult.v
	cd verilog && bsc -o a.out -e mk_tb_mult mk_tb_mult.v && ./a.out

clean:
	rm verilog/* bsv_build/* a.out

tb_pe:
	bsc -u -verilog -vdir verilog -bdir bsv_build tb_pe.bsv
	cd verilog && bsc -o a.out -e mkTestbench mkTestbench.v && ./a.out
