// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_8032C110[];

void fn_80129564(u8 *p, const f32 *r, f32 c, f32 d) {
    *(f32 *)(p + 0x3C) = r[0];
    *(f32 *)(p + 0x40) = r[1];
    *(f32 *)(p + 0x44) = r[2];
    *(f32 *)(p + 0x48) = r[3];
    *(f32 *)(p + 0x38) = (r[2] - r[0]) / (r[3] - r[1]);
    *(f32 *)(p + 0x4C) = c;
    *(f32 *)(p + 0x50) = d;
    *(s32 *)(p + 0x64) = 1;
    if (*(s32 *)(p + 0x64) != 0) {
        (*(void (**)(void *, void *, void *, void *, f32, f32))(lbl_8032C110 + 0x1A4))(*(void **)(p + 0x30), p + 0x3C, p + 0x54, p + 0x5C, *(f32 *)(p + 0x4C), *(f32 *)(p + 0x50));
    } else {
        (*(void (**)(void *, void *, void *, void *, f32, f32))(lbl_8032C110 + 0x1A0))(*(void **)(p + 0x30), p + 0x3C, p + 0x54, p + 0x5C, *(f32 *)(p + 0x4C), *(f32 *)(p + 0x50));
    }
}

} /* extern "C" */
