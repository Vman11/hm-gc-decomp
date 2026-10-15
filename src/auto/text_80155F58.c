/* Functions from 0x80155F58 to 0x80155F9C, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035ACC8;

void fn_80155F58(s32 arg0) {
    lbl_8035ACC8 = arg0;
}

s32 fn_80155F60(u32 *arg0) {
    u32 flags = arg0[0];
    s32 result = 1;

    if (flags & 0x800) {
        result = 2;
    }
    if (flags & 0x2000) {
        result += 1;
    }
    if (flags & 0x4000) {
        result += 1;
    }
    result += arg0[3];
    return result;
}

