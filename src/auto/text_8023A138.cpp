/* Functions from 0x8023A138 to 0x8023A194, found by decomp-toolkit. */
#include "common.h"

extern "C" {

BOOL fn_8023A138(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14) != 0;
}

s32 fn_8023A14C(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x1C);
}

u8 fn_8023A154(void *arg0) {
    return (u8)((*(u32 *)((u8 *)arg0 + 8) >> 31) ^ 1);
}

void fn_8023A168(s32* arg0) {
    arg0[2] = -1;
    arg0[7] = 0;
    arg0[5] = 0;
    arg0[0] = 0;
    arg0[1] = 4;
    arg0[4] = 0;
    arg0[6] = 0;
}

} /* extern "C" */
