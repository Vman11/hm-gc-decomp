/* Functions from 0x8015157C to 0x801515F8, found by decomp-toolkit. */
#include "common.h"

void fn_8015157C(void *arg0, void *arg1) {
    f32 *a = (f32 *)arg0;
    f32 *b = (f32 *)arg1;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    temp_f4 = b[1];
    temp_f5 = b[0];
    temp_f6 = b[2];
    a[3] = (a[3] + ((a[2] * temp_f6) + ((a[0] * temp_f5) + (a[1] * temp_f4))));
    a[7] = (a[7] + ((a[6] * temp_f6) + ((a[4] * temp_f5) + (a[5] * temp_f4))));
    a[11] = (a[11] + ((a[10] * temp_f6) + ((a[8] * temp_f5) + (a[9] * temp_f4))));
}
