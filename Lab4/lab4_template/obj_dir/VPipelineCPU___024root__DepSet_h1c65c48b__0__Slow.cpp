// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead 
        = vlSelf->PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1 
        = vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPipelineCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPipelineCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hce8e8822_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h8680de54__0;
    // Body
    vlSelf->PipelineCPU__DOT__ALUSrc = 0U;
    vlSelf->PipelineCPU__DOT__memWrite = 0U;
    vlSelf->PipelineCPU__DOT__ALUOp = 0U;
    vlSelf->PipelineCPU__DOT__memRead = 0U;
    if ((1U & (~ (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                  >> 6U)))) {
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
    }
    vlSelf->PipelineCPU__DOT__memtoReg = 0U;
    vlSelf->PipelineCPU__DOT__regWrite = 0U;
    vlSelf->PipelineCPU__DOT__PCorR1 = 0U;
    __Vtableidx1 = ((0x20U & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                                >> 0xaU)) 
                                            | (3U & 
                                               (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                                                >> 1U))));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_hce8e8822_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__ex_ForwardA = 0U;
    if ((((vlSelf->PipelineCPU__DOT__EX_MEM[4U] >> 4U) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                            >> 0xfU)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                                 >> 7U))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardA = 2U;
    } else if ((((vlSelf->PipelineCPU__DOT__MEM_WB[4U] 
                  >> 2U) & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                            >> 7U)))) 
                & ((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                             >> 0xfU)) == (0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                            >> 7U))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardA = 1U;
    }
    vlSelf->PipelineCPU__DOT__BranchOrJump = 0U;
    vlSelf->PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead 
        = (1U & vlSelf->PipelineCPU__DOT__EX_MEM[4U]);
    vlSelf->PipelineCPU__DOT__ex_ForwardB = 0U;
    if ((((vlSelf->PipelineCPU__DOT__EX_MEM[4U] >> 4U) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                            >> 0x14U)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                                 >> 7U))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardB = 2U;
    } else if ((((vlSelf->PipelineCPU__DOT__MEM_WB[4U] 
                  >> 2U) & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                            >> 7U)))) 
                & ((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                             >> 0x14U)) == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__MEM_WB[0U] 
                                             >> 7U))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardB = 1U;
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
    vlSelf->PipelineCPU__DOT__writeData = ((0U == (3U 
                                                   & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                            ? vlSelf->PipelineCPU__DOT__MEM_WB[2U]
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                                ? vlSelf->PipelineCPU__DOT__MEM_WB[1U]
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->PipelineCPU__DOT__MEM_WB[4U]))
                                                    ? 
                                                   vlSelf->PipelineCPU__DOT__MEM_WB[3U]
                                                    : 
                                                   vlSelf->PipelineCPU__DOT__MEM_WB[2U])));
    vlSelf->PipelineCPU__DOT__id_ForwardB = 0U;
    if ((((vlSelf->PipelineCPU__DOT__EX_MEM[4U] >> 4U) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                            >> 0x14U)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                                 >> 7U))))) {
        vlSelf->PipelineCPU__DOT__id_ForwardB = 1U;
    }
    vlSelf->PipelineCPU__DOT__id_ForwardA = 0U;
    if ((((vlSelf->PipelineCPU__DOT__EX_MEM[4U] >> 4U) 
          & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                             >> 7U)))) & ((0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                            >> 0xfU)) 
                                          == (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                                 >> 7U))))) {
        vlSelf->PipelineCPU__DOT__id_ForwardA = 1U;
    }
    vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1 
        = vlSelf->PipelineCPU__DOT__EX_MEM[2U];
    vlSelf->PipelineCPU__DOT__Flush_HD = 0U;
    vlSelf->PipelineCPU__DOT__RePC = 0U;
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
                                vlSelf->PipelineCPU__DOT__BranchOrJump = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                            vlSelf->PipelineCPU__DOT__memtoReg = 2U;
                            vlSelf->PipelineCPU__DOT__regWrite = 1U;
                            vlSelf->PipelineCPU__DOT__BranchOrJump = 1U;
                        }
                    }
                } else if ((2U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                    if ((1U & vlSelf->PipelineCPU__DOT__IF_ID[0U])) {
                        vlSelf->PipelineCPU__DOT__BranchOrJump = 1U;
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
    if (((vlSelf->PipelineCPU__DOT__ID_EX[5U] >> 3U) 
         & (((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                       >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                            >> 0xfU))) 
            | ((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                         >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                              >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    } else if ((((IData)(vlSelf->PipelineCPU__DOT__BranchOrJump) 
                 & (IData)(vlSelf->PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead)) 
                & (((0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                              >> 7U)) == (0x1fU & (
                                                   vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                                   >> 0xfU))) 
                   | ((0x1fU & (vlSelf->PipelineCPU__DOT__EX_MEM[0U] 
                                >> 7U)) == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                             >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    } else if ((((IData)(vlSelf->PipelineCPU__DOT__BranchOrJump) 
                 & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                    >> 7U)) & (((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                          >> 7U)) == 
                                (0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                          >> 0xfU))) 
                               | ((0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[0U] 
                                            >> 7U)) 
                                  == (0x1fU & (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                               >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    }
    vlSelf->PipelineCPU__DOT__ForwardA = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                                           ? vlSelf->PipelineCPU__DOT__ID_EX[3U]
                                           : ((1U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                                               ? vlSelf->PipelineCPU__DOT__writeData
                                               : ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                                                   ? vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1
                                                   : 
                                                  vlSelf->PipelineCPU__DOT__ID_EX[3U])));
    vlSelf->PipelineCPU__DOT__ForwardB = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                                           ? vlSelf->PipelineCPU__DOT__ID_EX[2U]
                                           : ((1U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                                               ? vlSelf->PipelineCPU__DOT__writeData
                                               : ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                                                   ? vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1
                                                   : 
                                                  vlSelf->PipelineCPU__DOT__ID_EX[2U])));
    vlSelf->PipelineCPU__DOT__BranchB = ((IData)(vlSelf->PipelineCPU__DOT__id_ForwardB)
                                          ? vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1
                                          : vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                                         [(0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                            >> 0x14U))]);
    vlSelf->PipelineCPU__DOT__BranchA = ((IData)(vlSelf->PipelineCPU__DOT__id_ForwardA)
                                          ? vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1
                                          : vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                                         [(0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__IF_ID[0U] 
                                            >> 0xfU))]);
    vlSelf->PipelineCPU__DOT__ALUSrcB = ((1U & vlSelf->PipelineCPU__DOT__ID_EX[5U])
                                          ? vlSelf->PipelineCPU__DOT__ID_EX[1U]
                                          : vlSelf->PipelineCPU__DOT__ForwardB);
    vlSelf->PipelineCPU__DOT__BrEq = (vlSelf->PipelineCPU__DOT__BranchA 
                                      == vlSelf->PipelineCPU__DOT__BranchB);
    vlSelf->PipelineCPU__DOT__BrLT = VL_LTS_III(32, vlSelf->PipelineCPU__DOT__BranchA, vlSelf->PipelineCPU__DOT__BranchB);
    __Vtemp_h8680de54__0[1U] = (IData)((((QData)((IData)(
                                                         vlSelf->PipelineCPU__DOT__ID_EX[4U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((8U 
                                                            & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                            ? 
                                                           ((4U 
                                                             & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                             ? 0U
                                                             : 
                                                            ((2U 
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
                                                            : 
                                                           ((4U 
                                                             & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                             ? 
                                                            ((2U 
                                                              & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                               ? 
                                                              (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                                ? 1U
                                                                : 0U)
                                                               : 
                                                              (vlSelf->PipelineCPU__DOT__ForwardA 
                                                               - vlSelf->PipelineCPU__DOT__ALUSrcB))
                                                              : 
                                                             ((1U 
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
                                                             : 
                                                            ((2U 
                                                              & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                               ? 
                                                              (vlSelf->PipelineCPU__DOT__ForwardA 
                                                               ^ vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                               : 
                                                              (vlSelf->PipelineCPU__DOT__ForwardA 
                                                               + vlSelf->PipelineCPU__DOT__ALUSrcB))
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                               ? 
                                                              (vlSelf->PipelineCPU__DOT__ForwardA 
                                                               | vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                               : 
                                                              (vlSelf->PipelineCPU__DOT__ForwardA 
                                                               & vlSelf->PipelineCPU__DOT__ALUSrcB)))))))));
    __Vtemp_h8680de54__0[2U] = (IData)(((((QData)((IData)(
                                                          vlSelf->PipelineCPU__DOT__ID_EX[4U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((8U 
                                                             & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                             ? 
                                                            ((4U 
                                                              & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                              ? 0U
                                                              : 
                                                             ((2U 
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
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                              ? 
                                                             ((2U 
                                                               & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                                ? 
                                                               (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA, vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                                 ? 1U
                                                                 : 0U)
                                                                : 
                                                               (vlSelf->PipelineCPU__DOT__ForwardA 
                                                                - vlSelf->PipelineCPU__DOT__ALUSrcB))
                                                               : 
                                                              ((1U 
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
                                                              : 
                                                             ((2U 
                                                               & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                                ? 
                                                               (vlSelf->PipelineCPU__DOT__ForwardA 
                                                                ^ vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                                : 
                                                               (vlSelf->PipelineCPU__DOT__ForwardA 
                                                                + vlSelf->PipelineCPU__DOT__ALUSrcB))
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                                ? 
                                                               (vlSelf->PipelineCPU__DOT__ForwardA 
                                                                | vlSelf->PipelineCPU__DOT__ALUSrcB)
                                                                : 
                                                               (vlSelf->PipelineCPU__DOT__ForwardA 
                                                                & vlSelf->PipelineCPU__DOT__ALUSrcB)))))))) 
                                        >> 0x20U));
    vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i[0U] 
        = vlSelf->PipelineCPU__DOT__ID_EX[0U];
    vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i[1U] 
        = vlSelf->PipelineCPU__DOT__ForwardB;
    vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i[2U] 
        = __Vtemp_h8680de54__0[1U];
    vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i[3U] 
        = __Vtemp_h8680de54__0[2U];
    vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i[4U] 
        = (0x1fU & (vlSelf->PipelineCPU__DOT__ID_EX[5U] 
                    >> 3U));
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
    vlSelf->PipelineCPU__DOT__pc_RePC = ((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                          ? vlSelf->PipelineCPU__DOT__IF_ID[1U]
                                          : ((1U & (IData)(vlSelf->PipelineCPU__DOT__PCSel))
                                              ? (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                                   ? vlSelf->PipelineCPU__DOT__BranchA
                                                   : 
                                                  vlSelf->PipelineCPU__DOT__IF_ID[1U]) 
                                                 + 
                                                 ((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                                   ? vlSelf->PipelineCPU__DOT__imm
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__imm 
                                                   << 1U)))
                                              : ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__pc_o)));
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] PipelineCPU.__Vcellinp__HD_Unit__mem_memRead or [changed] PipelineCPU.__Vcellinp__m_Mux_BranchA__s1)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] PipelineCPU.__Vcellinp__HD_Unit__mem_memRead or [changed] PipelineCPU.__Vcellinp__m_Mux_BranchA__s1)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__pc_RePC = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__pc_o = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->PipelineCPU__DOT__IF_ID);
    vlSelf->PipelineCPU__DOT__BrEq = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__BrLT = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__Flush_ctrl = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__PCorR1 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__BranchOrJump = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__PCSel = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__writeData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__RePC = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__Flush_HD = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_ForwardA = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__id_ForwardB = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ex_ForwardA = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__ex_ForwardB = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__BranchA = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__BranchB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__imm = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(168, vlSelf->PipelineCPU__DOT__ID_EX);
    vlSelf->PipelineCPU__DOT__ForwardA = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ForwardB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUSrcB = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__ALUCtl = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(133, vlSelf->PipelineCPU__DOT__EX_MEM);
    VL_RAND_RESET_W(133, vlSelf->PipelineCPU__DOT____Vcellinp__m_EX_MEM__data_i);
    vlSelf->PipelineCPU__DOT__memData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(131, vlSelf->PipelineCPU__DOT__MEM_WB);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__HD_Unit__mem_memRead = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_Mux_BranchA__s1 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
