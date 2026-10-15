/* Functions from 0x800F85DC to 0x800F8604, found by decomp-toolkit. */
#include "common.h"

void fn_800F85DC(s32 (**arg0)[3], s32 arg1, s32 arg2) {
    (*arg0)[arg1][2] = arg2;
}

s32 fn_800F85F0(s32 (**arg0)[3], s32 arg1) {
    return (*arg0)[arg1][2];
}

