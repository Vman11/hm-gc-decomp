// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f64 lbl_80365028;
s32 __cvt_fp2unsigned(f32);

void fn_801C950C(u8 *p) {
    if (lbl_80365028 != *(f32 *)(p + 460)) {
        *(s32 *)(p + 440) = __cvt_fp2unsigned((*(f32 *)(p + 100) - *(f32 *)(p + 92)) / *(f32 *)(p + 460)) + 2;
    } else {
        *(s32 *)(p + 440) = 0;
    }
    *(s32 *)(p + 400) = *(s32 *)(p + 440);
}

} /* extern "C" */
