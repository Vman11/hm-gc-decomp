/* Functions from 0x80262FA0 to 0x8026300C, found by decomp-toolkit. */
#include "common.h"

void fn_80262FA0(void *arg0) {
    extern void *lbl_8035B754;
    extern f32 lbl_80366AE8;
    extern f32 lbl_80366AEC;
    extern f32 lbl_80357E78[];
    u8 *p = (u8 *)arg0;
    f32 *v = lbl_80357E78;
    f32 *a = v;
    f32 *b = v + 3;
    f32 *c = v + 6;
    lbl_8035B754 = arg0;
    *(s32 *)(p + 0xC) = 0;
    *(s32 *)(p + 0x8) = 0;
    *(s32 *)(p + 0x4) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    a[0] = lbl_80366AE8;
    a[1] = lbl_80366AE8;
    a[2] = lbl_80366AE8;
    b[1] = lbl_80366AE8;
    c[2] = lbl_80366AE8;
    a[0] = lbl_80366AEC;
    b[0] = lbl_80366AE8;
    b[2] = lbl_80366AE8;
    c[0] = lbl_80366AE8;
    c[2] = lbl_80366AEC;
    c[1] = lbl_80366AE8;
    c[2] = lbl_80366AE8;
    c[3] = lbl_80366AEC;
}
