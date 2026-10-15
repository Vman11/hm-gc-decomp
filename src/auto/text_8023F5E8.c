/* Functions from 0x8023F5E8 to 0x8023F5FC, found by decomp-toolkit. */
#include "common.h"

void fn_8023F5E8(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0xE0) + 0x18C) = arg1;
}

s32 fn_8023F5F4(void) {
    return 1;
}
