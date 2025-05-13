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
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+117+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+117+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+103,"pc_i", false,-1, 31,0);
    tracep->declBus(c+33,"pc_o", false,-1, 31,0);
    tracep->declBus(c+34,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declArray(c+36,"IF_ID", false,-1, 95,0);
    tracep->declBit(c+110,"BrEq", false,-1);
    tracep->declBit(c+111,"BrLT", false,-1);
    tracep->declBit(c+39,"memRead", false,-1);
    tracep->declBit(c+40,"memWrite", false,-1);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBit(c+42,"regWrite", false,-1);
    tracep->declBus(c+43,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+44,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+112,"PCSel", false,-1, 1,0);
    tracep->declBus(c+45,"writeData", false,-1, 31,0);
    tracep->declBus(c+113,"readData1", false,-1, 31,0);
    tracep->declBus(c+114,"readData2", false,-1, 31,0);
    tracep->declBus(c+46,"imm", false,-1, 31,0);
    tracep->declBus(c+47,"branchAddr", false,-1, 31,0);
    tracep->declBus(c+48,"branchTarget", false,-1, 31,0);
    tracep->declBus(c+49,"ALUOut", false,-1, 31,0);
    tracep->declArray(c+50,"ID_EX", false,-1, 167,0);
    tracep->declBus(c+56,"ALUSrcB", false,-1, 31,0);
    tracep->declBus(c+57,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+58,"zero", false,-1);
    tracep->declArray(c+59,"EX_MEM", false,-1, 132,0);
    tracep->declBus(c+149,"memData", false,-1, 31,0);
    tracep->declArray(c+64,"MEM_WB", false,-1, 130,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+57,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+69,"A", false,-1, 31,0);
    tracep->declBus(c+56,"B", false,-1, 31,0);
    tracep->declBus(c+49,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+58,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+70,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+71,"funct7", false,-1);
    tracep->declBus(c+72,"funct3", false,-1, 2,0);
    tracep->declBus(c+57,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+33,"a", false,-1, 31,0);
    tracep->declBus(c+152,"b", false,-1, 31,0);
    tracep->declBus(c+34,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+73,"a", false,-1, 31,0);
    tracep->declBus(c+47,"b", false,-1, 31,0);
    tracep->declBus(c+48,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+113,"A", false,-1, 31,0);
    tracep->declBus(c+114,"B", false,-1, 31,0);
    tracep->declBit(c+110,"BrEq", false,-1);
    tracep->declBit(c+111,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+75,"funct3", false,-1, 2,0);
    tracep->declBit(c+110,"BrEq", false,-1);
    tracep->declBit(c+111,"BrLT", false,-1);
    tracep->declBit(c+39,"memRead", false,-1);
    tracep->declBus(c+43,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+44,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+40,"memWrite", false,-1);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBit(c+42,"regWrite", false,-1);
    tracep->declBus(c+112,"PCSel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+76,"memWrite", false,-1);
    tracep->declBit(c+150,"memRead", false,-1);
    tracep->declBus(c+151,"address", false,-1, 31,0);
    tracep->declBus(c+77,"writeData", false,-1, 31,0);
    tracep->declBus(c+149,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declArray(c+78,"data_i", false,-1, 132,0);
    tracep->declArray(c+59,"data_o", false,-1, 132,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX ");
    tracep->declBus(c+154,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declArray(c+104,"data_i", false,-1, 167,0);
    tracep->declArray(c+50,"data_o", false,-1, 167,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID ");
    tracep->declBus(c+155,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declArray(c+83,"data_i", false,-1, 95,0);
    tracep->declArray(c+36,"data_o", false,-1, 95,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+86,"inst", false,-1, 31,0);
    tracep->declBus(c+46,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+33,"readAddr", false,-1, 31,0);
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB ");
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declArray(c+98,"data_i", false,-1, 130,0);
    tracep->declArray(c+64,"data_o", false,-1, 130,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+157,"size", false,-1, 31,0);
    tracep->declBit(c+87,"sel", false,-1);
    tracep->declBus(c+88,"s0", false,-1, 31,0);
    tracep->declBus(c+89,"s1", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+157,"size", false,-1, 31,0);
    tracep->declBus(c+112,"sel", false,-1, 1,0);
    tracep->declBus(c+34,"s0", false,-1, 31,0);
    tracep->declBus(c+48,"s1", false,-1, 31,0);
    tracep->declBus(c+49,"s2", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+157,"size", false,-1, 31,0);
    tracep->declBus(c+90,"sel", false,-1, 1,0);
    tracep->declBus(c+91,"s0", false,-1, 31,0);
    tracep->declBus(c+92,"s1", false,-1, 31,0);
    tracep->declBus(c+93,"s2", false,-1, 31,0);
    tracep->declBus(c+45,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBus(c+103,"pc_i", false,-1, 31,0);
    tracep->declBus(c+33,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+94,"regWrite", false,-1);
    tracep->declBus(c+95,"readReg1", false,-1, 4,0);
    tracep->declBus(c+96,"readReg2", false,-1, 4,0);
    tracep->declBus(c+97,"writeReg", false,-1, 4,0);
    tracep->declBus(c+45,"writeData", false,-1, 31,0);
    tracep->declBus(c+113,"readData1", false,-1, 31,0);
    tracep->declBus(c+114,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+46,"i", false,-1, 31,0);
    tracep->declBus(c+47,"o", false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_h81081965__0;
    VlWide<3>/*95:0*/ __Vtemp_he0585090__0;
    VlWide<5>/*159:0*/ __Vtemp_h0503c463__0;
    VlWide<6>/*191:0*/ __Vtemp_hf6116a8c__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__pc_o),32);
    bufp->fullIData(oldp+34,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
    bufp->fullIData(oldp+35,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__pc_o)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
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
                                                + vlSelf->PipelineCPU__DOT__pc_o))]))))),32);
    bufp->fullWData(oldp+36,(vlSelf->PipelineCPU__DOT__IF_ID),96);
    bufp->fullBit(oldp+39,(vlSelf->PipelineCPU__DOT__memRead));
    bufp->fullBit(oldp+40,(vlSelf->PipelineCPU__DOT__memWrite));
    bufp->fullBit(oldp+41,(vlSelf->PipelineCPU__DOT__ALUSrc));
    bufp->fullBit(oldp+42,(vlSelf->PipelineCPU__DOT__regWrite));
    bufp->fullCData(oldp+43,(vlSelf->PipelineCPU__DOT__memtoReg),2);
    bufp->fullCData(oldp+44,(vlSelf->PipelineCPU__DOT__ALUOp),2);
    bufp->fullIData(oldp+45,(((0U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                               ? vlSelf->PipelineCPU__DOT__MEM_WB[2U]
                               : ((1U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                   ? vlSelf->PipelineCPU__DOT__MEM_WB[1U]
                                   : ((2U == (3U & 
                                              vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                       ? vlSelf->PipelineCPU__DOT__MEM_WB[3U]
                                       : vlSelf->PipelineCPU__DOT__MEM_WB[2U])))),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+47,((vlSelf->PipelineCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+48,((vlSelf->PipelineCPU__DOT__IF_ID[1U] 
                              + (vlSelf->PipelineCPU__DOT__imm 
                                 << 1U))),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__ALUOut),32);
    bufp->fullWData(oldp+50,(vlSelf->PipelineCPU__DOT__ID_EX),168);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__ALUSrcB),32);
    bufp->fullCData(oldp+57,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullBit(oldp+58,((0U == vlSelf->PipelineCPU__DOT__ALUOut)));
    bufp->fullWData(oldp+59,(vlSelf->PipelineCPU__DOT__EX_MEM),133);
    bufp->fullWData(oldp+64,(vlSelf->PipelineCPU__DOT__MEM_WB),131);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__ID_EX[3U]),32);
    bufp->fullCData(oldp+70,((3U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+71,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+72,((7U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__IF_ID[1U]),32);
    bufp->fullCData(oldp+74,((0x7fU & vlSelf->PipelineCPU__DOT__IF_ID[0U])),7);
    bufp->fullCData(oldp+75,((7U & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+76,((1U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                  >> 1U))));
    bufp->fullIData(oldp+77,(vlSelf->PipelineCPU__DOT__EX_MEM[1U]),32);
    __Vtemp_h81081965__0[0U] = vlSelf->PipelineCPU__DOT__ID_EX[0U];
    __Vtemp_h81081965__0[1U] = vlSelf->PipelineCPU__DOT__ID_EX[2U];
    __Vtemp_h81081965__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT__ID_EX[4U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__ALUOut))));
    __Vtemp_h81081965__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__ID_EX[4U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PipelineCPU__DOT__ALUOut))) 
                                        >> 0x20U));
    __Vtemp_h81081965__0[4U] = (0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                         >> 3U));
    bufp->fullWData(oldp+78,(__Vtemp_h81081965__0),133);
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
    bufp->fullWData(oldp+83,(__Vtemp_he0585090__0),96);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__IF_ID[0U]),32);
    bufp->fullBit(oldp+87,((1U & vlSelf->PipelineCPU__DOT__ID_EX[5U])));
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__ID_EX[2U]),32);
    bufp->fullIData(oldp+89,(vlSelf->PipelineCPU__DOT__ID_EX[1U]),32);
    bufp->fullCData(oldp+90,((3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U])),2);
    bufp->fullIData(oldp+91,(vlSelf->PipelineCPU__DOT__MEM_WB[2U]),32);
    bufp->fullIData(oldp+92,(vlSelf->PipelineCPU__DOT__MEM_WB[1U]),32);
    bufp->fullIData(oldp+93,(vlSelf->PipelineCPU__DOT__MEM_WB[3U]),32);
    bufp->fullBit(oldp+94,((1U & (vlSelf->PipelineCPU__DOT__MEM_WB[4U] 
                                  >> 2U))));
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+96,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                       >> 7U))),5);
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
    bufp->fullWData(oldp+98,(__Vtemp_h0503c463__0),131);
    bufp->fullIData(oldp+103,(((0U == (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                    ? (vlSelf->PipelineCPU__DOT__IF_ID[1U] 
                                       + (vlSelf->PipelineCPU__DOT__imm 
                                          << 1U)) : 
                                   ((2U == (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                     ? vlSelf->PipelineCPU__DOT__ALUOut
                                     : ((IData)(4U) 
                                        + vlSelf->PipelineCPU__DOT__pc_o))))),32);
    __Vtemp_hf6116a8c__0[0U] = vlSelf->PipelineCPU__DOT__IF_ID[0U];
    __Vtemp_hf6116a8c__0[1U] = vlSelf->PipelineCPU__DOT__imm;
    __Vtemp_hf6116a8c__0[2U] = vlSelf->PipelineCPU__DOT__readData2;
    __Vtemp_hf6116a8c__0[3U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT__IF_ID[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__readData1))));
    __Vtemp_hf6116a8c__0[4U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__IF_ID[2U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PipelineCPU__DOT__readData1))) 
                                        >> 0x20U));
    __Vtemp_hf6116a8c__0[5U] = (((IData)(vlSelf->PipelineCPU__DOT__regWrite) 
                                 << 7U) | (((IData)(vlSelf->PipelineCPU__DOT__memtoReg) 
                                            << 5U) 
                                           | (((IData)(vlSelf->PipelineCPU__DOT__memWrite) 
                                               << 4U) 
                                              | (((IData)(vlSelf->PipelineCPU__DOT__memRead) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->PipelineCPU__DOT__ALUOp) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->PipelineCPU__DOT__ALUSrc))))));
    bufp->fullWData(oldp+104,(__Vtemp_hf6116a8c__0),168);
    bufp->fullBit(oldp+110,((vlSelf->PipelineCPU__DOT__readData1 
                             == vlSelf->PipelineCPU__DOT__readData2)));
    bufp->fullBit(oldp+111,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullCData(oldp+112,(vlSelf->PipelineCPU__DOT__PCSel),2);
    bufp->fullIData(oldp+113,(vlSelf->PipelineCPU__DOT__readData1),32);
    bufp->fullIData(oldp+114,(vlSelf->PipelineCPU__DOT__readData2),32);
    bufp->fullBit(oldp+115,(vlSelf->clk));
    bufp->fullBit(oldp+116,(vlSelf->start));
    bufp->fullIData(oldp+117,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+141,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+142,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+143,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+144,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+145,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+146,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+147,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+148,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+149,(vlSelf->PipelineCPU__DOT__memData),32);
    bufp->fullBit(oldp+150,(vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead));
    bufp->fullIData(oldp+151,(vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address),32);
    bufp->fullIData(oldp+152,(4U),32);
    bufp->fullIData(oldp+153,(0x85U),32);
    bufp->fullIData(oldp+154,(0xa8U),32);
    bufp->fullIData(oldp+155,(0x60U),32);
    bufp->fullIData(oldp+156,(0x83U),32);
    bufp->fullIData(oldp+157,(0x20U),32);
}
