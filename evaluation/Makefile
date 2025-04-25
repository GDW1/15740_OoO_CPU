#when all fetched instructions are 0, computation is done

inorder_single_cycle:=../src/inorder_single_cycle/obj_dir
inorder_pipeline:=../src/inorder_pipeline/obj_dir
inorder_superscalar:=../src/inorder_superscalar/obj_dir

code_srcs:=$(wildcard test_files/*.asm)

code_bins_:=$(patsubst %.asm,%.mem,$(code_srcs))
code_bins:=$(patsubst test_files/%,bin/%,$(code_bins_))

result_files_:=$(patsubst %.asm,%.res,$(code_srcs))
result_files:=$(patsubst test_files/%,results/%,$(result_files_))

all: $(inorder_single_cycle) $(inorder_pipeline) $(inorder_superscalar) compile

$(inorder_single_cycle):
	+$(MAKE) -C ../src/inorder_single_cycle

$(inorder_pipeline):
	+$(MAKE) -C ../src/inorder_pipeline

$(inorder_superscalar):
	+$(MAKE) -C ../src/inorder_superscalar

.PHONY: run clean compile

clean:
	+$(MAKE) -C ../src/inorder_single_cycle clean
	+$(MAKE) -C ../src/inorder_pipeline clean
	+$(MAKE) -C ../src/inorder_superscalar clean
	rm -rf bin results *.vcd

compile: bin $(code_bins)

bin:
	@mkdir -p bin

bin/%.mem: test_files/%.asm
	../riscv_translator/translate.sh $< $@

run: results $(result_files)

results: all
	@mkdir -p results
	@#rm results/*

#run tests for each of the code files for each of the CPU archs.
results/%.res: bin/%.mem
	@echo "$^" > $@
	@echo "inorder_single_cycle" $(shell ./runtest.sh $(inorder_single_cycle)/Vtest +memory_file=$<) >> $@
	@echo "inorder_pipeline" $(shell ./runtest.sh $(inorder_pipeline)/Vtest +memory_file=$<) >> $@
	@echo "inorder_superscalar" $(shell ./runtest.sh $(inorder_superscalar)/Vtest +memory_file=$<) >> $@