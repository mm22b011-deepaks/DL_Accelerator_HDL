TOPFILE=functions.bsv
TOPMODULE=mkTb_funcs
BSVINCDIR=.:%/Libraries
VERILOGDIR=verilog/
BUILDDIR=intermediate/

# Cocotb-specific variables
SIM ?= icarus                 # Change to your simulator if needed
TOPLEVEL_LANG = verilog       # Language of the top-level module (Verilog here)
VERILOG_SOURCES = $(VERILOGDIR)$(TOPMODULE).v
TOPLEVEL = $(TOPMODULE)       # Name of the top-level Verilog module
MODULE = my_cocotb_test_with_print  # Name of the Python test module without .py

default: clean generate_verilog sim_verilog #cocotb_test

generate_verilog:
	@mkdir -p $(VERILOGDIR) $(BUILDDIR)
	@bsc -u -verilog -vdir $(VERILOGDIR) -bdir $(BUILDDIR) +RTS -K4000M -RTS -p $(BSVINCDIR) $(TOPFILE)

sim_verilog:
	@cd $(VERILOGDIR) && bsc -o a.out -e $(TOPMODULE) $(TOPMODULE).v 
	@cd $(VERILOGDIR) && ./a.out

cocotb_test: $(VERILOG_SOURCES)
	@echo "Running cocotb tests..."
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim SIM=$(SIM) TOPLEVEL=$(TOPLEVEL) TOPLEVEL_LANG=$(TOPLEVEL_LANG) VERILOG_SOURCES=$(VERILOG_SOURCES) MODULE=$(MODULE)


clean:
	@rm -rf a.out
	@cd $(VERILOGDIR) && rm -rf * && cd -
	@cd $(BUILDDIR) && rm -rf * && cd -

