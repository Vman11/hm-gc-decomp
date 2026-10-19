/* Functions from 0x80100CF4 to 0x80100D68, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f32 lbl_803637F4;
void fn_80100CF4(f32 *arg0) {
    arg0[0] = lbl_803637F4;
    arg0[1] = lbl_803637F4;
    arg0[2] = lbl_803637F4;
    arg0[3] = lbl_803637F4;
}

f32 fn_80100D18(f32 *arg0, f32 *arg1) {
    f32 dx = arg1[0] - arg0[0];
    f32 dy = arg1[1] - arg0[1];
    return dx * dx + dy * dy;
}

void fn_80100D3C(f32 *__restrict arg0, f32 *__restrict arg1, f32 *__restrict arg2, f32 farg0) {
    arg0[0] = farg0 * (arg2[0] - arg1[0]) + arg1[0];
    arg0[1] = farg0 * (arg2[1] - arg1[1]) + arg1[1];
}

} /* extern "C" */
