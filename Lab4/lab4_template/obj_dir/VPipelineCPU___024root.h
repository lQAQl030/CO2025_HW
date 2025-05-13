// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    CData/*0:0*/ PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead;
    CData/*0:0*/ PipelineCPU__DOT__BrEq;
    CData/*0:0*/ PipelineCPU__DOT__BrLT;
    CData/*0:0*/ PipelineCPU__DOT__memRead;
    CData/*0:0*/ PipelineCPU__DOT__memWrite;
    CData/*0:0*/ PipelineCPU__DOT__ALUSrc;
    CData/*0:0*/ PipelineCPU__DOT__regWrite;
    CData/*0:0*/ PipelineCPU__DOT__Flush_ctrl;
    CData/*0:0*/ PipelineCPU__DOT__PCorR1;
    CData/*1:0*/ PipelineCPU__DOT__memtoReg;
    CData/*1:0*/ PipelineCPU__DOT__ALUOp;
    CData/*1:0*/ PipelineCPU__DOT__PCSel;
    CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__start;
    CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_DataMemory__memRead;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ PipelineCPU__DOT__pc_i;
    IData/*31:0*/ PipelineCPU__DOT__pc_o;
    VlWide<3>/*95:0*/ PipelineCPU__DOT__IF_ID;
    IData/*31:0*/ PipelineCPU__DOT__readData1;
    IData/*31:0*/ PipelineCPU__DOT__readData2;
    IData/*31:0*/ PipelineCPU__DOT__imm;
    VlWide<6>/*167:0*/ PipelineCPU__DOT__ID_EX;
    IData/*31:0*/ PipelineCPU__DOT__ALUSrcB;
    IData/*31:0*/ PipelineCPU__DOT__ALUOut;
    VlWide<5>/*132:0*/ PipelineCPU__DOT__EX_MEM;
    IData/*31:0*/ PipelineCPU__DOT__memData;
    IData/*31:0*/ PipelineCPU__DOT____Vcellinp__m_DataMemory__address;
    VlWide<5>/*130:0*/ PipelineCPU__DOT__MEM_WB;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT____Vcellinp__m_DataMemory__address;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(r[32],31,0);
    VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
    VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
    VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
