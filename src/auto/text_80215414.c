/* Functions from 0x80215414 to 0x80215450, found by decomp-toolkit. */
#include "common.h"

void fn_80215414(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
}

u8 *fn_80215424(u8 *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0x1C) != 0) {
        return *(u8 **)(arg0 + 0x18) + arg1 * 0x14;
    }
    return *(u8 **)(arg0 + 0x18) + arg1 * 0x14;
}

