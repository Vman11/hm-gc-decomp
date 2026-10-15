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

void fn_80153A0C(f32 (*dst)[4], f32 (*src)[4]) {
    f32 a, b;
    a = src[0][0]; b = src[0][1]; dst[0][0] = a; dst[0][1] = b;
    a = src[0][2]; b = src[0][3]; dst[0][2] = a; dst[0][3] = b;
    a = src[1][0]; b = src[1][1]; dst[1][0] = a; dst[1][1] = b;
    a = src[1][2]; b = src[1][3]; dst[1][2] = a; dst[1][3] = b;
    a = src[2][0]; b = src[2][1]; dst[2][0] = a; dst[2][1] = b;
    a = src[2][2]; b = src[2][3]; dst[2][2] = a; dst[2][3] = b;
    a = src[3][0]; b = src[3][1]; dst[3][0] = a; dst[3][1] = b;
    a = src[3][2]; b = src[3][3]; dst[3][2] = a; dst[3][3] = b;
}

s32 fn_80153AC0(void) {
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

