/* Functions from 0x8014FE14 to 0x8014FE3C, found by decomp-toolkit. */
#include "common.h"

f32 fn_8014FE14(void *arg0, s32 arg1, s32 arg2) {
    arg2 *= 0x10;
    arg1 *= 4;
    arg1 = arg2 + arg1;
    return *(f32 *)((u8 *)arg0 + arg1);
}

void fn_8014FE28(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    arg2 *= 0x10;
    arg1 *= 4;
    *(f32 *)((u8 *)arg0 + (arg2 + arg1)) = farg0;
}

