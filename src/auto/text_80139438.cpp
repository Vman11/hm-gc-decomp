/* Functions from 0x80139438 to 0x80139500, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80139438(u8* arg0, s32* arg1, s32 arg2) {
    u32 i;

    arg1[0] += arg1[1] * arg2;
    if (*(u32*)(arg0 + 0x10) & 0x200) {
        arg1[2] += arg1[3] * arg2;
    }
    if (*(u32*)(arg0 + 0x10) & 0x800) {
        arg1[6] += arg1[7] * arg2;
    }
    if (*(u32*)(arg0 + 0x10) & 0x2000) {
        arg1[8] += arg1[9] * arg2;
    }
    if (*(u32*)(arg0 + 0x10) & 0x4000) {
        arg1[10] += arg1[11] * arg2;
    }
    for (i = 0; i < *(u32*)(arg0 + 0x1C); i++) {
        arg1[12] += arg1[20] * arg2;
        arg1++;
    }
}

} /* extern "C" */
