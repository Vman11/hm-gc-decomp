/* Functions from 0x801534E0 to 0x80153B24, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 m[4][4];
} Mtx44Struct;

extern f32 lbl_80364564;
extern f32 lbl_80364560;
void fn_801534E0(f32 *d, f32 *s) {
    f32 a = s[6];
    f32 b = s[9];
    f32 c = s[2];
    f32 e = s[5];
    f32 f = s[10];
    f32 g = s[1];
    f32 h = s[8];
    f32 i = s[4];
    f32 j = s[0];
    d[0] = e * f - a * b;
    d[1] = -(g * f - c * b);
    d[2] = g * a - c * e;
    d[4] = -(i * f - a * h);
    d[5] = j * f - c * h;
    d[6] = -(j * a - c * i);
    d[8] = i * b - e * h;
    d[9] = -(j * b - g * h);
    d[10] = j * e - g * i;
}

f32 fn_80153574(f32 *m) {
    return m[10] * (m[0] * m[5]) + m[8] * (m[1] * m[6]) + m[9] * (m[2] * m[4])
         - m[8] * (m[2] * m[5]) - m[10] * (m[1] * m[4]) - m[9] * (m[0] * m[6]);
}

void fn_801535CC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg0);
}

void fn_8015363C(f32 *m, f32 v) {
    m[0] = lbl_80364560;
    m[1] = lbl_80364564;
    m[2] = lbl_80364564;
    m[3] = lbl_80364564;
    m[4] = lbl_80364564;
    m[5] = lbl_80364560;
    m[6] = lbl_80364564;
    m[7] = lbl_80364564;
    m[8] = lbl_80364564;
    m[9] = lbl_80364564;
    m[10] = v;
    m[11] = lbl_80364564;
    m[12] = lbl_80364564;
    m[13] = lbl_80364564;
    m[14] = lbl_80364564;
    m[15] = lbl_80364560;
}

void fn_801536BC(f32 *m, f32 v) {
    m[0] = lbl_80364560;
    m[1] = lbl_80364564;
    m[2] = lbl_80364564;
    m[3] = lbl_80364564;
    m[4] = lbl_80364564;
    m[5] = v;
    m[6] = lbl_80364564;
    m[7] = lbl_80364564;
    m[8] = lbl_80364564;
    m[9] = lbl_80364564;
    m[10] = lbl_80364560;
    m[11] = lbl_80364564;
    m[12] = lbl_80364564;
    m[13] = lbl_80364564;
    m[14] = lbl_80364564;
    m[15] = lbl_80364560;
}

void fn_8015373C(f32* m, f32 x) {
    m[0] = x;
    m[1] = lbl_80364564;
    m[2] = lbl_80364564;
    m[3] = lbl_80364564;
    m[4] = lbl_80364564;
    m[5] = lbl_80364560;
    m[6] = lbl_80364564;
    m[7] = lbl_80364564;
    m[8] = lbl_80364564;
    m[9] = lbl_80364564;
    m[10] = lbl_80364560;
    m[11] = lbl_80364564;
    m[12] = lbl_80364564;
    m[13] = lbl_80364564;
    m[14] = lbl_80364564;
    m[15] = lbl_80364560;
}

void fn_80153840(f32* m, f32 x) {
    m[0] = x;
    m[1] = lbl_80364564;
    m[2] = lbl_80364564;
    m[3] = lbl_80364564;
    m[4] = lbl_80364564;
    m[5] = x;
    m[6] = lbl_80364564;
    m[7] = lbl_80364564;
    m[8] = lbl_80364564;
    m[9] = lbl_80364564;
    m[10] = x;
    m[11] = lbl_80364564;
    m[12] = lbl_80364564;
    m[13] = lbl_80364564;
    m[14] = lbl_80364564;
    m[15] = lbl_80364560;
}

void fn_801538B8(f32* dst, f32* src) {
    f32 a = src[0];
    f32 b = src[1];
    dst[0] = a;
    dst[5] = b;
    dst[10] = src[2];
    dst[1] = lbl_80364564;
    dst[2] = lbl_80364564;
    dst[4] = lbl_80364564;
    dst[6] = lbl_80364564;
    dst[8] = lbl_80364564;
    dst[9] = lbl_80364564;
}

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
    f32 b, a;
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

s32 fn_80153AB8(void) {
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

