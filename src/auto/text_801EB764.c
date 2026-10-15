/* Functions from 0x801EB764 to 0x801EB7B0, found by decomp-toolkit. */
#include "common.h"

s32 fn_801EB764(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_r4 & 2) {
        return 0;
    }
    if (*(u32 *)((u8 *)arg0 + 0x10) == 0) {
        return 0;
    }
    if (temp_r4 & 4) {
        *(s32 *)((u8 *)arg0 + 4) = 2;
    } else {
        *(s32 *)((u8 *)arg0 + 4) = 3;
    }
    return 1;
}
