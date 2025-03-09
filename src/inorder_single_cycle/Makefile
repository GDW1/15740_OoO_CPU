VC=verilator #verilog compiler
VFLAGS= -sv --trace --cc --timing #verilator flags
SV_FILE=test.sv
CPP_FILE=tb_test.cpp
MK_FILE=Vtest.mk
EXE_FILE=Vtest

#https://www.gnu.org/software/make/manual/make.html#Prerequisite-Types
obj_dir/$(EXE_FILE): $(SV_FILE) | obj_dir
	+$(MAKE) -C obj_dir -f $(MK_FILE) $(EXE_FILE)

obj_dir: $(SV_FILE)
	$(VC) $(VFLAGS) $^
	$(VC) $(VFLAGS) $(SV_FILE) --exe $(CPP_FILE)

.PHONY: run clean

run: obj_dir/$(EXE_FILE)
	@./obj_dir/$(EXE_FILE)

clean:
	rm -rf obj_dir