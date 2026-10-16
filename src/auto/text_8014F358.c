/* Functions from 0x8014F358 to 0x8014F65C, found by decomp-toolkit. */
#include "common.h"

void fn_8014F358(f32* m, f32* v, f32* out) {
    f32 x = v[0];
    f32 y = v[1];
    f32 z = v[2];
    out[0] = x * m[0];
    out[1] = x * m[1];
    out[2] = x * m[2];
    out[0] = y * m[4] + out[0];
    out[1] = y * m[5] + out[1];
    out[2] = y * m[6] + out[2];
    out[0] = z * m[8] + out[0];
    out[1] = z * m[9] + out[1];
    out[2] = z * m[10] + out[2];
}

void fn_8014F3EC(f32* m, f32* v, f32* out) {
    out[0] = v[0] * m[0];
    out[1] = v[0] * m[4];
    out[2] = v[0] * m[8];
    out[0] = v[1] * m[1] + out[0];
    out[1] = v[1] * m[5] + out[1];
    out[2] = v[1] * m[9] + out[2];
    out[0] = v[2] * m[2] + out[0];
    out[1] = v[2] * m[6] + out[1];
    out[2] = v[2] * m[10] + out[2];
}

f32 fn_8014F568(f32* m, f32* v) {
    f32 r = v[0] * m[8];
    r += v[1] * m[9];
    r += v[2] * m[10];
    r += m[11];
    return r;
}

