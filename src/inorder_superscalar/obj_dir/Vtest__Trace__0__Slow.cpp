// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


VL_ATTR_COLD void Vtest___024root__trace_init_sub__TOP__0(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_sub__TOP__0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+569,0,"runtime",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+569,0,"runtime",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"INSN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"NUMBER_EXECUTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"I_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"S_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"B_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"stall_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+579,0,"nop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"basePC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("PC_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instruction_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+522+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_enable_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+14,0,"btype_imm_sign_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instruction_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+526+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PC_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("opcode_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+239+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("funct3_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+243+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("funct7_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+247+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+251+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+255+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+259+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("i_type_imm_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+263+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("s_type_imm_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+267+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_type_imm_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+271+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reg_write_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+275+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_read_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+279+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+283+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_to_reg_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+287+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+291+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm_sel_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+295+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instruction_vector_preg_temp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1_vector_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+303+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_vector_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+307+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard_mask_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+311+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_mask_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+315+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_mask_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+319+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("cross_dep_mask_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+323+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("final_mask_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+327+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+331,0,"PC_increment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"pointer_bound",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("decode_execute_opcode_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_funct3_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_funct7_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_rd_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_i_type_imm_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_s_type_imm_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_b_type_imm_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_rs1_vector_data_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_rs2_vector_data_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+51+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reg_write_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+55+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_read_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+63+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_to_reg_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+67+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+71+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+75+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm_sel_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+79+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decode_execute_PC_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+580+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_result_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+83+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("zero_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+87+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("execute_memory_alu_result_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("zero_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+95+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("reg_write_vector_memory_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+99+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_read_vector_memory_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+103+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_vector_memory_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_to_reg_vector_memory_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_vector_memory_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_vector_memory_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+119+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("execute_memory_PC_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+584+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("execute_memory_rd_vector_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+123+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_result_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+530+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_address_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_write_data_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_read_enable_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_write_enable_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+534+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_write_data_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+139+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_read_enable_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_write_enable_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+147+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_result_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+151+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("memory_PC_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+155+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_to_reg_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+159+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+163+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+167+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("zero_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+171+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("register_write_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+538+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_result_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+175+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("execute_memory_rd_vector_writeback_preg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+179+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_back_result_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+183+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+190,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+191,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+192,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+195,0,"operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+198,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+199,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+200,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+201,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+206,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+208,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+214,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+215,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+216,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cross_dep_check", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+575,0,"RS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"NUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+334+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+342+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("can_issue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+323+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_mask_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+346,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+347,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+349,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"NUM_WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+590,0,"NAME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+542+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+546+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+219+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_enable", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_enable", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+534+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+550+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+350,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+351,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decode_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+353,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+354,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"INSN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"I_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"S_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"B_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+353,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+360,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+361,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+362,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+363,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+364,0,"i_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+365,0,"s_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+366,0,"b_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decode_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+368,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+369,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"INSN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"I_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"S_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"B_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+368,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+375,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+376,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+377,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+378,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+379,0,"i_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+380,0,"s_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+381,0,"b_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decode_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+383,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+384,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"INSN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"I_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"S_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"B_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+383,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+390,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+391,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+392,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+393,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+394,0,"i_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+395,0,"s_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+396,0,"b_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decode_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+588,0,"NUM_OPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+398,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+399,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"INSN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"FUNCT3_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"FUNCT7_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"I_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"S_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"B_TYPE_IMM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+398,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+405,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+406,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+407,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+408,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+409,0,"i_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+410,0,"s_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+411,0,"b_type_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("final_mask_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"NUM_WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+596,0,"NAME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+601+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+-1), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+603+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+-1), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+223+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_enable", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_enable", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+605+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+-1));
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+554+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+412,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+413,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_vector_preg_temp_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"pointer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory_branch_mask_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+576,0,"NUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("branch", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+291+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_write", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+283+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_read", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+279+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+315+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+319+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_op", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+416+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch_mask_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+421,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+422,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem_mask_logic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+423,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+424,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+425,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"NUM_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rs1s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+426+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+430+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_addrs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+558+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+562+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("write_reg_enable", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+538+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_data_rs1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+434+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_data_rs2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+438+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+442+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+571,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+474,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+607,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"NUM_PIPELINE_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"NUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"RD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+567,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+475+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+327+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("branch", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+291+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+483+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("source_rds", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+487+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("can_issue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+311+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+491,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+492,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+493,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+494,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+495,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+496,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+497,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+498,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+499,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+500,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+501,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+502,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("branchboard", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+503+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+507,0,"is_a_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("scoreboard_check", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+508,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+509,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+512,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+513,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+514,0,"l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard_update", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+515,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+516,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+517,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+518,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+519,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+520,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"branch_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+230,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+231,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+236,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+566,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest___024root__trace_init_top(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_top\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest___024root__trace_register(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_register\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest___024root__trace_const_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_const_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest___024root__trace_const_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_const_0_sub_0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+572,(0x20U),32);
    bufp->fullIData(oldp+573,(7U),32);
    bufp->fullIData(oldp+574,(3U),32);
    bufp->fullIData(oldp+575,(5U),32);
    bufp->fullIData(oldp+576,(4U),32);
    bufp->fullIData(oldp+577,(0xcU),32);
    bufp->fullIData(oldp+578,(0xdU),32);
    bufp->fullIData(oldp+579,(0x13U),32);
    bufp->fullCData(oldp+580,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_PC_vector_preg[0]),5);
    bufp->fullCData(oldp+581,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_PC_vector_preg[1]),5);
    bufp->fullCData(oldp+582,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_PC_vector_preg[2]),5);
    bufp->fullCData(oldp+583,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_PC_vector_preg[3]),5);
    bufp->fullCData(oldp+584,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg[0]),5);
    bufp->fullCData(oldp+585,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg[1]),5);
    bufp->fullCData(oldp+586,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg[2]),5);
    bufp->fullCData(oldp+587,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_PC_vector_preg[3]),5);
    bufp->fullIData(oldp+588,(0x40U),32);
    bufp->fullIData(oldp+589,(0x400U),32);
    __Vtemp_1[0U] = 0x6d6f7279U;
    __Vtemp_1[1U] = 0x61204d65U;
    __Vtemp_1[2U] = 0x446174U;
    bufp->fullWData(oldp+590,(__Vtemp_1),88);
    bufp->fullIData(oldp+593,(4U),32);
    bufp->fullBit(oldp+594,(0U));
    bufp->fullIData(oldp+595,(0U),32);
    __Vtemp_2[0U] = 0x6d6f7279U;
    __Vtemp_2[1U] = 0x6e204d65U;
    __Vtemp_2[2U] = 0x6374696fU;
    __Vtemp_2[3U] = 0x73747275U;
    __Vtemp_2[4U] = 0x496eU;
    bufp->fullWData(oldp+596,(__Vtemp_2),144);
    bufp->fullIData(oldp+601,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__write_data[0]),32);
    bufp->fullIData(oldp+602,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__write_data[1]),32);
    bufp->fullIData(oldp+603,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__write_addr[0]),32);
    bufp->fullIData(oldp+604,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__write_addr[1]),32);
    bufp->fullBit(oldp+605,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__write_enable[0]));
    bufp->fullBit(oldp+606,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__write_enable[1]));
    bufp->fullIData(oldp+607,(4U),32);
}

