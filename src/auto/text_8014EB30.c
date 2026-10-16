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

