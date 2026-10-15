/* Functions from 0x8018D1E0 to 0x8018D1F4, found by decomp-toolkit. */
#include "common.h"

void fn_8018D1E0(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x90) = arg1;
}

s32 fn_8018D1E8(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x90) + 0x1C;
}

