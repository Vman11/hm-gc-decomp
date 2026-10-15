/* Functions from 0x80112AAC to 0x80112B28, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E2CF0[];
void fn_80112AAC(s32 *arg0) {
    arg0[4] = (s32)lbl_802E2CF0;
    arg0[1] = 1;
    arg0[3] = 0;
    arg0[2] = 0;
    arg0[0] = 0;
}

s32 fn_80112AD4(u8 *arg0, u32 arg1) {
    u32 i;
    u32 count = *(u32 *)(arg0 + 0x20);
    for (i = 0; i < count; i++) {
        if (arg1 == (*(u32 **)(arg0 + 0x24))[i]) {
            return i;
        }
    }
    return -1;
}

