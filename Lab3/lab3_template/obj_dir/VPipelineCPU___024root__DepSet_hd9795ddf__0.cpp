// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU__Syms.h"
#include "VPipelineCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->clk)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__clk)) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(2U) = ((vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address 
                                       != vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_DataMemory__address) 
                                      | ((IData)(vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_DataMemory__address 
        = vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__address;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead 
        = vlSelf->PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipelineCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
