// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80364460;
void fn_80121158(f32 t, u8 *out, const u8 *a, const u8 *b);
void fn_8014AB2C(f32 *dst, f32 t, const u8 *a, const u8 *b) {
    u8 c[4];
    fn_80121158(t, c, a, b);
    dst[0] = (s32)c[0] / lbl_80364460;
    dst[1] = (s32)c[1] / lbl_80364460;
    dst[2] = (s32)c[2] / lbl_80364460;
    dst[3] = (s32)c[3] / lbl_80364460;
}

} /* extern "C" */
