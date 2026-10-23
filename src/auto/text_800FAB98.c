/* Functions from 0x800FAB98 to 0x800FADA8, found by decomp-toolkit. */
#include "common.h"

extern char lbl_8029CB28[];

void fn_800FAD08(void *arg0, void *arg1) {
    s32 i;
    s8 *src = (s8 *)arg0 + 0x14;
    s8 *dst = (s8 *)arg1;
    for (i = 0; i < 8; i++) {
        dst[i] = src[i];
        if (src[i] == 0) {
            break;
        }
    }
}

#pragma readonly_strings on
char* fn_800FAB98(void* arg0, s32 arg1) {
    switch (arg1) {
    case 0: return "syntax error";
    case 1: return "parse error";
    case 2: return "numeric too long";
    case 3: return "expected string";
    case 4: return "expected real";
    case 5: return "expected int";
    case 6: return "expected left curly";
    case 7: return "expected right curly";
    case 8: return "expected left bracket";
    case 9: return "expected right bracket";
    case 10: return "expected comma";
    case 11: return "expected semi-colon";
    case 12: return "expected colon";
    case 13: return "expected exclamation";
    case 14: return "expected percent";
    case 15: return "expected caret";
    case 16: return "expected ampersand";
    case 17: return "expected times";
    case 18: return "expected left parenthesis";
    case 19: return "expected righ parenthesis";
    case 20: return "expected minus";
    case 21: return "expected plus";
    case 22: return "expected divide";
    case 23: return "expected equals";
    case 24: return "expected less than";
    case 25: return "expected greater than";
    case 26: return "expected or sign";
    case 27: return "expected question mark";
    case 28: return "expected at sign";
    case 29: return "expected at tilde";
    case 30: return "expected keyword";
    case 31: return "expected string or left curly";
    case 32: return "expected EOF";
    case 33: return "invalid keyword";
    case 34: return "invalid string";
    case 35: return "invalid value";
    case 36: return "duplicate name";
    case 37: return "unknown name";
    case 38: return "unsupported";
    case 39: return "unexpected keyword";
    default: return "unknown error";
    }
}
