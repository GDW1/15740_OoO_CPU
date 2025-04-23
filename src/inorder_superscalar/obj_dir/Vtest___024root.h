// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated.h"


class Vtest__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ test__DOT__cpu__DOT__stall_fetch;
        CData/*0:0*/ test__DOT__cpu__DOT__branch;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd;
        CData/*6:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd;
        CData/*6:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd;
        CData/*6:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2;
        CData/*4:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd;
        CData/*6:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7;
        CData/*0:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero;
        CData/*0:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero;
        CData/*0:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero;
        CData/*0:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero;
        CData/*0:0*/ test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch;
        CData/*4:0*/ test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        CData/*5:0*/ test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op;
        CData/*5:0*/ test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op;
        CData/*5:0*/ test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op;
        CData/*5:0*/ test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op;
        CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v0;
        CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v4;
        CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v0;
        CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4;
        CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4;
        CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v5;
        CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v6;
        CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v7;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__b_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__s_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__i_type_imm;
        SData/*12:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__b_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__s_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__i_type_imm;
        SData/*12:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__b_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__s_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__i_type_imm;
        SData/*12:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__b_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__s_type_imm;
        SData/*11:0*/ test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__i_type_imm;
        IData/*31:0*/ test__DOT__cpu__DOT__basePC;
        IData/*31:0*/ test__DOT__cpu__DOT__btype_imm_sign_extended;
        IData/*31:0*/ test__DOT__cpu__DOT__PC_increment;
        IData/*31:0*/ test__DOT__cpu__DOT__pointer_bound;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk9__DOT__pointer;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk10__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2;
    };
    struct {
        IData/*31:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result;
        IData/*31:0*/ test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2;
        IData/*31:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result;
        IData/*31:0*/ test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2;
        IData/*31:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result;
        IData/*31:0*/ test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2;
        IData/*31:0*/ test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk12__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk13__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk14__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk15__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk16__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__unnamedblk17__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__rf__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__rf__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk13__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
        IData/*31:0*/ test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k;
        IData/*31:0*/ test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ test__DOT__cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v4;
        IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v5;
        IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v6;
        IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v7;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(runtime,63,0);
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__PC_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__instruction_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__read_enable_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__instruction_vector_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__PC_vector_preg;
        VlUnpacked<CData/*6:0*/, 4> test__DOT__cpu__DOT__opcode_vector;
        VlUnpacked<CData/*2:0*/, 4> test__DOT__cpu__DOT__funct3_vector;
        VlUnpacked<CData/*6:0*/, 4> test__DOT__cpu__DOT__funct7_vector;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__rd_vector;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__rs1_vector;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__rs2_vector;
        VlUnpacked<SData/*11:0*/, 4> test__DOT__cpu__DOT__i_type_imm_vector;
        VlUnpacked<SData/*11:0*/, 4> test__DOT__cpu__DOT__s_type_imm_vector;
        VlUnpacked<SData/*12:0*/, 4> test__DOT__cpu__DOT__b_type_imm_vector;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__reg_write_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_read_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_write_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_to_reg_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__branch_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__jump_vector;
        VlUnpacked<CData/*3:0*/, 4> test__DOT__cpu__DOT__imm_sel_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__instruction_vector_preg_temp;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__rs1_vector_data;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__rs2_vector_data;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellinp__rf__write_data;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__rf__write_addrs;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__rf__rs2s;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__rf__rs1s;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__scoreboard_mask_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__branch_mask_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_mask_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__cross_dep_mask_vector;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__scoreboard__rd;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__final_mask_vector;
        VlUnpacked<CData/*6:0*/, 4> test__DOT__cpu__DOT__decode_execute_opcode_vector_preg;
        VlUnpacked<CData/*2:0*/, 4> test__DOT__cpu__DOT__decode_execute_funct3_vector_preg;
        VlUnpacked<CData/*6:0*/, 4> test__DOT__cpu__DOT__decode_execute_funct7_vector_preg;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__decode_execute_rd_vector_preg;
        VlUnpacked<SData/*11:0*/, 4> test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg;
        VlUnpacked<SData/*11:0*/, 4> test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg;
        VlUnpacked<SData/*12:0*/, 4> test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__reg_write_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_read_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_write_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_to_reg_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__branch_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__jump_vector_preg;
        VlUnpacked<CData/*3:0*/, 4> test__DOT__cpu__DOT__imm_sel_vector_preg;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__decode_execute_PC_vector_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__alu_result_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__zero_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__zero_vector_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__reg_write_vector_memory_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_read_vector_memory_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_write_vector_memory_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__branch_vector_memory_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__jump_vector_memory_preg;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__execute_memory_PC_vector_preg;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__execute_memory_rd_vector_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__memory_result_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__memory_address_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__memory_write_data_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__memory_read_enable_vector;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__memory_write_enable_vector;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellout__data_memory__read_data;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT____Vcellinp__data_memory__write_data;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__memory_result_vector_writeback_preg;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__memory_PC_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__branch_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__jump_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__zero_vector_writeback_preg;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__register_write_vector_writeback_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__alu_result_vector_writeback_preg;
        VlUnpacked<CData/*4:0*/, 4> test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg;
        VlUnpacked<IData/*31:0*/, 4> test__DOT__cpu__DOT__write_back_result_vector;
        VlUnpacked<IData/*31:0*/, 2> test__DOT__cpu__DOT__instruction_memory__DOT__write_data;
        VlUnpacked<IData/*31:0*/, 2> test__DOT__cpu__DOT__instruction_memory__DOT__write_addr;
        VlUnpacked<CData/*0:0*/, 2> test__DOT__cpu__DOT__instruction_memory__DOT__write_enable;
        VlUnpacked<IData/*31:0*/, 1024> test__DOT__cpu__DOT__instruction_memory__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> test__DOT__cpu__DOT__rf__DOT__regs;
        VlUnpacked<VlUnpacked<CData/*4:0*/, 4>, 3> test__DOT__cpu__DOT__scoreboard__DOT__scoreboard;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__scoreboard__DOT__branchboard;
        VlUnpacked<CData/*0:0*/, 4> test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op;
        VlUnpacked<IData/*31:0*/, 1024> test__DOT__cpu__DOT__data_memory__DOT__mem;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 1024>, false, IData/*31:0*/, 1> __VdlyCommitQueuetest__DOT__cpu__DOT__instruction_memory__DOT__mem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 1024>, false, IData/*31:0*/, 1> __VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest___024root(Vtest__Syms* symsp, const char* v__name);
    ~Vtest___024root();
    VL_UNCOPYABLE(Vtest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
