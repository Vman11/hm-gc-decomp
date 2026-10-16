/* Functions from 0x80151BD4 to 0x80151D58, found by decomp-toolkit. */
#include "common.h"

void fn_80151BD4(f32* m, f32* x, f32* y, f32* z) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    f32 x1;
    f32 x0;
    f32 x2;
    f32 y0;
    f32 y1;
    f32 y2;
    f32 z0;
    f32 z1;
    f32 z2;
    x0 = x[0];
    x1 = x[1];
    m[0] = x0;
    x2 = x[2];
    m[4] = x1;
    y0 = y[0];
    m[8] = x2;
    y1 = y[1];
    m[1] = y0;
    y2 = y[2];
    m[5] = y1;
    z0 = z[0];
    m[9] = y2;
    z1 = z[1];
    m[2] = z0;
    z2 = z[2];
    m[6] = z1;
    m[10] = z2;
    m[3] = lbl_80364544;
    m[7] = lbl_80364544;
    m[11] = lbl_80364544;
    m[12] = lbl_80364544;
    m[13] = lbl_80364544;
    m[14] = lbl_80364544;
    m[15] = lbl_8036453C;
}
typedef struct Vec80151BD4 {
    f32 x, y, z;
} Vec80151BD4;
