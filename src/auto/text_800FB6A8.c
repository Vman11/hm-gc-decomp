/* Functions from 0x800FB6A8 to 0x800FB6D8, found by decomp-toolkit. */
#include "common.h"

void fn_800FB6A8(void *arg0, s32 arg1, s16 arg2) {
    (*(s16 **)((u8 *)arg0 + 0x10))[*(s32 *)((u8 *)arg0 + 4) + arg1] = arg2;
}

u16 fn_800FB6C0(void *arg0, s32 arg1) {
    return (*(u16 **)((u8 *)arg0 + 0x10))[*(s32 *)((u8 *)arg0 + 4) + arg1];
}
