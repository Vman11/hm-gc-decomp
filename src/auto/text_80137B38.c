/* Functions from 0x80137B38 to 0x80137BC0, found by decomp-toolkit. */
#include "common.h"

s32 fn_80137B38(void) {
    return 0;
}

void fn_80137B40(void *arg0) {
    u8 *p = arg0;
    *(u32 *)(p + 8) = 0;
    *(u16 *)(p + 0xC) = 0;
    p[0xF] = 0;
    p[0x10] = 0;
    p[0xE] = 0;
    p[0x11] = 0;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0xFF;
    p[4] = 0x7F;
    p[5] = 0x7F;
    p[6] = 0;
    p[7] = 0x7F;
}

extern u16 lbl_80364194;
void fn_80137B88(void *arg0, s32 arg1, s32 arg2, u8 arg3, s8 arg4) {
    u8 *p = arg0;
    *(s32 *)(p + 8) = arg1;
    if (arg2 != 0) {
        *(u16 *)(p + 0xC) |= lbl_80364194;
    }
    if (arg3 < 1U) {
        arg3 = 1;
    }
    p[0xF] = arg3;
    p[0x10] = arg3;
    p[0xE] = arg4;
}

