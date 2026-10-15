/* Functions from 0x801BDAC8 to 0x801BDB70, found by decomp-toolkit. */
#include "common.h"

s32 fn_801BDAC8(void) {
    return 0x39;
}

s32 fn_801BDAD0(u8 *arg0, f32 x, f32 y) {
    if (x >= *(f32 *)(arg0 + 0x48) && x < *(f32 *)(arg0 + 0x50) &&
        y >= *(f32 *)(arg0 + 0x4C) && y < *(f32 *)(arg0 + 0x54)) {
        return 1;
    }
    return 0;
}

