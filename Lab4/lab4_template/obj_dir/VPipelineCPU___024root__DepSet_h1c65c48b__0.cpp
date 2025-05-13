// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if ((2U & vlSelf->PipelineCPU__DOT__EX_MEM[4U])) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__EX_MEM[1U] 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__EX_MEM[1U] 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__EX_MEM[1U] 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__EX_MEM[1U]);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address);
        }
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if ((4U & vlSelf->PipelineCPU__DOT__MEM_WB[4U])) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                    >> 7U))) ? 0U : 
                   ((0U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                     ? vlSelf->PipelineCPU__DOT__MEM_WB[2U]
                     : ((1U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                         ? vlSelf->PipelineCPU__DOT__MEM_WB[1U]
                         : ((2U == (3U & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                             ? vlSelf->PipelineCPU__DOT__MEM_WB[3U]
                             : vlSelf->PipelineCPU__DOT__MEM_WB[2U]))));
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = (0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                            >> 7U));
        }
    } else {
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hce8e8822_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__MEM_WB[0U] = vlSelf->PipelineCPU__DOT__EX_MEM[0U];
        vlSelf->PipelineCPU__DOT__MEM_WB[1U] = vlSelf->PipelineCPU__DOT__memData;
        vlSelf->PipelineCPU__DOT__MEM_WB[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->PipelineCPU__DOT__EX_MEM[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->PipelineCPU__DOT__EX_MEM[2U]))));
        vlSelf->PipelineCPU__DOT__MEM_WB[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->PipelineCPU__DOT__EX_MEM[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->PipelineCPU__DOT__EX_MEM[2U]))) 
                                                        >> 0x20U));
        vlSelf->PipelineCPU__DOT__MEM_WB[4U] = (7U 
                                                & (vlSelf->PipelineCPU__DOT__EX_MEM[4U] 
                                                   >> 2U));
        vlSelf->PipelineCPU__DOT__EX_MEM[0U] = vlSelf->PipelineCPU__DOT__ID_EX[0U];
        vlSelf->PipelineCPU__DOT__EX_MEM[1U] = vlSelf->PipelineCPU__DOT__ID_EX[2U];
        vlSelf->PipelineCPU__DOT__EX_MEM[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->PipelineCPU__DOT__ID_EX[4U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__ALUOut))));
        vlSelf->PipelineCPU__DOT__EX_MEM[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->PipelineCPU__DOT__ID_EX[4U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->PipelineCPU__DOT__ALUOut))) 
                                                        >> 0x20U));
        vlSelf->PipelineCPU__DOT__EX_MEM[4U] = (0x1fU 
                                                & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                                   >> 3U));
        vlSelf->PipelineCPU__DOT__ID_EX[0U] = vlSelf->PipelineCPU__DOT__IF_ID[0U];
        vlSelf->PipelineCPU__DOT__ID_EX[1U] = vlSelf->PipelineCPU__DOT__imm;
        vlSelf->PipelineCPU__DOT__ID_EX[2U] = vlSelf->PipelineCPU__DOT__readData2;
        vlSelf->PipelineCPU__DOT__ID_EX[3U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->PipelineCPU__DOT__IF_ID[2U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->PipelineCPU__DOT__readData1))));
        vlSelf->PipelineCPU__DOT__ID_EX[4U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->PipelineCPU__DOT__IF_ID[2U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->PipelineCPU__DOT__readData1))) 
                                                       >> 0x20U));
        vlSelf->PipelineCPU__DOT__ID_EX[5U] = (((IData)(vlSelf->PipelineCPU__DOT__regWrite) 
                                                << 7U) 
                                               | (((IData)(vlSelf->PipelineCPU__DOT__memtoReg) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->PipelineCPU__DOT__memWrite) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->PipelineCPU__DOT__memRead) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->PipelineCPU__DOT__ALUOp) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->PipelineCPU__DOT__ALUSrc))))));
        if (vlSelf->PipelineCPU__DOT__Flush_ctrl) {
            vlSelf->PipelineCPU__DOT__IF_ID[0U] = 0U;
            vlSelf->PipelineCPU__DOT__IF_ID[1U] = 0U;
            vlSelf->PipelineCPU__DOT__IF_ID[2U] = 0U;
        } else {
            vlSelf->PipelineCPU__DOT__IF_ID[0U] = (
                                                   (0x80U 
                                                    <= vlSelf->PipelineCPU__DOT__pc_o)
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                     [
                                                     (0x7fU 
                                                      & vlSelf->PipelineCPU__DOT__pc_o)] 
                                                     << 0x18U) 
                                                    | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                        [
                                                        (0x7fU 
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
            vlSelf->PipelineCPU__DOT__IF_ID[1U] = (IData)(
                                                          (((QData)((IData)(
                                                                            ((IData)(4U) 
                                                                             + vlSelf->PipelineCPU__DOT__pc_o))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o))));
            vlSelf->PipelineCPU__DOT__IF_ID[2U] = (IData)(
                                                          ((((QData)((IData)(
                                                                             ((IData)(4U) 
                                                                              + vlSelf->PipelineCPU__DOT__pc_o))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->PipelineCPU__DOT__pc_o))) 
                                                           >> 0x20U));
        }
        vlSelf->PipelineCPU__DOT__pc_o = vlSelf->PipelineCPU__DOT__pc_i;
    } else {
        vlSelf->PipelineCPU__DOT__MEM_WB[0U] = 0U;
        vlSelf->PipelineCPU__DOT__MEM_WB[1U] = 0U;
        vlSelf->PipelineCPU__DOT__MEM_WB[2U] = 0U;
        vlSelf->PipelineCPU__DOT__MEM_WB[3U] = 0U;
        vlSelf->PipelineCPU__DOT__MEM_WB[4U] = 0U;
        vlSelf->PipelineCPU__DOT__EX_MEM[0U] = 0U;
        vlSelf->PipelineCPU__DOT__EX_MEM[1U] = 0U;
        vlSelf->PipelineCPU__DOT__EX_MEM[2U] = 0U;
        vlSelf->PipelineCPU__DOT__EX_MEM[3U] = 0U;
        vlSelf->PipelineCPU__DOT__EX_MEM[4U] = 0U;
        vlSelf->PipelineCPU__DOT__ID_EX[0U] = 0U;
        vlSelf->PipelineCPU__DOT__ID_EX[1U] = 0U;
        vlSelf->PipelineCPU__DOT__ID_EX[2U] = 0U;
        vlSelf->PipelineCPU__DOT__ID_EX[3U] = 0U;
        vlSelf->PipelineCPU__DOT__ID_EX[4U] = 0U;
        vlSelf->PipelineCPU__DOT__ID_EX[5U] = 0U;
        vlSelf->PipelineCPU__DOT__IF_ID[0U] = 0U;
        vlSelf->PipelineCPU__DOT__IF_ID[1U] = 0U;
        vlSelf->PipelineCPU__DOT__IF_ID[2U] = 0U;
        vlSelf->PipelineCPU__DOT__pc_o = 0U;
    }
    vlSelf->PipelineCPU__DOT__ALUSrcB = ((1U & vlSelf->PipelineCPU__DOT__ID_EX[5U])
                                          ? vlSelf->PipelineCPU__DOT__ID_EX[1U]
                                          : vlSelf->PipelineCPU__DOT__ID_EX[2U]);
    __Vtableidx1 = ((0x20U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                                >> 0xaU)) 
                                            | (3U & 
                                               (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                                >> 1U))));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_hce8e8822_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ALUOut = ((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                         ? ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                               ? 0U
                                               : ((0x1fU 
                                                   >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   ? 
                                                  (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                   << vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   : 0U))))
                                         : ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 
                                                 (VL_LTS_III(32, 
                                                             vlSelf->PipelineCPU__DOT__ID_EX[3U], vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                  - vlSelf->PipelineCPU__DOT__ALUSrcB))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 
                                                 ((0x1fU 
                                                   >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->PipelineCPU__DOT__ID_EX[3U], vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   : 
                                                  (- 
                                                   (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                    >> 0x1fU)))
                                                  : 
                                                 ((0x1fU 
                                                   >= vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   ? 
                                                  (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                   >> vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                   : 0U)))
                                             : ((2U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                  ^ vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                  + vlSelf->PipelineCPU__DOT__ALUSrcB))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                  | vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__ID_EX[3U] 
                                                  & vlSelf->PipelineCPU__DOT__ALUSrcB)))));
    vlSelf->PipelineCPU__DOT__memRead = 0U;
    vlSelf->PipelineCPU__DOT__ALUSrc = 0U;
    vlSelf->PipelineCPU__DOT__memWrite = 0U;
    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__memRead = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
            if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__memWrite = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->PipelineCPU__DOT__ALUOp = 0U;
    vlSelf->PipelineCPU__DOT__memtoReg = 0U;
    vlSelf->PipelineCPU__DOT__regWrite = 0U;
    vlSelf->PipelineCPU__DOT__PCorR1 = 0U;
    if ((0x40U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
        if ((0x20U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
            if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__ALUSrc = 1U;
                                vlSelf->PipelineCPU__DOT__PCorR1 = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__ALUOp = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((4U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__memtoReg = 2U;
                                vlSelf->PipelineCPU__DOT__regWrite = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            vlSelf->PipelineCPU__DOT__memtoReg = 2U;
                            vlSelf->PipelineCPU__DOT__regWrite = 1U;
                        }
                    }
                }
            }
            vlSelf->PipelineCPU__DOT__imm = ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                              ? 0U : 
                                             ((8U & 
                                               vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                               ? ((4U 
                                                   & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                  >> 0x1fU))) 
                                                      << 0x13U) 
                                                     | ((0x7f800U 
                                                         & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                            >> 1U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                               >> 0xaU)) 
                                                           | (0x3ffU 
                                                              & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                 >> 0x15U)))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                               : ((4U 
                                                   & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x400U 
                                                         & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                 >> 8U)))))
                                                     : 0U)
                                                    : 0U))));
        } else {
            vlSelf->PipelineCPU__DOT__imm = 0U;
        }
    } else {
        if ((0x20U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
            if ((0x10U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__ALUSrc = 0U;
                                vlSelf->PipelineCPU__DOT__ALUOp = 2U;
                                vlSelf->PipelineCPU__DOT__regWrite = 1U;
                            }
                        }
                    }
                }
                vlSelf->PipelineCPU__DOT__imm = 0U;
            } else {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__ALUSrc = 1U;
                                vlSelf->PipelineCPU__DOT__ALUOp = 0U;
                            }
                        }
                    }
                }
                vlSelf->PipelineCPU__DOT__imm = ((8U 
                                                  & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U)));
            }
        } else {
            if ((0x10U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__ALUSrc = 1U;
                                vlSelf->PipelineCPU__DOT__ALUOp = 3U;
                                vlSelf->PipelineCPU__DOT__regWrite = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 2U)))) {
                    if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            vlSelf->PipelineCPU__DOT__ALUSrc = 1U;
                            vlSelf->PipelineCPU__DOT__ALUOp = 0U;
                            vlSelf->PipelineCPU__DOT__regWrite = 1U;
                        }
                    }
                }
            }
            vlSelf->PipelineCPU__DOT__imm = ((8U & 
                                              vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                              ? 0U : 
                                             ((4U & 
                                               vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IF_ID[0U])
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U)));
        }
        if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__memtoReg = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead) {
        vlSelf->PipelineCPU__DOT__memData = ((0xffffffU 
                                              & vlSelf->PipelineCPU__DOT__memData) 
                                             | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address))] 
                                                << 0x18U));
        vlSelf->PipelineCPU__DOT__memData = ((0xff00ffffU 
                                              & vlSelf->PipelineCPU__DOT__memData) 
                                             | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                [(0x7fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address))] 
                                                << 0x10U));
        vlSelf->PipelineCPU__DOT__memData = ((0xffff00ffU 
                                              & vlSelf->PipelineCPU__DOT__memData) 
                                             | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                [(0x7fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address))] 
                                                << 8U));
        vlSelf->PipelineCPU__DOT__memData = ((0xffffff00U 
                                              & vlSelf->PipelineCPU__DOT__memData) 
                                             | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                             [(0x7fU 
                                               & vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__readData2 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                   >> 0x14U))];
    vlSelf->PipelineCPU__DOT__readData1 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                   >> 0xfU))];
    vlSelf->PipelineCPU__DOT__BrEq = (vlSelf->PipelineCPU__DOT__readData1 
                                      == vlSelf->PipelineCPU__DOT__readData2);
    vlSelf->PipelineCPU__DOT__BrLT = VL_LTS_III(32, vlSelf->PipelineCPU__DOT__readData1, vlSelf->PipelineCPU__DOT__readData2);
    vlSelf->PipelineCPU__DOT__Flush_ctrl = 0U;
    vlSelf->PipelineCPU__DOT__PCSel = 0U;
    if ((0x40U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
        if ((0x20U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
            if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((4U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                                vlSelf->PipelineCPU__DOT__Flush_ctrl = 1U;
                                vlSelf->PipelineCPU__DOT__PCSel = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            vlSelf->PipelineCPU__DOT__Flush_ctrl = 1U;
                            vlSelf->PipelineCPU__DOT__PCSel = 1U;
                        }
                    }
                } else if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if (((0U == (0x7000U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) 
                             & (IData)(vlSelf->PipelineCPU__DOT__BrEq))) {
                            vlSelf->PipelineCPU__DOT__Flush_ctrl = 1U;
                            vlSelf->PipelineCPU__DOT__PCSel = 1U;
                        } else if (((0x1000U == (0x7000U 
                                                 & vlSelf->PipelineCPU__DOT__IF_ID[0U])) 
                                    & (~ (IData)(vlSelf->PipelineCPU__DOT__BrEq)))) {
                            vlSelf->PipelineCPU__DOT__Flush_ctrl = 1U;
                            vlSelf->PipelineCPU__DOT__PCSel = 1U;
                        } else if (((0x4000U == (0x7000U 
                                                 & vlSelf->PipelineCPU__DOT__IF_ID[0U])) 
                                    & (IData)(vlSelf->PipelineCPU__DOT__BrLT))) {
                            vlSelf->PipelineCPU__DOT__Flush_ctrl = 1U;
                            vlSelf->PipelineCPU__DOT__PCSel = 1U;
                        } else if (((0x5000U == (0x7000U 
                                                 & vlSelf->PipelineCPU__DOT__IF_ID[0U])) 
                                    & (~ (IData)(vlSelf->PipelineCPU__DOT__BrLT)))) {
                            vlSelf->PipelineCPU__DOT__Flush_ctrl = 1U;
                            vlSelf->PipelineCPU__DOT__PCSel = 1U;
                        } else {
                            vlSelf->PipelineCPU__DOT__Flush_ctrl = 0U;
                            vlSelf->PipelineCPU__DOT__PCSel = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->PipelineCPU__DOT__pc_i = ((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                       ? (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                            ? vlSelf->PipelineCPU__DOT__readData1
                                            : vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                                          + ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                              ? vlSelf->PipelineCPU__DOT__imm
                                              : (vlSelf->PipelineCPU__DOT__imm 
                                                 << 1U)))
                                       : ((IData)(4U) 
                                          + vlSelf->PipelineCPU__DOT__pc_o));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead 
        = (1U & vlSelf->PipelineCPU__DOT__EX_MEM[4U]);
    vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address 
        = vlSelf->PipelineCPU__DOT__EX_MEM[2U];
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
