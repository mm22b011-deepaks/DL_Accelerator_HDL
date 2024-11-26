// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkUnpipelined__DOT__RDY_put = 1U;
    vlTOPp->RDY_put = vlTOPp->mkUnpipelined__DOT__RDY_put;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkUnpipelined__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkUnpipelined__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkUnpipelined__DOT__put_a_in = vlTOPp->put_a_in;
    vlTOPp->mkUnpipelined__DOT__put_b_in = vlTOPp->put_b_in;
    vlTOPp->mkUnpipelined__DOT__put_c_in = vlTOPp->put_c_in;
    vlTOPp->mkUnpipelined__DOT__put_s1_or_s2_in = vlTOPp->put_s1_or_s2_in;
    vlTOPp->mkUnpipelined__DOT__EN_put = vlTOPp->EN_put;
    vlTOPp->mkUnpipelined__DOT__sign_x___05Fh56 = (1U 
                                                   & (((IData)(vlTOPp->put_a_in) 
                                                       ^ (IData)(vlTOPp->put_b_in)) 
                                                      >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2 
        = ((0x80U & (IData)(vlTOPp->put_b_in)) ? 0xffU
            : 0U);
    vlTOPp->mkUnpipelined__DOT__mant_y___05Fh61 = (0x40000000U 
                                                   | (0x3fffff80U 
                                                      & (vlTOPp->put_c_in 
                                                         << 7U)));
    vlTOPp->mkUnpipelined__DOT__exp_y___05Fh59 = (0xffU 
                                                  & (vlTOPp->put_c_in 
                                                     >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh29036 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh29095 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28848 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28660 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28472 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28907 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28284 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28096 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_XOR_put_b_in_BIT_7_THEN_1_EL_ETC___05Fq1 
        = ((0x80U & ((IData)(vlTOPp->put_a_in) ^ (IData)(vlTOPp->put_b_in)))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh28719 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh27908 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     ^ (IData)(vlTOPp->put_b_in)) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28531 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28343 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28155 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh27909 = (1U 
                                                 & (((IData)(vlTOPp->put_a_in) 
                                                     & (IData)(vlTOPp->put_b_in)) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_0_THEN_1_ELSE_0___05Fq2 
        = ((1U & (IData)(vlTOPp->put_a_in)) ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19 
        = ((0x80U & (IData)(vlTOPp->put_a_in)) ? 0xffU
            : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_0_1_THEN_1_ELSE_0___05F_d1203 
        = ((1U & (IData)(vlTOPp->put_a_in)) ? 1U : 0U);
    vlTOPp->RDY_put = vlTOPp->mkUnpipelined__DOT__RDY_put;
    vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_20_ETC___05F_d1202 
        = ((IData)(vlTOPp->mkUnpipelined__DOT__sign_x___05Fh56) 
           == (1U & (vlTOPp->put_c_in >> 0x1fU)));
    vlTOPp->mkUnpipelined__DOT__IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_BIT_7___05FETC___05F_d1792 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_XOR_put_b_in_BIT_7_THEN_1_EL_ETC___05Fq1)
            ? 0U : 1U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh29269 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh27908) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh27909));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28154 = (((IData)(vlTOPp->put_b_in) 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh27909));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28156 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh27909));
    vlTOPp->mkUnpipelined__DOT__product___05Fh76517 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
            << 8U) | ((0xfeU & (IData)(vlTOPp->put_a_in)) 
                      | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_0_THEN_1_ELSE_0___05Fq2))));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh3393 
        = (0x80U | ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_0_1_THEN_1_ELSE_0___05F_d1203) 
                    | ((0x7eU & (IData)(vlTOPp->put_a_in)) 
                       | (1U & vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_0_1_THEN_1_ELSE_0___05F_d1203))));
    vlTOPp->mkUnpipelined__DOT__IF_INV_IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_ETC___05F_d1795 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_BIT_7___05FETC___05F_d1792)
            ? 0U : 1U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh30631 = (1U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29269) 
                                                    ^ vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_XOR_put_b_in_BIT_7_THEN_1_EL_ETC___05Fq1));
    vlTOPp->mkUnpipelined__DOT__y___05Fh29458 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29269) 
                                                 & vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_XOR_put_b_in_BIT_7_THEN_1_EL_ETC___05Fq1);
    vlTOPp->mkUnpipelined__DOT__x___05Fh28153 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28155) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28156));
    if ((1U & (IData)(vlTOPp->put_b_in))) {
        vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25 
            = vlTOPp->mkUnpipelined__DOT__product___05Fh76517;
        vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
            = vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh3393;
    } else {
        vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25 = 0U;
        vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 = 0U;
    }
    vlTOPp->mkUnpipelined__DOT__y___05Fh30820 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30631) 
                                                 & vlTOPp->mkUnpipelined__DOT__IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_BIT_7___05FETC___05F_d1792);
    vlTOPp->mkUnpipelined__DOT__y___05Fh28097 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28153) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28154));
    vlTOPp->mkUnpipelined__DOT__x___05Fh84273 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xeU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh84544 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83731 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh84002 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84636 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xeU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83189 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83460 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84638 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xeU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82647 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 7U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82918 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 9U) 
                                                    ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84365 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82105 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82376 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84367 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xdU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh81563 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh81834 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84094 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7___05FETC___05Fq4 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh81023 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 2U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh81291 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 3U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84096 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xcU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83823 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83825 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xbU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83552 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83554 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 0xaU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83281 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 9U) 
                                                    & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83283 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 9U) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83010 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83012 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 8U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82739 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82741 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 7U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82468 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82470 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 6U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82197 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82199 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 5U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81926 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81928 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 4U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81655 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 3U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81657 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 3U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81383 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 2U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81385 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                                                     >> 2U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7___05FETC___05Fq3 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25) 
                   >> 1U) & (IData)(vlTOPp->put_a_in)))
            ? 2U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh8077 = (1U 
                                                & (~ 
                                                   (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 8U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7695 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->put_a_in) 
                                                    >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7886 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->put_a_in) 
                                                    >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7313 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->put_a_in) 
                                                    >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7504 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->put_a_in) 
                                                    >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh6931 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->put_a_in) 
                                                    >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7122 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 3U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->put_a_in) 
                                                    >> 2U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0___05FETC___05F_d1211 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh8137 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->put_a_in) 
                                                      >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7946 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->put_a_in) 
                                                      >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7755 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7564 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7373 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 3U) 
                                                   & ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7182 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 2U) 
                                                   & ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh6932 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 1U) 
                                                   & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh29457 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28096) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28097));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28342 = (((IData)(vlTOPp->put_b_in) 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28097));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28344 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28097));
    vlTOPp->mkUnpipelined__DOT__x___05Fh81382 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7___05FETC___05Fq3) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81385));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7181 = (((IData)(vlTOPp->put_a_in) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh6932));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7183 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 2U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh6932));
    vlTOPp->mkUnpipelined__DOT__x___05Fh30819 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29457) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29458));
    vlTOPp->mkUnpipelined__DOT__y___05Fh29646 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29457) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29458));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28341 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28343) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28344));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81292 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81382) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81383));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7180 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7182) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7183));
    vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_9_812_XOR_put_b_in_BIT_9_813_853___05FETC___05F_d1889 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30819) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30820)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30631) 
                              ^ vlTOPp->mkUnpipelined__DOT__IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_BIT_7___05FETC___05F_d1792) 
                             << 1U)) | (1U & vlTOPp->mkUnpipelined__DOT__IF_INV_IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_ETC___05F_d1795)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh31008 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30819) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30820));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28285 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28341) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28342));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d142 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81291) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81292)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81023) 
                              << 2U) ^ (0xfffffffcU 
                                        & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7___05FETC___05Fq3) 
                                           << 1U)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25)) 
                                ^ ((IData)(vlTOPp->put_a_in) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7___05FETC___05Fq4)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh81654 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81292) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81657));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7123 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7180) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7181));
    vlTOPp->mkUnpipelined__DOT__x___05Fh29645 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28284) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28285));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28530 = (((IData)(vlTOPp->put_b_in) 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28285));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28532 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28285));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81564 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81654) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81655));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1292 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7122) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7123)) 
            << 3U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh6931) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh6932)) 
                       << 2U) | ((2U & ((0xfffffffeU 
                                         & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                                        ^ ((IData)(vlTOPp->put_a_in) 
                                           << 1U))) 
                                 | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0___05FETC___05F_d1211))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7372 = (((IData)(vlTOPp->put_a_in) 
                                                 >> 2U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7123));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7374 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 3U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7123));
    vlTOPp->mkUnpipelined__DOT__x___05Fh31007 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29645) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29646));
    vlTOPp->mkUnpipelined__DOT__y___05Fh29834 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29645) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29646));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28529 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28531) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28532));
    vlTOPp->mkUnpipelined__DOT__x___05Fh81925 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81564) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81928));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7371 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7373) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7374));
    vlTOPp->mkUnpipelined__DOT__y___05Fh31196 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31007) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31008));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28473 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28529) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28530));
    vlTOPp->mkUnpipelined__DOT__y___05Fh81835 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81925) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81926));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7314 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7371) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7372));
    vlTOPp->mkUnpipelined__DOT__x___05Fh29833 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28472) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28473));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28718 = (((IData)(vlTOPp->put_b_in) 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28473));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28720 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28473));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d143 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81834) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81835)) 
            << 5U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh81563) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81564)) 
                       << 4U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d142)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82196 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh81835) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82199));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7563 = (((IData)(vlTOPp->put_a_in) 
                                                 >> 3U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7314));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7565 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 4U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7314));
    vlTOPp->mkUnpipelined__DOT__x___05Fh31195 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29833) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29834));
    vlTOPp->mkUnpipelined__DOT__y___05Fh30022 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29833) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29834));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28717 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28719) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28720));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82106 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82196) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82197));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7562 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7564) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7565));
    vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_11_806_XOR_put_b_in_BIT_11_807_84_ETC___05F_d1890 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31195) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31196)) 
            << 4U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31007) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31008)) 
                       << 3U) | (IData)(vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_9_812_XOR_put_b_in_BIT_9_813_853___05FETC___05F_d1889)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh31384 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31195) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31196));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28661 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28717) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28718));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82467 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82106) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82470));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7505 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7562) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7563));
    vlTOPp->mkUnpipelined__DOT__x___05Fh30021 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28660) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28661));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28906 = (((IData)(vlTOPp->put_b_in) 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28661));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28908 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28661));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82377 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82467) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82468));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1293 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7504) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7505)) 
            << 5U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7313) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7314)) 
                       << 4U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1292)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7754 = (((IData)(vlTOPp->put_a_in) 
                                                 >> 4U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7505));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7756 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 5U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7505));
    vlTOPp->mkUnpipelined__DOT__x___05Fh31383 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30021) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30022));
    vlTOPp->mkUnpipelined__DOT__y___05Fh30210 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30021) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30022));
    vlTOPp->mkUnpipelined__DOT__x___05Fh28905 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28907) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28908));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d144 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82376) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82377)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82105) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82106)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d143)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh82738 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82377) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82741));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7753 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7755) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7756));
    vlTOPp->mkUnpipelined__DOT__y___05Fh31572 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31383) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31384));
    vlTOPp->mkUnpipelined__DOT__y___05Fh28849 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28905) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28906));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82648 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82738) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82739));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7696 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7753) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7754));
    vlTOPp->mkUnpipelined__DOT__y___05Fh29094 = (((IData)(vlTOPp->put_b_in) 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28849));
    vlTOPp->mkUnpipelined__DOT__x___05Fh30209 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh28848) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28849));
    vlTOPp->mkUnpipelined__DOT__y___05Fh29096 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh28849));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83009 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82648) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83012));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7945 = (((IData)(vlTOPp->put_a_in) 
                                                 >> 5U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7696));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7947 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 6U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7696));
    vlTOPp->mkUnpipelined__DOT__y___05Fh30398 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30209) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30210));
    vlTOPp->mkUnpipelined__DOT__x___05Fh31571 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30209) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30210));
    vlTOPp->mkUnpipelined__DOT__x___05Fh29093 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29095) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29096));
    vlTOPp->mkUnpipelined__DOT__y___05Fh82919 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83009) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83010));
    vlTOPp->mkUnpipelined__DOT__x___05Fh7944 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7946) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7947));
    vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_13_800_XOR_put_b_in_BIT_13_801_84_ETC___05F_d1891 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31571) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31572)) 
            << 6U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31383) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31384)) 
                       << 5U) | (IData)(vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_11_806_XOR_put_b_in_BIT_11_807_84_ETC___05F_d1890)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh31760 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31571) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31572));
    vlTOPp->mkUnpipelined__DOT__y___05Fh29037 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29093) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29094));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d145 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82918) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82919)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh82647) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82648)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d144)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83280 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh82919) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83283));
    vlTOPp->mkUnpipelined__DOT__y___05Fh7887 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7944) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7945));
    vlTOPp->mkUnpipelined__DOT__x___05Fh30397 = (1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh29036) 
                                                     ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh29037))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83190 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83280) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83281));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1294 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7886) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7887)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh7695) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7696)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1293)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8136 = (((IData)(vlTOPp->put_a_in) 
                                                 >> 6U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7887));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8138 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 7U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh7887));
    vlTOPp->mkUnpipelined__DOT__x___05Fh31759 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30397) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh30398));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83551 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83190) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83554));
    vlTOPp->mkUnpipelined__DOT__x___05Fh8135 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh8137) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8138));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83461 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83551) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83552));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8327 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh8135) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8136));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d146 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83460) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83461)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83189) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83190)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d145)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh83822 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83461) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83825));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8329 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 8U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8327));
    vlTOPp->mkUnpipelined__DOT__y___05Fh83732 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83822) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83823));
    vlTOPp->mkUnpipelined__DOT__x___05Fh8326 = (1U 
                                                & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                    >> 8U) 
                                                   | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8329)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh84093 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83732) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84096));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8269 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh8326) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8327));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84003 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh84093) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84094));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1295 
        = ((0x200U & ((0xfffffe00U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                      ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8269) 
                         << 9U))) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh8077) 
                                       ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8327)) 
                                      << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1294)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8520 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 9U) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8269));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d147 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh84002) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84003)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh83731) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh83732)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d146)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh84364 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84003) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84367));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8711 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 0xaU) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8520));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84274 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh84364) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84365));
    vlTOPp->mkUnpipelined__DOT__y___05Fh8902 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 0xbU) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8711));
    vlTOPp->mkUnpipelined__DOT__x___05Fh84635 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84274) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84638));
    vlTOPp->mkUnpipelined__DOT__y___05Fh9093 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 0xcU) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8902));
    vlTOPp->mkUnpipelined__DOT__y___05Fh84545 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh84635) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84636));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1297 
        = ((0x2000U & ((0xffffe000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                       ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh9093) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8902) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8711) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh8520) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1295)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh9284 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 0xdU) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh9093));
    vlTOPp->mkUnpipelined__DOT__product___05Fh76102 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh84544) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84545)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh84273) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh84274)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d147)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh9415 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209 
                                                 >> 0xeU) 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh9284));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149 
        = ((2U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh76102)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_7_8_T_ETC___05F_d25));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh2951 
        = ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0___05FETC___05F_d1211) 
           | ((0x8000U & ((0xffff8000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh9415) 
                             << 0xfU))) | ((0x4000U 
                                            & ((0xffffc000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh9284) 
                                                  << 0xeU))) 
                                           | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1297))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh88248 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xeU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh88519 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87706 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87977 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88611 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xeU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87164 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xaU) 
                                                    ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87435 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88613 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xeU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86622 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86893 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88340 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86080 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86351 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88342 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xdU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh85537 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh85809 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88069 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0___05FETC___05Fq6 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh85269 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 3U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88071 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xcU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87798 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87800 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xbU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87527 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xaU) 
                                                    & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87529 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 0xaU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87256 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87258 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 9U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86985 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86987 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 8U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86714 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86716 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 7U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86443 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86445 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 6U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86172 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86174 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 5U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh85901 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh85903 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 4U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh85629 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 3U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh85631 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                                                     >> 3U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0___05FETC___05Fq5 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149) 
                   >> 2U) & (IData)(vlTOPp->put_a_in)))
            ? 4U : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
        = ((2U & (IData)(vlTOPp->put_b_in)) ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh2951
            : vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_0_7_THEN_IF_put_a_in_BIT_0_1_T_ETC___05F_d1209);
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d247 
        = ((8U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh85269) 
                   << 3U) ^ (0xfffffff8U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0___05FETC___05Fq5) 
                                            << 1U)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149)) 
                     ^ ((IData)(vlTOPp->put_a_in) << 2U))) 
              | ((2U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149)) 
                 | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0___05FETC___05Fq6)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh85628 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0___05FETC___05Fq5) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85631));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10994 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh11185 = (1U 
                                                 & (~ 
                                                    (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 9U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10612 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10803 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10230 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10421 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10039 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 3U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1301 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh11245 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh11054 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10863 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10672 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10481 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10290 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 3U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10040 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 2U) 
                                                    & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh85538 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh85628) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85629));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1380 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10039) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10040)) 
            << 3U) | ((4U & ((0xfffffffcU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                             ^ ((IData)(vlTOPp->put_a_in) 
                                << 2U))) | ((2U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                                            | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1301))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10289 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10040));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10291 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10040));
    vlTOPp->mkUnpipelined__DOT__x___05Fh85900 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85538) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85903));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10288 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10290) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10291));
    vlTOPp->mkUnpipelined__DOT__y___05Fh85810 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh85900) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85901));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10231 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10288) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10289));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d248 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh85809) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85810)) 
            << 5U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh85537) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85538)) 
                       << 4U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d247)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86171 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh85810) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86174));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10480 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10231));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10482 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10231));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86081 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86171) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86172));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10479 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10481) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10482));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86442 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86081) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86445));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10422 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10479) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10480));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86352 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86442) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86443));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1381 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10421) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10422)) 
            << 5U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10230) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10231)) 
                       << 4U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1380)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10671 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10422));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10673 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10422));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d249 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86351) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86352)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86080) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86081)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d248)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86713 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86352) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86716));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10670 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10672) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10673));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86623 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86713) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86714));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10613 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10670) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10671));
    vlTOPp->mkUnpipelined__DOT__x___05Fh86984 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86623) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86987));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10862 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10613));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10864 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10613));
    vlTOPp->mkUnpipelined__DOT__y___05Fh86894 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86984) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86985));
    vlTOPp->mkUnpipelined__DOT__x___05Fh10861 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10863) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10864));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d250 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86893) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86894)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh86622) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86623)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d249)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87255 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh86894) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87258));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10804 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10861) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10862));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87165 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87255) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87256));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1382 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10803) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10804)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10612) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10613)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1381)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11053 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10804));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11055 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10804));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87526 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87165) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87529));
    vlTOPp->mkUnpipelined__DOT__x___05Fh11052 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh11054) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11055));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87436 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87526) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87527));
    vlTOPp->mkUnpipelined__DOT__y___05Fh10995 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh11052) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11053));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d251 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87435) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87436)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87164) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87165)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d250)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh87797 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87436) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87800));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11244 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10995));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11246 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10995));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87707 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87797) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87798));
    vlTOPp->mkUnpipelined__DOT__x___05Fh11243 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh11245) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11246));
    vlTOPp->mkUnpipelined__DOT__x___05Fh88068 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87707) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88071));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11435 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh11243) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11244));
    vlTOPp->mkUnpipelined__DOT__y___05Fh87978 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh88068) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88069));
    vlTOPp->mkUnpipelined__DOT__INV_IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BI_ETC___05F_d1383 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh11185) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11435)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh10994) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh10995)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1382)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11437 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11435));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d252 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87977) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87978)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh87706) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87707)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d251)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh88339 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh87978) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88342));
    vlTOPp->mkUnpipelined__DOT__x___05Fh11434 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                     >> 9U) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11437)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88249 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh88339) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88340));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11377 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh11434) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11435));
    vlTOPp->mkUnpipelined__DOT__x___05Fh88610 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88249) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88613));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11628 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11377));
    vlTOPp->mkUnpipelined__DOT__y___05Fh88520 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh88610) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88611));
    vlTOPp->mkUnpipelined__DOT__y___05Fh11819 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11628));
    vlTOPp->mkUnpipelined__DOT__product___05Fh75687 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh88519) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88520)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh88248) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh88249)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d252)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh12010 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11819));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254 
        = ((4U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh75687)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_put_b_in_BIT_0_7_T_ETC___05F_d149));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1385 
        = ((0x2000U & ((0xffffe000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                       ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh12010) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11819) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11628) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh11377) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BI_ETC___05F_d1383)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh12201 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh12010));
    vlTOPp->mkUnpipelined__DOT__x___05Fh92218 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xeU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh92489 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91676 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91947 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92581 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xeU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91134 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 7U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91405 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xbU) 
                                                    ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92583 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xeU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90592 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90863 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92310 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90050 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90321 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92312 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xdU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1___05FETC___05Fq8 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh89510 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh89778 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92039 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92041 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xcU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91768 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xbU) 
                                                    & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91770 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xbU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91497 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91499 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 0xaU) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91226 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91228 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 9U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90955 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90957 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 8U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90684 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90686 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 7U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90413 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90415 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 6U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90142 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90144 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 5U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh89870 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh89872 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                                                     >> 4U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1___05FETC___05Fq7 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254) 
                   >> 3U) & (IData)(vlTOPp->put_a_in)))
            ? 8U : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh12332 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh12201));
    vlTOPp->mkUnpipelined__DOT__x___05Fh89869 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1___05FETC___05Fq7) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh89872));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh2509 
        = ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1301) 
           | ((0x8000U & ((0xffff8000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh12332) 
                             << 0xfU))) | ((0x4000U 
                                            & ((0xffffc000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh12201) 
                                                  << 0xeU))) 
                                           | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1385))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh89779 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh89869) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh89870));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
        = ((4U & (IData)(vlTOPp->put_b_in)) ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh2509
            : vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_1_6_THEN_IF_IF_put_b_in_BIT_0___05FETC___05F_d1299);
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d345 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh89778) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh89779)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh89510) 
                                 << 4U) ^ (0xfffffff0U 
                                           & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1___05FETC___05Fq7) 
                                              << 1U)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254)) 
                                ^ ((IData)(vlTOPp->put_a_in) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1___05FETC___05Fq8))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90141 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh89779) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90144));
    vlTOPp->mkUnpipelined__DOT__x___05Fh14293 = (1U 
                                                 & (~ 
                                                    (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 0xaU)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13911 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh14102 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13529 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13720 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13147 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 4U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13338 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1389 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh14353 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh14162 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13971 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13780 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13589 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13398 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 4U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13148 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 3U) 
                                                    & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90051 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90141) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90142));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13397 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13148));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13399 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13148));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90412 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90051) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90415));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13396 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13398) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13399));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90322 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90412) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90413));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13339 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13396) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13397));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d346 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90321) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90322)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90050) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90051)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d345)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90683 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90322) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90686));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1465 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13338) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13339)) 
            << 5U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13147) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13148)) 
                       << 4U) | ((8U & ((0xfffffff8U 
                                         & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                                        ^ ((IData)(vlTOPp->put_a_in) 
                                           << 3U))) 
                                 | ((6U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                                    | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1389)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13588 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13339));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13590 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13339));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90593 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90683) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90684));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13587 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13589) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13590));
    vlTOPp->mkUnpipelined__DOT__x___05Fh90954 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90593) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90957));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13530 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13587) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13588));
    vlTOPp->mkUnpipelined__DOT__y___05Fh90864 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90954) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90955));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13779 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13530));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13781 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13530));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d347 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90863) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90864)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh90592) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90593)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d346)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91225 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh90864) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91228));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13778 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13780) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13781));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91135 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91225) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91226));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13721 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13778) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13779));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91496 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91135) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91499));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1466 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13720) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13721)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13529) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13530)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1465)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13970 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13721));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13972 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13721));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91406 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91496) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91497));
    vlTOPp->mkUnpipelined__DOT__x___05Fh13969 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13971) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13972));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d348 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91405) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91406)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91134) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91135)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d347)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh91767 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91406) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91770));
    vlTOPp->mkUnpipelined__DOT__y___05Fh13912 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13969) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13970));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91677 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91767) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91768));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14161 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13912));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14163 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13912));
    vlTOPp->mkUnpipelined__DOT__x___05Fh92038 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91677) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92041));
    vlTOPp->mkUnpipelined__DOT__x___05Fh14160 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14162) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14163));
    vlTOPp->mkUnpipelined__DOT__y___05Fh91948 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh92038) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92039));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14103 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14160) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14161));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d349 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91947) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91948)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh91676) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91677)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d348)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh92309 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh91948) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92312));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1467 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14102) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14103)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh13911) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh13912)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1466)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14352 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14103));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14354 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14103));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92219 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh92309) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92310));
    vlTOPp->mkUnpipelined__DOT__x___05Fh14351 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14353) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14354));
    vlTOPp->mkUnpipelined__DOT__x___05Fh92580 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92219) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92583));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14543 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14351) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14352));
    vlTOPp->mkUnpipelined__DOT__y___05Fh92490 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh92580) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92581));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14545 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14543));
    vlTOPp->mkUnpipelined__DOT__product___05Fh75272 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh92489) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92490)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh92218) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh92219)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d349)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh14542 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                     >> 0xaU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14545)));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351 
        = ((8U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh75272)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_put_b_in_BIT_1_6_T_ETC___05F_d254));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14485 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14542) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14543));
    vlTOPp->mkUnpipelined__DOT__x___05Fh96183 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xeU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh96454 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95641 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xcU) 
                                                    ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95912 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96546 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xeU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95099 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95370 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96548 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xeU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94557 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94828 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96275 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94014 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94286 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96277 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xdU) 
                                                    | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2___05FETC___05Fq10 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh93746 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96004 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xcU) 
                                                    & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96006 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xcU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95733 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95735 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xbU) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95462 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95464 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 0xaU) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95191 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95193 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 9U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94920 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94922 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 8U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94649 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94651 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 7U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94378 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94380 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 6U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94106 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94108 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                                                     >> 5U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2___05FETC___05Fq9 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351) 
                   >> 4U) & (IData)(vlTOPp->put_a_in)))
            ? 0x10U : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1468 
        = ((0x800U & ((0xfffff800U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                      ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14485) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh14293) 
                                         ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14543)) 
                                        << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1467)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14736 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14485));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d435 
        = ((0x20U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh93746) 
                      << 5U) ^ (0xffffffe0U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2___05FETC___05Fq9) 
                                               << 1U)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351)) 
                        ^ ((IData)(vlTOPp->put_a_in) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351)) 
                                       | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2___05FETC___05Fq10)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94105 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2___05FETC___05Fq9) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94108));
    vlTOPp->mkUnpipelined__DOT__y___05Fh14927 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14736));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94015 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94105) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94106));
    vlTOPp->mkUnpipelined__DOT__y___05Fh15118 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14927));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94377 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94015) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94380));
    vlTOPp->mkUnpipelined__DOT__y___05Fh15249 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh15118));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94287 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94377) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94378));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh2067 
        = ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1389) 
           | ((0x8000U & ((0xffff8000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh15249) 
                             << 0xfU))) | ((0x4000U 
                                            & ((0xffffc000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh15118) 
                                                  << 0xeU))) 
                                           | ((0x2000U 
                                               & ((0xffffe000U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14927) 
                                                   << 0xdU))) 
                                              | ((0x1000U 
                                                  & ((0xfffff000U 
                                                      & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh14736) 
                                                      << 0xcU))) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1468))))));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d436 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94286) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94287)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94014) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94015)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d435)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94648 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94287) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94651));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
        = ((8U & (IData)(vlTOPp->put_b_in)) ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh2067
            : vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_2_5_THEN_IF_IF_put_b_in_BIT_1___05FETC___05F_d1387);
    vlTOPp->mkUnpipelined__DOT__y___05Fh94558 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94648) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94649));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17210 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17401 = (1U 
                                                 & (~ 
                                                    (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 0xbU)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16828 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17019 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16446 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16637 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16255 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1473 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh17461 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17270 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17079 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16888 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16697 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16506 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 5U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16256 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 4U) 
                                                    & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh94919 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94558) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94922));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1546 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16255) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16256)) 
            << 5U) | ((0x10U & ((0xfffffff0U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471) 
                                ^ ((IData)(vlTOPp->put_a_in) 
                                   << 4U))) | ((0xeU 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471) 
                                               | (1U 
                                                  & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1473))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16505 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16256));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16507 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16256));
    vlTOPp->mkUnpipelined__DOT__y___05Fh94829 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94919) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94920));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16504 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16506) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16507));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d437 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94828) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94829)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh94557) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94558)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d436)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95190 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh94829) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95193));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16447 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16504) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16505));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95100 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95190) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95191));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16696 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16447));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16698 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16447));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95461 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95100) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95464));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16695 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16697) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16698));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95371 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95461) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95462));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16638 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16695) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16696));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d438 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95370) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95371)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95099) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95100)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d437)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh95732 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95371) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95735));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1547 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16637) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16638)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16446) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16447)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1546)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16887 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16638));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16889 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16638));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95642 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95732) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95733));
    vlTOPp->mkUnpipelined__DOT__x___05Fh16886 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16888) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16889));
    vlTOPp->mkUnpipelined__DOT__x___05Fh96003 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95642) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96006));
    vlTOPp->mkUnpipelined__DOT__y___05Fh16829 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16886) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16887));
    vlTOPp->mkUnpipelined__DOT__y___05Fh95913 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh96003) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96004));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17078 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16829));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17080 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16829));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d439 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95912) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95913)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh95641) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95642)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d438)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh96274 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh95913) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96277));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17077 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17079) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17080));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96184 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh96274) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96275));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17020 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17077) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17078));
    vlTOPp->mkUnpipelined__DOT__x___05Fh96545 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96184) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96548));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1548 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17019) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17020)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh16828) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh16829)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1547)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17269 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17020));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17271 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17020));
    vlTOPp->mkUnpipelined__DOT__y___05Fh96455 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh96545) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96546));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17268 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17270) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17271));
    vlTOPp->mkUnpipelined__DOT__product___05Fh74857 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh96454) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96455)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh96183) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh96184)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d439)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17211 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17268) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17269));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441 
        = ((0x10U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh74857)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_put_b_in_BIT_2_5_T_ETC___05F_d351));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17460 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17211));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17462 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17211));
    vlTOPp->mkUnpipelined__DOT__x___05Fh100143 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh100414 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99601 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 7U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99872 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xdU) 
                                                    ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh100506 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99059 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99330 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh100508 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh98517 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh98788 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh100235 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                      >> 0xdU) 
                                                     & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3___05FETC___05Fq12 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh97977 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh98245 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh100237 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                      >> 0xdU) 
                                                     | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99964 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99966 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xcU) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99693 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99695 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xbU) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99422 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99424 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 0xaU) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99151 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99153 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 9U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98880 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98882 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 8U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98609 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98611 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 7U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98337 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98339 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                                                     >> 6U) 
                                                    | ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3___05FETC___05Fq11 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441) 
                   >> 5U) & (IData)(vlTOPp->put_a_in)))
            ? 0x20U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh17459 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17461) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17462));
    vlTOPp->mkUnpipelined__DOT__x___05Fh98336 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3___05FETC___05Fq11) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98339));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17651 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17459) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17460));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98246 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh98336) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98337));
    vlTOPp->mkUnpipelined__DOT__INV_IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BI_ETC___05F_d1549 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17401) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17651)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17210) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17211)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1548)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17653 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17651));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d518 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh98245) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98246)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh97977) 
                                 << 6U) ^ (0xffffffc0U 
                                           & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3___05FETC___05Fq11) 
                                              << 1U)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441)) 
                                   ^ ((IData)(vlTOPp->put_a_in) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3___05FETC___05Fq12))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh98608 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98246) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98611));
    vlTOPp->mkUnpipelined__DOT__x___05Fh17650 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                     >> 0xbU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17653)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98518 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh98608) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98609));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17593 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh17650) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17651));
    vlTOPp->mkUnpipelined__DOT__x___05Fh98879 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98518) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98882));
    vlTOPp->mkUnpipelined__DOT__y___05Fh17844 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17593));
    vlTOPp->mkUnpipelined__DOT__y___05Fh98789 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh98879) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98880));
    vlTOPp->mkUnpipelined__DOT__y___05Fh18035 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17844));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d519 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh98788) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98789)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh98517) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98518)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d518)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99150 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh98789) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99153));
    vlTOPp->mkUnpipelined__DOT__y___05Fh18166 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh18035));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99060 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99150) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99151));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh1625 
        = ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1473) 
           | ((0x8000U & ((0xffff8000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh18166) 
                             << 0xfU))) | ((0x4000U 
                                            & ((0xffffc000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh18035) 
                                                  << 0xeU))) 
                                           | ((0x2000U 
                                               & ((0xffffe000U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17844) 
                                                   << 0xdU))) 
                                              | ((0x1000U 
                                                  & ((0xfffff000U 
                                                      & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh17593) 
                                                      << 0xcU))) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BI_ETC___05F_d1549))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99421 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99060) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99424));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
        = ((0x10U & (IData)(vlTOPp->put_b_in)) ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh1625
            : vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_3_4_THEN_IF_IF_put_b_in_BIT_2___05FETC___05F_d1471);
    vlTOPp->mkUnpipelined__DOT__y___05Fh99331 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99421) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99422));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20509 = (1U 
                                                 & (~ 
                                                    (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 0xcU)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20127 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20318 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19745 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19936 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19363 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 6U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19554 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1554 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh20569 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20378 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20187 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19996 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19805 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19614 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19364 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 5U) 
                                                    & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d520 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99330) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99331)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99059) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99060)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d519)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99692 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99331) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99695));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19613 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19364));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19615 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19364));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99602 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99692) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99693));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19612 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19614) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19615));
    vlTOPp->mkUnpipelined__DOT__x___05Fh99963 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99602) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99966));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19555 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19612) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19613));
    vlTOPp->mkUnpipelined__DOT__y___05Fh99873 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99963) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99964));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1624 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19554) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19555)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19363) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19364)) 
                       << 6U) | ((0x20U & ((0xffffffe0U 
                                            & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552) 
                                           ^ ((IData)(vlTOPp->put_a_in) 
                                              << 5U))) 
                                 | ((0x1eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552) 
                                    | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1554)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19804 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19555));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19806 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19555));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d521 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99872) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99873)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh99601) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99602)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d520)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh100234 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh99873) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100237));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19803 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19805) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19806));
    vlTOPp->mkUnpipelined__DOT__y___05Fh100144 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh100234) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100235));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19746 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19803) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19804));
    vlTOPp->mkUnpipelined__DOT__x___05Fh100505 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100144) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100508));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19995 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19746));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19997 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19746));
    vlTOPp->mkUnpipelined__DOT__y___05Fh100415 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh100505) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100506));
    vlTOPp->mkUnpipelined__DOT__x___05Fh19994 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19996) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19997));
    vlTOPp->mkUnpipelined__DOT__product___05Fh74442 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh100414) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100415)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh100143) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh100144)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d521)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh19937 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19994) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19995));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523 
        = ((0x20U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh74442)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_put_b_in_BIT_3_4_T_ETC___05F_d441));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1625 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19936) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19937)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh19745) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19746)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1624)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20186 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19937));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20188 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh19937));
    vlTOPp->mkUnpipelined__DOT__x___05Fh104098 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xeU) 
                                                     ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh104369 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103556 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xcU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103827 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh104461 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xeU) 
                                                     & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103014 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xaU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103285 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xbU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh104463 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xeU) 
                                                     | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh102471 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 8U) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh102743 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 9U) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh104190 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 7U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4___05FETC___05Fq14 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh102203 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 7U) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh104192 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103919 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xcU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103921 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xcU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103648 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103650 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xbU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103377 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xaU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103379 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 0xaU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103106 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 9U) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103108 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 9U) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh102835 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 8U) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh102837 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 8U) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh102563 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 7U) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh102565 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                                                      >> 7U) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4___05FETC___05Fq13 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523) 
                   >> 6U) & (IData)(vlTOPp->put_a_in)))
            ? 0x40U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh20185 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20187) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20188));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d593 
        = ((0x80U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh102203) 
                      << 7U) ^ (0xffffff80U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4___05FETC___05Fq13) 
                                               << 1U)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523)) 
                        ^ ((IData)(vlTOPp->put_a_in) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523)) 
                                       | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4___05FETC___05Fq14)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh102562 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4___05FETC___05Fq13) 
                                                   >> 6U) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102565));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20128 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20185) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20186));
    vlTOPp->mkUnpipelined__DOT__y___05Fh102472 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh102562) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102563));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20377 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20128));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20379 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20128));
    vlTOPp->mkUnpipelined__DOT__x___05Fh102834 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102472) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102837));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20376 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20378) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20379));
    vlTOPp->mkUnpipelined__DOT__y___05Fh102744 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh102834) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102835));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20319 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20376) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20377));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d594 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh102743) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102744)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh102471) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102472)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d593)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103105 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh102744) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103108));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1626 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20318) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20319)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20127) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20128)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1625)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20568 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20319));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20570 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20319));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103015 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103105) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103106));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20567 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20569) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20570));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103376 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103015) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103379));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20759 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20567) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20568));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103286 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103376) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103377));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20761 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20759));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d595 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103285) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103286)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103014) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103015)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d594)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103647 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103286) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103650));
    vlTOPp->mkUnpipelined__DOT__x___05Fh20758 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                     >> 0xcU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20761)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103557 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103647) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103648));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20701 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20758) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20759));
    vlTOPp->mkUnpipelined__DOT__x___05Fh103918 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103557) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103921));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1627 
        = ((0x2000U & ((0xffffe000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552) 
                       ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20701) 
                          << 0xdU))) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh20509) 
                                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20759)) 
                                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1626)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh20952 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20701));
    vlTOPp->mkUnpipelined__DOT__y___05Fh103828 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103918) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103919));
    vlTOPp->mkUnpipelined__DOT__y___05Fh21083 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20952));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d596 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103827) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103828)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh103556) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103557)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d595)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh104189 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh103828) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104192));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh1183 
        = ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1554) 
           | ((0x8000U & ((0xffff8000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh21083) 
                             << 0xfU))) | ((0x4000U 
                                            & ((0xffffc000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh20952) 
                                                  << 0xeU))) 
                                           | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1627))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh104099 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh104189) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104190));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
        = ((0x20U & (IData)(vlTOPp->put_b_in)) ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh1183
            : vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_4_3_THEN_IF_IF_put_b_in_BIT_3___05FETC___05F_d1552);
    vlTOPp->mkUnpipelined__DOT__x___05Fh104460 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104099) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104463));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23426 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23617 = (1U 
                                                 & (~ 
                                                    (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xdU)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23044 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23235 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22662 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22853 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22471 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 7U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1631 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh23677 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23486 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23295 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23104 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22913 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22722 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 7U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh22472 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 6U) 
                                                    & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh104370 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh104460) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104461));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1698 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22471) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22472)) 
            << 7U) | ((0x40U & ((0xffffffc0U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629) 
                                ^ ((IData)(vlTOPp->put_a_in) 
                                   << 6U))) | ((0x3eU 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629) 
                                               | (1U 
                                                  & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1631))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh22721 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22472));
    vlTOPp->mkUnpipelined__DOT__y___05Fh22723 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22472));
    vlTOPp->mkUnpipelined__DOT__product___05Fh74027 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh104369) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104370)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh104098) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh104099)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d596)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22720 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22722) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22723));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598 
        = ((0x40U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh74027)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_put_b_in_BIT_4_3_T_ETC___05F_d523));
    vlTOPp->mkUnpipelined__DOT__y___05Fh22663 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22720) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22721));
    vlTOPp->mkUnpipelined__DOT__x___05Fh108048 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 7U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh108319 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xfU) 
                                                     ^ (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_7_8_THEN_255_ELSE_0___05F_d19)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107506 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xcU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107777 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh108411 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 7U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh106964 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xaU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107235 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xbU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh108413 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 7U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5___05FETC___05Fq16 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh106424 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 8U) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh106692 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 9U) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh108140 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh108142 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107869 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xcU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107871 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xcU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107598 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107600 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xbU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107327 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xaU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107329 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 0xaU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107056 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 9U) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107058 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 9U) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh106784 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 8U) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh106786 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                                                      >> 8U) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5___05FETC___05Fq15 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598) 
                   >> 7U) & (IData)(vlTOPp->put_a_in)))
            ? 0x80U : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh22912 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22663));
    vlTOPp->mkUnpipelined__DOT__y___05Fh22914 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22663));
    vlTOPp->mkUnpipelined__DOT__x___05Fh106783 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5___05FETC___05Fq15) 
                                                   >> 7U) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh106786));
    vlTOPp->mkUnpipelined__DOT__x___05Fh22911 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22913) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22914));
    vlTOPp->mkUnpipelined__DOT__y___05Fh106693 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh106783) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh106784));
    vlTOPp->mkUnpipelined__DOT__y___05Fh22854 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22911) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22912));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d661 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh106692) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh106693)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh106424) 
                                  << 8U) ^ (0xffffff00U 
                                            & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5___05FETC___05Fq15) 
                                               << 1U)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598)) 
                                   ^ ((IData)(vlTOPp->put_a_in) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5___05FETC___05Fq16))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107055 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh106693) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107058));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1699 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22853) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22854)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh22662) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22663)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1698)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23103 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22854));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23105 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh22854));
    vlTOPp->mkUnpipelined__DOT__y___05Fh106965 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107055) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107056));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23102 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23104) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23105));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107326 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh106965) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107329));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23045 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23102) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23103));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107236 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107326) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107327));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23294 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23045));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23296 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23045));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d662 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107235) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107236)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh106964) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh106965)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d661)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107597 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107236) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107600));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23293 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23295) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23296));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107507 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107597) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107598));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23236 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23293) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23294));
    vlTOPp->mkUnpipelined__DOT__x___05Fh107868 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107507) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107871));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1700 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23235) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23236)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23044) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23045)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1699)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23485 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23236));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23487 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23236));
    vlTOPp->mkUnpipelined__DOT__y___05Fh107778 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107868) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107869));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23484 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23486) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23487));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d663 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107777) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107778)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh107506) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107507)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d662)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh108139 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh107778) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108142));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23427 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23484) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23485));
    vlTOPp->mkUnpipelined__DOT__y___05Fh108049 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh108139) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108140));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23676 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23427));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23678 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23427));
    vlTOPp->mkUnpipelined__DOT__x___05Fh108410 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108049) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108413));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23675 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23677) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23678));
    vlTOPp->mkUnpipelined__DOT__y___05Fh108320 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh108410) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108411));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23867 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23675) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23676));
    vlTOPp->mkUnpipelined__DOT__product___05Fh73612 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh108319) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108320)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh108048) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh108049)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d663)));
    vlTOPp->mkUnpipelined__DOT__INV_IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BI_ETC___05F_d1701 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23617) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23867)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23426) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23427)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1700)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh23869 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23867));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665 
        = ((0x80U & (IData)(vlTOPp->put_b_in)) ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh73612)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_put_b_in_BIT_5_2_T_ETC___05F_d598));
    vlTOPp->mkUnpipelined__DOT__x___05Fh23866 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                     >> 0xdU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23869)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111992 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh112263 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 7U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111450 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xcU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111721 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh112355 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh110907 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xaU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111179 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xbU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh112357 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 6U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1___05FETC___05Fq18 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh110639 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 9U) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh112084 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh112086 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111813 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xcU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111815 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xcU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111542 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111544 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xbU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111271 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xaU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111273 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 0xaU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh110999 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 9U) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111001 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                                                      >> 9U) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1___05FETC___05Fq17 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665) 
                   >> 8U) & (IData)(vlTOPp->put_a_in)))
            ? 0x100U : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh23809 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh23866) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23867));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d721 
        = ((0x200U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh110639) 
                       << 9U) ^ (0xfffffe00U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1___05FETC___05Fq17) 
                                                << 1U)))) 
           | ((0x100U & ((0xffffff00U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665)) 
                         ^ ((IData)(vlTOPp->put_a_in) 
                            << 8U))) | ((0xfeU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665)) 
                                        | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1___05FETC___05Fq18)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh110998 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1___05FETC___05Fq17) 
                                                   >> 8U) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111001));
    vlTOPp->mkUnpipelined__DOT__y___05Fh24000 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23809));
    vlTOPp->mkUnpipelined__DOT__y___05Fh110908 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh110998) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh110999));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh741 
        = ((0xffff0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1631) 
           | ((0x8000U & ((0xffff8000U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh24000) 
                             << 0xfU))) | ((0x4000U 
                                            & ((0xffffc000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh23809) 
                                                  << 0xeU))) 
                                           | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BI_ETC___05F_d1701))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111270 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh110908) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111273));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
        = ((0x40U & (IData)(vlTOPp->put_b_in)) ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh741
            : vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_5_2_THEN_IF_IF_put_b_in_BIT_4___05FETC___05F_d1629);
    vlTOPp->mkUnpipelined__DOT__y___05Fh111180 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111270) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111271));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26725 = (1U 
                                                 & (~ 
                                                    (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xeU)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh26534 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26343 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26152 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh25961 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26785 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 6U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh33795 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 7U) 
                                                    ^ (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh25770 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 9U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh25579 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 8U) 
                                                    ^ 
                                                    ((IData)(vlTOPp->put_a_in) 
                                                     >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26594 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xcU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26403 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xbU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26212 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xaU) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26021 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 9U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh25830 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 8U) 
                                                    & ((IData)(vlTOPp->put_a_in) 
                                                       >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh25580 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 7U) 
                                                    & (IData)(vlTOPp->put_a_in)));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d722 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111179) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111180)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh110907) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh110908)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d721)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111541 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111180) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111544));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in___05FETC___05F_d1757 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1952 
        = (1U & (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                   >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                                    | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
                  ? (~ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795))
                  : (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh33794 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh25579) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25580));
    vlTOPp->mkUnpipelined__DOT__y___05Fh25829 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25580));
    vlTOPp->mkUnpipelined__DOT__y___05Fh25831 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25580));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111451 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111541) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111542));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1959 
        = (1U & (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                   >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                                    | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
                  ? vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in___05FETC___05F_d1757
                  : vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1931 
        = (1U & (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
                  & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                            | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
                  ? (~ (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794))
                  : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1950 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794));
    vlTOPp->mkUnpipelined__DOT__y___05Fh33983 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795));
    vlTOPp->mkUnpipelined__DOT__x___05Fh25828 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh25830) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25831));
    vlTOPp->mkUnpipelined__DOT__x___05Fh111812 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111451) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111815));
    vlTOPp->mkUnpipelined__DOT__y___05Fh25771 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh25828) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25829));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111722 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111812) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111813));
    vlTOPp->mkUnpipelined__DOT__x___05Fh33982 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh25770) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25771));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26020 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25771));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26022 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25771));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d723 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111721) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111722)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111450) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111451)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d722)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh112083 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111722) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh112086));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1929 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33982) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33982));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1948 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33982) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33983))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33982));
    vlTOPp->mkUnpipelined__DOT__y___05Fh39149 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33982) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33794));
    vlTOPp->mkUnpipelined__DOT__y___05Fh34171 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh33982) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33983));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26019 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26021) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26022));
    vlTOPp->mkUnpipelined__DOT__y___05Fh111993 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh112083) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh112084));
    vlTOPp->mkUnpipelined__DOT__y___05Fh25962 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26019) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26020));
    vlTOPp->mkUnpipelined__DOT__x___05Fh112354 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111993) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh112357));
    vlTOPp->mkUnpipelined__DOT__x___05Fh34170 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh25961) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25962));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26211 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25962));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26213 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh25962));
    vlTOPp->mkUnpipelined__DOT__y___05Fh112264 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh112354) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh112355));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1927 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34170) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39149))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34170));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1946 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34170) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34171))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34170));
    vlTOPp->mkUnpipelined__DOT__y___05Fh39337 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34170) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39149));
    vlTOPp->mkUnpipelined__DOT__y___05Fh34359 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34170) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34171));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26210 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26212) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26213));
    vlTOPp->mkUnpipelined__DOT__product___05Fh73197 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh112263) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh112264)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh111992) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh111993)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d723)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26153 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26210) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26211));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh73197)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_IF_put_b_in_BIT_6_1_THE_ETC___05F_d665));
    vlTOPp->mkUnpipelined__DOT__x___05Fh34358 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26152) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26153));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26402 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26153));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26404 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26153));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115932 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh116203 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 6U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115390 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xcU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115661 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh116295 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0___05FETC___05Fq20 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh114850 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xaU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115118 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xbU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh116297 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 5U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh116024 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh116026 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115753 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xcU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115755 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xcU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115482 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115484 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xbU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115210 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xaU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115212 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                                                      >> 0xaU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0___05FETC___05Fq19 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725) 
                   >> 9U) & (IData)(vlTOPp->put_a_in)))
            ? 0x200U : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1925 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34358) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39337))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34358));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1944 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34358) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34359))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34358));
    vlTOPp->mkUnpipelined__DOT__y___05Fh39525 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34358) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39337));
    vlTOPp->mkUnpipelined__DOT__y___05Fh34547 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34358) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34359));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26401 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26403) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26404));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115209 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0___05FETC___05Fq19) 
                                                   >> 9U) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115212));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26344 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26401) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26402));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115119 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115209) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115210));
    vlTOPp->mkUnpipelined__DOT__x___05Fh34546 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26343) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26344));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26593 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26344));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26595 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26344));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d774 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115118) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115119)) 
            << 0xbU) | ((0x400U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh114850) 
                                    << 0xaU) ^ (0xfffffc00U 
                                                & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0___05FETC___05Fq19) 
                                                   << 1U)))) 
                        | ((0x200U & ((0xfffffe00U 
                                       & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725)) 
                                      ^ ((IData)(vlTOPp->put_a_in) 
                                         << 9U))) | 
                           ((0x1feU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725)) 
                            | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0___05FETC___05Fq20))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115481 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115119) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115484));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1923 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34546) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39525))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34546));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1942 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34546) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34547))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34546));
    vlTOPp->mkUnpipelined__DOT__y___05Fh39713 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34546) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39525));
    vlTOPp->mkUnpipelined__DOT__y___05Fh34735 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34546) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34547));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26592 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26594) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26595));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115391 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115481) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115482));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26535 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26592) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26593));
    vlTOPp->mkUnpipelined__DOT__x___05Fh115752 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115391) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115755));
    vlTOPp->mkUnpipelined__DOT__x___05Fh34734 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26534) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26535));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26784 = (((IData)(vlTOPp->put_a_in) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26535));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26786 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26535));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115662 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115752) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115753));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1921 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34734) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39713))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34734));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1940 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34734) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34735))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34734));
    vlTOPp->mkUnpipelined__DOT__y___05Fh39901 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34734) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39713));
    vlTOPp->mkUnpipelined__DOT__y___05Fh34923 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34734) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34735));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26783 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26785) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26786));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d775 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115661) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115662)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115390) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115391)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d774)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh116023 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115662) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh116026));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26975 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26783) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26784));
    vlTOPp->mkUnpipelined__DOT__y___05Fh115933 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh116023) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh116024));
    vlTOPp->mkUnpipelined__DOT__x___05Fh34922 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26725) 
                                                 ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26975));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26977 = ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26975));
    vlTOPp->mkUnpipelined__DOT__x___05Fh116294 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115933) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh116297));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1919 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34922) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39901))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34922));
    vlTOPp->mkUnpipelined__DOT__y___05Fh40089 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34922) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh39901));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1938 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34922) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34923))
            : (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34922));
    vlTOPp->mkUnpipelined__DOT__y___05Fh35111 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh34922) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh34923));
    vlTOPp->mkUnpipelined__DOT__x___05Fh26974 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                     >> 0xeU) 
                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26977)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh116204 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh116294) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh116295));
    vlTOPp->mkUnpipelined__DOT__y___05Fh26917 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh26974) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26975));
    vlTOPp->mkUnpipelined__DOT__product___05Fh72782 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh116203) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh116204)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh115932) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh115933)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d775)));
    vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747 
        = (1U & ((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                  >> 0xfU) ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh26917)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777 
        = ((2U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh72782)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_0_0_T_ETC___05F_d725));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1917 
        = (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
            & (0U != ((0x7eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                      | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((0x1fffeU & (vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in___05FETC___05F_d1757 
                            >> 0xfU)) | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747) 
                                         ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh40089)))
            : ((0x1fffeU & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751 
                            >> 0xfU)) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1785 
        = (((vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
             >> 6U) & (0U != ((0x3eU & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                              | (1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751))))
            ? ((0x1fffeU & (vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in___05FETC___05F_d1757 
                            >> 0xfU)) | ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747) 
                                         ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh35111)))
            : ((0x1fffeU & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1751 
                            >> 0xfU)) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh119867 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh120138 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 5U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh119324 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xcU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh119596 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh120230 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1___05FETC___05Fq22 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh119056 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xbU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh120232 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 4U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119959 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119961 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119688 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xcU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119690 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xcU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119416 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119418 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                                                      >> 0xbU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1___05FETC___05Fq21 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777) 
                   >> 0xaU) & (IData)(vlTOPp->put_a_in)))
            ? 0x400U : 0U);
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh27103 
        = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1917 
            << 0xeU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1919) 
                         << 0xdU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1921) 
                                      << 0xcU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1923) 
                                                   << 0xbU) 
                                                  | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1925) 
                                                      << 0xaU) 
                                                     | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1927) 
                                                         << 9U) 
                                                        | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1929) 
                                                            << 8U) 
                                                           | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1931) 
                                                               << 7U) 
                                                              | (((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh33795) 
                                                                  << 6U) 
                                                                 | (0x3fU 
                                                                    & (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                                       >> 1U)))))))))));
    vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_2___05Fh31935 
        = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1785 
            << 0xfU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1938) 
                         << 0xeU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1940) 
                                      << 0xdU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1942) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1944) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1946) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1948) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1950) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1952) 
                                                                  << 7U) 
                                                                 | ((0x7eU 
                                                                     & vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703) 
                                                                    | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1959)))))))))));
    vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh35295 
        = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1785 
            << 0xeU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1938) 
                         << 0xdU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1940) 
                                      << 0xcU) | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1942) 
                                                   << 0xbU) 
                                                  | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1944) 
                                                      << 0xaU) 
                                                     | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1946) 
                                                         << 9U) 
                                                        | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1948) 
                                                            << 8U) 
                                                           | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1950) 
                                                               << 7U) 
                                                              | (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1952) 
                                                                  << 6U) 
                                                                 | (0x3fU 
                                                                    & (vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1703 
                                                                       >> 1U)))))))))));
    if ((1U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747) 
               | vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1785))) {
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1880 
            = ((0x1fffffeU & (vlTOPp->mkUnpipelined__DOT__IF_INV_IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_ETC___05F_d1795 
                              >> 7U)) | ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31759) 
                                         ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh31760)));
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1895 
            = vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_13_800_XOR_put_b_in_BIT_13_801_84_ETC___05F_d1891;
    } else {
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1880 
            = ((0x1fffffeU & (vlTOPp->mkUnpipelined__DOT__IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_BIT_7___05FETC___05F_d1792 
                              >> 7U)) | (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31759));
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1895 
            = (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31571) 
                << 6U) | (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31383) 
                           << 5U) | (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31195) 
                                      << 4U) | (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh31007) 
                                                 << 3U) 
                                                | (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30819) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh30631) 
                                                       << 1U) 
                                                      | (1U 
                                                         & vlTOPp->mkUnpipelined__DOT__IF_INV_IF_put_a_in_BIT_7_8_XOR_put_b_in_BIT_7___05FETC___05F_d1792)))))));
    }
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d819 
        = ((0x800U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119056) 
                       << 0xbU) ^ (0xfffff800U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1___05FETC___05Fq21) 
                                                  << 1U)))) 
           | ((0x400U & ((0xfffffc00U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777)) 
                         ^ ((IData)(vlTOPp->put_a_in) 
                            << 0xaU))) | ((0x3feU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777)) 
                                          | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1___05FETC___05Fq22)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh119415 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1___05FETC___05Fq21) 
                                                   >> 0xaU) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119418));
    vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_2_fst___05Fh31937 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1785)
            ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh35295
            : vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_2___05Fh31935);
    vlTOPp->mkUnpipelined__DOT__exp_x___05Fh58 = ((0x80U 
                                                   & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1880 
                                                      << 7U)) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1895));
    vlTOPp->mkUnpipelined__DOT__y___05Fh119325 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119415) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119416));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05Fq33 
        = ((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_5___05FETC___05F_d1747)
            ? vlTOPp->mkUnpipelined__DOT__mant_mult___05Fh27103
            : vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_2_fst___05Fh31937);
    vlTOPp->mkUnpipelined__DOT__x___05Fh40382 = (vlTOPp->mkUnpipelined__DOT__exp_y___05Fh59 
                                                 - vlTOPp->mkUnpipelined__DOT__exp_x___05Fh58);
    vlTOPp->mkUnpipelined__DOT___0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_p_ETC___05F_d1900 
        = (vlTOPp->mkUnpipelined__DOT__exp_x___05Fh58 
           <= vlTOPp->mkUnpipelined__DOT__exp_y___05Fh59);
    vlTOPp->mkUnpipelined__DOT__x___05Fh40429 = (vlTOPp->mkUnpipelined__DOT__exp_x___05Fh58 
                                                 - vlTOPp->mkUnpipelined__DOT__exp_y___05Fh59);
    vlTOPp->mkUnpipelined__DOT__x___05Fh119687 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119325) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119690));
    vlTOPp->mkUnpipelined__DOT__mant_x___05Fh60 = (0x40000000U 
                                                   | (0x3f800000U 
                                                      & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05Fq33 
                                                         << 0x10U)));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543 
        = (0xffU & ((1U & ((~ (IData)(vlTOPp->mkUnpipelined__DOT___0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_p_ETC___05F_d1900)) 
                           | (vlTOPp->mkUnpipelined__DOT__exp_y___05Fh59 
                              <= vlTOPp->mkUnpipelined__DOT__exp_x___05Fh58)))
                     ? ((0x80U & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1880 
                                  << 7U)) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_put_b_in_BIT_ETC___05F_d1895))
                     : (vlTOPp->put_c_in >> 0x17U)));
    vlTOPp->mkUnpipelined__DOT__mant_y___05F_1___05Fh40402 
        = ((0x1fU >= vlTOPp->mkUnpipelined__DOT__x___05Fh40429)
            ? (vlTOPp->mkUnpipelined__DOT__mant_y___05Fh61 
               >> vlTOPp->mkUnpipelined__DOT__x___05Fh40429)
            : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh119597 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119687) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119688));
    vlTOPp->mkUnpipelined__DOT__mant_x___05F_1___05Fh40379 
        = ((0x1fU >= vlTOPp->mkUnpipelined__DOT__x___05Fh40382)
            ? (vlTOPp->mkUnpipelined__DOT__mant_x___05Fh60 
               >> vlTOPp->mkUnpipelined__DOT__x___05Fh40382)
            : 0U);
    vlTOPp->mkUnpipelined__DOT__exp_x___05Fh63 = vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543;
    vlTOPp->mkUnpipelined__DOT__IF_INV_IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6___05FETC___05F_d2546 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543))
            ? 0U : 1U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh61528 = (1U 
                                                 & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                                     >> 1U) 
                                                    & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)));
    vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 = ((IData)(vlTOPp->mkUnpipelined__DOT___0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_p_ETC___05F_d1900)
                                                    ? vlTOPp->mkUnpipelined__DOT__mant_y___05Fh61
                                                    : vlTOPp->mkUnpipelined__DOT__mant_y___05F_1___05Fh40402);
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d820 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119596) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119597)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119324) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119325)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d819)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh119958 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119597) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119961));
    vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 = (
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->mkUnpipelined__DOT___0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN_IF_IF_p_ETC___05F_d1900)) 
                                                       | (vlTOPp->mkUnpipelined__DOT__exp_y___05Fh59 
                                                          <= vlTOPp->mkUnpipelined__DOT__exp_x___05Fh58)))
                                                    ? vlTOPp->mkUnpipelined__DOT__mant_x___05Fh60
                                                    : vlTOPp->mkUnpipelined__DOT__mant_x___05F_1___05Fh40379);
    vlTOPp->mkUnpipelined__DOT__y___05Fh61716 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh61528));
    vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
        = (~ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66);
    vlTOPp->mkUnpipelined__DOT__y___05Fh119868 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119958) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119959));
    vlTOPp->mkUnpipelined__DOT__x___05Fh47160 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1fU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46772 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46966 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d1978 
        = (vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
           < vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66);
    vlTOPp->mkUnpipelined__DOT__x___05Fh46384 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46578 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh47221 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45996 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46190 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45608 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45802 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45220 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45414 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh47027 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44832 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45026 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44444 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44638 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44056 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44250 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43668 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43862 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46833 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43280 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43474 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42892 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43086 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42504 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42698 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46639 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42116 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 5U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42310 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41728 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 3U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41922 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 4U));
    vlTOPp->mkUnpipelined__DOT__IF_mant_x5_BIT_0_XOR_mant_y6_BIT_0_THEN_1_ELSE_0___05Fq35 
        = ((1U & (vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                  ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh41340 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 1U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41534 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46445 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46251 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46057 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45863 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45669 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45475 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45281 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45087 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44893 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44699 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44505 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44311 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44117 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43923 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43729 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43535 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43341 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43147 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42953 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42759 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42565 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42371 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 5U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42177 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 4U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41983 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 3U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41789 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41595 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66) 
                                                    >> 1U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41341 = (1U 
                                                 & (vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                    & vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2570 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                  ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh61716) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                                        ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh61528) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                                           ^ ((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                              << 1U))) 
                                    | (1U & vlTOPp->mkUnpipelined__DOT__IF_INV_IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6___05FETC___05F_d2546))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh61904 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh61716));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53619 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53813 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60465 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60659 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh54007 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1fU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60853 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1fU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53231 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53425 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60077 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60271 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52843 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53037 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59689 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59883 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh54068 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60914 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52455 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52649 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59301 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59495 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52067 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52261 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58913 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59107 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51679 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51873 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58525 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58719 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53874 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60720 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51291 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51485 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58137 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58331 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50903 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51097 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57749 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57943 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50515 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50709 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57361 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57555 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50127 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50321 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56973 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57167 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53680 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60526 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49739 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49933 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56585 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56779 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49351 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49545 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56197 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56391 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48963 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 5U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49157 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55809 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 5U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56003 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53486 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60332 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48575 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 3U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48769 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 4U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55421 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 3U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55615 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 4U));
    vlTOPp->mkUnpipelined__DOT__IF_INV_INV_mant_y64_BIT_0_XOR_mant_x5_BIT_0_TH_ETC___05Fq36 
        = ((1U & (vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                  ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65))
            ? 0U : 1U);
    vlTOPp->mkUnpipelined__DOT__IF_INV_mant_x5_BIT_0_XOR_INV_mant_y64_BIT_0_TH_ETC___05Fq37 
        = ((1U & (vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                  ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34))
            ? 0U : 1U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh48187 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 1U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48381 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     ^ vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55033 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 1U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55227 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     ^ vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53292 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60138 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53098 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59944 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52904 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59750 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52710 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59556 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52516 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59362 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52322 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59168 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52128 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58974 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51934 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58780 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51740 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58586 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51546 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58392 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51352 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58198 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51158 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58004 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50964 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57810 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50770 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57616 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50576 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57422 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50382 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57228 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50188 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57034 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49994 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56840 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 9U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49800 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56646 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49606 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56452 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 7U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49412 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56258 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49218 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 5U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56064 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 5U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49024 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 4U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55870 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 4U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48830 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 3U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55676 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 3U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48636 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55482 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48442 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                     & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34) 
                                                    >> 1U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55288 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                     & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65) 
                                                    >> 1U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48248 = (1U 
                                                 & (vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                    & vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55094 = (1U 
                                                 & (vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                    & vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65));
    vlTOPp->mkUnpipelined__DOT__x___05Fh120229 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119868) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh120232));
    vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_3_fst___05Fh40454 
        = (1U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d1978)
                  ? (vlTOPp->put_c_in >> 0x1fU) : (IData)(vlTOPp->mkUnpipelined__DOT__sign_x___05Fh56)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41594 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41341));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41596 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41341));
    vlTOPp->mkUnpipelined__DOT__y___05Fh62092 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh61904));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48246 = (1U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48248) 
                                                    | vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55092 = (1U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55094) 
                                                    | vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34));
    vlTOPp->mkUnpipelined__DOT__y___05Fh120139 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh120229) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh120230));
    vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_3_fst___05Fh40297 
        = ((IData)(vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_20_ETC___05F_d1202)
            ? (IData)(vlTOPp->mkUnpipelined__DOT__sign_x___05Fh56)
            : (IData)(vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_3_fst___05Fh40454));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41593 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41595) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41596));
    vlTOPp->mkUnpipelined__DOT__y___05Fh62280 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh62092));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48188 = (1U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48246) 
                                                    | vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55034 = (1U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55092) 
                                                    | vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65));
    vlTOPp->mkUnpipelined__DOT__product___05Fh72367 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh120138) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh120139)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh119867) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh119868)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d820)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41535 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41593) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41594));
    vlTOPp->mkUnpipelined__DOT__y___05Fh62468 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543) 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh62280));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48441 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48188));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48443 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48188));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55287 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55034));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55289 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55034));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822 
        = ((4U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh72367)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_1_THE_ETC___05F_d777));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2639 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41534) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41535)) 
            << 2U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41340) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41341)) 
                       << 1U) | (1U & vlTOPp->mkUnpipelined__DOT__IF_mant_x5_BIT_0_XOR_mant_y6_BIT_0_THEN_1_ELSE_0___05Fq35)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41788 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41535));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41790 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41535));
    vlTOPp->mkUnpipelined__DOT__exp_x___05F_1___05Fh61045 
        = ((0xffffff00U & vlTOPp->mkUnpipelined__DOT__IF_INV_IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6___05FETC___05F_d2546) 
           | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                        ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh62468) 
                           << 7U))) | ((0x40U & ((0xffffffc0U 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh62280) 
                                                  << 6U))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                                            ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh62092) 
                                               << 5U))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2543)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh61904) 
                                                  << 4U))) 
                                             | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2570))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48440 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48442) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48443));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55286 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55288) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55289));
    vlTOPp->mkUnpipelined__DOT__x___05Fh123797 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh124068 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 4U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2___05FETC___05Fq24 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh123257 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xcU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh123525 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh124160 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh124162 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 3U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh123889 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh123891 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh123617 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xcU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh123619 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                                                      >> 0xcU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2___05FETC___05Fq23 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822) 
                   >> 0xbU) & (IData)(vlTOPp->put_a_in)))
            ? 0x800U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh41787 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41789) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41790));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48382 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48440) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48441));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55228 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55286) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55287));
    vlTOPp->mkUnpipelined__DOT__x___05Fh123616 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2___05FETC___05Fq23) 
                                                   >> 0xbU) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123619));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41729 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41787) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41788));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2797 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48381) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48382)) 
            << 2U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48187) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48188)) 
                       << 1U) | (1U & vlTOPp->mkUnpipelined__DOT__IF_INV_mant_x5_BIT_0_XOR_INV_mant_y64_BIT_0_TH_ETC___05Fq37)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48635 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48382));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48637 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48382));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2718 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55227) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55228)) 
            << 2U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55033) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55034)) 
                       << 1U) | (1U & vlTOPp->mkUnpipelined__DOT__IF_INV_INV_mant_y64_BIT_0_XOR_mant_x5_BIT_0_TH_ETC___05Fq36)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55481 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55228));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55483 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55228));
    vlTOPp->mkUnpipelined__DOT__y___05Fh123526 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh123616) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123617));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41982 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41729));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41984 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41729));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48634 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48636) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48637));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55480 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55482) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55483));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d857 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh123525) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123526)) 
            << 0xdU) | ((0x1000U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh123257) 
                                     << 0xcU) ^ (0xfffff000U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2___05FETC___05Fq23) 
                                                    << 1U)))) 
                        | ((0x800U & ((0xfffff800U 
                                       & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822)) 
                                      ^ ((IData)(vlTOPp->put_a_in) 
                                         << 0xbU))) 
                           | ((0x7feU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822)) 
                              | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2___05FETC___05Fq24))))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh123888 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123526) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123891));
    vlTOPp->mkUnpipelined__DOT__x___05Fh41981 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41983) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41984));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48576 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48634) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48635));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55422 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55480) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55481));
    vlTOPp->mkUnpipelined__DOT__y___05Fh123798 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh123888) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123889));
    vlTOPp->mkUnpipelined__DOT__y___05Fh41923 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41981) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41982));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48829 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48576));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48831 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48576));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55675 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55422));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55677 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 3U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55422));
    vlTOPp->mkUnpipelined__DOT__x___05Fh124159 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123798) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh124162));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2640 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41922) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41923)) 
            << 4U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh41728) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41729)) 
                       << 3U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2639)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42176 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41923));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42178 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh41923));
    vlTOPp->mkUnpipelined__DOT__x___05Fh48828 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48830) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48831));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55674 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55676) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55677));
    vlTOPp->mkUnpipelined__DOT__y___05Fh124069 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh124159) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh124160));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42175 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42177) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42178));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48770 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48828) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48829));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55616 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55674) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55675));
    vlTOPp->mkUnpipelined__DOT__product___05Fh71952 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh124068) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh124069)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh123797) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh123798)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d857)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42117 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42175) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42176));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2798 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48769) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48770)) 
            << 4U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48575) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48576)) 
                       << 3U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2797)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49023 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48770));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49025 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48770));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2719 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55615) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55616)) 
            << 4U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55421) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55422)) 
                       << 3U) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2718)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55869 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55616));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55871 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55616));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859 
        = ((8U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh71952)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_2_THE_ETC___05F_d822));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42370 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42117));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42372 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42117));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49022 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49024) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49025));
    vlTOPp->mkUnpipelined__DOT__x___05Fh55868 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55870) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55871));
    vlTOPp->mkUnpipelined__DOT__x___05Fh127721 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh127993 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 3U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3___05FETC___05Fq26 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh127453 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xdU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh128085 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh128087 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh127813 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xdU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh127815 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                                                      >> 0xdU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3___05FETC___05Fq25 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859) 
                   >> 0xcU) & (IData)(vlTOPp->put_a_in)))
            ? 0x1000U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh42369 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42371) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42372));
    vlTOPp->mkUnpipelined__DOT__y___05Fh48964 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49022) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49023));
    vlTOPp->mkUnpipelined__DOT__y___05Fh55810 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55868) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55869));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d887 
        = ((0x2000U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh127453) 
                        << 0xdU) ^ (0xffffe000U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3___05FETC___05Fq25) 
                                                   << 1U)))) 
           | ((0x1000U & ((0xfffff000U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859)) 
                          ^ ((IData)(vlTOPp->put_a_in) 
                             << 0xcU))) | ((0xffeU 
                                            & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859)) 
                                           | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3___05FETC___05Fq26)))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh127812 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3___05FETC___05Fq25) 
                                                   >> 0xcU) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh127815));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42311 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42369) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42370));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49217 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48964));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49219 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48964));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56063 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55810));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56065 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 5U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55810));
    vlTOPp->mkUnpipelined__DOT__y___05Fh127722 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh127812) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh127813));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2641 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42310) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42311)) 
            << 6U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42116) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42117)) 
                       << 5U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2640)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42564 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42311));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42566 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42311));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49216 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49218) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49219));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56062 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56064) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56065));
    vlTOPp->mkUnpipelined__DOT__x___05Fh128084 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh127722) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh128087));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42563 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42565) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42566));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49158 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49216) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49217));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56004 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56062) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56063));
    vlTOPp->mkUnpipelined__DOT__y___05Fh127994 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh128084) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh128085));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42505 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42563) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42564));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2799 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49157) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49158)) 
            << 6U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh48963) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh48964)) 
                       << 5U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2798)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49411 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49158));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49413 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49158));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2720 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56003) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56004)) 
            << 6U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh55809) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh55810)) 
                       << 5U) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2719)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56257 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56004));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56259 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 6U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56004));
    vlTOPp->mkUnpipelined__DOT__product___05Fh71537 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh127993) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh127994)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh127721) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh127722)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d887)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42758 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42505));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42760 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42505));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49410 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49412) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49413));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56256 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56258) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56259));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889 
        = ((0x10U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh71537)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_3_THE_ETC___05F_d859));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42757 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42759) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42760));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49352 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49410) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49411));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56198 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56256) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56257));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4___05FETC___05Fq28 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh131644 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889) 
                                                      >> 0xeU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh131912 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 2U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh132004 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889) 
                                                      >> 0xeU) 
                                                     & ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh132006 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889) 
                                                      >> 0xeU) 
                                                     | ((IData)(vlTOPp->put_a_in) 
                                                        >> 1U)));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4___05FETC___05Fq27 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889) 
                   >> 0xdU) & (IData)(vlTOPp->put_a_in)))
            ? 0x2000U : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh42699 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42757) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42758));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49605 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49352));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49607 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49352));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56451 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56198));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56453 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56198));
    vlTOPp->mkUnpipelined__DOT__x___05Fh132003 = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4___05FETC___05Fq27) 
                                                   >> 0xdU) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh132006));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2642 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42698) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42699)) 
            << 8U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42504) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42505)) 
                       << 7U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2641)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42952 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42699));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42954 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42699));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49604 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49606) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49607));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56450 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56452) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56453));
    vlTOPp->mkUnpipelined__DOT__y___05Fh131913 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh132003) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh132004));
    vlTOPp->mkUnpipelined__DOT__x___05Fh42951 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42953) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42954));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49546 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49604) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49605));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56392 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56450) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56451));
    vlTOPp->mkUnpipelined__DOT__product___05Fh71122 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh131912) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh131913)) 
            << 0xfU) | ((0x4000U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh131644) 
                                     << 0xeU) ^ (0xffffc000U 
                                                 & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4___05FETC___05Fq27) 
                                                    << 1U)))) 
                        | ((0x2000U & ((0xffffe000U 
                                        & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889)) 
                                       ^ ((IData)(vlTOPp->put_a_in) 
                                          << 0xdU))) 
                           | ((0x1ffeU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889)) 
                              | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4___05FETC___05Fq28))))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh42893 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42951) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42952));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2800 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49545) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49546)) 
            << 8U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49351) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49352)) 
                       << 7U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2799)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49799 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49546));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49801 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49546));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2721 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56391) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56392)) 
            << 8U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56197) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56198)) 
                       << 7U) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2720)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56645 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56392));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56647 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 8U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56392));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911 
        = ((0x20U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh71122)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_4_THE_ETC___05F_d889));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43146 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42893));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43148 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42893));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49798 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49800) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49801));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56644 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56646) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56647));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5___05FETC___05Fq29 
        = ((1U & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911) 
                   >> 0xeU) & (IData)(vlTOPp->put_a_in)))
            ? 0x4000U : 0U);
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5___05FETC___05Fq30 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh135830 = (1U 
                                                  & (((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911) 
                                                      >> 0xfU) 
                                                     ^ 
                                                     ((IData)(vlTOPp->put_a_in) 
                                                      >> 1U)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43145 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43147) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43148));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49740 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49798) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49799));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56586 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56644) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56645));
    vlTOPp->mkUnpipelined__DOT__product___05Fh70707 
        = ((0x8000U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh135830) 
                        << 0xfU) ^ (0xffff8000U & ((IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5___05FETC___05Fq29) 
                                                   << 1U)))) 
           | ((0x4000U & ((0xffffc000U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911)) 
                          ^ ((IData)(vlTOPp->put_a_in) 
                             << 0xeU))) | ((0x3ffeU 
                                            & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911)) 
                                           | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5___05FETC___05Fq30)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43087 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43145) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43146));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49993 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49740));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49995 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49740));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56839 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56586));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56841 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56586));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6_THE_ETC___05F_d926 
        = ((0x40U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
            ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh70707)
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_5_THE_ETC___05F_d911));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2643 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43086) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43087)) 
            << 0xaU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh42892) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh42893)) 
                         << 9U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2642)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43340 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43087));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43342 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43087));
    vlTOPp->mkUnpipelined__DOT__x___05Fh49992 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49994) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49995));
    vlTOPp->mkUnpipelined__DOT__x___05Fh56838 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56840) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56841));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6___05FETC___05Fq31 
        = ((1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6_THE_ETC___05F_d926))
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh43339 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43341) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43342));
    vlTOPp->mkUnpipelined__DOT__y___05Fh49934 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49992) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49993));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56780 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56838) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56839));
    vlTOPp->mkUnpipelined__DOT__product___05Fh70292 
        = ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6_THE_ETC___05F_d926)) 
                       ^ ((IData)(vlTOPp->put_a_in) 
                          << 0xfU))) | ((0x7ffeU & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6_THE_ETC___05F_d926)) 
                                        | (1U & (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6___05FETC___05Fq31))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43281 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43339) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43340));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2801 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49933) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49934)) 
            << 0xaU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh49739) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49740)) 
                         << 9U) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2800)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50187 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49934));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50189 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh49934));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2722 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56779) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56780)) 
            << 0xaU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56585) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56586)) 
                         << 9U) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2721)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57033 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56780));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57035 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56780));
    vlTOPp->mkUnpipelined__DOT__x___05Fh70119 = ((0x80U 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__IF_put_b_in_BIT_7_THEN_255_ELSE_0___05F_d2))
                                                  ? (IData)(vlTOPp->mkUnpipelined__DOT__product___05Fh70292)
                                                  : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT_6_THE_ETC___05F_d926));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43534 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43281));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43536 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43281));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50186 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50188) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50189));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57032 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57034) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57035));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh70119) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh70119));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43533 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43535) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43536));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50128 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50186) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50187));
    vlTOPp->mkUnpipelined__DOT__y___05Fh56974 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57032) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57033));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147780 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh148051 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x1fU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh148143 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147238 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147509 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh148145 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x1eU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146696 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146967 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146154 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146425 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147872 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145612 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145883 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147874 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x1dU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145070 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145341 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147601 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144528 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144799 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147603 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x1cU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143986 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144257 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147330 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143444 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143715 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147332 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x1bU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142902 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143173 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147059 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142360 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142631 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147061 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x1aU));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141818 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 8U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142089 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 9U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146788 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141276 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 6U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141547 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 7U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146790 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x19U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh140734 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 4U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141005 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 5U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146517 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__IF_SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_B_ETC___05Fq38 
        = ((1U & (vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                  ^ vlTOPp->put_c_in)) ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__x___05Fh140194 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 2U));
    vlTOPp->mkUnpipelined__DOT__x___05Fh140462 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      ^ vlTOPp->put_c_in) 
                                                     >> 3U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146519 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x18U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146246 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146248 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x17U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145975 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145977 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x16U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145704 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145706 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x15U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145433 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145435 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x14U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145162 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145164 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x13U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144891 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144893 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x12U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144620 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144622 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x11U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144349 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144351 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0x10U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144078 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144080 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0xfU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143807 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143809 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0xeU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143536 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143538 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0xdU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143265 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143267 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0xcU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142994 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142996 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0xbU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142723 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142725 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 0xaU));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142452 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 9U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142454 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 9U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142181 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 8U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142183 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 8U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141910 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 7U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141912 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 7U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141639 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 6U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141641 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 6U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141368 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 5U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141370 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 5U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141097 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 4U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141099 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 4U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh140826 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 3U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh140828 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 3U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh140554 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      & vlTOPp->put_c_in) 
                                                     >> 2U));
    vlTOPp->mkUnpipelined__DOT__y___05Fh140556 = (1U 
                                                  & ((vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                                      | vlTOPp->put_c_in) 
                                                     >> 2U));
    vlTOPp->mkUnpipelined__DOT__IF_SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_B_ETC___05Fq32 
        = ((2U & (vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                  & vlTOPp->put_c_in)) ? 2U : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh43475 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43533) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43534));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50381 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50128));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50383 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50128));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57227 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56974));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57229 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56974));
    vlTOPp->mkUnpipelined__DOT__x___05Fh140553 = ((vlTOPp->mkUnpipelined__DOT__IF_SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_B_ETC___05Fq32 
                                                   >> 1U) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140556));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2644 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43474) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43475)) 
            << 0xcU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43280) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43281)) 
                         << 0xbU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2643)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43728 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43475));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43730 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43475));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50380 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50382) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50383));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57226 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57228) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57229));
    vlTOPp->mkUnpipelined__DOT__y___05Fh140463 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh140553) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140554));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43727 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43729) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43730));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50322 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50380) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50381));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57168 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57226) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57227));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1184 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh140462) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140463)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh140194) 
                              << 2U) ^ (0xfffffffcU 
                                        & (vlTOPp->mkUnpipelined__DOT__IF_SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_B_ETC___05Fq32 
                                           << 1U)))) 
                      | ((2U & (vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d935 
                                ^ vlTOPp->put_c_in)) 
                         | (1U & vlTOPp->mkUnpipelined__DOT__IF_SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_B_ETC___05Fq38))));
    vlTOPp->mkUnpipelined__DOT__x___05Fh140825 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140463) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140828));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43669 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43727) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43728));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2802 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50321) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50322)) 
            << 0xcU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50127) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50128)) 
                         << 0xbU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2801)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50575 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50322));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50577 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50322));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2723 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57167) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57168)) 
            << 0xcU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh56973) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh56974)) 
                         << 0xbU) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2722)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57421 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57168));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57423 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57168));
    vlTOPp->mkUnpipelined__DOT__y___05Fh140735 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh140825) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140826));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43922 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43669));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43924 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43669));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50574 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50576) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50577));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57420 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57422) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57423));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141096 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140735) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141099));
    vlTOPp->mkUnpipelined__DOT__x___05Fh43921 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43923) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43924));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50516 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50574) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50575));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57362 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57420) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57421));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141006 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141096) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141097));
    vlTOPp->mkUnpipelined__DOT__y___05Fh43863 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43921) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43922));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50769 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50516));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50771 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50516));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57615 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57362));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57617 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57362));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1185 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141005) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141006)) 
            << 5U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh140734) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh140735)) 
                       << 4U) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1184)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141367 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141006) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141370));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2645 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43862) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43863)) 
            << 0xeU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh43668) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43669)) 
                         << 0xdU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2644)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44116 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43863));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44118 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh43863));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50768 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50770) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50771));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57614 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57616) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57617));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141277 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141367) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141368));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44115 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44117) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44118));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50710 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50768) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50769));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57556 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57614) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57615));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141638 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141277) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141641));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44057 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44115) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44116));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2803 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50709) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50710)) 
            << 0xeU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50515) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50516)) 
                         << 0xdU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2802)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50963 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50710));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50965 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50710));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2724 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57555) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57556)) 
            << 0xeU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57361) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57362)) 
                         << 0xdU) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2723)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57809 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57556));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57811 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57556));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141548 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141638) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141639));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44310 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44057));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44312 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44057));
    vlTOPp->mkUnpipelined__DOT__x___05Fh50962 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50964) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50965));
    vlTOPp->mkUnpipelined__DOT__x___05Fh57808 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57810) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57811));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1186 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141547) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141548)) 
            << 7U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141276) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141277)) 
                       << 6U) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1185)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh141909 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141548) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141912));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44309 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44311) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44312));
    vlTOPp->mkUnpipelined__DOT__y___05Fh50904 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50962) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50963));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57750 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57808) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57809));
    vlTOPp->mkUnpipelined__DOT__y___05Fh141819 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141909) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141910));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44251 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44309) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44310));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51157 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50904));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51159 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50904));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58003 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57750));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58005 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57750));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142180 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141819) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142183));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2646 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44250) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44251)) 
            << 0x10U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44056) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44057)) 
                          << 0xfU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2645)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44504 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44251));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44506 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44251));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51156 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51158) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51159));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58002 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58004) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58005));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142090 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142180) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142181));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44503 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44505) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44506));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51098 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51156) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51157));
    vlTOPp->mkUnpipelined__DOT__y___05Fh57944 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58002) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58003));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1187 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142089) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142090)) 
            << 9U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh141818) 
                        ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh141819)) 
                       << 8U) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1186)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142451 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142090) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142454));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44445 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44503) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44504));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2804 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51097) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51098)) 
            << 0x10U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh50903) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh50904)) 
                          << 0xfU) | (IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2803)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51351 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51098));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51353 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51098));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2725 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57943) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57944)) 
            << 0x10U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh57749) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57750)) 
                          << 0xfU) | (IData)(vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2724)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58197 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57944));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58199 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh57944));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142361 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142451) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142452));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44698 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44445));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44700 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44445));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51350 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51352) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51353));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58196 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58198) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58199));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142722 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142361) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142725));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44697 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44699) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44700));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51292 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51350) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51351));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58138 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58196) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58197));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142632 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142722) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142723));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44639 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44697) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44698));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51545 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51292));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51547 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51292));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58391 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58138));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58393 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58138));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1188 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142631) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142632)) 
            << 0xbU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142360) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142361)) 
                         << 0xaU) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1187)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh142993 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142632) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142996));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2647 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44638) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44639)) 
            << 0x12U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44444) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44445)) 
                          << 0x11U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2646));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44892 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44639));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44894 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44639));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51544 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51546) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51547));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58390 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58392) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58393));
    vlTOPp->mkUnpipelined__DOT__y___05Fh142903 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142993) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142994));
    vlTOPp->mkUnpipelined__DOT__x___05Fh44891 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44893) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44894));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51486 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51544) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51545));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58332 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58390) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58391));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143264 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142903) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143267));
    vlTOPp->mkUnpipelined__DOT__y___05Fh44833 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44891) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44892));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2805 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51485) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51486)) 
            << 0x12U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51291) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51292)) 
                          << 0x11U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2804));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51739 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51486));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51741 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51486));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2726 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58331) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58332)) 
            << 0x12U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58137) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58138)) 
                          << 0x11U) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2725));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58585 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58332));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58587 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58332));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143174 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143264) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143265));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45086 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44833));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45088 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44833));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51738 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51740) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51741));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58584 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58586) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58587));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1189 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143173) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143174)) 
            << 0xdU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh142902) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh142903)) 
                         << 0xcU) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1188)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143535 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143174) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143538));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45085 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45087) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45088));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51680 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51738) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51739));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58526 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58584) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58585));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143445 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143535) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143536));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45027 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45085) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45086));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51933 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51680));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51935 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51680));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58779 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58526));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58781 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58526));
    vlTOPp->mkUnpipelined__DOT__x___05Fh143806 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143445) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143809));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2648 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45026) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45027)) 
            << 0x14U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh44832) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh44833)) 
                          << 0x13U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2647));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45280 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45027));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45282 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45027));
    vlTOPp->mkUnpipelined__DOT__x___05Fh51932 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51934) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51935));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58778 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58780) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58781));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143716 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143806) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143807));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45279 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45281) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45282));
    vlTOPp->mkUnpipelined__DOT__y___05Fh51874 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51932) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51933));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58720 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58778) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58779));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1190 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143715) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143716)) 
            << 0xfU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143444) 
                          ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143445)) 
                         << 0xeU) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1189)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144077 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143716) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144080));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45221 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45279) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45280));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2806 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51873) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51874)) 
            << 0x14U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh51679) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51680)) 
                          << 0x13U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2805));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52127 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51874));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52129 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh51874));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2727 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58719) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58720)) 
            << 0x14U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58525) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58526)) 
                          << 0x13U) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2726));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58973 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58720));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58975 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58720));
    vlTOPp->mkUnpipelined__DOT__y___05Fh143987 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144077) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144078));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45474 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45221));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45476 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45221));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52126 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52128) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52129));
    vlTOPp->mkUnpipelined__DOT__x___05Fh58972 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58974) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58975));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144348 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143987) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144351));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45473 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45475) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45476));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52068 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52126) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52127));
    vlTOPp->mkUnpipelined__DOT__y___05Fh58914 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58972) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58973));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144258 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144348) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144349));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45415 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45473) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45474));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52321 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52068));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52323 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52068));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59167 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58914));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59169 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58914));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1191 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144257) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144258)) 
            << 0x11U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh143986) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh143987)) 
                          << 0x10U) | (IData)(vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1190)));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144619 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144258) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144622));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2649 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45414) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45415)) 
            << 0x16U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45220) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45221)) 
                          << 0x15U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2648));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45668 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45415));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45670 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45415));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52320 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52322) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52323));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59166 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59168) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59169));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144529 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144619) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144620));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45667 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45669) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45670));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52262 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52320) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52321));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59108 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59166) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59167));
    vlTOPp->mkUnpipelined__DOT__x___05Fh144890 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144529) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144893));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45609 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45667) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45668));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2807 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52261) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52262)) 
            << 0x16U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52067) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52068)) 
                          << 0x15U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2806));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52515 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52262));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52517 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52262));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2728 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59107) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59108)) 
            << 0x16U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh58913) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh58914)) 
                          << 0x15U) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2727));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59361 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59108));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59363 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59108));
    vlTOPp->mkUnpipelined__DOT__y___05Fh144800 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144890) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144891));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45862 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45609));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45864 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45609));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52514 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52516) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52517));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59360 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59362) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59363));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1192 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144799) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144800)) 
            << 0x13U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh144528) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144529)) 
                          << 0x12U) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1191));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145161 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh144800) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145164));
    vlTOPp->mkUnpipelined__DOT__x___05Fh45861 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45863) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45864));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52456 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52514) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52515));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59302 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59360) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59361));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145071 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145161) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145162));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45803 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45861) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45862));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52709 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52456));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52711 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52456));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59555 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59302));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59557 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59302));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145432 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145071) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145435));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2650 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45802) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45803)) 
            << 0x18U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45608) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45609)) 
                          << 0x17U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2649));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46056 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45803));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46058 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45803));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52708 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52710) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52711));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59554 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59556) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59557));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145342 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145432) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145433));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46055 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46057) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46058));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52650 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52708) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52709));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59496 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59554) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59555));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1193 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145341) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145342)) 
            << 0x15U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145070) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145071)) 
                          << 0x14U) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1192));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145703 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145342) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145706));
    vlTOPp->mkUnpipelined__DOT__y___05Fh45997 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46055) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46056));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2808 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52649) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52650)) 
            << 0x18U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52455) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52456)) 
                          << 0x17U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2807));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52903 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52650));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52905 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52650));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2729 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59495) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59496)) 
            << 0x18U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59301) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59302)) 
                          << 0x17U) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2728));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59749 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59496));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59751 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59496));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145613 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145703) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145704));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46250 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45997));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46252 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45997));
    vlTOPp->mkUnpipelined__DOT__x___05Fh52902 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52904) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52905));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59748 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59750) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59751));
    vlTOPp->mkUnpipelined__DOT__x___05Fh145974 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145613) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145977));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46249 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46251) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46252));
    vlTOPp->mkUnpipelined__DOT__y___05Fh52844 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52902) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52903));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59690 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59748) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59749));
    vlTOPp->mkUnpipelined__DOT__y___05Fh145884 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145974) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145975));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46191 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46249) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46250));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53097 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52844));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53099 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52844));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59943 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59690));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59945 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59690));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1194 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145883) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145884)) 
            << 0x17U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh145612) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145613)) 
                          << 0x16U) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1193));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146245 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh145884) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146248));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2651 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46190) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46191)) 
            << 0x1aU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh45996) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh45997)) 
                          << 0x19U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2650));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46444 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46191));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46446 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46191));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53096 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53098) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53099));
    vlTOPp->mkUnpipelined__DOT__x___05Fh59942 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59944) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59945));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146155 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146245) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146246));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46443 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46445) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46446));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53038 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53096) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53097));
    vlTOPp->mkUnpipelined__DOT__y___05Fh59884 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59942) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59943));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146516 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146155) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146519));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46385 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46443) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46444));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2809 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53037) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53038)) 
            << 0x1aU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh52843) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh52844)) 
                          << 0x19U) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2808));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53291 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53038));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53293 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53038));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2730 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59883) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59884)) 
            << 0x1aU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh59689) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59690)) 
                          << 0x19U) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2729));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60137 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59884));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60139 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh59884));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146426 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146516) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146517));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46638 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46385));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46640 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46385));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53290 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53292) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53293));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60136 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60138) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60139));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1195 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146425) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146426)) 
            << 0x19U) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146154) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146155)) 
                          << 0x18U) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1194));
    vlTOPp->mkUnpipelined__DOT__x___05Fh146787 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146426) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146790));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46637 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46639) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46640));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53232 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53290) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53291));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60078 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60136) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60137));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146697 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146787) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146788));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46579 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46637) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46638));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53485 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53232));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53487 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53232));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60331 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60078));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60333 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60078));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147058 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146697) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147061));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2652 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46578) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46579)) 
            << 0x1cU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46384) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46385)) 
                          << 0x1bU) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2651));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46832 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46579));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46834 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46579));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53484 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53486) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53487));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60330 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60332) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60333));
    vlTOPp->mkUnpipelined__DOT__y___05Fh146968 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147058) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147059));
    vlTOPp->mkUnpipelined__DOT__x___05Fh46831 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46833) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46834));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53426 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53484) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53485));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60272 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60330) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60331));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1196 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146967) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146968)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh146696) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146697)) 
                          << 0x1aU) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1195));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147329 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh146968) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147332));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46773 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46831) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46832));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2810 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53425) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53426)) 
            << 0x1cU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53231) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53232)) 
                          << 0x1bU) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2809));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53679 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53426));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53681 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53426));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2731 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60271) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60272)) 
            << 0x1cU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60077) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60078)) 
                          << 0x1bU) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2730));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60525 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60272));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60527 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60272));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147239 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147329) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147330));
    vlTOPp->mkUnpipelined__DOT__y___05Fh47026 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46773));
    vlTOPp->mkUnpipelined__DOT__y___05Fh47028 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46773));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53678 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53680) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53681));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60524 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60526) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60527));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147600 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147239) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147603));
    vlTOPp->mkUnpipelined__DOT__x___05Fh47025 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh47027) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh47028));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53620 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53678) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53679));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60466 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60524) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60525));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147510 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147600) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147601));
    vlTOPp->mkUnpipelined__DOT__y___05Fh46967 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh47025) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh47026));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53873 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53620));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53875 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53620));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60719 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60466));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60721 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60466));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1197 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147509) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147510)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147238) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147239)) 
                          << 0x1cU) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1196));
    vlTOPp->mkUnpipelined__DOT__x___05Fh147871 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147510) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147874));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2653 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46966) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46967)) 
            << 0x1eU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh46772) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46773)) 
                          << 0x1dU) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2652));
    vlTOPp->mkUnpipelined__DOT__y___05Fh47220 = ((vlTOPp->mkUnpipelined__DOT__mant_y___05Fh66 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46967));
    vlTOPp->mkUnpipelined__DOT__y___05Fh47222 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh46967));
    vlTOPp->mkUnpipelined__DOT__x___05Fh53872 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53874) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53875));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60718 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60720) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60721));
    vlTOPp->mkUnpipelined__DOT__y___05Fh147781 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147871) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147872));
    vlTOPp->mkUnpipelined__DOT__x___05Fh47219 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh47221) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh47222));
    vlTOPp->mkUnpipelined__DOT__y___05Fh53814 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53872) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53873));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60660 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60718) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60719));
    vlTOPp->mkUnpipelined__DOT__x___05Fh148142 = ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147781) 
                                                  & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh148145));
    vlTOPp->mkUnpipelined__DOT__y___05Fh47161 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh47219) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh47220));
    vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2811 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53813) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53814)) 
            << 0x1eU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh53619) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53620)) 
                          << 0x1dU) | vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2810));
    vlTOPp->mkUnpipelined__DOT__y___05Fh54067 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53814));
    vlTOPp->mkUnpipelined__DOT__y___05Fh54069 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh53814));
    vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2732 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60659) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60660)) 
            << 0x1eU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60465) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60466)) 
                          << 0x1dU) | vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2731));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60913 = ((vlTOPp->mkUnpipelined__DOT__mant_x___05Fh65 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60660));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60915 = ((vlTOPp->mkUnpipelined__DOT__INV_mant_y6___05Fq34 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60660));
    vlTOPp->mkUnpipelined__DOT__y___05Fh148052 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh148142) 
                                                  | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh148143));
    vlTOPp->mkUnpipelined__DOT__x___05Fh54066 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh54068) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh54069));
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2813 
        = ((IData)(vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_20_ETC___05F_d1202)
            ? vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2653
            : ((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d1978)
                ? vlTOPp->mkUnpipelined__DOT__INV_IF_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2732
                : vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d2811));
    vlTOPp->mkUnpipelined__DOT__x___05Fh60912 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60914) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60915));
    vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1198 
        = ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh148051) 
             ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh148052)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh147780) 
                           ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh147781)) 
                          << 0x1eU) | vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1197));
    vlTOPp->mkUnpipelined__DOT__y___05Fh54008 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh54066) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh54067));
    vlTOPp->mkUnpipelined__DOT__y___05Fh60854 = ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60912) 
                                                 | (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60913));
    vlTOPp->mkUnpipelined__DOT__IF_IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_TH_ETC___05F_d2541 
        = ((IData)(vlTOPp->mkUnpipelined__DOT__IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_THEN___05FETC___05F_d1978)
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh60853) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh60854))
            : ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh54007) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh54008)));
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2542 
        = ((IData)(vlTOPp->mkUnpipelined__DOT__put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_20_ETC___05F_d1202)
            ? ((IData)(vlTOPp->mkUnpipelined__DOT__x___05Fh47160) 
               ^ (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh47161))
            : (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_NOT_0b0_CONCAT_IF_IF_put_b_in_BIT_6_1_TH_ETC___05F_d2541));
    if (vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2542) {
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05Fq40 
            = vlTOPp->mkUnpipelined__DOT__exp_x___05F_1___05Fh61045;
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
            = (((IData)(vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2542) 
                << 0x1eU) | (0x3fffffffU & (vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2813 
                                            >> 1U)));
    } else {
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05Fq40 
            = vlTOPp->mkUnpipelined__DOT__exp_x___05Fh63;
        vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
            = vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2813;
    }
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT___05FETC___05Fq39 
        = ((1U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816)
            ? 1U : 0U);
    vlTOPp->mkUnpipelined__DOT__y___05Fh65039 = (1U 
                                                 & ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                     >> 8U) 
                                                    & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                       >> 7U)));
    vlTOPp->mkUnpipelined__DOT__y___05Fh65227 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 9U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65039));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2894 
        = ((0x400U & ((0xfffffc00U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                      ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65227) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65039) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                            ^ (0xffffff00U 
                                               & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  << 1U)))) 
                                          | ((0x80U 
                                              & ((~ 
                                                  (vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                   >> 7U)) 
                                                 << 7U)) 
                                             | ((0x7eU 
                                                 & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                | (1U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT___05FETC___05Fq39))))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh65415 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0xaU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65227));
    vlTOPp->mkUnpipelined__DOT__y___05Fh65603 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0xbU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65415));
    vlTOPp->mkUnpipelined__DOT__y___05Fh65791 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0xcU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65603));
    vlTOPp->mkUnpipelined__DOT__y___05Fh65979 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0xdU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65791));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2896 
        = ((0x4000U & ((0xffffc000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                       ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65979) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65791) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65603) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65415) 
                                                   << 0xbU))) 
                                              | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2894)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh66167 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0xeU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh65979));
    vlTOPp->mkUnpipelined__DOT__y___05Fh66355 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0xfU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66167));
    vlTOPp->mkUnpipelined__DOT__y___05Fh66543 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x10U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66355));
    vlTOPp->mkUnpipelined__DOT__y___05Fh66731 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x11U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66543));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2898 
        = ((0x40000U & ((0xfffc0000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                        ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66731) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                              ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66543) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66355) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66167) 
                                                     << 0xfU))) 
                                                | (IData)(vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2896)))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh66919 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x12U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66731));
    vlTOPp->mkUnpipelined__DOT__y___05Fh67107 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x13U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66919));
    vlTOPp->mkUnpipelined__DOT__y___05Fh67295 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x14U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67107));
    vlTOPp->mkUnpipelined__DOT__y___05Fh67483 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x15U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67295));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2900 
        = ((0x400000U & ((0xffc00000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                         ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67483) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                               ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67295) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67107) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh66919) 
                                                      << 0x13U))) 
                                                 | vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2898))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh67671 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x16U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67483));
    vlTOPp->mkUnpipelined__DOT__y___05Fh67859 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x17U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67671));
    vlTOPp->mkUnpipelined__DOT__y___05Fh68047 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x18U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67859));
    vlTOPp->mkUnpipelined__DOT__y___05Fh68235 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x19U) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68047));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2902 
        = ((0x4000000U & ((0xfc000000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                          ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68235) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68047) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67859) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh67671) 
                                                       << 0x17U))) 
                                                  | vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2900))));
    vlTOPp->mkUnpipelined__DOT__y___05Fh68423 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x1aU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68235));
    vlTOPp->mkUnpipelined__DOT__y___05Fh68611 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x1bU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68423));
    vlTOPp->mkUnpipelined__DOT__y___05Fh68799 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x1cU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68611));
    vlTOPp->mkUnpipelined__DOT__y___05Fh68987 = ((vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816 
                                                  >> 0x1dU) 
                                                 & (IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68799));
    vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2904 
        = ((0x40000000U & ((0xc0000000U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                           ^ ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68987) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68799) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68611) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkUnpipelined__DOT__y___05Fh68423) 
                                                        << 0x1bU))) 
                                                   | vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2902))));
    vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT___05FETC___05Fq41 
        = ((0x40U & vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816)
            ? vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2904
            : vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05F_d2816);
    vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2907 
        = (((IData)(vlTOPp->mkUnpipelined__DOT___theResult___05F___05F_3_fst___05Fh40297) 
            << 0x1fU) | ((0x7f800000U & (vlTOPp->mkUnpipelined__DOT__IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15___05FETC___05Fq40 
                                         << 0x17U)) 
                         | (0x7fffffU & (vlTOPp->mkUnpipelined__DOT__IF_IF_IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT___05FETC___05Fq41 
                                         >> 7U))));
    vlTOPp->mkUnpipelined__DOT__put = ((IData)(vlTOPp->put_s1_or_s2_in)
                                        ? vlTOPp->mkUnpipelined__DOT__SEXT_IF_IF_put_b_in_BIT_7_THEN_255_ELSE_0_BIT___05FETC___05F_d1198
                                        : vlTOPp->mkUnpipelined__DOT__IF_put_a_in_BIT_15_199_XOR_put_b_in_BIT_15_200_ETC___05F_d2907);
    vlTOPp->put = vlTOPp->mkUnpipelined__DOT__put;
}
