# Variables
TOPFILE = unpipelined.bsv
TOPMODULE = mkunpipelined
BSVINCDIR = .:%/Libraries
VERILOGDIR = verilog/
BUILDDIR = intermediate/

# Include external verification Makefile
include mac_verif/Makefile.verif

# Default target
default: clean_build generate_verilog sim_verilog

# Target to generate Verilog from BSV
generate_verilog:
	@mkdir -p $(VERILOGDIR) $(BUILDDIR)
	@bsc -u -verilog -vdir $(VERILOGDIR) -bdir $(BUILDDIR) +RTS -K4000M -RTS -p $(BSVINCDIR) $(TOPFILE)
	@cd $(VERILOGDIR) && bsc -o a.out -e $(TOPMODULE) $(TOPMODULE).v

# Target to simulate Verilog output
sim_verilog:
	@cd $(VERILOGDIR) && ./a.out

# Clean build artifacts
clean_build:
	@rm -rf $(VERILOGDIR)*
	@rm -rf $(BUILDDIR)*

# Phony target for simulation
.PHONY: simulate
simulate:
	@make SIM=verilator
