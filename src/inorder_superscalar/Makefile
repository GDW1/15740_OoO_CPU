VC=verilator #verilog compiler
VFLAGS= -sv --trace --cc --timing --top-module test #verilator flags
TESTSV_FILE=test.sv
SV_FILES=$(wildcard *.sv)
CPP_FILE=tb_test.cpp
MK_FILE=Vtest.mk
EXE_FILE=Vtest

#https://www.gnu.org/software/make/manual/make.html#Prerequisite-Types
#rerun obj_dir forcefully so that EXE_FILE is recompiled (and its ts is modified)
obj_dir/$(EXE_FILE): $(SV_FILES) | obj_dir
	+$(MAKE) obj_dir -B
	+$(MAKE) -C obj_dir -f $(MK_FILE) $(EXE_FILE)

obj_dir: $(TESTSV_FILE)
	$(VC) $(VFLAGS) $^
	$(VC) $(VFLAGS) $(TESTSV_FILE) --exe $(CPP_FILE)

.PHONY: run clean compile

run: obj_dir/$(EXE_FILE) memory_file.mem
	@./obj_dir/$(EXE_FILE)

clean:
	rm -rf obj_dir
	rm -f memory_file.mem *.vcd

compile: memory_file.mem

%.mem:
	../../riscv_translator/translate.sh ../../riscv_translator/code.asm $@