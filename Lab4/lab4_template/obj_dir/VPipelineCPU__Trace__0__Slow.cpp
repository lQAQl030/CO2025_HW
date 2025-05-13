// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+137+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+137+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+169,"pc_RePC", false,-1, 31,0);
    tracep->declBus(c+45,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declArray(c+4,"IF_ID", false,-1, 95,0);
    tracep->declBit(c+128,"BrEq", false,-1);
    tracep->declBit(c+129,"BrLT", false,-1);
    tracep->declBit(c+7,"memRead", false,-1);
    tracep->declBit(c+8,"memWrite", false,-1);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBit(c+10,"regWrite", false,-1);
    tracep->declBit(c+130,"Flush_ctrl", false,-1);
    tracep->declBit(c+11,"PCorR1", false,-1);
    tracep->declBit(c+12,"BranchOrJump", false,-1);
    tracep->declBus(c+13,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+14,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+131,"PCSel", false,-1, 1,0);
    tracep->declBus(c+86,"writeData", false,-1, 31,0);
    tracep->declBus(c+170,"readData1", false,-1, 31,0);
    tracep->declBus(c+171,"readData2", false,-1, 31,0);
    tracep->declBit(c+116,"RePC", false,-1);
    tracep->declBit(c+117,"Flush_HD", false,-1);
    tracep->declBit(c+87,"id_ForwardA", false,-1);
    tracep->declBit(c+88,"id_ForwardB", false,-1);
    tracep->declBus(c+89,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+90,"ex_ForwardB", false,-1, 1,0);
    tracep->declBus(c+132,"BranchA", false,-1, 31,0);
    tracep->declBus(c+133,"BranchB", false,-1, 31,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+16,"branchAddr", false,-1, 31,0);
    tracep->declBus(c+46,"branch_adder_input", false,-1, 31,0);
    tracep->declBus(c+47,"branchTarget", false,-1, 31,0);
    tracep->declArray(c+17,"ID_EX", false,-1, 167,0);
    tracep->declBus(c+118,"ForwardA", false,-1, 31,0);
    tracep->declBus(c+119,"ForwardB", false,-1, 31,0);
    tracep->declBus(c+120,"ALUSrcB", false,-1, 31,0);
    tracep->declBus(c+23,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+172,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+173,"zero", false,-1);
    tracep->declArray(c+91,"EX_MEM", false,-1, 132,0);
    tracep->declBus(c+174,"memData", false,-1, 31,0);
    tracep->declArray(c+96,"MEM_WB", false,-1, 130,0);
    tracep->pushNamePrefix("FW_Unit ");
    tracep->declBus(c+24,"id_R1", false,-1, 4,0);
    tracep->declBus(c+25,"id_R2", false,-1, 4,0);
    tracep->declBus(c+26,"ex_R1", false,-1, 4,0);
    tracep->declBus(c+27,"ex_R2", false,-1, 4,0);
    tracep->declBus(c+101,"mem_Rd", false,-1, 4,0);
    tracep->declBus(c+102,"wb_Rd", false,-1, 4,0);
    tracep->declBit(c+103,"mem_RegWrite", false,-1);
    tracep->declBit(c+104,"wb_RegWrite", false,-1);
    tracep->declBit(c+87,"id_ForwardA", false,-1);
    tracep->declBit(c+88,"id_ForwardB", false,-1);
    tracep->declBus(c+89,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+90,"ex_ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HD_Unit ");
    tracep->declBus(c+24,"id_R1", false,-1, 4,0);
    tracep->declBus(c+25,"id_R2", false,-1, 4,0);
    tracep->declBus(c+28,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+101,"mem_Rd", false,-1, 4,0);
    tracep->declBit(c+29,"ex_memRead", false,-1);
    tracep->declBit(c+30,"ex_regWrite", false,-1);
    tracep->declBit(c+121,"mem_memRead", false,-1);
    tracep->declBit(c+12,"BranchOrJump", false,-1);
    tracep->declBit(c+116,"RePC", false,-1);
    tracep->declBit(c+117,"Flush_HD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+23,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+118,"A", false,-1, 31,0);
    tracep->declBus(c+120,"B", false,-1, 31,0);
    tracep->declBus(c+172,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+173,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+31,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+32,"funct7", false,-1);
    tracep->declBus(c+33,"funct3", false,-1, 2,0);
    tracep->declBus(c+23,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+175,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+46,"a", false,-1, 31,0);
    tracep->declBus(c+16,"b", false,-1, 31,0);
    tracep->declBus(c+47,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+132,"A", false,-1, 31,0);
    tracep->declBus(c+133,"B", false,-1, 31,0);
    tracep->declBit(c+128,"BrEq", false,-1);
    tracep->declBit(c+129,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+34,"opcode", false,-1, 6,0);
    tracep->declBus(c+35,"funct3", false,-1, 2,0);
    tracep->declBit(c+128,"BrEq", false,-1);
    tracep->declBit(c+129,"BrLT", false,-1);
    tracep->declBit(c+7,"memRead", false,-1);
    tracep->declBus(c+13,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+14,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+8,"memWrite", false,-1);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBit(c+10,"regWrite", false,-1);
    tracep->declBus(c+131,"PCSel", false,-1, 1,0);
    tracep->declBit(c+130,"Flush_ctrl", false,-1);
    tracep->declBit(c+11,"PCorR1", false,-1);
    tracep->declBit(c+12,"BranchOrJump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+105,"memWrite", false,-1);
    tracep->declBit(c+121,"memRead", false,-1);
    tracep->declBus(c+122,"address", false,-1, 31,0);
    tracep->declBus(c+106,"writeData", false,-1, 31,0);
    tracep->declBus(c+174,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM ");
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBit(c+177,"Flush_ctrl", false,-1);
    tracep->declBit(c+177,"Flush_HD", false,-1);
    tracep->declArray(c+123,"data_i", false,-1, 132,0);
    tracep->declArray(c+91,"data_o", false,-1, 132,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBit(c+177,"Flush_ctrl", false,-1);
    tracep->declBit(c+117,"Flush_HD", false,-1);
    tracep->declArray(c+48,"data_i", false,-1, 167,0);
    tracep->declArray(c+17,"data_o", false,-1, 167,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID ");
    tracep->declBus(c+179,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBit(c+130,"Flush_ctrl", false,-1);
    tracep->declBit(c+117,"Flush_HD", false,-1);
    tracep->declArray(c+36,"data_i", false,-1, 95,0);
    tracep->declArray(c+4,"data_o", false,-1, 95,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+1,"readAddr", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB ");
    tracep->declBus(c+180,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBit(c+177,"Flush_ctrl", false,-1);
    tracep->declBit(c+177,"Flush_HD", false,-1);
    tracep->declArray(c+111,"data_i", false,-1, 130,0);
    tracep->declArray(c+96,"data_o", false,-1, 130,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBit(c+40,"sel", false,-1);
    tracep->declBus(c+119,"s0", false,-1, 31,0);
    tracep->declBus(c+41,"s1", false,-1, 31,0);
    tracep->declBus(c+120,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_BranchA ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBit(c+87,"sel", false,-1);
    tracep->declBus(c+170,"s0", false,-1, 31,0);
    tracep->declBus(c+122,"s1", false,-1, 31,0);
    tracep->declBus(c+132,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_BranchB ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBit(c+88,"sel", false,-1);
    tracep->declBus(c+171,"s0", false,-1, 31,0);
    tracep->declBus(c+122,"s1", false,-1, 31,0);
    tracep->declBus(c+133,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ForwardA ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBus(c+89,"sel", false,-1, 1,0);
    tracep->declBus(c+42,"s0", false,-1, 31,0);
    tracep->declBus(c+86,"s1", false,-1, 31,0);
    tracep->declBus(c+122,"s2", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ForwardB ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBus(c+90,"sel", false,-1, 1,0);
    tracep->declBus(c+43,"s0", false,-1, 31,0);
    tracep->declBus(c+86,"s1", false,-1, 31,0);
    tracep->declBus(c+122,"s2", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBit(c+134,"sel", false,-1);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+47,"s1", false,-1, 31,0);
    tracep->declBus(c+45,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_RePC ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBit(c+116,"sel", false,-1);
    tracep->declBus(c+45,"s0", false,-1, 31,0);
    tracep->declBus(c+44,"s1", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBus(c+107,"sel", false,-1, 1,0);
    tracep->declBus(c+108,"s0", false,-1, 31,0);
    tracep->declBus(c+109,"s1", false,-1, 31,0);
    tracep->declBus(c+110,"s2", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_jalr ");
    tracep->declBus(c+181,"size", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+44,"s0", false,-1, 31,0);
    tracep->declBus(c+132,"s1", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBus(c+169,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+135,"clk", false,-1);
    tracep->declBit(c+136,"rst", false,-1);
    tracep->declBit(c+104,"regWrite", false,-1);
    tracep->declBus(c+24,"readReg1", false,-1, 4,0);
    tracep->declBus(c+25,"readReg2", false,-1, 4,0);
    tracep->declBus(c+102,"writeReg", false,-1, 4,0);
    tracep->declBus(c+86,"writeData", false,-1, 31,0);
    tracep->declBus(c+170,"readData1", false,-1, 31,0);
    tracep->declBus(c+171,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+54+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBit(c+11,"PCorR1", false,-1);
    tracep->declBus(c+15,"i", false,-1, 31,0);
    tracep->declBus(c+16,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_he0585090__0;
    VlWide<6>/*191:0*/ __Vtemp_h8152e0ca__0;
    VlWide<5>/*159:0*/ __Vtemp_h0503c463__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+3,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                              ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelf->PipelineCPU__DOT__pc_o)] 
                                       << 0x18U) | 
                                      ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_o))] 
                                        << 0x10U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(2U) 
                                            + vlSelf->PipelineCPU__DOT__pc_o))] 
                                         << 8U) | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(3U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_o))]))))),32);
    bufp->fullWData(oldp+4,(vlSelf->PipelineCPU__DOT__IF_ID),96);
    bufp->fullBit(oldp+7,(vlSelf->PipelineCPU__DOT__memRead));
    bufp->fullBit(oldp+8,(vlSelf->PipelineCPU__DOT__memWrite));
    bufp->fullBit(oldp+9,(vlSelf->PipelineCPU__DOT__ALUSrc));
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__regWrite));
    bufp->fullBit(oldp+11,(vlSelf->PipelineCPU__DOT__PCorR1));
    bufp->fullBit(oldp+12,(vlSelf->PipelineCPU__DOT__BranchOrJump));
    bufp->fullCData(oldp+13,(vlSelf->PipelineCPU__DOT__memtoReg),2);
    bufp->fullCData(oldp+14,(vlSelf->PipelineCPU__DOT__ALUOp),2);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                               ? vlSelf->PipelineCPU__DOT__imm
                               : (vlSelf->PipelineCPU__DOT__imm 
                                  << 1U))),32);
    bufp->fullWData(oldp+17,(vlSelf->PipelineCPU__DOT__ID_EX),168);
    bufp->fullCData(oldp+23,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+26,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+27,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+28,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                       >> 7U))),5);
    bufp->fullBit(oldp+29,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                  >> 3U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                  >> 7U))));
    bufp->fullCData(oldp+31,((3U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+32,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+33,((7U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+34,((0x7fU & vlSelf->PipelineCPU__DOT__IF_ID[0U])),7);
    bufp->fullCData(oldp+35,((7U & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                    >> 0xcU))),3);
    __Vtemp_he0585090__0[0U] = ((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                                 ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                          [(0x7fU & vlSelf->PipelineCPU__DOT__pc_o)] 
                                          << 0x18U) 
                                         | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                             [(0x7fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->PipelineCPU__DOT__pc_o))] 
                                             << 0x10U) 
                                            | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                << 8U) 
                                               | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->PipelineCPU__DOT__pc_o))]))));
    __Vtemp_he0585090__0[1U] = (IData)((((QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->PipelineCPU__DOT__pc_o))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o))));
    __Vtemp_he0585090__0[2U] = (IData)(((((QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->PipelineCPU__DOT__pc_o))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+36,(__Vtemp_he0585090__0),96);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__IF_ID[0U]),32);
    bufp->fullBit(oldp+40,((1U & vlSelf->PipelineCPU__DOT__ID_EX[5U])));
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__ID_EX[1U]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__ID_EX[3U]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__ID_EX[2U]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__IF_ID[1U]),32);
    bufp->fullIData(oldp+45,(((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                               ? (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                    ? vlSelf->PipelineCPU__DOT__BranchA
                                    : vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                                  + ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                      ? vlSelf->PipelineCPU__DOT__imm
                                      : (vlSelf->PipelineCPU__DOT__imm 
                                         << 1U))) : 
                              ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o))),32);
    bufp->fullIData(oldp+46,(((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                               ? vlSelf->PipelineCPU__DOT__BranchA
                               : vlSelf->PipelineCPU__DOT__IF_ID[1U])),32);
    bufp->fullIData(oldp+47,((((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                ? vlSelf->PipelineCPU__DOT__BranchA
                                : vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                              + ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                  ? vlSelf->PipelineCPU__DOT__imm
                                  : (vlSelf->PipelineCPU__DOT__imm 
                                     << 1U)))),32);
    __Vtemp_h8152e0ca__0[0U] = vlSelf->PipelineCPU__DOT__IF_ID[0U];
    __Vtemp_h8152e0ca__0[1U] = vlSelf->PipelineCPU__DOT__imm;
    __Vtemp_h8152e0ca__0[2U] = vlSelf->PipelineCPU__DOT__BranchB;
    __Vtemp_h8152e0ca__0[3U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT__IF_ID[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__BranchA))));
    __Vtemp_h8152e0ca__0[4U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__IF_ID[2U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PipelineCPU__DOT__BranchA))) 
                                        >> 0x20U));
    __Vtemp_h8152e0ca__0[5U] = (((IData)(vlSelf->PipelineCPU__DOT__regWrite) 
                                 << 7U) | (((IData)(vlSelf->PipelineCPU__DOT__memtoReg) 
                                            << 5U) 
                                           | (((IData)(vlSelf->PipelineCPU__DOT__memWrite) 
                                               << 4U) 
                                              | (((IData)(vlSelf->PipelineCPU__DOT__memRead) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->PipelineCPU__DOT__ALUOp) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->PipelineCPU__DOT__ALUSrc))))));
    bufp->fullWData(oldp+48,(__Vtemp_h8152e0ca__0),168);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+61,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+65,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+66,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+67,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+70,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+71,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+72,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+74,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+75,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+76,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+77,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+78,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+82,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__writeData),32);
    bufp->fullBit(oldp+87,(vlSelf->PipelineCPU__DOT__id_ForwardA));
    bufp->fullBit(oldp+88,(vlSelf->PipelineCPU__DOT__id_ForwardB));
    bufp->fullCData(oldp+89,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
    bufp->fullCData(oldp+90,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
    bufp->fullWData(oldp+91,(vlSelf->PipelineCPU__DOT__EX_MEM),133);
    bufp->fullWData(oldp+96,(vlSelf->PipelineCPU__DOT__MEM_WB),131);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                        >> 7U))),5);
    bufp->fullCData(oldp+102,((0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+103,((1U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                   >> 4U))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->PipelineCPU__DOT__MEM_WB[4U] 
                                   >> 2U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                   >> 1U))));
    bufp->fullIData(oldp+106,(vlSelf->PipelineCPU__DOT__EX_MEM[1U]),32);
    bufp->fullCData(oldp+107,((3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U])),2);
    bufp->fullIData(oldp+108,(vlSelf->PipelineCPU__DOT__MEM_WB[2U]),32);
    bufp->fullIData(oldp+109,(vlSelf->PipelineCPU__DOT__MEM_WB[1U]),32);
    bufp->fullIData(oldp+110,(vlSelf->PipelineCPU__DOT__MEM_WB[3U]),32);
    __Vtemp_h0503c463__0[0U] = vlSelf->PipelineCPU__DOT__EX_MEM[0U];
    __Vtemp_h0503c463__0[1U] = vlSelf->PipelineCPU__DOT__memData;
    __Vtemp_h0503c463__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT__EX_MEM[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__EX_MEM[2U]))));
    __Vtemp_h0503c463__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__EX_MEM[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->PipelineCPU__DOT__EX_MEM[2U]))) 
                                        >> 0x20U));
    __Vtemp_h0503c463__0[4U] = (7U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                      >> 2U));
    bufp->fullWData(oldp+111,(__Vtemp_h0503c463__0),131);
    bufp->fullBit(oldp+116,(vlSelf->PipelineCPU__DOT__RePC));
    bufp->fullBit(oldp+117,(vlSelf->PipelineCPU__DOT__Flush_HD));
    bufp->fullIData(oldp+118,(vlSelf->PipelineCPU__DOT__ForwardA),32);
    bufp->fullIData(oldp+119,(vlSelf->PipelineCPU__DOT__ForwardB),32);
    bufp->fullIData(oldp+120,(vlSelf->PipelineCPU__DOT__ALUSrcB),32);
    bufp->fullBit(oldp+121,(vlSelf->PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead));
    bufp->fullIData(oldp+122,(vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1),32);
    bufp->fullWData(oldp+123,(vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i),133);
    bufp->fullBit(oldp+128,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+129,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullBit(oldp+130,(vlSelf->PipelineCPU__DOT__Flush_ctrl));
    bufp->fullCData(oldp+131,(vlSelf->PipelineCPU__DOT__PCSel),2);
    bufp->fullIData(oldp+132,(vlSelf->PipelineCPU__DOT__BranchA),32);
    bufp->fullIData(oldp+133,(vlSelf->PipelineCPU__DOT__BranchB),32);
    bufp->fullBit(oldp+134,((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))));
    bufp->fullBit(oldp+135,(vlSelf->clk));
    bufp->fullBit(oldp+136,(vlSelf->start));
    bufp->fullIData(oldp+137,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+141,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+142,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+143,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+144,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+145,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+146,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+147,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+148,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+149,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+150,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+151,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+152,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+153,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+154,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+155,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+156,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+157,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+158,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+159,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+160,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+161,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+162,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+163,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+164,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+165,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+166,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+167,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+168,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+169,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                ? vlSelf->PipelineCPU__DOT__IF_ID[1U]
                                : ((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                    ? (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                         ? vlSelf->PipelineCPU__DOT__BranchA
                                         : vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                                       + ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                           ? vlSelf->PipelineCPU__DOT__imm
                                           : (vlSelf->PipelineCPU__DOT__imm 
                                              << 1U)))
                                    : ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_o)))),32);
    bufp->fullIData(oldp+170,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+171,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+172,(((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                ? ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                    ? 0U : ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                              ? 0U : 
                                             ((0x1fU 
                                               >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                               ? (vlSelf->PipelineCPU__DOT__ForwardA 
                                                  << vlSelf->PipelineCPU__DOT__ALUSrcB)
                                               : 0U))))
                                : ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                    ? ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                        ? ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                ? 1U
                                                : 0U)
                                            : (vlSelf->PipelineCPU__DOT__ForwardA 
                                               - vlSelf->PipelineCPU__DOT__ALUSrcB))
                                        : ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? ((0x1fU 
                                                >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                ? VL_SHIFTRS_III(32,32,32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                : (- 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA 
                                                    >> 0x1fU)))
                                            : ((0x1fU 
                                                >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                ? (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   >> vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                : 0U)))
                                    : ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                        ? ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? (vlSelf->PipelineCPU__DOT__ForwardA 
                                               ^ vlSelf->PipelineCPU__DOT__ALUSrcB)
                                            : (vlSelf->PipelineCPU__DOT__ForwardA 
                                               + vlSelf->PipelineCPU__DOT__ALUSrcB))
                                        : ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? (vlSelf->PipelineCPU__DOT__ForwardA 
                                               | vlSelf->PipelineCPU__DOT__ALUSrcB)
                                            : (vlSelf->PipelineCPU__DOT__ForwardA 
                                               & vlSelf->PipelineCPU__DOT__ALUSrcB)))))),32);
    bufp->fullBit(oldp+173,((0U == ((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                     ? ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                   ? 0U
                                                   : 
                                                  ((0x1fU 
                                                    >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA 
                                                    << vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    : 0U))))
                                     : ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                         ? ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelf->PipelineCPU__DOT__ForwardA 
                                                 - vlSelf->PipelineCPU__DOT__ALUSrcB))
                                             : ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                ((0x1fU 
                                                  >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  : 
                                                 (- 
                                                  (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   >> 0x1fU)))
                                                 : 
                                                ((0x1fU 
                                                  >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__ForwardA 
                                                  >> vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  : 0U)))
                                         : ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                (vlSelf->PipelineCPU__DOT__ForwardA 
                                                 ^ vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                 : 
                                                (vlSelf->PipelineCPU__DOT__ForwardA 
                                                 + vlSelf->PipelineCPU__DOT__ALUSrcB))
                                             : ((1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                (vlSelf->PipelineCPU__DOT__ForwardA 
                                                 | vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                 : 
                                                (vlSelf->PipelineCPU__DOT__ForwardA 
                                                 & vlSelf->PipelineCPU__DOT__ALUSrcB))))))));
    bufp->fullIData(oldp+174,(vlSelf->PipelineCPU__DOT__memData),32);
    bufp->fullIData(oldp+175,(4U),32);
    bufp->fullIData(oldp+176,(0x85U),32);
    bufp->fullBit(oldp+177,(0U));
    bufp->fullIData(oldp+178,(0xa8U),32);
    bufp->fullIData(oldp+179,(0x60U),32);
    bufp->fullIData(oldp+180,(0x83U),32);
    bufp->fullIData(oldp+181,(0x20U),32);
}
