/* Functions from 0x80036F10 to 0x80037060, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f32 *lbl_80357B28[];
extern f32 *lbl_80357B3C[];
extern f32 lbl_8035BE98;

static inline f32 getTableValue(f32 **table, s32 **idx) {
    if (*idx != 0 && table != 0) {
        if (**idx > 4) {
            **idx = 4;
        }
        if (table[**idx] != 0) {
            return *table[**idx];
        }
    }
    return lbl_8035BE98;
}

u8 fn_80036F10(void *arg0) {
    bool ret = lbl_8035BE98 != getTableValue(lbl_80357B28, (s32 **)((u8 *)arg0 + 0x38));
    if (!ret) {
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

void fn_8003702C(f32 *__restrict o, f32 *__restrict a, f32 *__restrict b) {
    o[0] = a[0] - b[0];
    o[1] = a[1] - b[1];
    o[2] = a[2] - b[2];
}

} /* extern "C" */
