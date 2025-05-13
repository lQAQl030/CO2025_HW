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
    VlWide<3>/*95:0*/ __Vtemp_he0585090__0;
    VlWide<6>/*191:0*/ __Vtemp_h8152e0ca__0;
    VlWide<5>/*159:0*/ __Vtemp_h0503c463__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__pc_o),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)),32);
        bufp->chgIData(oldp+2,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_o)
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
                                                    + vlSelf->PipelineCPU__DOT__pc_o))]))))),32);
        bufp->chgWData(oldp+3,(vlSelf->PipelineCPU__DOT__IF_ID),96);
        bufp->chgBit(oldp+6,(vlSelf->PipelineCPU__DOT__memRead));
        bufp->chgBit(oldp+7,(vlSelf->PipelineCPU__DOT__memWrite));
        bufp->chgBit(oldp+8,(vlSelf->PipelineCPU__DOT__ALUSrc));
        bufp->chgBit(oldp+9,(vlSelf->PipelineCPU__DOT__regWrite));
        bufp->chgBit(oldp+10,(vlSelf->PipelineCPU__DOT__PCorR1));
        bufp->chgBit(oldp+11,(vlSelf->PipelineCPU__DOT__BranchOrJump));
        bufp->chgCData(oldp+12,(vlSelf->PipelineCPU__DOT__memtoReg),2);
        bufp->chgCData(oldp+13,(vlSelf->PipelineCPU__DOT__ALUOp),2);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+15,(((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                  ? vlSelf->PipelineCPU__DOT__imm
                                  : (vlSelf->PipelineCPU__DOT__imm 
                                     << 1U))),32);
        bufp->chgWData(oldp+16,(vlSelf->PipelineCPU__DOT__ID_EX),168);
        bufp->chgCData(oldp+22,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+24,((0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+25,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+26,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+27,((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                          >> 7U))),5);
        bufp->chgBit(oldp+28,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                     >> 3U))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                     >> 7U))));
        bufp->chgCData(oldp+30,((3U & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+31,((1U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+32,((7U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+33,((0x7fU & vlSelf->PipelineCPU__DOT__IF_ID[0U])),7);
        bufp->chgCData(oldp+34,((7U & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                       >> 0xcU))),3);
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
        bufp->chgWData(oldp+35,(__Vtemp_he0585090__0),96);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__IF_ID[0U]),32);
        bufp->chgBit(oldp+39,((1U & vlSelf->PipelineCPU__DOT__ID_EX[5U])));
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__ID_EX[1U]),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__ID_EX[3U]),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__ID_EX[2U]),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__IF_ID[1U]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+44,(((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                  ? (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                       ? vlSelf->PipelineCPU__DOT__BranchA
                                       : vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                                     + ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                         ? vlSelf->PipelineCPU__DOT__imm
                                         : (vlSelf->PipelineCPU__DOT__imm 
                                            << 1U)))
                                  : ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o))),32);
        bufp->chgIData(oldp+45,(((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                  ? vlSelf->PipelineCPU__DOT__BranchA
                                  : vlSelf->PipelineCPU__DOT__IF_ID[1U])),32);
        bufp->chgIData(oldp+46,((((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
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
        bufp->chgWData(oldp+47,(__Vtemp_h8152e0ca__0),168);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+60,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+62,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+63,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+64,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+65,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+66,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+67,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+68,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+69,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+70,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+71,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+72,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+73,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+74,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+75,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+76,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+77,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+78,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+79,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+80,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+81,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+82,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+83,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+84,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+85,(vlSelf->PipelineCPU__DOT__writeData),32);
        bufp->chgBit(oldp+86,(vlSelf->PipelineCPU__DOT__id_ForwardA));
        bufp->chgBit(oldp+87,(vlSelf->PipelineCPU__DOT__id_ForwardB));
        bufp->chgCData(oldp+88,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
        bufp->chgCData(oldp+89,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
        bufp->chgWData(oldp+90,(vlSelf->PipelineCPU__DOT__EX_MEM),133);
        bufp->chgWData(oldp+95,(vlSelf->PipelineCPU__DOT__MEM_WB),131);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                           >> 7U))),5);
        bufp->chgCData(oldp+101,((0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                           >> 7U))),5);
        bufp->chgBit(oldp+102,((1U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                      >> 4U))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->PipelineCPU__DOT__MEM_WB[4U] 
                                      >> 2U))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                      >> 1U))));
        bufp->chgIData(oldp+105,(vlSelf->PipelineCPU__DOT__EX_MEM[1U]),32);
        bufp->chgCData(oldp+106,((3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U])),2);
        bufp->chgIData(oldp+107,(vlSelf->PipelineCPU__DOT__MEM_WB[2U]),32);
        bufp->chgIData(oldp+108,(vlSelf->PipelineCPU__DOT__MEM_WB[1U]),32);
        bufp->chgIData(oldp+109,(vlSelf->PipelineCPU__DOT__MEM_WB[3U]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
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
        bufp->chgWData(oldp+110,(__Vtemp_h0503c463__0),131);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+115,(vlSelf->PipelineCPU__DOT__RePC));
        bufp->chgBit(oldp+116,(vlSelf->PipelineCPU__DOT__Flush_HD));
        bufp->chgIData(oldp+117,(vlSelf->PipelineCPU__DOT__ForwardA),32);
        bufp->chgIData(oldp+118,(vlSelf->PipelineCPU__DOT__ForwardB),32);
        bufp->chgIData(oldp+119,(vlSelf->PipelineCPU__DOT__ALUSrcB),32);
        bufp->chgBit(oldp+120,(vlSelf->PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead));
        bufp->chgIData(oldp+121,(vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1),32);
        bufp->chgWData(oldp+122,(vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i),133);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+127,(vlSelf->PipelineCPU__DOT__BrEq));
        bufp->chgBit(oldp+128,(vlSelf->PipelineCPU__DOT__BrLT));
        bufp->chgBit(oldp+129,(vlSelf->PipelineCPU__DOT__Flush_ctrl));
        bufp->chgCData(oldp+130,(vlSelf->PipelineCPU__DOT__PCSel),2);
        bufp->chgIData(oldp+131,(vlSelf->PipelineCPU__DOT__BranchA),32);
        bufp->chgIData(oldp+132,(vlSelf->PipelineCPU__DOT__BranchB),32);
        bufp->chgBit(oldp+133,((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))));
    }
    bufp->chgBit(oldp+134,(vlSelf->clk));
    bufp->chgBit(oldp+135,(vlSelf->start));
    bufp->chgIData(oldp+136,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+139,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+140,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+141,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+142,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+143,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+144,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+145,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+146,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+147,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+148,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+149,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+150,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+151,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+152,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+153,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+154,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+155,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+156,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+157,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+158,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+159,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+160,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+161,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+162,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+163,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+164,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+165,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+166,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+167,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+168,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                               ? vlSelf->PipelineCPU__DOT__IF_ID[1U]
                               : ((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                   ? (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                        ? vlSelf->PipelineCPU__DOT__BranchA
                                        : vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                                      + ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                          ? vlSelf->PipelineCPU__DOT__imm
                                          : (vlSelf->PipelineCPU__DOT__imm 
                                             << 1U)))
                                   : ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_o)))),32);
    bufp->chgIData(oldp+169,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+170,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+171,(((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
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
    bufp->chgBit(oldp+172,((0U == ((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
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
                                                ? (
                                                   VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    ? 1U
                                                    : 0U)
                                                : (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   - vlSelf->PipelineCPU__DOT__ALUSrcB))
                                            : ((1U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                ? (
                                                   (0x1fU 
                                                    >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    : 
                                                   (- 
                                                    (vlSelf->PipelineCPU__DOT__ForwardA 
                                                     >> 0x1fU)))
                                                : (
                                                   (0x1fU 
                                                    >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA 
                                                    >> vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                    : 0U)))
                                        : ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? ((1U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                ? (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   ^ vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                : (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   + vlSelf->PipelineCPU__DOT__ALUSrcB))
                                            : ((1U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                ? (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   | vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                : (vlSelf->PipelineCPU__DOT__ForwardA 
                                                   & vlSelf->PipelineCPU__DOT__ALUSrcB))))))));
    bufp->chgIData(oldp+173,(vlSelf->PipelineCPU__DOT__memData),32);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
