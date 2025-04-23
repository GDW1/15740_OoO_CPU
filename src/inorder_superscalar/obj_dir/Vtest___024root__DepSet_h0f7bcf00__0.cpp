// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest___024root.h"

void Vtest___024root___eval_act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtest___024root___nba_sequent__TOP__0(Vtest___024root* vlSelf);
void Vtest___024root___nba_sequent__TOP__1(Vtest___024root* vlSelf);
void Vtest___024root___nba_sequent__TOP__2(Vtest___024root* vlSelf);
void Vtest___024root___nba_sequent__TOP__3(Vtest___024root* vlSelf);
void Vtest___024root___nba_comb__TOP__0(Vtest___024root* vlSelf);

void Vtest___024root___eval_nba(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_nba\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtest___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest___024root___nba_sequent__TOP__0(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___nba_sequent__TOP__0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Registers:\nRegister           0: %10# %11d\nRegister           1: %10# %11d\nRegister           2: %10# %11d\nRegister           3: %10# %11d\nRegister           4: %10# %11d\nRegister           5: %10# %11d\nRegister           6: %10# %11d\nRegister           7: %10# %11d\nRegister           8: %10# %11d\nRegister           9: %10# %11d\nRegister          10: %10# %11d\nRegister          11: %10# %11d\nRegister          12: %10# %11d\nRegister          13: %10# %11d\nRegister          14: %10# %11d\nRegister          15: %10# %11d\nRegister          16: %10# %11d\n",0,
                 32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [1U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [1U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [2U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [2U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [3U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [3U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [4U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [4U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [5U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [5U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [6U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [6U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [7U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [7U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [8U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [8U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [9U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [9U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xaU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xaU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xbU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xbU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xcU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xcU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xdU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xdU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xeU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xeU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xfU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0xfU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x10U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x10U]);
    VL_WRITEF_NX("Register          17: %10# %11d\nRegister          18: %10# %11d\nRegister          19: %10# %11d\nRegister          20: %10# %11d\nRegister          21: %10# %11d\nRegister          22: %10# %11d\nRegister          23: %10# %11d\nRegister          24: %10# %11d\nRegister          25: %10# %11d\nRegister          26: %10# %11d\nRegister          27: %10# %11d\nRegister          28: %10# %11d\nRegister          29: %10# %11d\nRegister          30: %10# %11d\nRegister          31: %10# %11d\n",0,
                 32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x11U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x11U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x12U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x12U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x13U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x13U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x14U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x14U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x15U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x15U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x16U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x16U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x17U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x17U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x18U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x18U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x19U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x19U],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1aU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1aU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1bU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1bU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1cU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1cU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1dU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1dU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1eU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1eU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1fU],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [0x1fU]);
    vlSelfRef.test__DOT__cpu__DOT__rf__DOT__i = 0x20U;
}

VL_INLINE_OPT void Vtest___024root___nba_sequent__TOP__1(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___nba_sequent__TOP__1\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__test__DOT__cpu__DOT__basePC;
    __Vdly__test__DOT__cpu__DOT__basePC = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v0 = 0;
    CData/*2:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4 = 0;
    CData/*2:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v5 = 0;
    CData/*2:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v6 = 0;
    CData/*2:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v0 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v5 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v6 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v0 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v5 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v6 = 0;
    CData/*6:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v0 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v5 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v6 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v0 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v5 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v6 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v0 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v5 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v6 = 0;
    SData/*11:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v0 = 0;
    SData/*12:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4 = 0;
    SData/*12:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v5 = 0;
    SData/*12:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v6 = 0;
    SData/*12:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v0 = 0;
    CData/*3:0*/ __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v4 = 0;
    CData/*3:0*/ __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v5 = 0;
    CData/*3:0*/ __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v6 = 0;
    CData/*3:0*/ __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v0 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v5 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v6 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v0 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v5 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v6 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__zero_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__zero_vector_writeback_preg__v0 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v5 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v6 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v0;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v0 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v5;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v5 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v6;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v6 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v7;
    __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v7 = 0;
    // Body
    __VdlySet__test__DOT__cpu__DOT__zero_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4 = 0U;
    vlSelfRef.__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v0 = 0U;
    vlSelfRef.__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4 = 0U;
    vlSelfRef.__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v0 = 0U;
    vlSelfRef.__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v4 = 0U;
    __Vdly__test__DOT__cpu__DOT__basePC = vlSelfRef.test__DOT__cpu__DOT__basePC;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk3__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk10__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk12__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk14__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk16__DOT__i = 4U;
        __VdlySet__test__DOT__cpu__DOT__zero_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v0 = 1U;
        vlSelfRef.__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v0 = 1U;
        vlSelfRef.__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v0 = 1U;
        __Vdly__test__DOT__cpu__DOT__basePC = 0U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v0 = 1U;
        __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v0 = 1U;
    } else {
        __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg
            [3U];
        vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg
            [0U];
        vlSelfRef.__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4 = 1U;
        vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg
            [1U];
        vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg
            [2U];
        vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__zero_vector
            [0U];
        __VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__zero_vector
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__zero_vector
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__zero_vector
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
            [0U];
        __VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
            [3U];
        if (vlSelfRef.test__DOT__cpu__DOT__stall_fetch) {
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v4 = 0x13U;
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v5 = 0x13U;
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v6 = 0x13U;
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v7 = 0x13U;
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v4 = 0x13U;
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v5 = 0x13U;
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v6 = 0x13U;
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v7 = 0x13U;
        } else {
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__instruction_vector
                [0U];
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__instruction_vector
                [1U];
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__instruction_vector
                [2U];
            vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__instruction_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__PC_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__PC_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__PC_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__PC_vector
                [3U];
        }
        vlSelfRef.__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__jump_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__jump_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__jump_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__jump_vector
               [3U]);
        if (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
            [0U]) {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__rd_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__funct3_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__opcode_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__funct7_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data
                [0U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4 
                = vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data
                [0U];
        } else {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4 = 0U;
        }
        __VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4 = 1U;
        if (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
            [1U]) {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__rd_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__funct3_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__opcode_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__funct7_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data
                [1U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v5 
                = vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data
                [1U];
        } else {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v5 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v5 = 0U;
        }
        if (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
            [2U]) {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__rd_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__funct3_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__opcode_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__funct7_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data
                [2U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v6 
                = vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data
                [2U];
        } else {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v6 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v6 = 0U;
        }
        if (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
            [3U]) {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__rd_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__funct3_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__opcode_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__funct7_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data
                [3U];
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v7 
                = vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data
                [3U];
        } else {
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v7 = 0U;
            __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v7 = 0U;
        }
        __VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__reg_write_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__reg_write_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__reg_write_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__reg_write_vector
               [3U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector
               [3U]);
        __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
            [0U];
        __VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
            [0U];
        __VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
               [3U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
               [3U]);
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [3U]);
        __VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v4 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__memory_result_vector
            [0U];
        __VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__memory_result_vector
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__memory_result_vector
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__memory_result_vector
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg
            [3U];
        __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
            [0U];
        __VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
            [3U];
        __VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4 = 1U;
        __VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v4 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i = 0xffffffffU;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                if (vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
                    [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)]) {
                    vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i 
                        = vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
                    goto __Vlabel1;
                }
                vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel1: ;
        }
        if ((0xffffffffU != vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i)) {
            vlSelfRef.test__DOT__cpu__DOT__btype_imm_sign_extended 
                = (((- (IData)((1U & (vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg
                                      [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i)] 
                                      >> 0xcU)))) << 0xdU) 
                   | vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg
                   [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i)]);
            if (vlSelfRef.test__DOT__cpu__DOT__zero_vector
                [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i)]) {
                __Vdly__test__DOT__cpu__DOT__basePC 
                    = ((vlSelfRef.test__DOT__cpu__DOT__basePC 
                        + vlSelfRef.test__DOT__cpu__DOT__btype_imm_sign_extended) 
                       + vlSelfRef.test__DOT__cpu__DOT__PC_increment);
            }
        } else {
            __Vdly__test__DOT__cpu__DOT__basePC = ((IData)(vlSelfRef.test__DOT__cpu__DOT__stall_fetch)
                                                    ? vlSelfRef.test__DOT__cpu__DOT__basePC
                                                    : 
                                                   (vlSelfRef.test__DOT__cpu__DOT__basePC 
                                                    + vlSelfRef.test__DOT__cpu__DOT__PC_increment));
        }
        __VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4 = 1U;
        __VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4 
            = vlSelfRef.test__DOT__cpu__DOT__alu_result_vector
            [0U];
        __VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v5 
            = vlSelfRef.test__DOT__cpu__DOT__alu_result_vector
            [1U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v6 
            = vlSelfRef.test__DOT__cpu__DOT__alu_result_vector
            [2U];
        __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v7 
            = vlSelfRef.test__DOT__cpu__DOT__alu_result_vector
            [3U];
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk4__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk11__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk13__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk15__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__unnamedblk17__DOT__i = 4U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__zero_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_PC_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__jump_vector_memory_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_memory_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_memory_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__branch_vector_memory_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_memory_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__zero_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__zero_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__jump_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__jump_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__reg_write_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__reg_write_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_write_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_write_vector_memory_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__PC_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__PC_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rd_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct3_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_opcode_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_funct7_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__memory_result_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_read_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__mem_read_vector_memory_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__alu_result_vector_writeback_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__imm_sel_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__imm_sel_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__branch_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__branch_vector_preg__v7;
    }
    vlSelfRef.test__DOT__cpu__DOT__basePC = __Vdly__test__DOT__cpu__DOT__basePC;
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg__v7;
    }
    vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[0U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg
           [0U] ? vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg
           [0U] : vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg
           [0U]);
    vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[1U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg
           [1U] ? vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg
           [1U] : vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg
           [1U]);
    vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[2U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg
           [2U] ? vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg
           [2U] : vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg
           [2U]);
    vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[3U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg
           [3U] ? vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg
           [3U] : vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg
           [3U]);
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[0U] = vlSelfRef.test__DOT__cpu__DOT__basePC;
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[1U] = 
        ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__basePC);
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[2U] = 
        ((IData)(2U) + vlSelfRef.test__DOT__cpu__DOT__basePC);
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[3U] = 
        ((IData)(3U) + vlSelfRef.test__DOT__cpu__DOT__basePC);
    vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2 
        = ((0U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
            [0U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
           [0U] : ((1U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                    [0U]) ? (((- (IData)((1U & (vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                                [0U] 
                                                >> 0xbU)))) 
                              << 0xcU) | vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                             [0U]) : ((2U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                                       [0U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                      [0U] : vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [0U])));
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2 
        = ((0U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
            [1U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
           [1U] : ((1U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                    [1U]) ? (((- (IData)((1U & (vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                                [1U] 
                                                >> 0xbU)))) 
                              << 0xcU) | vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                             [1U]) : ((2U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                                       [1U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                      [1U] : vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [1U])));
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2 
        = ((0U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
            [2U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
           [2U] : ((1U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                    [2U]) ? (((- (IData)((1U & (vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                                [2U] 
                                                >> 0xbU)))) 
                              << 0xcU) | vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                             [2U]) : ((2U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                                       [2U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                      [2U] : vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [2U])));
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2 
        = ((0U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
            [3U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg
           [3U] : ((1U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                    [3U]) ? (((- (IData)((1U & (vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                                [3U] 
                                                >> 0xbU)))) 
                              << 0xcU) | vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                             [3U]) : ((2U == vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg
                                       [3U]) ? vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg
                                      [3U] : vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [3U])));
    vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[3U];
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op 
        = ((0x40U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
            [0U]) ? ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                      [0U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [0U]) ? 0U : ((8U & 
                                               vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                               [0U])
                                               ? 0U
                                               : ((4U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                   [0U])
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [0U])
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                      [0U])
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [0U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [0U])
                                                        ? 0xfU
                                                        : 0xeU)
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [0U])
                                                        ? 0xdU
                                                        : 0xcU))
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [0U])
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [0U])
                                                        ? 0xbU
                                                        : 0xaU)))
                                                     : 0U)
                                                    : 0U))))
                      : 0U) : ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [0U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                          [0U]) ? (
                                                   (8U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [0U])
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [0U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [0U])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [0U])
                                                       ? 
                                                      ((4U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [0U])
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [0U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [0U])
                                                          ? 4U
                                                          : 3U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [0U])
                                                          ? 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [0U])
                                                           ? 7U
                                                           : 6U)
                                                          : 2U))
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [0U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [0U])
                                                          ? 9U
                                                          : 8U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [0U])
                                                          ? 5U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [0U])
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U)))
                                          : 0U) : (
                                                   (0x10U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [0U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [0U])
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [0U])
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [0U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                        [0U])
                                                        ? 
                                                       ((4U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [0U])
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [0U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [0U])
                                                           ? 4U
                                                           : 3U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [0U])
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2 
                                                                >> 5U)))
                                                            ? 7U
                                                            : 6U)
                                                           : 2U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [0U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [0U])
                                                           ? 9U
                                                           : 8U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [0U])
                                                           ? 5U
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 0U)));
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op 
        = ((0x40U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
            [1U]) ? ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                      [1U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [1U]) ? 0U : ((8U & 
                                               vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                               [1U])
                                               ? 0U
                                               : ((4U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                   [1U])
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [1U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [1U])
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                      [1U])
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [1U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [1U])
                                                        ? 0xfU
                                                        : 0xeU)
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [1U])
                                                        ? 0xdU
                                                        : 0xcU))
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [1U])
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [1U])
                                                        ? 0xbU
                                                        : 0xaU)))
                                                     : 0U)
                                                    : 0U))))
                      : 0U) : ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [1U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                          [1U]) ? (
                                                   (8U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [1U])
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [1U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [1U])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [1U])
                                                       ? 
                                                      ((4U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [1U])
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [1U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [1U])
                                                          ? 4U
                                                          : 3U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [1U])
                                                          ? 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [1U])
                                                           ? 7U
                                                           : 6U)
                                                          : 2U))
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [1U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [1U])
                                                          ? 9U
                                                          : 8U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [1U])
                                                          ? 5U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [1U])
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U)))
                                          : 0U) : (
                                                   (0x10U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [1U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [1U])
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [1U])
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [1U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                        [1U])
                                                        ? 
                                                       ((4U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [1U])
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [1U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [1U])
                                                           ? 4U
                                                           : 3U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [1U])
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2 
                                                                >> 5U)))
                                                            ? 7U
                                                            : 6U)
                                                           : 2U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [1U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [1U])
                                                           ? 9U
                                                           : 8U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [1U])
                                                           ? 5U
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 0U)));
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op 
        = ((0x40U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
            [2U]) ? ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                      [2U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [2U]) ? 0U : ((8U & 
                                               vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                               [2U])
                                               ? 0U
                                               : ((4U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                   [2U])
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [2U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [2U])
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                      [2U])
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [2U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [2U])
                                                        ? 0xfU
                                                        : 0xeU)
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [2U])
                                                        ? 0xdU
                                                        : 0xcU))
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [2U])
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [2U])
                                                        ? 0xbU
                                                        : 0xaU)))
                                                     : 0U)
                                                    : 0U))))
                      : 0U) : ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [2U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                          [2U]) ? (
                                                   (8U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [2U])
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [2U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [2U])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [2U])
                                                       ? 
                                                      ((4U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [2U])
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [2U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [2U])
                                                          ? 4U
                                                          : 3U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [2U])
                                                          ? 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [2U])
                                                           ? 7U
                                                           : 6U)
                                                          : 2U))
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [2U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [2U])
                                                          ? 9U
                                                          : 8U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [2U])
                                                          ? 5U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [2U])
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U)))
                                          : 0U) : (
                                                   (0x10U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [2U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [2U])
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [2U])
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [2U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                        [2U])
                                                        ? 
                                                       ((4U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [2U])
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [2U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [2U])
                                                           ? 4U
                                                           : 3U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [2U])
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2 
                                                                >> 5U)))
                                                            ? 7U
                                                            : 6U)
                                                           : 2U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [2U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [2U])
                                                           ? 9U
                                                           : 8U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [2U])
                                                           ? 5U
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 0U)));
    vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op 
        = ((0x40U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
            [3U]) ? ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                      [3U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [3U]) ? 0U : ((8U & 
                                               vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                               [3U])
                                               ? 0U
                                               : ((4U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                   [3U])
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [3U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [3U])
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                      [3U])
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [3U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [3U])
                                                        ? 0xfU
                                                        : 0xeU)
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [3U])
                                                        ? 0xdU
                                                        : 0xcU))
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                       [3U])
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [3U])
                                                        ? 0xbU
                                                        : 0xaU)))
                                                     : 0U)
                                                    : 0U))))
                      : 0U) : ((0x20U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                [3U]) ? ((0x10U & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                          [3U]) ? (
                                                   (8U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [3U])
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [3U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [3U])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [3U])
                                                       ? 
                                                      ((4U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                        [3U])
                                                        ? 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [3U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [3U])
                                                          ? 4U
                                                          : 3U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [3U])
                                                          ? 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [3U])
                                                           ? 7U
                                                           : 6U)
                                                          : 2U))
                                                        : 
                                                       ((2U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [3U])
                                                         ? 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [3U])
                                                          ? 9U
                                                          : 8U)
                                                         : 
                                                        ((1U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [3U])
                                                          ? 5U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                                           [3U])
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U)))
                                          : 0U) : (
                                                   (0x10U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                    [3U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                     [3U])
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                      [3U])
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                       [3U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                                        [3U])
                                                        ? 
                                                       ((4U 
                                                         & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                         [3U])
                                                         ? 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [3U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [3U])
                                                           ? 4U
                                                           : 3U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [3U])
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2 
                                                                >> 5U)))
                                                            ? 7U
                                                            : 6U)
                                                           : 2U))
                                                         : 
                                                        ((2U 
                                                          & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                          [3U])
                                                          ? 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [3U])
                                                           ? 9U
                                                           : 8U)
                                                          : 
                                                         ((1U 
                                                           & vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                                           [3U])
                                                           ? 5U
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 0U)));
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result = 0U;
    if ((0x20U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result = 0U;
    } else if ((0x10U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result = 0U;
    } else if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op) 
                          >> 1U)))) {
                vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result 
                    = ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                        ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                            [0U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                            ? 1U : 0U) : (VL_LTS_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [0U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                           ? 1U : 0U));
            }
        }
    } else {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result 
            = ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                         [0U], (0x1fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] >> (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] << (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)))
                : ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] | vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] ^ vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] - vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [0U] + vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2))));
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))) {
                if ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero 
                        = (1U & ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                                  ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                                      ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [0U] >= vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [0U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                          ? 1U : 0U))
                                  : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                                      ? (VL_GTES_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [0U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : (VL_LTS_III(32, 
                                                    vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                    [0U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                          ? 1U : 0U))));
                } else if ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero 
                        = (1U & ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op))
                                  ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [0U] != vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                      ? 1U : 0U) : 
                                 ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                   [0U] == vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2)
                                   ? 1U : 0U)));
                }
            }
        }
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result = 0U;
    if ((0x20U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result = 0U;
    } else if ((0x10U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result = 0U;
    } else if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op) 
                          >> 1U)))) {
                vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result 
                    = ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                        ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                            [1U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                            ? 1U : 0U) : (VL_LTS_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [1U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                           ? 1U : 0U));
            }
        }
    } else {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result 
            = ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                         [1U], (0x1fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] >> (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] << (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)))
                : ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] | vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] ^ vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] - vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [1U] + vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2))));
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))) {
                if ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero 
                        = (1U & ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                                  ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                                      ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [1U] >= vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [1U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                          ? 1U : 0U))
                                  : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                                      ? (VL_GTES_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [1U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : (VL_LTS_III(32, 
                                                    vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                    [1U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                          ? 1U : 0U))));
                } else if ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero 
                        = (1U & ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op))
                                  ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [1U] != vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                      ? 1U : 0U) : 
                                 ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                   [1U] == vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2)
                                   ? 1U : 0U)));
                }
            }
        }
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result = 0U;
    if ((0x20U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result = 0U;
    } else if ((0x10U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result = 0U;
    } else if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op) 
                          >> 1U)))) {
                vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result 
                    = ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                        ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                            [2U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                            ? 1U : 0U) : (VL_LTS_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [2U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                           ? 1U : 0U));
            }
        }
    } else {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result 
            = ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                         [2U], (0x1fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] >> (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] << (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)))
                : ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] | vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] ^ vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] - vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [2U] + vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2))));
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))) {
                if ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero 
                        = (1U & ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                                  ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                                      ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [2U] >= vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [2U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                          ? 1U : 0U))
                                  : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                                      ? (VL_GTES_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [2U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : (VL_LTS_III(32, 
                                                    vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                    [2U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                          ? 1U : 0U))));
                } else if ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero 
                        = (1U & ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op))
                                  ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [2U] != vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                      ? 1U : 0U) : 
                                 ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                   [2U] == vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2)
                                   ? 1U : 0U)));
                }
            }
        }
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result = 0U;
    if ((0x20U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result = 0U;
    } else if ((0x10U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result = 0U;
    } else if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op) 
                          >> 1U)))) {
                vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result 
                    = ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                        ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                            [3U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                            ? 1U : 0U) : (VL_LTS_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [3U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                           ? 1U : 0U));
            }
        }
    } else {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result 
            = ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                         [3U], (0x1fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] >> (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] << (0x1fU & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2))
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] & vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)))
                : ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] | vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] ^ vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2))
                    : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                        ? (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] - vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                        : (vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                           [3U] + vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2))));
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))) {
                if ((4U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero 
                        = (1U & ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                                  ? ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                                      ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [3U] >= vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                          [3U] < vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                          ? 1U : 0U))
                                  : ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                                      ? (VL_GTES_III(32, 
                                                     vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                     [3U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                          ? 1U : 0U)
                                      : (VL_LTS_III(32, 
                                                    vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                                    [3U], vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                          ? 1U : 0U))));
                } else if ((2U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))) {
                    vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero 
                        = (1U & ((1U & (IData)(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op))
                                  ? ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                      [3U] != vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                      ? 1U : 0U) : 
                                 ((vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                   [3U] == vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2)
                                   ? 1U : 0U)));
                }
            }
        }
    }
    vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result;
    vlSelfRef.test__DOT__cpu__DOT__zero_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero;
    vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result;
    vlSelfRef.test__DOT__cpu__DOT__zero_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero;
    vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result;
    vlSelfRef.test__DOT__cpu__DOT__zero_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero;
    vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result;
    vlSelfRef.test__DOT__cpu__DOT__zero_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero;
}

