/* Functions from 0x801521E8 to 0x80152234, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_801521E8(f32 *__restrict arg0, f32 *__restrict arg1, f32 *__restrict arg2, f32 *__restrict arg3) {
    arg0[0] = arg1[0];
    arg0[4] = arg1[1];
    arg0[8] = arg1[2];
    arg0[1] = arg2[0];
    arg0[5] = arg2[1];
    arg0[9] = arg2[2];
    arg0[2] = arg3[0];
    arg0[6] = arg3[1];
    arg0[10] = arg3[2];
}

} /* extern "C" */
