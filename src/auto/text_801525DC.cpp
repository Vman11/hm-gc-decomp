/* Functions from 0x801525DC to 0x801525F8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_801525DC(f32 (*__restrict m)[4], f32 *__restrict v) {
    m[0][3] = v[0];
    m[1][3] = v[1];
    m[2][3] = v[2];
}

} /* extern "C" */
