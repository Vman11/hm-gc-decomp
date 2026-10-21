/* Functions from 0x8026848C to 0x80268504, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_8026848C(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 13: return 1;
    case 12: return 2;
    case 10:
    case 11:
    case 14: return 3;
    case 1:
    case 5:
    case 6: return 4;
    case 2:
    case 3: return 5;
    case 0:
    case 4: return 6;
    case 9: return 7;
    case 8: return 8;
    case 7: return 9;
    case 15: return 20;
    default: return 0;
    }
}

} /* extern "C" */
