/* Functions from 0x8014EB30 to 0x8014F264, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035ACB8;
void fn_8014EB30(void **arg0) {
    extern u8 lbl_802E3F78[];
    extern u8 lbl_802E67C0[];
    arg0[0] = lbl_802E3F78;
    arg0[0] = lbl_802E67C0;
}

void fn_8014EB4C(s32 arg0) {
    lbl_8035ACB8 = arg0;
}

u32 fn_8014EB54(f32 (*__restrict m)[4], f32 *__restrict v, f32 *__restrict out) {
    extern u32 lbl_80364538;
    u32 x, y, z;
    u32 code;

    out[0] = v[0] * m[0][0];
    out[1] = v[0] * m[1][0];
    out[2] = v[0] * m[2][0];
    out[0] = v[1] * m[0][1] + out[0];
    out[1] = v[1] * m[1][1] + out[1];
    out[2] = v[1] * m[2][1] + out[2];
    out[0] = v[2] * m[0][2] + out[0];
    out[1] = v[2] * m[1][2] + out[1];
    out[2] = v[2] * m[2][2] + out[2];
    out[0] = out[0] + m[0][3];
    out[1] = out[1] + m[1][3];
    out[2] = out[2] + m[2][3];

    x = ((u32 *)out)[0];
    y = ((u32 *)out)[1];
    z = ((u32 *)out)[2];
    if (x & 0x80000000) {
        code = ((0x3F800000 - (x & 0x7FFFFFFF)) >> 29) & 4;
    } else {
        code = ((0x3F800000 - x) >> 28) & 8;
    }
    if (y & 0x80000000) {
        code |= ((0x3F800000 - (y & 0x7FFFFFFF)) >> 27) & 0x10;
    } else {
        code |= ((0x3F800000 - y) >> 26) & 0x20;
    }
    if (z & 0x80000000) {
        return code | lbl_80364538;
    }
    return code | (((0x3F800000 - z) >> 30) & 2);
}

u32 fn_8014EE48(f32 (*__restrict m)[4], f32 *__restrict v, f32 *__restrict out) {
    u32 y;
    u32 x;
    u32 z;
    u32 lo;
    u32 hi;

    out[0] = v[0] * m[0][0];
    out[1] = v[0] * m[1][0];
    out[2] = v[0] * m[2][0];
    out[0] = v[1] * m[0][1] + out[0];
    out[1] = v[1] * m[1][1] + out[1];
    out[2] = v[1] * m[2][1] + out[2];
    out[0] = v[2] * m[0][2] + out[0];
    out[1] = v[2] * m[1][2] + out[1];
    out[2] = v[2] * m[2][2] + out[2];
    out[0] = out[0] + m[0][3];
    out[1] = out[1] + m[1][3];
    out[2] = out[2] + m[2][3];
    y = ((u32 *)out)[1];
    x = ((u32 *)out)[0];
    z = ((u32 *)out)[2];
    lo = ((y >> 27) & 0x10) | ((x >> 29) & 4) | (z >> 31);
    hi = (((0x3F800000 - y) >> 26) & 0x20) | (((0x3F800000 - x) >> 28) & 8) | (((0x3F800000 - z) >> 30) & 2);
    return lo | (hi & ~(lo << 1));
}

void fn_8014F0D8(f32 *m, f32 *a, f32 *b, f32 *c, f32 n, f32 f) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364540;
    extern f32 lbl_80364544;
    f32 d = f - n;
    f32 w = a[2] - a[0];
    f32 h = a[3] - a[1];
    f32 c0 = c[0];
    f32 c1 = c[1];
    m[0] = (lbl_80364540 * b[0]) / w;
    m[4] = lbl_80364544;
    m[8] = lbl_80364544;
    m[12] = lbl_80364544;
    m[1] = lbl_80364544;
    m[5] = (lbl_80364540 * b[1]) / h;
    m[9] = lbl_80364544;
    m[13] = lbl_80364544;
    m[2] = lbl_80364544;
    m[6] = lbl_80364544;
    m[10] = lbl_8036453C / d;
    m[14] = lbl_80364544;
    m[3] = c0;
    m[7] = c1;
    m[11] = -(n / d);
    m[15] = lbl_8036453C;
}

void fn_8014F198(f32 *m, f32 *a, f32 *b, f32 *c, f32 n, f32 f) {
extern f32 lbl_8036453C, lbl_80364540, lbl_80364544;
f32 right=a[2], left=a[0];
f32 depth=f/(f-n);
f32 top=a[3], bottom=a[1];
f32 x=b[0]/(right-left);
f32 scale=lbl_80364540*n;
f32 y=b[1]/(top-bottom);
f32 cx=c[0], cy=c[1];
f32 tx=cx-x*(left+right);
f32 ty=cy-y*(top+bottom);
m[0]=scale*x;
m[4]=lbl_80364544;
m[8]=lbl_80364544;
m[12]=lbl_80364544;
m[1]=lbl_80364544;
m[5]=scale*y;
m[9]=lbl_80364544;
m[13]=lbl_80364544;
m[2]=tx;
m[6]=ty;
m[10]=depth;
m[14]=lbl_8036453C;
m[3]=lbl_80364544;
m[7]=lbl_80364544;
m[11]=-(n*depth);
m[15]=lbl_80364544;
}

