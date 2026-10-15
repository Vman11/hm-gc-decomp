/* Functions from 0x801FE500 to 0x801FE510, found by decomp-toolkit. */
#include "common.h"

s32 fn_801FE500(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}

void fn_801FE508(void *arg0, u32 arg1) {
    ((u32 *)arg0)[2] = arg1;
}
