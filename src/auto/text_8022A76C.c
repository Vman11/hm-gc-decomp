/* Functions from 0x8022A76C to 0x8022A7A8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B65C;
s32 fn_8022A76C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 fn_8022A784(void *arg0) { return *(s32 *)((u8 *)arg0 + 0xC); }

s32 fn_8022A78C(void) {
    return lbl_8035B65C;
}

s32 fn_8022A794(u32 *arg0) {
    return ((u32) *arg0 >> 9U) & 1;
}

s32 fn_8022A7A0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

