/* Functions from 0x801521E8 to 0x80152234, found by decomp-toolkit. */
#include "common.h"

void fn_801521E8(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 a;
    f32 b;
    f32 c;

    a = arg1[0];
    b = arg1[1];
    arg0[0] = a;
    c = arg1[2];
    arg0[4] = b;
    arg0[8] = c;

    a = arg2[0];
    b = arg2[1];
    arg0[1] = a;
    c = arg2[2];
    arg0[5] = b;
    arg0[9] = c;

    a = arg3[0];
    b = arg3[1];
    arg0[2] = a;
    c = arg3[2];
    arg0[6] = b;
    arg0[10] = c;
}
