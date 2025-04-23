// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest__pch.h"
#include "Vtest___024root.h"

VL_ATTR_COLD void Vtest___024root___eval_static(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_static\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest___024root___eval_initial__TOP(Vtest___024root* vlSelf);
VL_ATTR_COLD void Vtest___024root____Vm_traceActivitySetAll(Vtest___024root* vlSelf);

VL_ATTR_COLD void Vtest___024root___eval_initial(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest___024root___eval_initial__TOP(vlSelf);
    Vtest___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vtest___024root___eval_initial__TOP(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial__TOP\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.test__DOT__cpu__DOT__jump_vector[0U] = 0U;
    vlSelfRef.test__DOT__cpu__DOT__jump_vector[1U] = 0U;
    vlSelfRef.test__DOT__cpu__DOT__jump_vector[2U] = 0U;
    vlSelfRef.test__DOT__cpu__DOT__jump_vector[3U] = 0U;
    vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[0U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[1U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[2U] = 1U;
    vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[3U] = 1U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x66696c65U;
    __Vtemp_1[2U] = 0x6f72795fU;
    __Vtemp_1[3U] = 0x6d656dU;
    VL_READMEM_N(false, 32, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x66696c65U;
    __Vtemp_2[2U] = 0x6f72795fU;
    __Vtemp_2[3U] = 0x6d656dU;
    VL_READMEM_N(false, 32, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtest___024root___eval_final(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_final\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__stl(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest___024root___eval_phase__stl(Vtest___024root* vlSelf);

VL_ATTR_COLD void Vtest___024root___eval_settle(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_settle\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtest___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__stl(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___dump_triggers__stl\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest___024root___stl_sequent__TOP__0(Vtest___024root* vlSelf);

VL_ATTR_COLD void Vtest___024root___eval_stl(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_stl\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest___024root___stl_sequent__TOP__0(vlSelf);
        Vtest___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtest___024root___stl_sequent__TOP__0(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___stl_sequent__TOP__0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[0U] = vlSelfRef.test__DOT__cpu__DOT__basePC;
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[1U] = 
        ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__basePC);
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[2U] = 
        ((IData)(2U) + vlSelfRef.test__DOT__cpu__DOT__basePC);
    vlSelfRef.test__DOT__cpu__DOT__PC_vector[3U] = 
        ((IData)(3U) + vlSelfRef.test__DOT__cpu__DOT__basePC);
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
    vlSelfRef.test__DOT__cpu__DOT__stall_fetch = 0U;
    vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i)) {
            if ((vlSelfRef.test__DOT__cpu__DOT__branch_vector
                 [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i)] 
                 | vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg
                 [(3U & vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i)])) {
                vlSelfRef.test__DOT__cpu__DOT__stall_fetch = 1U;
                goto __Vlabel1;
            }
            vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i);
        }
        __Vlabel1: ;
    }
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
                goto __Vlabel2;
            }
            vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i);
        }
        __Vlabel2: ;
    }
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
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[3U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[0U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[2U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[1U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[1U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[2U];
    vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[0U] 
        = vlSelfRef.test__DOT__cpu__DOT__PC_vector[3U];
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
                goto __Vlabel3;
            }
            vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i);
        }
        __Vlabel3: ;
    }
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
                goto __Vlabel4;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel4: ;
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
                goto __Vlabel5;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel5: ;
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
                goto __Vlabel6;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel6: ;
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
                goto __Vlabel7;
            }
            vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
        }
        __Vlabel7: ;
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
                goto __Vlabel8;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel8: ;
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
                goto __Vlabel19;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
        }
        __Vlabel19: ;
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
                goto __Vlabel20;
            }
            vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i 
                = ((IData)(1U) + vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i);
        }
        __Vlabel20: ;
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

VL_ATTR_COLD void Vtest___024root___eval_triggers__stl(Vtest___024root* vlSelf);

VL_ATTR_COLD bool Vtest___024root___eval_phase__stl(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_phase__stl\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___dump_triggers__act\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__nba(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___dump_triggers__nba\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest___024root____Vm_traceActivitySetAll(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root____Vm_traceActivitySetAll\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___ctor_var_reset\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->runtime = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__cpu__DOT__stall_fetch = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__cpu__DOT__basePC = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__PC_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__read_enable_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test__DOT__cpu__DOT__btype_imm_sign_extended = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_vector_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__PC_vector_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__opcode_vector[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__funct3_vector[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__funct7_vector[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__rd_vector[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__rs1_vector[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__rs2_vector[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__i_type_imm_vector[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__s_type_imm_vector[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__b_type_imm_vector[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__reg_write_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_read_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_write_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_to_reg_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__branch_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__jump_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__imm_sel_vector[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_vector_preg_temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__rs1_vector_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__rs2_vector_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__rf__write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__rf__rs2s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__rf__rs1s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__scoreboard_mask_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__branch_mask_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_mask_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__cross_dep_mask_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__final_mask_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->test__DOT__cpu__DOT__PC_increment = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__pointer_bound = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__branch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_rd_vector_preg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__reg_write_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_read_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_write_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_to_reg_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__branch_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__jump_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__imm_sel_vector_preg[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__decode_execute_PC_vector_preg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__alu_result_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__zero_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__zero_vector_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__reg_write_vector_memory_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_read_vector_memory_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_write_vector_memory_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__branch_vector_memory_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__jump_vector_memory_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__execute_memory_PC_vector_preg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__execute_memory_rd_vector_preg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_result_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_address_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_write_data_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_read_enable_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_write_enable_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellout__data_memory__read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_result_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__branch_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__jump_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__zero_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__register_write_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__alu_result_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__write_back_result_vector[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__b_type_imm = VL_RAND_RESET_I(13);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__s_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__i_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2 = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7 = VL_RAND_RESET_I(7);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__b_type_imm = VL_RAND_RESET_I(13);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__s_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__i_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2 = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7 = VL_RAND_RESET_I(7);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__b_type_imm = VL_RAND_RESET_I(13);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__s_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__i_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2 = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7 = VL_RAND_RESET_I(7);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__b_type_imm = VL_RAND_RESET_I(13);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__s_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__i_type_imm = VL_RAND_RESET_I(12);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2 = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7 = VL_RAND_RESET_I(7);
    vlSelf->test__DOT__cpu__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk9__DOT__pointer = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2 = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2 = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2 = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2 = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__unnamedblk12__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk13__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk14__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk15__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk16__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__unnamedblk17__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_memory__DOT__write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_memory__DOT__write_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_memory__DOT__write_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__instruction_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test__DOT__cpu__DOT__rf__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__cpu__DOT__rf__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard[__Vi0][__Vi1] = VL_RAND_RESET_I(5);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__branchboard[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk13__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__scoreboard__DOT____Vlvbound_hb3eb3987__0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->test__DOT__cpu__DOT__data_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v0 = 0;
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v4 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__test__DOT__cpu__DOT__instruction_vector_preg__v4 = 0;
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v5 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__instruction_vector_preg__v7 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v0 = 0;
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v4 = 0;
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__test__DOT__cpu__DOT__register_write_vector_writeback_preg__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
