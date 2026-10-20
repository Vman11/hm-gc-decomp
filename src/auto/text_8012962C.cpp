// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032C110[];
extern f32 lbl_80363E60;
double fn_800F03E4(double);

void fn_8012962C(u8 *p, f32 a, f32 b, f32 c, f32 d) {
    f32 t;
    f32 y;
    f32 x;
    *(f32 *)(p + 0x34) = a;
    *(f32 *)(p + 0x38) = b;
    *(f32 *)(p + 0x4C) = c;
    *(f32 *)(p + 0x50) = d;
    *(s32 *)(p + 0x64) = 0;
    t = fn_800F03E4(lbl_80363E60 * *(f32 *)(p + 0x34));
    x = t * *(f32 *)(p + 0x4C);
    y = *(f32 *)(p + 0x38) * x;
    *(f32 *)(p + 0x3C) = -y;
    *(f32 *)(p + 0x44) = y;
    *(f32 *)(p + 0x40) = -x;
    *(f32 *)(p + 0x48) = x;
    if (*(s32 *)(p + 0x64) != 0) {
        (*(void (**)(void *, void *, void *, void *, f32, f32))(lbl_8032C110 + 0x1A4))(*(void **)(p + 0x30), p + 0x3C, p + 0x54, p + 0x5C, *(f32 *)(p + 0x4C), *(f32 *)(p + 0x50));
    } else {
        (*(void (**)(void *, void *, void *, void *, f32, f32))(lbl_8032C110 + 0x1A0))(*(void **)(p + 0x30), p + 0x3C, p + 0x54, p + 0x5C, *(f32 *)(p + 0x4C), *(f32 *)(p + 0x50));
    }
}

} /* extern "C" */
