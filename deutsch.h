#include "keymap.h"

// Alt gr
#define ALGR(kc) RALT(kc)
#define DE_ALGR KC_RALT

// normal characters
#define DE_Z KC_Y // Z -> Y
#define DE_Y KC_Z // Y -> Z

#define DE_A KC_A // A
#define DE_B KC_B // B
#define DE_C KC_C // C
#define DE_D KC_D // D
#define DE_E KC_E // E 
#define DE_F KC_F // F
#define DE_G KC_G // G
#define DE_H KC_H // H
#define DE_I KC_I // I
#define DE_J KC_J // J
#define DE_K KC_K // K
#define DE_L KC_L // L
#define DE_M KC_M // M
#define DE_N KC_N // N
#define DE_O KC_O // O
#define DE_P KC_P // P
#define DE_Q KC_Q // Q
#define DE_R KC_R // R
#define DE_S KC_S // S
#define DE_T KC_T // T
#define DE_U KC_U // U
#define DE_V KC_V // V
#define DE_W KC_W // W
#define DE_X KC_X // X

#define DE_0 KC_0 // 0
#define DE_1 KC_1 // 1
#define DE_2 KC_2 // 2
#define DE_3 KC_3 // 3
#define DE_4 KC_4 // 4
#define DE_5 KC_5 // 5
#define DE_6 KC_6 // 6
#define DE_7 KC_7 // 7
#define DE_8 KC_8 // 8
#define DE_9 KC_9 // 9

#define DE_DOT KC_DOT // .
#define DE_COMM KC_COMM // ,

#define DE_SS KC_MINS // ß
#define DE_AE KC_QUOT // Ä
#define DE_UE KC_LBRC // Ü
#define DE_OE KC_SCLN // Ö

#define DE_CIRC KC_GRAVE // accent circumflex ^ oand ring °
#define DE_ACUT KC_EQL // accent acute ´ and grave `
#define DE_PLUS KC_RBRC // + and * and ~
#define DE_HASH KC_BSLS // # and '
#define DE_LESS KC_NUBS // < and > and |
#define DE_MINS KC_SLSH // - and _

// shifted characters
#define DE_RING LSFT(DE_CIRC) // °
#define DE_EXLM LSFT(KC_1) // !
#define DE_DQOT LSFT(KC_2) // "
#define DE_PARA LSFT(KC_3) // §
#define DE_DLR  LSFT(KC_4) // $
#define DE_PERC LSFT(KC_5) // %
#define DE_AMPR LSFT(KC_6) // &
#define DE_SLSH LSFT(KC_7) // /
#define DE_LPRN LSFT(KC_8) // (
#define DE_RPRN LSFT(KC_9) // )
#define DE_EQL  LSFT(KC_0) // =
#define DE_QST  LSFT(DE_SS) // ?
#define DE_GRV  LSFT(DE_ACUT) // `
#define DE_ASTR LSFT(DE_PLUS) // *
#define DE_QUOT LSFT(DE_HASH) // '
#define DE_MORE LSFT(DE_LESS) // >
#define DE_COLN LSFT(KC_DOT) // :
#define DE_SCLN LSFT(KC_COMM) // ;
#define DE_UNDS LSFT(DE_MINS) // _

// Alt Gr-ed characters
#define DE_SQ2 ALGR(KC_2) // ²
#define DE_SQ3 ALGR(KC_3) // ³
#define DE_LCBR ALGR(KC_7) // {
#define DE_LBRC ALGR(KC_8) // [
#define DE_RBRC ALGR(KC_9) // ]
#define DE_RCBR ALGR(KC_0) // }
#define DE_BSLS ALGR(KC_MINS) // backslash
#define DE_AT  ALGR(KC_Q) // @
#define DE_EURO ALGR(KC_E) // €
#define DE_TILD ALGR(DE_PLUS) // ~
#define DE_PIPE ALGR(DE_LESS) // |
