// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f64 lbl_80365028;
s32 __cvt_fp2unsigned(f32);
void fn_8010EF08(void *, s32);
void fn_8010EEE4(void *, s32);

void fn_801C9574(u8 *p) {
    s32 r;
    s32 d;
    if (lbl_80365028 != *(f32 *)(p + 460)) {
        r = __cvt_fp2unsigned(*(f32 *)(p + 468) / *(f32 *)(p + 460));
    } else {
        r = 0;
    }
    d = r - *(s32 *)(p + 396);
    if (d > 0) {
        fn_8010EF08(p + 384, d);
    } else if (d < 0) {
        fn_8010EEE4(p + 384, -d);
    }
}

} /* extern "C" */
