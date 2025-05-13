// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h81081965__0;
    VlWide<3>/*95:0*/ __Vtemp_he0585090__0;
    VlWide<5>/*159:0*/ __Vtemp_h0503c463__0;
    VlWide<6>/*191:0*/ __Vtemp_hf6116a8c__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__pc_o),32);
        bufp->chgIData(oldp+33,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
        bufp->chgIData(oldp+34,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__pc_o)] 
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
                                                     + vlSelf->PipelineCPU__DOT__pc_o))]))))),32);
        bufp->chgWData(oldp+35,(vlSelf->PipelineCPU__DOT__IF_ID),96);
        bufp->chgBit(oldp+38,(vlSelf->PipelineCPU__DOT__memRead));
        bufp->chgBit(oldp+39,(vlSelf->PipelineCPU__DOT__memWrite));
        bufp->chgBit(oldp+40,(vlSelf->PipelineCPU__DOT__ALUSrc));
        bufp->chgBit(oldp+41,(vlSelf->PipelineCPU__DOT__regWrite));
        bufp->chgCData(oldp+42,(vlSelf->PipelineCPU__DOT__memtoReg),2);
        bufp->chgCData(oldp+43,(vlSelf->PipelineCPU__DOT__ALUOp),2);
        bufp->chgIData(oldp+44,(((0U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                  ? vlSelf->PipelineCPU__DOT__MEM_WB[2U]
                                  : ((1U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                      ? vlSelf->PipelineCPU__DOT__MEM_WB[1U]
                                      : ((2U == (3U 
                                                 & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                          ? vlSelf->PipelineCPU__DOT__MEM_WB[3U]
                                          : vlSelf->PipelineCPU__DOT__MEM_WB[2U])))),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+46,((vlSelf->PipelineCPU__DOT__imm 
                                 << 1U)),32);
        bufp->chgIData(oldp+47,((vlSelf->PipelineCPU__DOT__IF_ID[1U] 
                                 + (vlSelf->PipelineCPU__DOT__imm 
                                    << 1U))),32);
        bufp->chgIData(oldp+48,(vlSelf->PipelineCPU__DOT__ALUOut),32);
        bufp->chgWData(oldp+49,(vlSelf->PipelineCPU__DOT__ID_EX),168);
        bufp->chgIData(oldp+55,(vlSelf->PipelineCPU__DOT__ALUSrcB),32);
        bufp->chgCData(oldp+56,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgBit(oldp+57,((0U == vlSelf->PipelineCPU__DOT__ALUOut)));
        bufp->chgWData(oldp+58,(vlSelf->PipelineCPU__DOT__EX_MEM),133);
        bufp->chgWData(oldp+63,(vlSelf->PipelineCPU__DOT__MEM_WB),131);
        bufp->chgIData(oldp+68,(vlSelf->PipelineCPU__DOT__ID_EX[3U]),32);
        bufp->chgCData(oldp+69,((3U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+70,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+71,((7U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+72,(vlSelf->PipelineCPU__DOT__IF_ID[1U]),32);
        bufp->chgCData(oldp+73,((0x7fU & vlSelf->PipelineCPU__DOT__IF_ID[0U])),7);
        bufp->chgCData(oldp+74,((7U & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+75,((1U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                     >> 1U))));
        bufp->chgIData(oldp+76,(vlSelf->PipelineCPU__DOT__EX_MEM[1U]),32);
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
        bufp->chgWData(oldp+77,(__Vtemp_h81081965__0),133);
        __Vtemp_he0585090__0[0U] = ((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
                                     ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & vlSelf->PipelineCPU__DOT__pc_o)] 
                                              << 0x18U) 
                                             | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                 << 0x10U) 
                                                | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->PipelineCPU__DOT__pc_o))] 
                                                    << 8U) 
                                                   | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                   [
                                                   (0x7fU 
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
        bufp->chgWData(oldp+82,(__Vtemp_he0585090__0),96);
        bufp->chgIData(oldp+85,(vlSelf->PipelineCPU__DOT__IF_ID[0U]),32);
        bufp->chgBit(oldp+86,((1U & vlSelf->PipelineCPU__DOT__ID_EX[5U])));
        bufp->chgIData(oldp+87,(vlSelf->PipelineCPU__DOT__ID_EX[2U]),32);
        bufp->chgIData(oldp+88,(vlSelf->PipelineCPU__DOT__ID_EX[1U]),32);
        bufp->chgCData(oldp+89,((3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U])),2);
        bufp->chgIData(oldp+90,(vlSelf->PipelineCPU__DOT__MEM_WB[2U]),32);
        bufp->chgIData(oldp+91,(vlSelf->PipelineCPU__DOT__MEM_WB[1U]),32);
        bufp->chgIData(oldp+92,(vlSelf->PipelineCPU__DOT__MEM_WB[3U]),32);
        bufp->chgBit(oldp+93,((1U & (vlSelf->PipelineCPU__DOT__MEM_WB[4U] 
                                     >> 2U))));
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+95,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
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
        bufp->chgWData(oldp+97,(__Vtemp_h0503c463__0),131);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+102,(((0U == (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                   ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)
                                   : ((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                       ? (vlSelf->PipelineCPU__DOT__IF_ID[1U] 
                                          + (vlSelf->PipelineCPU__DOT__imm 
                                             << 1U))
                                       : ((2U == (IData)(vlSelf->PipelineCPU__DOT__PCSel))
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
        bufp->chgWData(oldp+103,(__Vtemp_hf6116a8c__0),168);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+109,((vlSelf->PipelineCPU__DOT__readData1 
                                == vlSelf->PipelineCPU__DOT__readData2)));
        bufp->chgBit(oldp+110,(vlSelf->PipelineCPU__DOT__BrLT));
        bufp->chgCData(oldp+111,(vlSelf->PipelineCPU__DOT__PCSel),2);
        bufp->chgIData(oldp+112,(vlSelf->PipelineCPU__DOT__readData1),32);
        bufp->chgIData(oldp+113,(vlSelf->PipelineCPU__DOT__readData2),32);
    }
    bufp->chgBit(oldp+114,(vlSelf->clk));
    bufp->chgBit(oldp+115,(vlSelf->start));
    bufp->chgIData(oldp+116,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+139,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+140,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+141,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+142,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+143,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+144,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+145,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+146,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+147,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+148,(vlSelf->PipelineCPU__DOT__memData),32);
    bufp->chgBit(oldp+149,(vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead));
    bufp->chgIData(oldp+150,(vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
