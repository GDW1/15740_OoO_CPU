VC=verilator #verilog compiler
VFLAGS= -Wall --trace --cc #verilator flags

SV_FILE=test.sv
CPP_FILE=tb_test.cpp
MK_FILE=Vtest.mk
EXE_FILE=Vtest

obj_dir/$(EXE_FILE): $(CPP_FILE)
	+$(MAKE) -C obj_dir -f $(MK_FILE) $(EXE_FILE)

#obj_dir is an order
#https://www.gnu.org/software/make/manual/make.html#Prerequisite-Types
#This target should be run when cpp file changes (I think)
$(CPP_FILE): | obj_dir
	$(VC) $(VFLAGS) $(SV_FILE) --exe $(CPP_FILE)

obj_dir: $(SV_FILE)
	$(VC) $(VFLAGS) $^

.PHONY: run clean
run: obj_dir/$(EXE_FILE)
	@./obj_dir/$(EXE_FILE)

clean:
	rm -rf obj_dir