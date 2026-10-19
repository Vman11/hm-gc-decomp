/* Functions from 0x80175804 to 0x80175938, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80175804(void* arg0, s32* arg1, s32 arg2) {
    arg1[0] += arg1[1] * arg2;
    arg1[2] += arg1[3] * arg2;
    arg1[4] += arg1[5] * arg2;
    arg1[6] += arg1[7] * arg2;
    arg1[8] += arg1[9] * arg2;
    arg1[10] += arg1[11] * arg2;
    arg1[12] += arg1[20] * arg2;
    arg1[13] += arg1[21] * arg2;
    arg1[14] += arg1[22] * arg2;
    arg1[15] += arg1[23] * arg2;
    arg1[16] += arg1[24] * arg2;
    arg1[17] += arg1[25] * arg2;
    arg1[18] += arg1[26] * arg2;
    arg1[19] += arg1[27] * arg2;
}

s32 fn_80175920(void) {
    return 12;
}

void* fn_80175928(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x4C) + arg1 * 0xC;
}

} /* extern "C" */
