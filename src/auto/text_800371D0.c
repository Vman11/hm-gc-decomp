/* Functions from 0x800371D0 to 0x800372CC, found by decomp-toolkit. */
#include "common.h"

void fn_800371D0(f32 *v, f32 s) {
    v[0] *= s;
    v[1] *= s;
    v[2] *= s;
}

void fn_800371F8(f32 *dst, f32 *src) {
    f32 x = src[0];
    f32 y = src[1];
    dst[0] = x;
    dst[1] = y;
    dst[2] = src[2];
}

void fn_80037214(f32 *v) {
    v[0] = -v[0];
    v[1] = -v[1];
    v[2] = -v[2];
}

void fn_8003723C(f32 *dst, f32 *a, f32 *b) {
    f32 z, y, x;
    x = a[1] * b[2] - a[2] * b[1];
    y = a[2] * b[0] - a[0] * b[2];
    z = a[0] * b[1] - a[1] * b[0];
    dst[0] = x;
    dst[1] = y;
    dst[2] = z;
}

