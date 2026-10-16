/* Functions from 0x8020B114 to 0x8020B224, found by decomp-toolkit. */
#include "common.h"

s32 fn_8020B114(s32 arg0) {
    switch (arg0) {
    case 0:
    case -14:
        return 0;
    case -1:
        return 7;
    case -2:
        return 0x12;
    case -3:
    case -4:
        return 1;
    case -8:
    case -9:
        return 0xE;
    case -7:
    case -10:
        return 9;
    case -6:
        return 4;
    case -13:
        return 5;
    case -11:
        return 8;
    case -5:
        return 0x10;
    case -128:
    default:
        return 0xB;
    }
}

s32 fn_8020B1E0(s32 arg0) {
    switch (arg0) {
    case 0:
    case 10:
        return 0;
    case -1:
    case 4:
    case 5:
    case 6:
    case 11:
        return 7;
    case 1:
    case 2:
        return 7;
    default:
        return 3;
    }
}