VL_INLINE_OPT void Vtest___024root___nba_sequent__TOP__2(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___nba_sequent__TOP__2\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v0;
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v1;
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v1 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v2;
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v2 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v3;
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v3 = 0;
    SData/*9:0*/ __VdlyDim0__test__DOT__cpu__DOT__instruction_memory__DOT__mem__v0;
    __VdlyDim0__test__DOT__cpu__DOT__instruction_memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v32;
    __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v32;
    __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v32;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v32 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v33;
    __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v33 = 0;
    CData/*4:0*/ __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v33;
    __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v33;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v33 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v34;
    __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v34 = 0;
    CData/*4:0*/ __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v34;
    __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v34 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v34;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v34 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v35;
    __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v35 = 0;
    CData/*4:0*/ __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v35;
    __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v35 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v35;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v35 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v0;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v0 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v5;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v5 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v6;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v6 = 0;
    CData/*0:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v7;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v7 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v0;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v0 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19 = 0;
    CData/*0:0*/ __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v20;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v20 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v21;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v21 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v22;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v22 = 0;
    CData/*4:0*/ __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v23;
    __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v23 = 0;
    SData/*9:0*/ __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v0;
    __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v1;
    __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v1;
    __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v2;
    __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v2;
    __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v3;
    __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v3;
    __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v3 = 0;
    IData/*31:0*/ __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v4;
    __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v4 = 0;
    SData/*9:0*/ __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v4;
    __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v4 = 0;
    // Body
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4 = 0U;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v32 = 0U;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v33 = 0U;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v34 = 0U;
    __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v35 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v0 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18 = 0U;
    __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk6__DOT__i = 4U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 4U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__i = 2U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk3__DOT__i = 4U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__test__DOT__cpu__DOT__instruction_memory__DOT__mem__v0 
                = (0x3ffU & vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__instruction_memory__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__test__DOT__cpu__DOT__instruction_memory__DOT__mem__v0));
            vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i);
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v0 
                = (0x3ffU & vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v0));
            vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i);
        }
    } else {
        vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 4U;
        if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
                         [0U]))) {
            VL_WRITEF_NX("[Data Memory] Writing %10# to address %10#\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                         [0U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                         [0U]);
            __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v1 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                [0U];
            __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v1 
                = (0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                   [0U]);
            vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem.enqueue(__VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v1, (IData)(__VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v1));
        }
        if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
                         [1U]))) {
            VL_WRITEF_NX("[Data Memory] Writing %10# to address %10#\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                         [1U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                         [1U]);
            __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v2 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                [1U];
            __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v2 
                = (0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                   [1U]);
            vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem.enqueue(__VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v2, (IData)(__VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v2));
        }
        if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
                         [2U]))) {
            VL_WRITEF_NX("[Data Memory] Writing %10# to address %10#\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                         [2U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                         [2U]);
            __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v3 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                [2U];
            __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v3 
                = (0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                   [2U]);
            vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem.enqueue(__VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v3, (IData)(__VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v3));
        }
        if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector
                         [3U]))) {
            VL_WRITEF_NX("[Data Memory] Writing %10# to address %10#\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                         [3U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                         [3U]);
            __VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v4 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data
                [3U];
            __VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v4 
                = (0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr
                   [3U]);
            vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem.enqueue(__VdlyVal__test__DOT__cpu__DOT__data_memory__DOT__mem__v4, (IData)(__VdlyDim0__test__DOT__cpu__DOT__data_memory__DOT__mem__v4));
        }
    }
    if (vlSelfRef.reset) {
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v0 = 1U;
    } else {
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [0U]);
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v5 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [1U]);
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v6 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [2U]);
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v7 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] && vlSelfRef.test__DOT__cpu__DOT__branch_vector
               [3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.reset))) {
        VL_WRITEF_NX("Resetting registers\n",0);
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__i = 0x20U;
        __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v0 = 1U;
    } else {
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__j = 4U;
        if (VL_UNLIKELY(((vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                          [0U] & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                                  [0U]))))) {
            VL_WRITEF_NX("Writing %11d to register %2# (reg_write %1#)\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                         [0U],5,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                         [0U],1,vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                         [0U]);
            __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v32 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                [0U];
            __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v32 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                [0U];
            __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v32 = 1U;
        }
        if (VL_UNLIKELY(((vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                          [1U] & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                                  [1U]))))) {
            VL_WRITEF_NX("Writing %11d to register %2# (reg_write %1#)\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                         [1U],5,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                         [1U],1,vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                         [1U]);
            __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v33 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                [1U];
            __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v33 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                [1U];
            __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v33 = 1U;
        }
        if (VL_UNLIKELY(((vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                          [2U] & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                                  [2U]))))) {
            VL_WRITEF_NX("Writing %11d to register %2# (reg_write %1#)\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                         [2U],5,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                         [2U],1,vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                         [2U]);
            __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v34 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                [2U];
            __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v34 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                [2U];
            __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v34 = 1U;
        }
        if (VL_UNLIKELY(((vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                          [3U] & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                                  [3U]))))) {
            VL_WRITEF_NX("Writing %11d to register %2# (reg_write %1#)\n",0,
                         32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                         [3U],5,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                         [3U],1,vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg
                         [3U]);
            __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v35 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data
                [3U];
            __VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v35 
                = vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs
                [3U];
            __VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v35 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v0 = 1U;
    } else {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [0U][0U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [0U][1U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [0U][2U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [0U][3U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [1U][0U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [1U][1U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [1U][2U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18 = 1U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
            [1U][3U];
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19 
            = vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0;
        __VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19 = 1U;
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v20 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [0U] ? vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd
               [0U] : 0U);
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v21 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [1U] ? vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd
               [1U] : 0U);
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v22 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [2U] ? vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd
               [2U] : 0U);
        __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v23 
            = (vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
               [3U] ? vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd
               [3U] : 0U);
    }
    vlSelfRef.test__DOT__cpu__DOT__branch = 0U;
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i)) {
            if (vlSelfRef.test__DOT__cpu__DOT__branch_vector
                [(3U & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i)]) {
                vlSelfRef.test__DOT__cpu__DOT__branch = 1U;
                goto __Vlabel2;
            }
            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i);
        }
        __Vlabel2: ;
    }
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v0 
        = ((0U < vlSelfRef.test__DOT__cpu__DOT__pointer_bound)
            ? ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & vlSelfRef.test__DOT__cpu__DOT__PC_increment)])
            : ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & (- vlSelfRef.test__DOT__cpu__DOT__PC_increment))]));
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v1 
        = ((1U < vlSelfRef.test__DOT__cpu__DOT__pointer_bound)
            ? ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__PC_increment))])
            : ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & ((IData)(1U) - vlSelfRef.test__DOT__cpu__DOT__PC_increment))]));
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v2 
        = ((2U < vlSelfRef.test__DOT__cpu__DOT__pointer_bound)
            ? ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & ((IData)(2U) + vlSelfRef.test__DOT__cpu__DOT__PC_increment))])
            : ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & ((IData)(2U) - vlSelfRef.test__DOT__cpu__DOT__PC_increment))]));
    __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v3 
        = ((3U < vlSelfRef.test__DOT__cpu__DOT__pointer_bound)
            ? ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & ((IData)(3U) + vlSelfRef.test__DOT__cpu__DOT__PC_increment))])
            : ((IData)(vlSelfRef.test__DOT__cpu__DOT__branch)
                ? 0x13U : vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg
               [(3U & ((IData)(3U) - vlSelfRef.test__DOT__cpu__DOT__PC_increment))]));
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk9__DOT__pointer = 4U;
    vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__instruction_memory__DOT__mem.commit(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__mem);
    vlSelfRef.__VdlyCommitQueuetest__DOT__cpu__DOT__data_memory__DOT__mem.commit(vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__mem);
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v0) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[0U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v4;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[1U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v5;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[2U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v6;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[3U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__branchboard__v7;
    }
    if (__VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v0) {
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[3U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[4U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[5U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[6U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[7U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[8U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[9U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0xaU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0xbU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0xcU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0xdU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0xeU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0xfU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x10U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x11U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x12U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x13U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x14U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x15U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x16U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x17U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x18U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x19U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x1aU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x1bU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x1cU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x1dU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x1eU] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v32) {
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[__VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v32] 
            = __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v32;
    }
    if (__VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v33) {
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[__VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v33] 
            = __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v33;
    }
    if (__VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v34) {
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[__VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v34] 
            = __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v34;
    }
    if (__VdlySet__test__DOT__cpu__DOT__rf__DOT__regs__v35) {
        vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[__VdlyDim0__test__DOT__cpu__DOT__rf__DOT__regs__v35] 
            = __VdlyVal__test__DOT__cpu__DOT__rf__DOT__regs__v35;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v0) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][3U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][3U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][3U] = 0U;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][0U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v12;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][1U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v13;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][2U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v14;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[1U][3U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v15;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][0U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v16;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][1U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v17;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][2U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v18;
    }
    if (__VdlySet__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[2U][3U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v19;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][0U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v20;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][1U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v21;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][2U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v22;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[0U][3U] 
            = __VdlyVal__test__DOT__cpu__DOT__scoreboard__DOT__scoreboard__v23;
    }
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[0U] 
        = __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v0;
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[1U] 
        = __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v1;
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[2U] 
        = __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v2;
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[3U] 
        = __VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg_temp__v3;
    vlSelfRef.test__DOT__cpu__DOT__opcode_vector[0U] 
        = (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [0U]);
    vlSelfRef.test__DOT__cpu__DOT__opcode_vector[1U] 
        = (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [1U]);
    vlSelfRef.test__DOT__cpu__DOT__opcode_vector[2U] 
        = (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [2U]);
    vlSelfRef.test__DOT__cpu__DOT__opcode_vector[3U] 
        = (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [3U]);
    vlSelfRef.test__DOT__cpu__DOT__funct3_vector[0U] 
        = (7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                 [0U] >> 0xcU));
    vlSelfRef.test__DOT__cpu__DOT__funct3_vector[1U] 
        = (7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                 [1U] >> 0xcU));
    vlSelfRef.test__DOT__cpu__DOT__funct3_vector[2U] 
        = (7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                 [2U] >> 0xcU));
    vlSelfRef.test__DOT__cpu__DOT__funct3_vector[3U] 
        = (7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                 [3U] >> 0xcU));
    vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[0U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [0U])) || (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])));
    vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[1U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [1U])) || (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])));
    vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[2U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [2U])) || (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])));
    vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[3U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [3U])) || (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])));
    vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[0U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [0U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[1U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [1U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[2U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [2U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[3U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [3U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U]))));
    vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[0U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [0U])) ? 0U : ((0x13U == (0x7fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [0U]))
                                      ? ((0x4000U & 
                                          vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [0U]) ? 2U
                                          : ((0x2000U 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [0U])
                                              ? ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [0U])
                                                  ? 2U
                                                  : 1U)
                                              : ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [0U])
                                                  ? 2U
                                                  : 1U)))
                                      : ((3U == (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [0U]))
                                          ? 1U : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [0U]))
                                                   ? 3U
                                                   : 0U))));
    vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[1U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [1U])) ? 0U : ((0x13U == (0x7fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [1U]))
                                      ? ((0x4000U & 
                                          vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [1U]) ? 2U
                                          : ((0x2000U 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [1U])
                                              ? ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [1U])
                                                  ? 2U
                                                  : 1U)
                                              : ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [1U])
                                                  ? 2U
                                                  : 1U)))
                                      : ((3U == (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [1U]))
                                          ? 1U : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [1U]))
                                                   ? 3U
                                                   : 0U))));
    vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[2U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [2U])) ? 0U : ((0x13U == (0x7fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [2U]))
                                      ? ((0x4000U & 
                                          vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [2U]) ? 2U
                                          : ((0x2000U 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [2U])
                                              ? ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [2U])
                                                  ? 2U
                                                  : 1U)
                                              : ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [2U])
                                                  ? 2U
                                                  : 1U)))
                                      : ((3U == (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [2U]))
                                          ? 1U : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [2U]))
                                                   ? 3U
                                                   : 0U))));
    vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[3U] 
        = ((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [3U])) ? 0U : ((0x13U == (0x7fU 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [3U]))
                                      ? ((0x4000U & 
                                          vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [3U]) ? 2U
                                          : ((0x2000U 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [3U])
                                              ? ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [3U])
                                                  ? 2U
                                                  : 1U)
                                              : ((0x1000U 
                                                  & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                  [3U])
                                                  ? 2U
                                                  : 1U)))
                                      : ((3U == (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [3U]))
                                          ? 1U : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [3U]))
                                                   ? 3U
                                                   : 0U))));
    vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[0U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [0U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[1U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [1U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[2U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [2U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[3U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [3U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U]))));
    vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[0U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [0U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [0U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [0U])))));
    vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[1U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [1U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [1U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [1U])))));
    vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[2U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [2U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [2U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [2U])))));
    vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[3U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [3U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [3U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [3U])))));
    vlSelfRef.test__DOT__cpu__DOT__branch_vector[0U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [0U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [0U])) 
                                     && ((0x23U != 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])) && 
                                         (0x63U == 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U]))))));
    vlSelfRef.test__DOT__cpu__DOT__branch_vector[1U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [1U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [1U])) 
                                     && ((0x23U != 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])) && 
                                         (0x63U == 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U]))))));
    vlSelfRef.test__DOT__cpu__DOT__branch_vector[2U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [2U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [2U])) 
                                     && ((0x23U != 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])) && 
                                         (0x63U == 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U]))))));
    vlSelfRef.test__DOT__cpu__DOT__branch_vector[3U] 
        = ((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                      [3U])) && ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [3U])) 
                                     && ((0x23U != 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])) && 
                                         (0x63U == 
                                          (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U]))))));
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector[0U] = 
        (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                  [0U] >> 0xfU));
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector[1U] = 
        (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                  [1U] >> 0xfU));
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector[2U] = 
        (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                  [2U] >> 0xfU));
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector[3U] = 
        (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                  [3U] >> 0xfU));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7 
        = (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [0U] >> 0x19U);
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [0U] >> 0x14U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [0U] >> 7U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__i_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__s_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__b_type_imm 
        = (((0x1000U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7) 
                        << 6U)) | (0x800U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd) 
                                             << 0xbU))) 
           | ((0x7e0U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7) 
                         << 5U)) | (0x1eU & (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd))));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7 
        = (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [1U] >> 0x19U);
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [1U] >> 0x14U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [1U] >> 7U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__i_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__s_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__b_type_imm 
        = (((0x1000U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7) 
                        << 6U)) | (0x800U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd) 
                                             << 0xbU))) 
           | ((0x7e0U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7) 
                         << 5U)) | (0x1eU & (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd))));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7 
        = (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [2U] >> 0x19U);
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [2U] >> 0x14U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [2U] >> 7U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__i_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__s_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__b_type_imm 
        = (((0x1000U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7) 
                        << 6U)) | (0x800U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd) 
                                             << 0xbU))) 
           | ((0x7e0U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7) 
                         << 5U)) | (0x1eU & (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd))));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7 
        = (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
           [3U] >> 0x19U);
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [3U] >> 0x14U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd 
        = (0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                    [3U] >> 7U));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__i_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__s_type_imm 
        = (((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7) 
            << 5U) | (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd));
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__b_type_imm 
        = (((0x1000U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7) 
                        << 6U)) | (0x800U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd) 
                                             << 0xbU))) 
           | ((0x7e0U & ((IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7) 
                         << 5U)) | (0x1eU & (IData)(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd))));
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[0U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
           [0U] | vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
           [0U]);
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[1U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
           [3U] | vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
           [3U]);
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[2U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
           [2U] | vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
           [2U]);
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[3U] 
        = (vlSelfRef.test__DOT__cpu__DOT__mem_write_vector
           [1U] | vlSelfRef.test__DOT__cpu__DOT__mem_read_vector
           [1U]);
    vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[0U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[1U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[2U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[3U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk5__DOT__i = 4U;
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i)) {
            if (vlSelfRef.test__DOT__cpu__DOT__branch_vector
                [(3U & vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i)]) {
                vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i);
                while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j)) {
                    vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[(3U 
                                                                       & vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j)] = 0U;
                    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j 
                        = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j);
                }
                goto __Vlabel3;
            }
            vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i);
        }
        __Vlabel3: ;
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs1_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__funct7_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7;
    vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__i_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__s_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__b_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__rd_vector[0U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd;
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector[0U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2;
    vlSelfRef.test__DOT__cpu__DOT__funct7_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7;
    vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__i_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__s_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__b_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__rd_vector[1U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd;
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector[1U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2;
    vlSelfRef.test__DOT__cpu__DOT__funct7_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7;
    vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__i_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__s_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__b_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__rd_vector[2U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd;
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector[2U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2;
    vlSelfRef.test__DOT__cpu__DOT__funct7_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7;
    vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__i_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__s_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__b_type_imm;
    vlSelfRef.test__DOT__cpu__DOT__rd_vector[3U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd;
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector[3U] = vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2;
    vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[0U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[1U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[2U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[3U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i)) {
            if (vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op
                [(3U & vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i)]) {
                vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i);
                while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                    vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[(3U 
                                                                    & vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)] = 0U;
                    vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                        = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                }
                goto __Vlabel4;
            }
            vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i);
        }
        __Vlabel4: ;
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
        [0U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
        [1U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
        [2U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
        [3U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rd_vector[3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rs2_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[0U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[1U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[2U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[3U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 1U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
            if (((((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1
                    [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                    == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                    [0U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                             [0U])) | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2
                                        [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                                        == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                        [0U]) & (0U 
                                                 != 
                                                 vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                                 [0U]))) 
                 | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                     == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [0U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                              [0U])))) {
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                      & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) {
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                          & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)] = 0U;
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
                goto __Vlabel5;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel5: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 2U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
            if (((((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1
                    [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                    == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                    [1U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                             [1U])) | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2
                                        [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                                        == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                        [1U]) & (0U 
                                                 != 
                                                 vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                                 [1U]))) 
                 | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                     == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [1U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                              [1U])))) {
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                      & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) {
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                          & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)] = 0U;
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
                goto __Vlabel6;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel6: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 3U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
            if (((((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1
                    [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                    == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                    [2U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                             [2U])) | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2
                                        [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                                        == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                        [2U]) & (0U 
                                                 != 
                                                 vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                                 [2U]))) 
                 | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                     == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [2U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                              [2U])))) {
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                      & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) {
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                          & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)] = 0U;
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
                goto __Vlabel7;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel7: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)) {
            if (((((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1
                    [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                    == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                    [3U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                             [3U])) | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2
                                        [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                                        == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                        [3U]) & (0U 
                                                 != 
                                                 vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                                                 [3U]))) 
                 | ((vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [(3U & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] 
                     == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                     [3U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd
                              [3U])))) {
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                      & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j)] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                    = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
                while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) {
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[(3U 
                                                                          & vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)] = 0U;
                    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
                goto __Vlabel8;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel8: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__i = 4U;
    VL_WRITEF_NX("Reading register           0: %10#\nReading register           0: %10#\nReading register           1: %10#\nReading register           1: %10#\nReading register           2: %10#\nReading register           2: %10#\nReading register           3: %10#\nReading register           3: %10#\n",0,
                 32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
                 [0U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
                 [0U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
                 [1U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
                 [1U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
                 [2U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
                 [2U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s
                 [3U]],32,vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
                 [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
                 [3U]]);
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
        [0U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
        [1U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
        [2U]];
    vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs
        [vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s
        [3U]];
    vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk7__DOT__i = 4U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [0U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [0U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [0U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [0U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 2U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 3U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel9;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel9: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [0U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [0U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [0U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [0U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 2U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 3U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel10;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel10: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [0U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [0U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [0U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [0U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 2U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 3U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel11;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel11: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [1U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [1U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [1U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [1U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 3U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel12;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel12: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [1U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [1U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [1U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [1U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 3U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel13;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel13: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [1U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [1U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [1U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [1U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 3U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel14;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel14: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [2U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [2U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [2U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [2U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel15;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel15: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [2U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [2U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [2U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [2U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel16;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel16: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [2U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [2U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [2U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [2U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel17;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel17: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [3U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [3U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [0U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [3U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [3U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel18;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel18: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [3U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [3U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [1U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [3U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [3U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel19;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel19: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)) {
            if ((((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                   [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                   == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                   [3U]) & (0U != vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1
                            [3U])) | ((vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                       [2U][(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)] 
                                       == vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                       [3U]) & (0U 
                                                != 
                                                vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2
                                                [3U])))) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 4U;
                goto __Vlabel20;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel20: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 3U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__i = 4U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch = 0U;
    vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i)) {
            if (vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard
                [(3U & vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i)]) {
                vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch = 1U;
                goto __Vlabel21;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i);
        }
        __Vlabel21: ;
    }
    if (vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch) {
        vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk13__DOT__i = 4U;
    }
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[0U] 
        = (((vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector
             [0U] & vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector
             [0U]) & vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector
            [0U]) & vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector
           [0U]);
    vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[1U] 
        = (((vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector
             [1U] & vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector
             [1U]) & vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector
            [1U]) & vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector
           [1U]);
    vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[2U] 
        = (((vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector
             [2U] & vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector
             [2U]) & vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector
            [2U]) & vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector
           [2U]);
    vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[3U] 
        = (((vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector
             [3U] & vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector
             [3U]) & vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector
            [3U]) & vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector
           [3U]);
    vlSelfRef.test__DOT__cpu__DOT__PC_increment = vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__PC_increment = (vlSelfRef.test__DOT__cpu__DOT__PC_increment 
                                                   + 
                                                   vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
                                                   [1U]);
    vlSelfRef.test__DOT__cpu__DOT__PC_increment = (vlSelfRef.test__DOT__cpu__DOT__PC_increment 
                                                   + 
                                                   vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
                                                   [2U]);
    vlSelfRef.test__DOT__cpu__DOT__PC_increment = (vlSelfRef.test__DOT__cpu__DOT__PC_increment 
                                                   + 
                                                   vlSelfRef.test__DOT__cpu__DOT__final_mask_vector
                                                   [3U]);
    vlSelfRef.test__DOT__cpu__DOT__pointer_bound = 
        ((IData)(4U) - vlSelfRef.test__DOT__cpu__DOT__PC_increment);
}

VL_INLINE_OPT void Vtest___024root___nba_sequent__TOP__3(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___nba_sequent__TOP__3\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__memory_address_vector
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg
        [3U];
    if (vlSelfRef.__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[0U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[1U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[2U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[3U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v7;
    }
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg
        [3U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector
        [0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector
        [1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector
        [2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector
        [3U];
    if (vlSelfRef.__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v0) {
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[0U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[1U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[2U] = 0U;
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v4) {
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[0U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v4;
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[1U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v5;
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[2U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v6;
        vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[3U] 
            = vlSelfRef.__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v7;
    }
}

VL_INLINE_OPT void Vtest___024root___nba_comb__TOP__0(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___nba_comb__TOP__0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__read_enable_vector
                     [0U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[0U] 
            = vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
              [0U])];
        VL_WRITEF_NX("[Instruction Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
                     [0U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
                     [0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__read_enable_vector
                     [1U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[1U] 
            = vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
              [1U])];
        VL_WRITEF_NX("[Instruction Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
                     [1U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
                     [1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__read_enable_vector
                     [2U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[2U] 
            = vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
              [2U])];
        VL_WRITEF_NX("[Instruction Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
                     [2U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
                     [2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__read_enable_vector
                     [3U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[3U] 
            = vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
              [3U])];
        VL_WRITEF_NX("[Instruction Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
                     [3U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr
                     [3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
                     [0U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[0U] 
            = vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
              [0U])];
        VL_WRITEF_NX("[Data Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
                     [0U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
                     [0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
                     [1U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[1U] 
            = vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
              [1U])];
        VL_WRITEF_NX("[Data Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
                     [1U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
                     [1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
                     [2U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[2U] 
            = vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
              [2U])];
        VL_WRITEF_NX("[Data Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
                     [2U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
                     [2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector
                     [3U]))) {
        vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[3U] 
            = vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__mem
            [(0x3ffU & vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
              [3U])];
        VL_WRITEF_NX("[Data Memory] Reading %10# from address %10#\n",0,
                     32,vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
                     [3U],32,vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr
                     [3U]);
    }
    vlSelfRef.test__DOT__cpu__DOT__stall_fetch = 0U;
    vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i)) {
            if ((vlSelfRef.test__DOT__cpu__DOT__branch_vector
                 [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i)] 
                 | vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
                 [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i)])) {
                vlSelfRef.test__DOT__cpu__DOT__stall_fetch = 1U;
                goto __Vlabel22;
            }
            vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i);
        }
        __Vlabel22: ;
    }
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__instruction_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data
        [0U];
    vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[0U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
        [3U];
    vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[1U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
        [2U];
    vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[2U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
        [1U];
    vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[3U] 
        = vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data
        [0U];
}

void Vtest___024root___eval_triggers__act(Vtest___024root* vlSelf);

bool Vtest___024root___eval_phase__act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_phase__act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest___024root___eval_phase__nba(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_phase__nba\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__nba(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_debug_assertions\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
