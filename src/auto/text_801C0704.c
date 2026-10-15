/* Functions from 0x801C0704 to 0x801C0834, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364FB8;
s32 fn_801C0704(u8 *arg0, f32 x, f32 y) {
    if (x >= *(f32 *)(arg0 + 0x48) && x < *(f32 *)(arg0 + 0x50) &&
        y >= *(f32 *)(arg0 + 0x54) - lbl_80364FB8 && y < *(f32 *)(arg0 + 0x54)) {
        return 1;
    }
    return 0;
}

s32 fn_801C0750(u8 *arg0, f32 x, f32 y) {
    if (x >= *(f32 *)(arg0 + 0x48) && x < *(f32 *)(arg0 + 0x50) &&
        y >= *(f32 *)(arg0 + 0x4C) && y < lbl_80364FB8 + *(f32 *)(arg0 + 0x4C)) {
        return 1;
    }
    return 0;
}

s32 fn_801C079C(u8 *arg0, f32 x, f32 y) {
    if (x >= *(f32 *)(arg0 + 0x50) - lbl_80364FB8 && x < *(f32 *)(arg0 + 0x50) &&
        y >= *(f32 *)(arg0 + 0x4C) && y < *(f32 *)(arg0 + 0x54)) {
        return 1;
    }
    return 0;
}

