/* Functions from 0x8015157C to 0x801515F8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_8015157C(f32 *__restrict a, f32 *__restrict b) {
    a[3] = a[3] + (a[2] * b[2] + (a[0] * b[0] + a[1] * b[1]));
    a[7] = a[7] + (a[6] * b[2] + (a[4] * b[0] + a[5] * b[1]));
    a[11] = a[11] + (a[10] * b[2] + (a[8] * b[0] + a[9] * b[1]));
}

} /* extern "C" */
