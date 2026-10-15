/* Functions from 0x80214834 to 0x8021488C, found by decomp-toolkit. */
#include "common.h"

void fn_80214834(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 *p = (s32 *)(arg0 + arg1 * 0x14);
    p[0x11C / 4] = arg3;
    p[0x120 / 4] = arg4;
    p[0x124 / 4] = arg5;
    p[0x128 / 4] = arg6;
    p[0x12C / 4] = arg2;
}

void fn_80214854(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0[0x108 / 4] = arg1;
    arg0[0x10C / 4] = arg2;
    arg0[0x110 / 4] = arg3;
    arg0[0x114 / 4] = arg4;
}

void fn_80214884(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
