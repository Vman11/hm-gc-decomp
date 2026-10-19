/* Functions from 0x80036F10 to 0x80037060, found by decomp-toolkit. */
#include "common.h"

extern f32 *lbl_80357B28[];
extern f32 *lbl_80357B3C[];
extern f32 lbl_8035BE98;

static inline f32 getTableValue(f32 **table, s32 **idx) {
    if (*idx != NULL && table != NULL) {
        if (**idx > 4) {
            **idx = 4;
        }
        if (table[**idx] != NULL) {
            return *table[**idx];
        }
    }
    return lbl_8035BE98;
}

u8 fn_80036F10(void *arg0) {
    BOOL ret = lbl_8035BE98 != getTableValue(lbl_80357B28, (s32 **)((u8 *)arg0 + 0x38));
    if (!(u8)ret) {
        ret = lbl_8035BE98 != getTableValue(lbl_80357B3C, (s32 **)((u8 *)arg0 + 0x3C));
    }
    return ret;
}

void fn_80036FF8(f32 *arg0, f32 *arg1, f32 arg2) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 x;
    a = arg1[0];
    b = arg0[0];
    c = arg1[1];
    x = b - arg2 * a;
    d = arg1[2];
    arg0[0] = x;
    arg0[1] = arg0[1] - arg2 * c;
    arg0[2] = arg0[2] - arg2 * d;
}

void fn_8003702C(f32 *arg0, f32 *arg1, f32 *arg2) {
    f32 x0 = arg1[0];
    f32 x1 = arg2[0];
    f32 y0 = arg1[1];
    f32 x = x0 - x1;
    f32 y1 = arg2[1];
    f32 z0 = arg1[2];
    f32 z1 = arg2[2];
    f32 y = y0 - y1;
    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = z0 - z1;
}

