// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_803637A0;
void fn_80101820(f32 *v);
double fn_800F045C(double x);
void fn_800FFF20(const f32 *src, f32 *dst, f32 *out) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    fn_80101820(dst);
    *out = lbl_803637A0 * (f32)fn_800F045C(src[3]);
}

} /* extern "C" */
