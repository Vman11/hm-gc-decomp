/* Functions from 0x800FF994 to 0x800FF9E8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f32 lbl_803637A0;

void fn_800FF994(f32 *__restrict arg0, const f32 *__restrict arg1, const f32 *__restrict arg2) {
    f32 d = -(lbl_803637A0 * ((arg1[2] * arg2[2]) + ((arg1[0] * arg2[0]) + (arg1[1] * arg2[1]))));
    arg0[0] = -((d * arg1[0]) + arg2[0]);
    arg0[1] = -((d * arg1[1]) + arg2[1]);
    arg0[2] = -((d * arg1[2]) + arg2[2]);
    arg0[3] = arg2[3];
}

} /* extern "C" */
