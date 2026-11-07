/* Functions from 0x80151710 to 0x80151958, found by decomp-toolkit. */
#include "common.h"

void fn_80151710(f32 *m, f32 *p) {
    extern f32 lbl_8036453C, lbl_80364540, lbl_80364544;
    f32 a, b, c, x, y, z, d;
    a = p[0]; y = p[1]; z = p[2];
    b = y; c = z;
    x = a * lbl_80364540;
    y *= lbl_80364540;
    z *= lbl_80364540;
    d = -p[3];
    m[0] = -(x * a - lbl_8036453C);
    m[4] = -(x * b);
    m[8] = -(x * c);
    m[12] = lbl_80364544;
    m[1] = -(y * a);
    m[5] = -(y * b - lbl_8036453C);
    m[9] = -(y * c);
    m[13] = lbl_80364544;
    m[2] = -(z * a);
    m[6] = -(z * b);
    m[10] = -(z * c - lbl_8036453C);
    m[14] = lbl_80364544;
    m[3] = x * d;
    m[7] = y * d;
    m[11] = z * d;
    m[15] = lbl_8036453C;
}

void fn_801517E4(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x20) = farg1;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036453C;
}

void fn_80151860(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x24) = farg1;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036453C;
}

void fn_801518DC(void *arg0, f32 farg0, f32 farg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 8) = farg0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x18) = farg1;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036453C;
}

