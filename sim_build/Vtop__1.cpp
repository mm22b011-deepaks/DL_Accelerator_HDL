// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkPipelined__DOT__mac_result_rv__024port1___05Fread 
        = ((IData)(vlTOPp->EN_get_result) ? 0xaaaaaaaaULL
            : vlTOPp->mkPipelined__DOT__mac_result_rv);
    vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_bfloat16 
        = (1U & ((((vlTOPp->mkPipelined__DOT__mac_input_rv[2U] 
                    >> 1U) & vlTOPp->mkPipelined__DOT__mult_buffer_rv[2U]) 
                  & (~ (IData)((vlTOPp->mkPipelined__DOT__mac_result_rv__024port1___05Fread 
                                >> 0x20U)))) & (~ vlTOPp->mkPipelined__DOT__mac_input_rv[0U])));
    vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_int 
        = (1U & ((((vlTOPp->mkPipelined__DOT__mac_input_rv[2U] 
                    >> 1U) & vlTOPp->mkPipelined__DOT__mult_buffer_rv[2U]) 
                  & (~ (IData)((vlTOPp->mkPipelined__DOT__mac_result_rv__024port1___05Fread 
                                >> 0x20U)))) & vlTOPp->mkPipelined__DOT__mac_input_rv[0U]));
    vlTOPp->mkPipelined__DOT__mac_result_rv__024EN_port1___05Fwrite 
        = ((IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_int) 
           | (IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_bfloat16));
    vlTOPp->mkPipelined__DOT__mult_buffer_rv__024EN_port0___05Fwrite 
        = ((IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_bfloat16) 
           | (IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_int));
    vlTOPp->mkPipelined__DOT__mac_result_rv__024port1___05Fwrite_1 
        = ((IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage2_int)
            ? vlTOPp->mkPipelined__DOT__MUX_mac_result_rv__024port1___05Fwrite_1___05FVAL_1
            : vlTOPp->mkPipelined__DOT__MUX_mac_result_rv__024port1___05Fwrite_1___05FVAL_2);
    if (vlTOPp->mkPipelined__DOT__mult_buffer_rv__024EN_port0___05Fwrite) {
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[0U] = 0xaaaaaaaaU;
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[1U] = 0xaaaaaaaaU;
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[2U] = 0U;
    } else {
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[0U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv[0U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[1U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv[1U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[2U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv[2U];
    }
    vlTOPp->mkPipelined__DOT__mac_result_rv__024port2___05Fread 
        = ((IData)(vlTOPp->mkPipelined__DOT__mac_result_rv__024EN_port1___05Fwrite)
            ? vlTOPp->mkPipelined__DOT__mac_result_rv__024port1___05Fwrite_1
            : vlTOPp->mkPipelined__DOT__mac_result_rv__024port1___05Fread);
    vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_bfloat16 
        = (1U & (((vlTOPp->mkPipelined__DOT__mac_input_rv[2U] 
                   >> 1U) & (~ vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[2U])) 
                 & (~ vlTOPp->mkPipelined__DOT__mac_input_rv[0U])));
    vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_int 
        = (1U & (((vlTOPp->mkPipelined__DOT__mac_input_rv[2U] 
                   >> 1U) & (~ vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[2U])) 
                 & vlTOPp->mkPipelined__DOT__mac_input_rv[0U]));
    vlTOPp->mkPipelined__DOT__mac_result_rv__024D_IN 
        = vlTOPp->mkPipelined__DOT__mac_result_rv__024port2___05Fread;
    vlTOPp->mkPipelined__DOT__mult_buffer_rv__024EN_port1___05Fwrite 
        = ((IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_int) 
           | (IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_bfloat16));
    vlTOPp->mkPipelined__DOT__mac_input_rv__024EN_port0___05Fwrite 
        = ((IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_bfloat16) 
           | (IData)(vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_int));
    if (vlTOPp->mkPipelined__DOT__WILL_FIRE_RL_rl_pipe_stage1_int) {
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[0U] 
            = vlTOPp->mkPipelined__DOT__MUX_mult_buffer_rv__024port1___05Fwrite_1___05FVAL_1[0U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[1U] 
            = vlTOPp->mkPipelined__DOT__MUX_mult_buffer_rv__024port1___05Fwrite_1___05FVAL_1[1U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[2U] 
            = vlTOPp->mkPipelined__DOT__MUX_mult_buffer_rv__024port1___05Fwrite_1___05FVAL_1[2U];
    } else {
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[0U] 
            = vlTOPp->mkPipelined__DOT__MUX_mult_buffer_rv__024port1___05Fwrite_1___05FVAL_2[0U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[1U] 
            = vlTOPp->mkPipelined__DOT__MUX_mult_buffer_rv__024port1___05Fwrite_1___05FVAL_2[1U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[2U] 
            = vlTOPp->mkPipelined__DOT__MUX_mult_buffer_rv__024port1___05Fwrite_1___05FVAL_2[2U];
    }
    if (vlTOPp->mkPipelined__DOT__mac_input_rv__024EN_port0___05Fwrite) {
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[0U] = 0xaaaaaaaaU;
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[1U] = 0xaaaaaaaaU;
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[2U] = 0U;
    } else {
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[0U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv[0U];
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[1U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv[1U];
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[2U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv[2U];
    }
    if (vlTOPp->mkPipelined__DOT__mult_buffer_rv__024EN_port1___05Fwrite) {
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[0U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[0U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[1U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[1U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[2U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fwrite_1[2U];
    } else {
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[0U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[0U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[1U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[1U];
        vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[2U] 
            = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port1___05Fread[2U];
    }
    vlTOPp->mkPipelined__DOT__RDY_put = (1U & (~ (vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[2U] 
                                                  >> 1U)));
    if (vlTOPp->EN_put) {
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[0U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fwrite_1[0U];
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[1U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fwrite_1[1U];
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[2U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fwrite_1[2U];
    } else {
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[0U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[0U];
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[1U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[1U];
        vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[2U] 
            = vlTOPp->mkPipelined__DOT__mac_input_rv__024port1___05Fread[2U];
    }
    vlTOPp->mkPipelined__DOT__mult_buffer_rv__024D_IN[0U] 
        = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[0U];
    vlTOPp->mkPipelined__DOT__mult_buffer_rv__024D_IN[1U] 
        = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[1U];
    vlTOPp->mkPipelined__DOT__mult_buffer_rv__024D_IN[2U] 
        = vlTOPp->mkPipelined__DOT__mult_buffer_rv__024port2___05Fread[2U];
    vlTOPp->RDY_put = vlTOPp->mkPipelined__DOT__RDY_put;
    vlTOPp->mkPipelined__DOT__mac_input_rv__024D_IN[0U] 
        = vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[0U];
    vlTOPp->mkPipelined__DOT__mac_input_rv__024D_IN[1U] 
        = vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[1U];
    vlTOPp->mkPipelined__DOT__mac_input_rv__024D_IN[2U] 
        = vlTOPp->mkPipelined__DOT__mac_input_rv__024port2___05Fread[2U];
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((put_s1_or_s2_in & 0xfeU))) {
        Verilated::overWidthError("put_s1_or_s2_in");}
    if (VL_UNLIKELY((EN_put & 0xfeU))) {
        Verilated::overWidthError("EN_put");}
    if (VL_UNLIKELY((EN_get_result & 0xfeU))) {
        Verilated::overWidthError("EN_get_result");}
}
#endif  // VL_DEBUG
