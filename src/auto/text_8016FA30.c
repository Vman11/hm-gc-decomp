/* Functions from 0x8016FA30 to 0x8016FA80, found by decomp-toolkit. */
#include "common.h"

void fn_8016FA30(struct A { u8 pad[0x50]; s32 value; } *arg0, s32 *arg1, s32 arg2) {
    s32 delta = arg0->value * arg2;
    arg1[0] += delta;
    arg1[2] += delta;
    arg1[4] += delta;
    arg1[6] += delta;
    arg1[8] += delta;
}

s32 fn_8016FA78(void) {
    return 0;
}
