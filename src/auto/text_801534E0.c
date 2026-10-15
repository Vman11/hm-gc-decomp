/* Functions from 0x801534E0 to 0x80153B24, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 m[4][4];
} Mtx44Struct;

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

extern f32 lbl_80364560;
void fn_80153988(f32* m) {
    m[0] = lbl_80364560;
    m[1] = lbl_80364560;
    m[2] = lbl_80364560;
    m[3] = lbl_80364560;
    m[4] = lbl_80364560;
    m[5] = lbl_80364560;
    m[6] = lbl_80364560;
    m[7] = lbl_80364560;
    m[8] = lbl_80364560;
    m[9] = lbl_80364560;
    m[10] = lbl_80364560;
    m[11] = lbl_80364560;
    m[12] = lbl_80364560;
    m[13] = lbl_80364560;
    m[14] = lbl_80364560;
    m[15] = lbl_80364560;
}

void fn_80153A0C(f32* dst, f32* src) {
    f32 a, b;
    a = src[0];
    b = src[1];
    dst[0] = a;
    a = src[2];
    dst[1] = b;
    b = src[3];
    dst[2] = a;
    a = src[4];
    dst[3] = b;
    b = src[5];
    dst[4] = a;
    a = src[6];
    dst[5] = b;
    b = src[7];
    dst[6] = a;
    a = src[8];
    dst[7] = b;
    b = src[9];
    dst[8] = a;
    a = src[10];
    dst[9] = b;
    b = src[11];
    dst[10] = a;
    a = src[12];
    dst[11] = b;
    b = src[13];
    dst[12] = a;
    a = src[14];
    dst[13] = b;
    b = src[15];
    dst[14] = a;
    dst[15] = b;
}

s32 fn_80153A90(void) {
    return 0;
}

s32 fn_80153A98(void) {
    return 0;
}

s32 fn_80153AA0(void) {
    return 0;
}

s32 fn_80153AA8(void) {
    return 0;
}

s32 fn_80153AB0(void) {
    return 0;
}

s32 fn_80153AC0(void) {
    return 0xFFFF;
}

s32 fn_80153ACC(void) {
    return 0xFFFF;
}

u32 fn_80153AD8(u8* arg0, u32 arg1, u32 arg2) {
    u32 i;
    u32 max = 0;
    u32 n = *(u32*)(arg0 + 0x78);
    for (i = 0; i < n; i++) {
        if (arg1 == *(u32*)(arg0 + 0x7C) && arg2 == *(u32*)(arg0 + 0x80)) {
            if (*(u16*)(arg0 + 0x86) > max) {
                max = *(u16*)(arg0 + 0x86);
            }
        }
        arg0 += 0x24;
    }
    return max;
}

