/* Functions from 0x8020866C to 0x802086CC, found by decomp-toolkit. */
#include "common.h"

void fn_8020866C(s32* arg0) {
    arg0[2] &= ~8;
    arg0[0] = 0;
    arg0[5] = 0;
}

void fn_80208688(s32* arg0, s32 arg1, s32 arg2) {
    if (arg0[2] & 4) {
        arg0[0] = 0;
        arg0[1] = 0;
        arg0[2] = 0;
        arg0[3] = 0;
        arg0[4] = 0;
        arg0[5] = 0;
    }
    arg0[1] = arg1;
    arg0[2] = 4;
    arg0[3] = 0;
    arg0[4] = arg2;
}

