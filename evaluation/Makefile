#when all fetched instructions are 0, computation is done

inorder_single_cycle:=../src/inorder_single_cycle/obj_dir
inorder_pipeline:=../src/inorder_pipeline/obj_dir
inorder_superscalar:=../src/inorder_superscalar/obj_dir

code_srcs:=$(wildcard test_files/*.asm)
code_bins_:=$(patsubst %.asm,%.mem,$(code_srcs))
code_bins:=$(patsubst test_files/%,bin/%,$(code_bins_))

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
	rm -rf bin

compile: bin $(code_bins)

bin:
	@mkdir -p bin

bin/%.mem: test_files/%.asm
	../riscv_translator/translate.sh $< $@