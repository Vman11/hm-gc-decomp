/* Functions from 0x800371D0 to 0x800372CC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_800371D0(f32 *v, f32 s) {
    v[0] *= s;
    v[1] *= s;
    v[2] *= s;
}

void fn_800371F8(f32 *dst, f32 *src) {
    volatile f32 *vsrc = src;
    f32 x = vsrc[0];
    f32 y = vsrc[1];
    f32 z;
    dst[0] = x;
    z = vsrc[2];
    dst[1] = y;
    dst[2] = z;
}

void fn_80037214(f32 *v) {
    v[0] = -v[0];
    v[1] = -v[1];
    v[2] = -v[2];
}

void fn_8003723C(f32 *__restrict dst, f32 *__restrict a, f32 *__restrict b) {
    dst[0] = a[1] * b[2] - a[2] * b[1];
    dst[1] = a[2] * b[0] - a[0] * b[2];
    dst[2] = a[0] * b[1] - a[1] * b[0];
}

void fn_8003727C(f32 *__restrict dst, f32 *__restrict src) {
    dst[0] += src[0];
    dst[1] += src[1];
    dst[2] += src[2];
}

void fn_800372B0(f32 *dst, f32 *src) {
    volatile f32 *vsrc = src;
    f32 x = vsrc[0];
    f32 y = vsrc[1];
    f32 z;
    dst[0] = x;
    z = vsrc[2];
    dst[1] = y;
    dst[2] = z;
}

} /* extern "C" */
