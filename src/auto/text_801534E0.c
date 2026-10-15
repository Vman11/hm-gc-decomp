/* Functions from 0x801534E0 to 0x80153B24, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364564;
void fn_80153904(f32* m) {
    m[0] = lbl_80364564;
    m[1] = lbl_80364564;
    m[2] = lbl_80364564;
    m[3] = lbl_80364564;
    m[4] = lbl_80364564;
    m[5] = lbl_80364564;
    m[6] = lbl_80364564;
    m[7] = lbl_80364564;
    m[8] = lbl_80364564;
    m[9] = lbl_80364564;
    m[10] = lbl_80364564;
    m[11] = lbl_80364564;
    m[12] = lbl_80364564;
    m[13] = lbl_80364564;
    m[14] = lbl_80364564;
    m[15] = lbl_80364564;
}

void fn_80153A0C(f32* dst, f32* src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[8] = src[8];
    dst[9] = src[9];
    dst[10] = src[10];
    dst[11] = src[11];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    dst[15] = src[15];
}

s32 fn_80153AC0(void) {
    return 0xFFFF;
}

u16 fn_80153AD8(u8* arg0, u32 arg1, u32 arg2) {
    u32 i;
    u16 max = 0;
    for (i = 0; i < *(u32*)(arg0 + 0x78); i++) {
        if (arg1 == *(u32*)(arg0 + 0x7C) && arg2 == *(u32*)(arg0 + 0x80)) {
            if (*(u16*)(arg0 + 0x86) > max) {
                max = *(u16*)(arg0 + 0x86);
            }
        }
        arg0 += 0x24;
    }
    return max;
}

