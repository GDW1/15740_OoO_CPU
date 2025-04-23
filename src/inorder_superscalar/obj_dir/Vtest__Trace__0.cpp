// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


void Vtest___024root__trace_chg_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_chg_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest___024root__trace_chg_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_chg_0_sub_0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[0]));
        bufp->chgBit(oldp+1,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[1]));
        bufp->chgBit(oldp+2,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[2]));
        bufp->chgBit(oldp+3,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[3]));
        bufp->chgBit(oldp+4,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[0]));
        bufp->chgBit(oldp+5,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[1]));
        bufp->chgBit(oldp+6,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[2]));
        bufp->chgBit(oldp+7,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[3]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+8,(vlSelfRef.test__DOT__cpu__DOT__basePC),32);
        bufp->chgIData(oldp+9,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.test__DOT__cpu__DOT__btype_imm_sign_extended),32);
        bufp->chgIData(oldp+14,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[0]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[1]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[2]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[3]),32);
        bufp->chgCData(oldp+18,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[0]),7);
        bufp->chgCData(oldp+19,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[1]),7);
        bufp->chgCData(oldp+20,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[2]),7);
        bufp->chgCData(oldp+21,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[3]),7);
        bufp->chgCData(oldp+22,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[0]),3);
        bufp->chgCData(oldp+23,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[1]),3);
        bufp->chgCData(oldp+24,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[2]),3);
        bufp->chgCData(oldp+25,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[3]),3);
        bufp->chgCData(oldp+26,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[0]),7);
        bufp->chgCData(oldp+27,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[1]),7);
        bufp->chgCData(oldp+28,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[2]),7);
        bufp->chgCData(oldp+29,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[3]),7);
        bufp->chgCData(oldp+30,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[0]),5);
        bufp->chgCData(oldp+31,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[1]),5);
        bufp->chgCData(oldp+32,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[2]),5);
        bufp->chgCData(oldp+33,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[3]),5);
        bufp->chgSData(oldp+34,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[0]),12);
        bufp->chgSData(oldp+35,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[1]),12);
        bufp->chgSData(oldp+36,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[2]),12);
        bufp->chgSData(oldp+37,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[3]),12);
        bufp->chgSData(oldp+38,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[0]),12);
        bufp->chgSData(oldp+39,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[1]),12);
        bufp->chgSData(oldp+40,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[2]),12);
        bufp->chgSData(oldp+41,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[3]),12);
        bufp->chgSData(oldp+42,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[0]),13);
        bufp->chgSData(oldp+43,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[1]),13);
        bufp->chgSData(oldp+44,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[2]),13);
        bufp->chgSData(oldp+45,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[3]),13);
        bufp->chgIData(oldp+46,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[0]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[1]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[2]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[3]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[0]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[1]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[2]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[3]),32);
        bufp->chgBit(oldp+54,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[0]));
        bufp->chgBit(oldp+55,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[1]));
        bufp->chgBit(oldp+56,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[2]));
        bufp->chgBit(oldp+57,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[3]));
        bufp->chgBit(oldp+58,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[0]));
        bufp->chgBit(oldp+59,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[1]));
        bufp->chgBit(oldp+60,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[2]));
        bufp->chgBit(oldp+61,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[3]));
        bufp->chgBit(oldp+62,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[0]));
        bufp->chgBit(oldp+63,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[1]));
        bufp->chgBit(oldp+64,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[2]));
        bufp->chgBit(oldp+65,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[3]));
        bufp->chgBit(oldp+66,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[0]));
        bufp->chgBit(oldp+67,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[1]));
        bufp->chgBit(oldp+68,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[2]));
        bufp->chgBit(oldp+69,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[3]));
        bufp->chgBit(oldp+70,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[0]));
        bufp->chgBit(oldp+71,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[1]));
        bufp->chgBit(oldp+72,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[2]));
        bufp->chgBit(oldp+73,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[3]));
        bufp->chgBit(oldp+74,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[0]));
        bufp->chgBit(oldp+75,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[1]));
        bufp->chgBit(oldp+76,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[2]));
        bufp->chgBit(oldp+77,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[3]));
        bufp->chgCData(oldp+78,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[0]),4);
        bufp->chgCData(oldp+79,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[1]),4);
        bufp->chgCData(oldp+80,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[2]),4);
        bufp->chgCData(oldp+81,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[3]),4);
        bufp->chgIData(oldp+82,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[0]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[1]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[2]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[3]),32);
        bufp->chgBit(oldp+86,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[0]));
        bufp->chgBit(oldp+87,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[1]));
        bufp->chgBit(oldp+88,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[2]));
        bufp->chgBit(oldp+89,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[3]));
        bufp->chgIData(oldp+90,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[0]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[1]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[2]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[3]),32);
        bufp->chgBit(oldp+94,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[0]));
        bufp->chgBit(oldp+95,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[1]));
        bufp->chgBit(oldp+96,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[2]));
        bufp->chgBit(oldp+97,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[3]));
        bufp->chgBit(oldp+98,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[0]));
        bufp->chgBit(oldp+99,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[1]));
        bufp->chgBit(oldp+100,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[2]));
        bufp->chgBit(oldp+101,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[3]));
        bufp->chgBit(oldp+102,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[0]));
        bufp->chgBit(oldp+103,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[1]));
        bufp->chgBit(oldp+104,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[2]));
        bufp->chgBit(oldp+105,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[3]));
        bufp->chgBit(oldp+106,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[0]));
        bufp->chgBit(oldp+107,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[1]));
        bufp->chgBit(oldp+108,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[2]));
        bufp->chgBit(oldp+109,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[3]));
        bufp->chgBit(oldp+110,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[0]));
        bufp->chgBit(oldp+111,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[1]));
        bufp->chgBit(oldp+112,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[2]));
        bufp->chgBit(oldp+113,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[3]));
        bufp->chgBit(oldp+114,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[0]));
        bufp->chgBit(oldp+115,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[1]));
        bufp->chgBit(oldp+116,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[2]));
        bufp->chgBit(oldp+117,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[3]));
        bufp->chgBit(oldp+118,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[0]));
        bufp->chgBit(oldp+119,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[1]));
        bufp->chgBit(oldp+120,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[2]));
        bufp->chgBit(oldp+121,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[3]));
        bufp->chgCData(oldp+122,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[0]),5);
        bufp->chgCData(oldp+123,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[1]),5);
        bufp->chgCData(oldp+124,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[2]),5);
        bufp->chgCData(oldp+125,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[3]),5);
        bufp->chgIData(oldp+126,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[0]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[1]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[2]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[3]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[0]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[1]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[2]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[3]),32);
        bufp->chgBit(oldp+134,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[0]));
        bufp->chgBit(oldp+135,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[1]));
        bufp->chgBit(oldp+136,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[2]));
        bufp->chgBit(oldp+137,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[3]));
        bufp->chgIData(oldp+138,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[0]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[1]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[2]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[3]),32);
        bufp->chgBit(oldp+142,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[0]));
        bufp->chgBit(oldp+143,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[1]));
        bufp->chgBit(oldp+144,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[2]));
        bufp->chgBit(oldp+145,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[3]));
        bufp->chgBit(oldp+146,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[0]));
        bufp->chgBit(oldp+147,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[1]));
        bufp->chgBit(oldp+148,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[2]));
        bufp->chgBit(oldp+149,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[3]));
        bufp->chgIData(oldp+150,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[0]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[1]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[2]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[3]),32);
        bufp->chgCData(oldp+154,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[0]),5);
        bufp->chgCData(oldp+155,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[1]),5);
        bufp->chgCData(oldp+156,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[2]),5);
        bufp->chgCData(oldp+157,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[3]),5);
        bufp->chgBit(oldp+158,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[0]));
        bufp->chgBit(oldp+159,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[1]));
        bufp->chgBit(oldp+160,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[2]));
        bufp->chgBit(oldp+161,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[3]));
        bufp->chgBit(oldp+162,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[0]));
        bufp->chgBit(oldp+163,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[1]));
        bufp->chgBit(oldp+164,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[2]));
        bufp->chgBit(oldp+165,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[3]));
        bufp->chgBit(oldp+166,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[0]));
        bufp->chgBit(oldp+167,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[1]));
        bufp->chgBit(oldp+168,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[2]));
        bufp->chgBit(oldp+169,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[3]));
        bufp->chgBit(oldp+170,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[0]));
        bufp->chgBit(oldp+171,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[1]));
        bufp->chgBit(oldp+172,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[2]));
        bufp->chgBit(oldp+173,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[3]));
        bufp->chgIData(oldp+174,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[0]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[1]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[2]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[3]),32);
        bufp->chgCData(oldp+178,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[0]),5);
        bufp->chgCData(oldp+179,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[1]),5);
        bufp->chgCData(oldp+180,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[2]),5);
        bufp->chgCData(oldp+181,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[3]),5);
        bufp->chgIData(oldp+182,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[0]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[1]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[2]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[3]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                 [0U]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2),32);
        bufp->chgCData(oldp+188,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                 [0U]),7);
        bufp->chgCData(oldp+189,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                 [0U]),3);
        bufp->chgCData(oldp+190,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                 [0U]),7);
        bufp->chgIData(oldp+191,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result),32);
        bufp->chgBit(oldp+192,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero));
        bufp->chgCData(oldp+193,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op),6);
        bufp->chgIData(oldp+194,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                 [1U]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2),32);
        bufp->chgCData(oldp+196,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                 [1U]),7);
        bufp->chgCData(oldp+197,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                 [1U]),3);
        bufp->chgCData(oldp+198,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                 [1U]),7);
        bufp->chgIData(oldp+199,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result),32);
        bufp->chgBit(oldp+200,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero));
        bufp->chgCData(oldp+201,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op),6);
        bufp->chgIData(oldp+202,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                 [2U]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2),32);
        bufp->chgCData(oldp+204,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                 [2U]),7);
        bufp->chgCData(oldp+205,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                 [2U]),3);
        bufp->chgCData(oldp+206,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                 [2U]),7);
        bufp->chgIData(oldp+207,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result),32);
        bufp->chgBit(oldp+208,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero));
        bufp->chgCData(oldp+209,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op),6);
        bufp->chgIData(oldp+210,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                                 [3U]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2),32);
        bufp->chgCData(oldp+212,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                                 [3U]),7);
        bufp->chgCData(oldp+213,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                                 [3U]),3);
        bufp->chgCData(oldp+214,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                                 [3U]),7);
        bufp->chgIData(oldp+215,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result),32);
        bufp->chgBit(oldp+216,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero));
        bufp->chgCData(oldp+217,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op),6);
        bufp->chgIData(oldp+218,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[0]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[1]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[2]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[3]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[0]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[1]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[2]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[3]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i),32);
        bufp->chgIData(oldp+227,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+228,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+229,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+230,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk12__DOT__i),32);
        bufp->chgIData(oldp+231,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+232,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk14__DOT__i),32);
        bufp->chgIData(oldp+233,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk15__DOT__i),32);
        bufp->chgIData(oldp+234,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk16__DOT__i),32);
        bufp->chgIData(oldp+235,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk17__DOT__i),32);
        bufp->chgIData(oldp+236,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+237,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+238,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[0]),7);
        bufp->chgCData(oldp+239,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[1]),7);
        bufp->chgCData(oldp+240,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[2]),7);
        bufp->chgCData(oldp+241,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[3]),7);
        bufp->chgCData(oldp+242,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[0]),3);
        bufp->chgCData(oldp+243,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[1]),3);
        bufp->chgCData(oldp+244,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[2]),3);
        bufp->chgCData(oldp+245,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[3]),3);
        bufp->chgCData(oldp+246,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[0]),7);
        bufp->chgCData(oldp+247,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[1]),7);
        bufp->chgCData(oldp+248,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[2]),7);
        bufp->chgCData(oldp+249,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[3]),7);
        bufp->chgCData(oldp+250,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[0]),5);
        bufp->chgCData(oldp+251,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[1]),5);
        bufp->chgCData(oldp+252,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[2]),5);
        bufp->chgCData(oldp+253,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[3]),5);
        bufp->chgCData(oldp+254,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[0]),5);
        bufp->chgCData(oldp+255,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[1]),5);
        bufp->chgCData(oldp+256,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[2]),5);
        bufp->chgCData(oldp+257,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[3]),5);
        bufp->chgCData(oldp+258,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[0]),5);
        bufp->chgCData(oldp+259,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[1]),5);
        bufp->chgCData(oldp+260,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[2]),5);
        bufp->chgCData(oldp+261,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[3]),5);
        bufp->chgSData(oldp+262,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[0]),12);
        bufp->chgSData(oldp+263,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[1]),12);
        bufp->chgSData(oldp+264,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[2]),12);
        bufp->chgSData(oldp+265,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[3]),12);
        bufp->chgSData(oldp+266,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[0]),12);
        bufp->chgSData(oldp+267,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[1]),12);
        bufp->chgSData(oldp+268,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[2]),12);
        bufp->chgSData(oldp+269,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[3]),12);
        bufp->chgSData(oldp+270,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[0]),13);
        bufp->chgSData(oldp+271,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[1]),13);
        bufp->chgSData(oldp+272,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[2]),13);
        bufp->chgSData(oldp+273,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[3]),13);
        bufp->chgBit(oldp+274,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[0]));
        bufp->chgBit(oldp+275,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[1]));
        bufp->chgBit(oldp+276,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[2]));
        bufp->chgBit(oldp+277,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[3]));
        bufp->chgBit(oldp+278,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[0]));
        bufp->chgBit(oldp+279,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[1]));
        bufp->chgBit(oldp+280,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[2]));
        bufp->chgBit(oldp+281,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[3]));
        bufp->chgBit(oldp+282,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[0]));
        bufp->chgBit(oldp+283,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[1]));
        bufp->chgBit(oldp+284,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[2]));
        bufp->chgBit(oldp+285,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[3]));
        bufp->chgBit(oldp+286,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[0]));
        bufp->chgBit(oldp+287,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[1]));
        bufp->chgBit(oldp+288,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[2]));
        bufp->chgBit(oldp+289,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[3]));
        bufp->chgBit(oldp+290,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[0]));
        bufp->chgBit(oldp+291,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[1]));
        bufp->chgBit(oldp+292,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[2]));
        bufp->chgBit(oldp+293,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[3]));
        bufp->chgCData(oldp+294,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[0]),4);
        bufp->chgCData(oldp+295,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[1]),4);
        bufp->chgCData(oldp+296,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[2]),4);
        bufp->chgCData(oldp+297,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[3]),4);
        bufp->chgIData(oldp+298,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[0]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[1]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[2]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[3]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[0]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[1]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[2]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[3]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[0]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[1]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[2]),32);
        bufp->chgIData(oldp+309,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[3]),32);
        bufp->chgBit(oldp+310,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0]));
        bufp->chgBit(oldp+311,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1]));
        bufp->chgBit(oldp+312,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2]));
        bufp->chgBit(oldp+313,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3]));
        bufp->chgBit(oldp+314,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[0]));
        bufp->chgBit(oldp+315,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[1]));
        bufp->chgBit(oldp+316,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[2]));
        bufp->chgBit(oldp+317,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[3]));
        bufp->chgBit(oldp+318,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[0]));
        bufp->chgBit(oldp+319,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[1]));
        bufp->chgBit(oldp+320,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[2]));
        bufp->chgBit(oldp+321,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[3]));
        bufp->chgBit(oldp+322,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[0]));
        bufp->chgBit(oldp+323,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[1]));
        bufp->chgBit(oldp+324,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[2]));
        bufp->chgBit(oldp+325,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[3]));
        bufp->chgBit(oldp+326,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[0]));
        bufp->chgBit(oldp+327,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[1]));
        bufp->chgBit(oldp+328,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[2]));
        bufp->chgBit(oldp+329,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[3]));
        bufp->chgIData(oldp+330,(vlSelfRef.test__DOT__cpu__DOT__PC_increment),32);
        bufp->chgIData(oldp+331,(vlSelfRef.test__DOT__cpu__DOT__pointer_bound),32);
        bufp->chgBit(oldp+332,(vlSelfRef.test__DOT__cpu__DOT__branch));
        bufp->chgCData(oldp+333,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[0]),5);
        bufp->chgCData(oldp+334,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[1]),5);
        bufp->chgCData(oldp+335,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[2]),5);
        bufp->chgCData(oldp+336,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[3]),5);
        bufp->chgCData(oldp+337,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[0]),5);
        bufp->chgCData(oldp+338,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[1]),5);
        bufp->chgCData(oldp+339,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[2]),5);
        bufp->chgCData(oldp+340,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[3]),5);
        bufp->chgCData(oldp+341,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[0]),5);
        bufp->chgCData(oldp+342,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[1]),5);
        bufp->chgCData(oldp+343,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[2]),5);
        bufp->chgCData(oldp+344,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[3]),5);
        bufp->chgIData(oldp+345,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+346,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+347,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+348,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k),32);
        bufp->chgIData(oldp+349,(vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+350,(vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+351,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                  [0U])),7);
        bufp->chgCData(oldp+352,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U] >> 0xcU))),3);
        bufp->chgBit(oldp+353,(((0x33U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])) || 
                                (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])))));
        bufp->chgBit(oldp+354,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U]))))));
        bufp->chgBit(oldp+355,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [0U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [0U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [0U])))))));
        bufp->chgBit(oldp+356,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U])) && 
                                ((0x13U != (0x7fU & 
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
                                           [0U]))))))));
        bufp->chgCData(oldp+357,(((0x33U == (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [0U]))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [0U]))
                                            ? ((0x4000U 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [0U])
                                                ? 2U
                                                : (
                                                   (0x2000U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [0U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [0U])
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [0U])
                                                     ? 2U
                                                     : 1U)))
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [0U]))
                                                ? 1U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [0U]))
                                                    ? 3U
                                                    : 0U))))),4);
        bufp->chgIData(oldp+358,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                 [0U]),32);
        bufp->chgCData(oldp+359,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7),7);
        bufp->chgCData(oldp+360,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [0U] >> 0xfU))),5);
        bufp->chgCData(oldp+361,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2),5);
        bufp->chgCData(oldp+362,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd),5);
        bufp->chgSData(oldp+363,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__i_type_imm),12);
        bufp->chgSData(oldp+364,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__s_type_imm),12);
        bufp->chgSData(oldp+365,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__b_type_imm),13);
        bufp->chgCData(oldp+366,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                  [1U])),7);
        bufp->chgCData(oldp+367,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U] >> 0xcU))),3);
        bufp->chgBit(oldp+368,(((0x33U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])) || 
                                (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])))));
        bufp->chgBit(oldp+369,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U]))))));
        bufp->chgBit(oldp+370,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [1U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [1U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [1U])))))));
        bufp->chgBit(oldp+371,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U])) && 
                                ((0x13U != (0x7fU & 
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
                                           [1U]))))))));
        bufp->chgCData(oldp+372,(((0x33U == (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [1U]))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [1U]))
                                            ? ((0x4000U 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [1U])
                                                ? 2U
                                                : (
                                                   (0x2000U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [1U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [1U])
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [1U])
                                                     ? 2U
                                                     : 1U)))
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [1U]))
                                                ? 1U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [1U]))
                                                    ? 3U
                                                    : 0U))))),4);
        bufp->chgIData(oldp+373,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                 [1U]),32);
        bufp->chgCData(oldp+374,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7),7);
        bufp->chgCData(oldp+375,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [1U] >> 0xfU))),5);
        bufp->chgCData(oldp+376,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2),5);
        bufp->chgCData(oldp+377,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd),5);
        bufp->chgSData(oldp+378,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__i_type_imm),12);
        bufp->chgSData(oldp+379,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__s_type_imm),12);
        bufp->chgSData(oldp+380,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__b_type_imm),13);
        bufp->chgCData(oldp+381,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                  [2U])),7);
        bufp->chgCData(oldp+382,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U] >> 0xcU))),3);
        bufp->chgBit(oldp+383,(((0x33U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])) || 
                                (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])))));
        bufp->chgBit(oldp+384,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U]))))));
        bufp->chgBit(oldp+385,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [2U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [2U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [2U])))))));
        bufp->chgBit(oldp+386,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U])) && 
                                ((0x13U != (0x7fU & 
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
                                           [2U]))))))));
        bufp->chgCData(oldp+387,(((0x33U == (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [2U]))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [2U]))
                                            ? ((0x4000U 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [2U])
                                                ? 2U
                                                : (
                                                   (0x2000U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [2U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [2U])
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [2U])
                                                     ? 2U
                                                     : 1U)))
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [2U]))
                                                ? 1U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [2U]))
                                                    ? 3U
                                                    : 0U))))),4);
        bufp->chgIData(oldp+388,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                 [2U]),32);
        bufp->chgCData(oldp+389,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7),7);
        bufp->chgCData(oldp+390,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [2U] >> 0xfU))),5);
        bufp->chgCData(oldp+391,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2),5);
        bufp->chgCData(oldp+392,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd),5);
        bufp->chgSData(oldp+393,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__i_type_imm),12);
        bufp->chgSData(oldp+394,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__s_type_imm),12);
        bufp->chgSData(oldp+395,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__b_type_imm),13);
        bufp->chgCData(oldp+396,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                  [3U])),7);
        bufp->chgCData(oldp+397,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U] >> 0xcU))),3);
        bufp->chgBit(oldp+398,(((0x33U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])) || 
                                (0x13U == (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])))));
        bufp->chgBit(oldp+399,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U])) 
                                 && (3U == (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U]))))));
        bufp->chgBit(oldp+400,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])) && 
                                ((0x13U != (0x7fU & 
                                            vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                            [3U])) 
                                 && ((3U != (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [3U])) 
                                     && (0x23U == (0x7fU 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [3U])))))));
        bufp->chgBit(oldp+401,(((0x33U != (0x7fU & 
                                           vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U])) && 
                                ((0x13U != (0x7fU & 
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
                                           [3U]))))))));
        bufp->chgCData(oldp+402,(((0x33U == (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [3U]))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [3U]))
                                            ? ((0x4000U 
                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                [3U])
                                                ? 2U
                                                : (
                                                   (0x2000U 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [3U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [3U])
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [3U])
                                                     ? 2U
                                                     : 1U)))
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                 [3U]))
                                                ? 1U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [3U]))
                                                    ? 3U
                                                    : 0U))))),4);
        bufp->chgIData(oldp+403,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                 [3U]),32);
        bufp->chgCData(oldp+404,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7),7);
        bufp->chgCData(oldp+405,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                           [3U] >> 0xfU))),5);
        bufp->chgCData(oldp+406,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2),5);
        bufp->chgCData(oldp+407,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd),5);
        bufp->chgSData(oldp+408,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__i_type_imm),12);
        bufp->chgSData(oldp+409,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__s_type_imm),12);
        bufp->chgSData(oldp+410,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__b_type_imm),13);
        bufp->chgIData(oldp+411,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+412,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+413,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+414,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk9__DOT__pointer),32);
        bufp->chgBit(oldp+415,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[0]));
        bufp->chgBit(oldp+416,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[1]));
        bufp->chgBit(oldp+417,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[2]));
        bufp->chgBit(oldp+418,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[3]));
        bufp->chgIData(oldp+419,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+420,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+421,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+422,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+423,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+424,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgCData(oldp+425,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[0]),5);
        bufp->chgCData(oldp+426,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[1]),5);
        bufp->chgCData(oldp+427,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[2]),5);
        bufp->chgCData(oldp+428,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[3]),5);
        bufp->chgCData(oldp+429,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[0]),5);
        bufp->chgCData(oldp+430,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[1]),5);
        bufp->chgCData(oldp+431,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[2]),5);
        bufp->chgCData(oldp+432,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[3]),5);
        bufp->chgIData(oldp+433,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[0]),32);
        bufp->chgIData(oldp+434,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[1]),32);
        bufp->chgIData(oldp+435,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[2]),32);
        bufp->chgIData(oldp+436,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[3]),32);
        bufp->chgIData(oldp+437,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[0]),32);
        bufp->chgIData(oldp+438,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[1]),32);
        bufp->chgIData(oldp+439,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[2]),32);
        bufp->chgIData(oldp+440,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[3]),32);
        bufp->chgIData(oldp+441,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+442,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+443,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+444,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+445,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+446,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+447,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+448,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+449,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+450,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+451,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+452,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+453,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+454,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+455,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+456,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+457,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+458,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+459,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+460,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+461,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+462,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+464,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+465,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+466,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+467,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+468,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+469,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+470,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+471,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+472,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[31]),32);
        bufp->chgIData(oldp+473,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__j),32);
        bufp->chgCData(oldp+474,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[0]),5);
        bufp->chgCData(oldp+475,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[1]),5);
        bufp->chgCData(oldp+476,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[2]),5);
        bufp->chgCData(oldp+477,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[3]),5);
        bufp->chgCData(oldp+478,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[0]),5);
        bufp->chgCData(oldp+479,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[1]),5);
        bufp->chgCData(oldp+480,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[2]),5);
        bufp->chgCData(oldp+481,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[3]),5);
        bufp->chgCData(oldp+482,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[0]),5);
        bufp->chgCData(oldp+483,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[1]),5);
        bufp->chgCData(oldp+484,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[2]),5);
        bufp->chgCData(oldp+485,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[3]),5);
        bufp->chgCData(oldp+486,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[0]),5);
        bufp->chgCData(oldp+487,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[1]),5);
        bufp->chgCData(oldp+488,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[2]),5);
        bufp->chgCData(oldp+489,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[3]),5);
        bufp->chgCData(oldp+490,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [0U][0U]),5);
        bufp->chgCData(oldp+491,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [0U][1U]),5);
        bufp->chgCData(oldp+492,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [0U][2U]),5);
        bufp->chgCData(oldp+493,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [0U][3U]),5);
        bufp->chgCData(oldp+494,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [1U][0U]),5);
        bufp->chgCData(oldp+495,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [1U][1U]),5);
        bufp->chgCData(oldp+496,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [1U][2U]),5);
        bufp->chgCData(oldp+497,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [1U][3U]),5);
        bufp->chgCData(oldp+498,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [2U][0U]),5);
        bufp->chgCData(oldp+499,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [2U][1U]),5);
        bufp->chgCData(oldp+500,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [2U][2U]),5);
        bufp->chgCData(oldp+501,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                                 [2U][3U]),5);
        bufp->chgBit(oldp+502,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[0]));
        bufp->chgBit(oldp+503,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[1]));
        bufp->chgBit(oldp+504,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[2]));
        bufp->chgBit(oldp+505,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[3]));
        bufp->chgBit(oldp+506,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch));
        bufp->chgIData(oldp+507,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i),32);
        bufp->chgIData(oldp+508,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+509,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+510,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+511,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
        bufp->chgIData(oldp+512,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k),32);
        bufp->chgIData(oldp+513,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l),32);
        bufp->chgIData(oldp+514,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+515,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+516,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+517,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+518,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+519,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+520,(vlSelfRef.test__DOT__cpu__DOT__stall_fetch));
        bufp->chgIData(oldp+521,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[0]),32);
        bufp->chgIData(oldp+522,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[1]),32);
        bufp->chgIData(oldp+523,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[2]),32);
        bufp->chgIData(oldp+524,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[3]),32);
        bufp->chgIData(oldp+525,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[0]),32);
        bufp->chgIData(oldp+526,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[1]),32);
        bufp->chgIData(oldp+527,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[2]),32);
        bufp->chgIData(oldp+528,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[3]),32);
        bufp->chgIData(oldp+529,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[0]),32);
        bufp->chgIData(oldp+530,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[1]),32);
        bufp->chgIData(oldp+531,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[2]),32);
        bufp->chgIData(oldp+532,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[3]),32);
        bufp->chgBit(oldp+533,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[0]));
        bufp->chgBit(oldp+534,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[1]));
        bufp->chgBit(oldp+535,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[2]));
        bufp->chgBit(oldp+536,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[3]));
        bufp->chgBit(oldp+537,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[0]));
        bufp->chgBit(oldp+538,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[1]));
        bufp->chgBit(oldp+539,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[2]));
        bufp->chgBit(oldp+540,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[3]));
        bufp->chgIData(oldp+541,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[0]),32);
        bufp->chgIData(oldp+542,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[1]),32);
        bufp->chgIData(oldp+543,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[2]),32);
        bufp->chgIData(oldp+544,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[3]),32);
        bufp->chgIData(oldp+545,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[0]),32);
        bufp->chgIData(oldp+546,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[1]),32);
        bufp->chgIData(oldp+547,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[2]),32);
        bufp->chgIData(oldp+548,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[3]),32);
        bufp->chgIData(oldp+549,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[0]),32);
        bufp->chgIData(oldp+550,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[1]),32);
        bufp->chgIData(oldp+551,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[2]),32);
        bufp->chgIData(oldp+552,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[3]),32);
        bufp->chgIData(oldp+553,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[0]),32);
        bufp->chgIData(oldp+554,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[1]),32);
        bufp->chgIData(oldp+555,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[2]),32);
        bufp->chgIData(oldp+556,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[3]),32);
        bufp->chgCData(oldp+557,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[0]),5);
        bufp->chgCData(oldp+558,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[1]),5);
        bufp->chgCData(oldp+559,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[2]),5);
        bufp->chgCData(oldp+560,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[3]),5);
        bufp->chgIData(oldp+561,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[0]),32);
        bufp->chgIData(oldp+562,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[1]),32);
        bufp->chgIData(oldp+563,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[2]),32);
        bufp->chgIData(oldp+564,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[3]),32);
        bufp->chgIData(oldp+565,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i),32);
    }
    bufp->chgBit(oldp+566,(vlSelfRef.clk));
    bufp->chgBit(oldp+567,(vlSelfRef.reset));
    bufp->chgQData(oldp+568,(vlSelfRef.runtime),64);
    bufp->chgIData(oldp+570,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__i),32);
}

void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_cleanup\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