VL_ATTR_COLD void Vtest___024root__trace_full_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest___024root__trace_full_0_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_0_sub_0\n"); );
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[0]));
    bufp->fullBit(oldp+2,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[1]));
    bufp->fullBit(oldp+3,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[2]));
    bufp->fullBit(oldp+4,(vlSelfRef.test__DOT__cpu__DOT__read_enable_vector[3]));
    bufp->fullBit(oldp+5,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[0]));
    bufp->fullBit(oldp+6,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[1]));
    bufp->fullBit(oldp+7,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[2]));
    bufp->fullBit(oldp+8,(vlSelfRef.test__DOT__cpu__DOT__jump_vector[3]));
    bufp->fullIData(oldp+9,(vlSelfRef.test__DOT__cpu__DOT__basePC),32);
    bufp->fullIData(oldp+10,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[0]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[1]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[2]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.test__DOT__cpu__DOT__PC_vector[3]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.test__DOT__cpu__DOT__btype_imm_sign_extended),32);
    bufp->fullIData(oldp+15,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[0]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[1]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[2]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.test__DOT__cpu__DOT__PC_vector_preg[3]),32);
    bufp->fullCData(oldp+19,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[0]),7);
    bufp->fullCData(oldp+20,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[1]),7);
    bufp->fullCData(oldp+21,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[2]),7);
    bufp->fullCData(oldp+22,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg[3]),7);
    bufp->fullCData(oldp+23,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[0]),3);
    bufp->fullCData(oldp+24,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[1]),3);
    bufp->fullCData(oldp+25,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[2]),3);
    bufp->fullCData(oldp+26,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg[3]),3);
    bufp->fullCData(oldp+27,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[0]),7);
    bufp->fullCData(oldp+28,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[1]),7);
    bufp->fullCData(oldp+29,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[2]),7);
    bufp->fullCData(oldp+30,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg[3]),7);
    bufp->fullCData(oldp+31,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[0]),5);
    bufp->fullCData(oldp+32,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[1]),5);
    bufp->fullCData(oldp+33,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[2]),5);
    bufp->fullCData(oldp+34,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rd_vector_preg[3]),5);
    bufp->fullSData(oldp+35,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[0]),12);
    bufp->fullSData(oldp+36,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[1]),12);
    bufp->fullSData(oldp+37,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[2]),12);
    bufp->fullSData(oldp+38,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_i_type_imm_vector_preg[3]),12);
    bufp->fullSData(oldp+39,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[0]),12);
    bufp->fullSData(oldp+40,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[1]),12);
    bufp->fullSData(oldp+41,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[2]),12);
    bufp->fullSData(oldp+42,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_s_type_imm_vector_preg[3]),12);
    bufp->fullSData(oldp+43,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[0]),13);
    bufp->fullSData(oldp+44,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[1]),13);
    bufp->fullSData(oldp+45,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[2]),13);
    bufp->fullSData(oldp+46,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_b_type_imm_vector_preg[3]),13);
    bufp->fullIData(oldp+47,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[0]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[1]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[2]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg[3]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[0]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[1]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[2]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs2_vector_data_preg[3]),32);
    bufp->fullBit(oldp+55,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[0]));
    bufp->fullBit(oldp+56,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[1]));
    bufp->fullBit(oldp+57,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[2]));
    bufp->fullBit(oldp+58,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_preg[3]));
    bufp->fullBit(oldp+59,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[0]));
    bufp->fullBit(oldp+60,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[1]));
    bufp->fullBit(oldp+61,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[2]));
    bufp->fullBit(oldp+62,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_preg[3]));
    bufp->fullBit(oldp+63,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[0]));
    bufp->fullBit(oldp+64,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[1]));
    bufp->fullBit(oldp+65,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[2]));
    bufp->fullBit(oldp+66,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_preg[3]));
    bufp->fullBit(oldp+67,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[0]));
    bufp->fullBit(oldp+68,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[1]));
    bufp->fullBit(oldp+69,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[2]));
    bufp->fullBit(oldp+70,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_preg[3]));
    bufp->fullBit(oldp+71,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[0]));
    bufp->fullBit(oldp+72,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[1]));
    bufp->fullBit(oldp+73,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[2]));
    bufp->fullBit(oldp+74,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_preg[3]));
    bufp->fullBit(oldp+75,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[0]));
    bufp->fullBit(oldp+76,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[1]));
    bufp->fullBit(oldp+77,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[2]));
    bufp->fullBit(oldp+78,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_preg[3]));
    bufp->fullCData(oldp+79,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[0]),4);
    bufp->fullCData(oldp+80,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[1]),4);
    bufp->fullCData(oldp+81,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[2]),4);
    bufp->fullCData(oldp+82,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector_preg[3]),4);
    bufp->fullIData(oldp+83,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[0]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[1]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[2]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector[3]),32);
    bufp->fullBit(oldp+87,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[0]));
    bufp->fullBit(oldp+88,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[1]));
    bufp->fullBit(oldp+89,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[2]));
    bufp->fullBit(oldp+90,(vlSelfRef.test__DOT__cpu__DOT__zero_vector[3]));
    bufp->fullIData(oldp+91,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[0]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[1]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[2]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_alu_result_vector_preg[3]),32);
    bufp->fullBit(oldp+95,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[0]));
    bufp->fullBit(oldp+96,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[1]));
    bufp->fullBit(oldp+97,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[2]));
    bufp->fullBit(oldp+98,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_preg[3]));
    bufp->fullBit(oldp+99,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[0]));
    bufp->fullBit(oldp+100,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[1]));
    bufp->fullBit(oldp+101,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[2]));
    bufp->fullBit(oldp+102,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector_memory_preg[3]));
    bufp->fullBit(oldp+103,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[0]));
    bufp->fullBit(oldp+104,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[1]));
    bufp->fullBit(oldp+105,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[2]));
    bufp->fullBit(oldp+106,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector_memory_preg[3]));
    bufp->fullBit(oldp+107,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[0]));
    bufp->fullBit(oldp+108,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[1]));
    bufp->fullBit(oldp+109,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[2]));
    bufp->fullBit(oldp+110,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector_memory_preg[3]));
    bufp->fullBit(oldp+111,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[0]));
    bufp->fullBit(oldp+112,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[1]));
    bufp->fullBit(oldp+113,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[2]));
    bufp->fullBit(oldp+114,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_memory_preg[3]));
    bufp->fullBit(oldp+115,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[0]));
    bufp->fullBit(oldp+116,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[1]));
    bufp->fullBit(oldp+117,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[2]));
    bufp->fullBit(oldp+118,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_memory_preg[3]));
    bufp->fullBit(oldp+119,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[0]));
    bufp->fullBit(oldp+120,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[1]));
    bufp->fullBit(oldp+121,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[2]));
    bufp->fullBit(oldp+122,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_memory_preg[3]));
    bufp->fullCData(oldp+123,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[0]),5);
    bufp->fullCData(oldp+124,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[1]),5);
    bufp->fullCData(oldp+125,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[2]),5);
    bufp->fullCData(oldp+126,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_preg[3]),5);
    bufp->fullIData(oldp+127,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[0]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[1]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[2]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.test__DOT__cpu__DOT__memory_address_vector[3]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[0]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[1]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[2]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector[3]),32);
    bufp->fullBit(oldp+135,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[0]));
    bufp->fullBit(oldp+136,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[1]));
    bufp->fullBit(oldp+137,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[2]));
    bufp->fullBit(oldp+138,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector[3]));
    bufp->fullIData(oldp+139,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[0]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[1]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[2]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.test__DOT__cpu__DOT__memory_write_data_vector_writeback_preg[3]),32);
    bufp->fullBit(oldp+143,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[0]));
    bufp->fullBit(oldp+144,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[1]));
    bufp->fullBit(oldp+145,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[2]));
    bufp->fullBit(oldp+146,(vlSelfRef.test__DOT__cpu__DOT__memory_read_enable_vector_writeback_preg[3]));
    bufp->fullBit(oldp+147,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[0]));
    bufp->fullBit(oldp+148,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[1]));
    bufp->fullBit(oldp+149,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[2]));
    bufp->fullBit(oldp+150,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector_writeback_preg[3]));
    bufp->fullIData(oldp+151,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[0]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[1]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[2]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector_writeback_preg[3]),32);
    bufp->fullCData(oldp+155,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[0]),5);
    bufp->fullCData(oldp+156,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[1]),5);
    bufp->fullCData(oldp+157,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[2]),5);
    bufp->fullCData(oldp+158,(vlSelfRef.test__DOT__cpu__DOT__memory_PC_vector_writeback_preg[3]),5);
    bufp->fullBit(oldp+159,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[0]));
    bufp->fullBit(oldp+160,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[1]));
    bufp->fullBit(oldp+161,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[2]));
    bufp->fullBit(oldp+162,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector_writeback_preg[3]));
    bufp->fullBit(oldp+163,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[0]));
    bufp->fullBit(oldp+164,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[1]));
    bufp->fullBit(oldp+165,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[2]));
    bufp->fullBit(oldp+166,(vlSelfRef.test__DOT__cpu__DOT__branch_vector_writeback_preg[3]));
    bufp->fullBit(oldp+167,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[0]));
    bufp->fullBit(oldp+168,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[1]));
    bufp->fullBit(oldp+169,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[2]));
    bufp->fullBit(oldp+170,(vlSelfRef.test__DOT__cpu__DOT__jump_vector_writeback_preg[3]));
    bufp->fullBit(oldp+171,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[0]));
    bufp->fullBit(oldp+172,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[1]));
    bufp->fullBit(oldp+173,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[2]));
    bufp->fullBit(oldp+174,(vlSelfRef.test__DOT__cpu__DOT__zero_vector_writeback_preg[3]));
    bufp->fullIData(oldp+175,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[0]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[1]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[2]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.test__DOT__cpu__DOT__alu_result_vector_writeback_preg[3]),32);
    bufp->fullCData(oldp+179,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[0]),5);
    bufp->fullCData(oldp+180,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[1]),5);
    bufp->fullCData(oldp+181,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[2]),5);
    bufp->fullCData(oldp+182,(vlSelfRef.test__DOT__cpu__DOT__execute_memory_rd_vector_writeback_preg[3]),5);
    bufp->fullIData(oldp+183,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[0]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[1]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[2]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.test__DOT__cpu__DOT__write_back_result_vector[3]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                              [0U]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__operand2),32);
    bufp->fullCData(oldp+189,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                              [0U]),7);
    bufp->fullCData(oldp+190,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                              [0U]),3);
    bufp->fullCData(oldp+191,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                              [0U]),7);
    bufp->fullIData(oldp+192,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__result),32);
    bufp->fullBit(oldp+193,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__0__KET____DOT__alu__zero));
    bufp->fullCData(oldp+194,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__0__KET____DOT__alu__DOT__alu_op),6);
    bufp->fullIData(oldp+195,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                              [1U]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__operand2),32);
    bufp->fullCData(oldp+197,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                              [1U]),7);
    bufp->fullCData(oldp+198,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                              [1U]),3);
    bufp->fullCData(oldp+199,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                              [1U]),7);
    bufp->fullIData(oldp+200,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__result),32);
    bufp->fullBit(oldp+201,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__1__KET____DOT__alu__zero));
    bufp->fullCData(oldp+202,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__1__KET____DOT__alu__DOT__alu_op),6);
    bufp->fullIData(oldp+203,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                              [2U]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__operand2),32);
    bufp->fullCData(oldp+205,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                              [2U]),7);
    bufp->fullCData(oldp+206,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                              [2U]),3);
    bufp->fullCData(oldp+207,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                              [2U]),7);
    bufp->fullIData(oldp+208,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__result),32);
    bufp->fullBit(oldp+209,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__2__KET____DOT__alu__zero));
    bufp->fullCData(oldp+210,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__2__KET____DOT__alu__DOT__alu_op),6);
    bufp->fullIData(oldp+211,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_rs1_vector_data_preg
                              [3U]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__operand2),32);
    bufp->fullCData(oldp+213,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_opcode_vector_preg
                              [3U]),7);
    bufp->fullCData(oldp+214,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct3_vector_preg
                              [3U]),3);
    bufp->fullCData(oldp+215,(vlSelfRef.test__DOT__cpu__DOT__decode_execute_funct7_vector_preg
                              [3U]),7);
    bufp->fullIData(oldp+216,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__result),32);
    bufp->fullBit(oldp+217,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__alu_gen__BRA__3__KET____DOT__alu__zero));
    bufp->fullCData(oldp+218,(vlSelfRef.test__DOT__cpu__DOT__alu_gen__BRA__3__KET____DOT__alu__DOT__alu_op),6);
    bufp->fullIData(oldp+219,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[0]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[1]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[2]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__read_addr[3]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[0]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[1]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[2]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__instruction_memory__read_addr[3]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__branch_i),32);
    bufp->fullIData(oldp+228,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+229,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+230,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+231,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk12__DOT__i),32);
    bufp->fullIData(oldp+232,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+233,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk14__DOT__i),32);
    bufp->fullIData(oldp+234,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk15__DOT__i),32);
    bufp->fullIData(oldp+235,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk16__DOT__i),32);
    bufp->fullIData(oldp+236,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk17__DOT__i),32);
    bufp->fullIData(oldp+237,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+238,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk4__DOT__i),32);
    bufp->fullCData(oldp+239,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[0]),7);
    bufp->fullCData(oldp+240,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[1]),7);
    bufp->fullCData(oldp+241,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[2]),7);
    bufp->fullCData(oldp+242,(vlSelfRef.test__DOT__cpu__DOT__opcode_vector[3]),7);
    bufp->fullCData(oldp+243,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[0]),3);
    bufp->fullCData(oldp+244,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[1]),3);
    bufp->fullCData(oldp+245,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[2]),3);
    bufp->fullCData(oldp+246,(vlSelfRef.test__DOT__cpu__DOT__funct3_vector[3]),3);
    bufp->fullCData(oldp+247,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[0]),7);
    bufp->fullCData(oldp+248,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[1]),7);
    bufp->fullCData(oldp+249,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[2]),7);
    bufp->fullCData(oldp+250,(vlSelfRef.test__DOT__cpu__DOT__funct7_vector[3]),7);
    bufp->fullCData(oldp+251,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[0]),5);
    bufp->fullCData(oldp+252,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[1]),5);
    bufp->fullCData(oldp+253,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[2]),5);
    bufp->fullCData(oldp+254,(vlSelfRef.test__DOT__cpu__DOT__rd_vector[3]),5);
    bufp->fullCData(oldp+255,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[0]),5);
    bufp->fullCData(oldp+256,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[1]),5);
    bufp->fullCData(oldp+257,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[2]),5);
    bufp->fullCData(oldp+258,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector[3]),5);
    bufp->fullCData(oldp+259,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[0]),5);
    bufp->fullCData(oldp+260,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[1]),5);
    bufp->fullCData(oldp+261,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[2]),5);
    bufp->fullCData(oldp+262,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector[3]),5);
    bufp->fullSData(oldp+263,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[0]),12);
    bufp->fullSData(oldp+264,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[1]),12);
    bufp->fullSData(oldp+265,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[2]),12);
    bufp->fullSData(oldp+266,(vlSelfRef.test__DOT__cpu__DOT__i_type_imm_vector[3]),12);
    bufp->fullSData(oldp+267,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[0]),12);
    bufp->fullSData(oldp+268,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[1]),12);
    bufp->fullSData(oldp+269,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[2]),12);
    bufp->fullSData(oldp+270,(vlSelfRef.test__DOT__cpu__DOT__s_type_imm_vector[3]),12);
    bufp->fullSData(oldp+271,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[0]),13);
    bufp->fullSData(oldp+272,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[1]),13);
    bufp->fullSData(oldp+273,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[2]),13);
    bufp->fullSData(oldp+274,(vlSelfRef.test__DOT__cpu__DOT__b_type_imm_vector[3]),13);
    bufp->fullBit(oldp+275,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[0]));
    bufp->fullBit(oldp+276,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[1]));
    bufp->fullBit(oldp+277,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[2]));
    bufp->fullBit(oldp+278,(vlSelfRef.test__DOT__cpu__DOT__reg_write_vector[3]));
    bufp->fullBit(oldp+279,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[0]));
    bufp->fullBit(oldp+280,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[1]));
    bufp->fullBit(oldp+281,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[2]));
    bufp->fullBit(oldp+282,(vlSelfRef.test__DOT__cpu__DOT__mem_read_vector[3]));
    bufp->fullBit(oldp+283,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[0]));
    bufp->fullBit(oldp+284,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[1]));
    bufp->fullBit(oldp+285,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[2]));
    bufp->fullBit(oldp+286,(vlSelfRef.test__DOT__cpu__DOT__mem_write_vector[3]));
    bufp->fullBit(oldp+287,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[0]));
    bufp->fullBit(oldp+288,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[1]));
    bufp->fullBit(oldp+289,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[2]));
    bufp->fullBit(oldp+290,(vlSelfRef.test__DOT__cpu__DOT__mem_to_reg_vector[3]));
    bufp->fullBit(oldp+291,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[0]));
    bufp->fullBit(oldp+292,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[1]));
    bufp->fullBit(oldp+293,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[2]));
    bufp->fullBit(oldp+294,(vlSelfRef.test__DOT__cpu__DOT__branch_vector[3]));
    bufp->fullCData(oldp+295,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[0]),4);
    bufp->fullCData(oldp+296,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[1]),4);
    bufp->fullCData(oldp+297,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[2]),4);
    bufp->fullCData(oldp+298,(vlSelfRef.test__DOT__cpu__DOT__imm_sel_vector[3]),4);
    bufp->fullIData(oldp+299,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[0]),32);
    bufp->fullIData(oldp+300,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[1]),32);
    bufp->fullIData(oldp+301,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[2]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp[3]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[0]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[1]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[2]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.test__DOT__cpu__DOT__rs1_vector_data[3]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[0]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[1]),32);
    bufp->fullIData(oldp+309,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[2]),32);
    bufp->fullIData(oldp+310,(vlSelfRef.test__DOT__cpu__DOT__rs2_vector_data[3]),32);
    bufp->fullBit(oldp+311,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[0]));
    bufp->fullBit(oldp+312,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[1]));
    bufp->fullBit(oldp+313,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[2]));
    bufp->fullBit(oldp+314,(vlSelfRef.test__DOT__cpu__DOT__scoreboard_mask_vector[3]));
    bufp->fullBit(oldp+315,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[0]));
    bufp->fullBit(oldp+316,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[1]));
    bufp->fullBit(oldp+317,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[2]));
    bufp->fullBit(oldp+318,(vlSelfRef.test__DOT__cpu__DOT__branch_mask_vector[3]));
    bufp->fullBit(oldp+319,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[0]));
    bufp->fullBit(oldp+320,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[1]));
    bufp->fullBit(oldp+321,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[2]));
    bufp->fullBit(oldp+322,(vlSelfRef.test__DOT__cpu__DOT__mem_mask_vector[3]));
    bufp->fullBit(oldp+323,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[0]));
    bufp->fullBit(oldp+324,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[1]));
    bufp->fullBit(oldp+325,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[2]));
    bufp->fullBit(oldp+326,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_mask_vector[3]));
    bufp->fullBit(oldp+327,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[0]));
    bufp->fullBit(oldp+328,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[1]));
    bufp->fullBit(oldp+329,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[2]));
    bufp->fullBit(oldp+330,(vlSelfRef.test__DOT__cpu__DOT__final_mask_vector[3]));
    bufp->fullIData(oldp+331,(vlSelfRef.test__DOT__cpu__DOT__PC_increment),32);
    bufp->fullIData(oldp+332,(vlSelfRef.test__DOT__cpu__DOT__pointer_bound),32);
    bufp->fullBit(oldp+333,(vlSelfRef.test__DOT__cpu__DOT__branch));
    bufp->fullCData(oldp+334,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[0]),5);
    bufp->fullCData(oldp+335,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[1]),5);
    bufp->fullCData(oldp+336,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[2]),5);
    bufp->fullCData(oldp+337,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rd[3]),5);
    bufp->fullCData(oldp+338,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[0]),5);
    bufp->fullCData(oldp+339,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[1]),5);
    bufp->fullCData(oldp+340,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[2]),5);
    bufp->fullCData(oldp+341,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs1[3]),5);
    bufp->fullCData(oldp+342,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[0]),5);
    bufp->fullCData(oldp+343,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[1]),5);
    bufp->fullCData(oldp+344,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[2]),5);
    bufp->fullCData(oldp+345,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__cross_dep_check__rs2[3]),5);
    bufp->fullIData(oldp+346,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+347,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+348,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+349,(vlSelfRef.test__DOT__cpu__DOT__cross_dep_check__DOT__branch_mask_logic__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k),32);
    bufp->fullIData(oldp+350,(vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+351,(vlSelfRef.test__DOT__cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+352,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                               [0U])),7);
    bufp->fullCData(oldp+353,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                     [0U] >> 0xcU))),3);
    bufp->fullBit(oldp+354,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U])) || (0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [0U])))));
    bufp->fullBit(oldp+355,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [0U])) 
                                                   && (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                        [0U]))))));
    bufp->fullBit(oldp+356,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [0U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [0U])) 
                                                       && (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                            [0U])))))));
    bufp->fullBit(oldp+357,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [0U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [0U])) 
                                                       && ((0x23U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                             [0U])) 
                                                           && (0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                                [0U]))))))));
    bufp->fullCData(oldp+358,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [0U])) ? 0U
                                : ((0x13U == (0x7fU 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [0U]))
                                    ? ((0x4000U & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U]) ? 2U : 
                                       ((0x2000U & 
                                         vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                         [0U]) ? ((0x1000U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [0U])
                                                   ? 2U
                                                   : 1U)
                                         : ((0x1000U 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [0U]) ? 2U
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
                                                 : 0U))))),4);
    bufp->fullIData(oldp+359,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                              [0U]),32);
    bufp->fullCData(oldp+360,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__funct7),7);
    bufp->fullCData(oldp+361,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [0U] >> 0xfU))),5);
    bufp->fullCData(oldp+362,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rs2),5);
    bufp->fullCData(oldp+363,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__rd),5);
    bufp->fullSData(oldp+364,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__i_type_imm),12);
    bufp->fullSData(oldp+365,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__s_type_imm),12);
    bufp->fullSData(oldp+366,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__0__KET____DOT__decode__b_type_imm),13);
    bufp->fullCData(oldp+367,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                               [1U])),7);
    bufp->fullCData(oldp+368,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                     [1U] >> 0xcU))),3);
    bufp->fullBit(oldp+369,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U])) || (0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [1U])))));
    bufp->fullBit(oldp+370,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [1U])) 
                                                   && (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                        [1U]))))));
    bufp->fullBit(oldp+371,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [1U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [1U])) 
                                                       && (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                            [1U])))))));
    bufp->fullBit(oldp+372,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [1U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [1U])) 
                                                       && ((0x23U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                             [1U])) 
                                                           && (0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                                [1U]))))))));
    bufp->fullCData(oldp+373,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [1U])) ? 0U
                                : ((0x13U == (0x7fU 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [1U]))
                                    ? ((0x4000U & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U]) ? 2U : 
                                       ((0x2000U & 
                                         vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                         [1U]) ? ((0x1000U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [1U])
                                                   ? 2U
                                                   : 1U)
                                         : ((0x1000U 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [1U]) ? 2U
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
                                                 : 0U))))),4);
    bufp->fullIData(oldp+374,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                              [1U]),32);
    bufp->fullCData(oldp+375,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__funct7),7);
    bufp->fullCData(oldp+376,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [1U] >> 0xfU))),5);
    bufp->fullCData(oldp+377,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rs2),5);
    bufp->fullCData(oldp+378,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__rd),5);
    bufp->fullSData(oldp+379,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__i_type_imm),12);
    bufp->fullSData(oldp+380,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__s_type_imm),12);
    bufp->fullSData(oldp+381,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__1__KET____DOT__decode__b_type_imm),13);
    bufp->fullCData(oldp+382,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                               [2U])),7);
    bufp->fullCData(oldp+383,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                     [2U] >> 0xcU))),3);
    bufp->fullBit(oldp+384,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U])) || (0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [2U])))));
    bufp->fullBit(oldp+385,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [2U])) 
                                                   && (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                        [2U]))))));
    bufp->fullBit(oldp+386,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [2U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [2U])) 
                                                       && (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                            [2U])))))));
    bufp->fullBit(oldp+387,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [2U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [2U])) 
                                                       && ((0x23U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                             [2U])) 
                                                           && (0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                                [2U]))))))));
    bufp->fullCData(oldp+388,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [2U])) ? 0U
                                : ((0x13U == (0x7fU 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [2U]))
                                    ? ((0x4000U & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U]) ? 2U : 
                                       ((0x2000U & 
                                         vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                         [2U]) ? ((0x1000U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [2U])
                                                   ? 2U
                                                   : 1U)
                                         : ((0x1000U 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [2U]) ? 2U
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
                                                 : 0U))))),4);
    bufp->fullIData(oldp+389,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                              [2U]),32);
    bufp->fullCData(oldp+390,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__funct7),7);
    bufp->fullCData(oldp+391,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [2U] >> 0xfU))),5);
    bufp->fullCData(oldp+392,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rs2),5);
    bufp->fullCData(oldp+393,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__rd),5);
    bufp->fullSData(oldp+394,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__i_type_imm),12);
    bufp->fullSData(oldp+395,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__s_type_imm),12);
    bufp->fullSData(oldp+396,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__2__KET____DOT__decode__b_type_imm),13);
    bufp->fullCData(oldp+397,((0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                               [3U])),7);
    bufp->fullCData(oldp+398,((7U & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                     [3U] >> 0xcU))),3);
    bufp->fullBit(oldp+399,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U])) || (0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                    [3U])))));
    bufp->fullBit(oldp+400,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [3U])) 
                                                   && (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                        [3U]))))));
    bufp->fullBit(oldp+401,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [3U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [3U])) 
                                                       && (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                            [3U])))))));
    bufp->fullBit(oldp+402,(((0x33U != (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U])) && (
                                                   (0x13U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                     [3U])) 
                                                   && ((3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                         [3U])) 
                                                       && ((0x23U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                             [3U])) 
                                                           && (0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                                [3U]))))))));
    bufp->fullCData(oldp+403,(((0x33U == (0x7fU & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                          [3U])) ? 0U
                                : ((0x13U == (0x7fU 
                                              & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                              [3U]))
                                    ? ((0x4000U & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U]) ? 2U : 
                                       ((0x2000U & 
                                         vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                         [3U]) ? ((0x1000U 
                                                   & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                                   [3U])
                                                   ? 2U
                                                   : 1U)
                                         : ((0x1000U 
                                             & vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                             [3U]) ? 2U
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
                                                 : 0U))))),4);
    bufp->fullIData(oldp+404,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                              [3U]),32);
    bufp->fullCData(oldp+405,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__funct7),7);
    bufp->fullCData(oldp+406,((0x1fU & (vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp
                                        [3U] >> 0xfU))),5);
    bufp->fullCData(oldp+407,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rs2),5);
    bufp->fullCData(oldp+408,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__rd),5);
    bufp->fullSData(oldp+409,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__i_type_imm),12);
    bufp->fullSData(oldp+410,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__s_type_imm),12);
    bufp->fullSData(oldp+411,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__decode_gen__BRA__3__KET____DOT__decode__b_type_imm),13);
    bufp->fullIData(oldp+412,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+413,(vlSelfRef.test__DOT__cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+414,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+415,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg_temp_logic__DOT__unnamedblk9__DOT__pointer),32);
    bufp->fullBit(oldp+416,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[0]));
    bufp->fullBit(oldp+417,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[1]));
    bufp->fullBit(oldp+418,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[2]));
    bufp->fullBit(oldp+419,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_op[3]));
    bufp->fullIData(oldp+420,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+421,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+422,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__branch_mask_logic__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+423,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+424,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+425,(vlSelfRef.test__DOT__cpu__DOT__memory_branch_mask_logic__DOT__mem_mask_logic__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullCData(oldp+426,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[0]),5);
    bufp->fullCData(oldp+427,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[1]),5);
    bufp->fullCData(oldp+428,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[2]),5);
    bufp->fullCData(oldp+429,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs1s[3]),5);
    bufp->fullCData(oldp+430,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[0]),5);
    bufp->fullCData(oldp+431,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[1]),5);
    bufp->fullCData(oldp+432,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[2]),5);
    bufp->fullCData(oldp+433,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__rs2s[3]),5);
    bufp->fullIData(oldp+434,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[0]),32);
    bufp->fullIData(oldp+435,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[1]),32);
    bufp->fullIData(oldp+436,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[2]),32);
    bufp->fullIData(oldp+437,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs1[3]),32);
    bufp->fullIData(oldp+438,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[0]),32);
    bufp->fullIData(oldp+439,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[1]),32);
    bufp->fullIData(oldp+440,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[2]),32);
    bufp->fullIData(oldp+441,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__rf__read_data_rs2[3]),32);
    bufp->fullIData(oldp+442,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+443,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+444,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+445,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+446,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+447,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+448,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+449,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+450,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+451,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+452,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+453,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+454,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+455,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+456,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+457,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+458,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+459,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+460,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+461,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+462,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+463,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+464,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+465,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+466,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+467,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+468,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+469,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+470,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+471,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+472,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+473,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__regs[31]),32);
    bufp->fullIData(oldp+474,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__j),32);
    bufp->fullCData(oldp+475,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[0]),5);
    bufp->fullCData(oldp+476,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[1]),5);
    bufp->fullCData(oldp+477,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[2]),5);
    bufp->fullCData(oldp+478,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rd[3]),5);
    bufp->fullCData(oldp+479,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[0]),5);
    bufp->fullCData(oldp+480,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[1]),5);
    bufp->fullCData(oldp+481,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[2]),5);
    bufp->fullCData(oldp+482,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs1[3]),5);
    bufp->fullCData(oldp+483,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[0]),5);
    bufp->fullCData(oldp+484,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[1]),5);
    bufp->fullCData(oldp+485,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[2]),5);
    bufp->fullCData(oldp+486,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__rs2[3]),5);
    bufp->fullCData(oldp+487,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[0]),5);
    bufp->fullCData(oldp+488,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[1]),5);
    bufp->fullCData(oldp+489,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[2]),5);
    bufp->fullCData(oldp+490,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__scoreboard__source_rds[3]),5);
    bufp->fullCData(oldp+491,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [0U][0U]),5);
    bufp->fullCData(oldp+492,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [0U][1U]),5);
    bufp->fullCData(oldp+493,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [0U][2U]),5);
    bufp->fullCData(oldp+494,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [0U][3U]),5);
    bufp->fullCData(oldp+495,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [1U][0U]),5);
    bufp->fullCData(oldp+496,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [1U][1U]),5);
    bufp->fullCData(oldp+497,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [1U][2U]),5);
    bufp->fullCData(oldp+498,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [1U][3U]),5);
    bufp->fullCData(oldp+499,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [2U][0U]),5);
    bufp->fullCData(oldp+500,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [2U][1U]),5);
    bufp->fullCData(oldp+501,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [2U][2U]),5);
    bufp->fullCData(oldp+502,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard
                              [2U][3U]),5);
    bufp->fullBit(oldp+503,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[0]));
    bufp->fullBit(oldp+504,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[1]));
    bufp->fullBit(oldp+505,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[2]));
    bufp->fullBit(oldp+506,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__branchboard[3]));
    bufp->fullBit(oldp+507,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__is_a_branch));
    bufp->fullIData(oldp+508,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk12__DOT__i),32);
    bufp->fullIData(oldp+509,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+510,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+511,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+512,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
    bufp->fullIData(oldp+513,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k),32);
    bufp->fullIData(oldp+514,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_check__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__l),32);
    bufp->fullIData(oldp+515,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+516,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+517,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+518,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+519,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+520,(vlSelfRef.test__DOT__cpu__DOT__scoreboard__DOT__scoreboard_update__DOT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+521,(vlSelfRef.test__DOT__cpu__DOT__stall_fetch));
    bufp->fullIData(oldp+522,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[0]),32);
    bufp->fullIData(oldp+523,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[1]),32);
    bufp->fullIData(oldp+524,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[2]),32);
    bufp->fullIData(oldp+525,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector[3]),32);
    bufp->fullIData(oldp+526,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[0]),32);
    bufp->fullIData(oldp+527,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[1]),32);
    bufp->fullIData(oldp+528,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[2]),32);
    bufp->fullIData(oldp+529,(vlSelfRef.test__DOT__cpu__DOT__instruction_vector_preg[3]),32);
    bufp->fullIData(oldp+530,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[0]),32);
    bufp->fullIData(oldp+531,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[1]),32);
    bufp->fullIData(oldp+532,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[2]),32);
    bufp->fullIData(oldp+533,(vlSelfRef.test__DOT__cpu__DOT__memory_result_vector[3]),32);
    bufp->fullBit(oldp+534,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[0]));
    bufp->fullBit(oldp+535,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[1]));
    bufp->fullBit(oldp+536,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[2]));
    bufp->fullBit(oldp+537,(vlSelfRef.test__DOT__cpu__DOT__memory_write_enable_vector[3]));
    bufp->fullBit(oldp+538,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[0]));
    bufp->fullBit(oldp+539,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[1]));
    bufp->fullBit(oldp+540,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[2]));
    bufp->fullBit(oldp+541,(vlSelfRef.test__DOT__cpu__DOT__register_write_vector_writeback_preg[3]));
    bufp->fullIData(oldp+542,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[0]),32);
    bufp->fullIData(oldp+543,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[1]),32);
    bufp->fullIData(oldp+544,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[2]),32);
    bufp->fullIData(oldp+545,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_data[3]),32);
    bufp->fullIData(oldp+546,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[0]),32);
    bufp->fullIData(oldp+547,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[1]),32);
    bufp->fullIData(oldp+548,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[2]),32);
    bufp->fullIData(oldp+549,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__data_memory__write_addr[3]),32);
    bufp->fullIData(oldp+550,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[0]),32);
    bufp->fullIData(oldp+551,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[1]),32);
    bufp->fullIData(oldp+552,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[2]),32);
    bufp->fullIData(oldp+553,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__data_memory__read_data[3]),32);
    bufp->fullIData(oldp+554,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[0]),32);
    bufp->fullIData(oldp+555,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[1]),32);
    bufp->fullIData(oldp+556,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[2]),32);
    bufp->fullIData(oldp+557,(vlSelfRef.test__DOT__cpu__DOT____Vcellout__instruction_memory__read_data[3]),32);
    bufp->fullCData(oldp+558,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[0]),5);
    bufp->fullCData(oldp+559,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[1]),5);
    bufp->fullCData(oldp+560,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[2]),5);
    bufp->fullCData(oldp+561,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_addrs[3]),5);
    bufp->fullIData(oldp+562,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[0]),32);
    bufp->fullIData(oldp+563,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[1]),32);
    bufp->fullIData(oldp+564,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[2]),32);
    bufp->fullIData(oldp+565,(vlSelfRef.test__DOT__cpu__DOT____Vcellinp__rf__write_data[3]),32);
    bufp->fullIData(oldp+566,(vlSelfRef.test__DOT__cpu__DOT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+567,(vlSelfRef.clk));
    bufp->fullBit(oldp+568,(vlSelfRef.reset));
    bufp->fullQData(oldp+569,(vlSelfRef.runtime),64);
    bufp->fullIData(oldp+571,(vlSelfRef.test__DOT__cpu__DOT__rf__DOT__i),32);
}
