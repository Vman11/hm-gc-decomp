/* Functions from 0x8014F358 to 0x8014F65C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef f32 Row8014F358[4];

void fn_8014F358(Row8014F358 *__restrict m, f32 *__restrict v, f32 *__restrict out) {
    out[0] = v[0] * m[0][0];
    out[1] = v[0] * m[0][1];
    out[2] = v[0] * m[0][2];
    out[0] = v[1] * m[1][0] + out[0];
    out[1] = v[1] * m[1][1] + out[1];
    out[2] = v[1] * m[1][2] + out[2];
    out[0] = v[2] * m[2][0] + out[0];
    out[1] = v[2] * m[2][1] + out[1];
    out[2] = v[2] * m[2][2] + out[2];
}

typedef f32 Row8014F3EC[4];

void fn_8014F3EC(Row8014F3EC *__restrict m, f32 *__restrict v, f32 *__restrict out) {
    out[0] = v[0] * m[0][0];
    out[1] = v[0] * m[1][0];
    out[2] = v[0] * m[2][0];
    out[0] = v[1] * m[0][1] + out[0];
    out[1] = v[1] * m[1][1] + out[1];
    out[2] = v[1] * m[2][1] + out[2];
    out[0] = v[2] * m[0][2] + out[0];
    out[1] = v[2] * m[1][2] + out[1];
    out[2] = v[2] * m[2][2] + out[2];
}

typedef f32 Row8014F480[4];

void fn_8014F480(Row8014F480 *__restrict m, f32 *__restrict v, f32 *__restrict out) {
    out[0] = v[0] * m[0][0];
    out[1] = v[0] * m[0][1];
    out[2] = v[0] * m[0][2];
    out[0] = v[1] * m[1][0] + out[0];
    out[1] = v[1] * m[1][1] + out[1];
    out[2] = v[1] * m[1][2] + out[2];
    out[0] = v[2] * m[2][0] + out[0];
    out[1] = v[2] * m[2][1] + out[1];
    out[2] = v[2] * m[2][2] + out[2];
    out[0] = out[0] - (m[0][0] * m[0][3] + m[1][0] * m[1][3] + m[2][0] * m[2][3]);
    out[1] = out[1] - (m[0][1] * m[0][3] + m[1][1] * m[1][3] + m[2][1] * m[2][3]);
    out[2] = out[2] - (m[0][2] * m[0][3] + m[1][2] * m[1][3] + m[2][2] * m[2][3]);
}




f32 fn_8014F568(f32* m, f32* v) {
    f32 r = v[0] * m[8];
    r += v[1] * m[9];
    r += v[2] * m[10];
    r += m[11];
    return r;
}

void fn_8014F598(f32 (*__restrict m)[4], f32 *__restrict v, f32 *__restrict out) {
    out[0] = v[0] * m[0][0];
    out[1] = v[0] * m[1][0];
    out[2] = v[0] * m[2][0];
    out[0] = v[1] * m[0][1] + out[0];
    out[1] = v[1] * m[1][1] + out[1];
    out[2] = v[1] * m[2][1] + out[2];
    out[0] = v[2] * m[0][2] + out[0];
    out[1] = v[2] * m[1][2] + out[1];
    out[2] = v[2] * m[2][2] + out[2];
    out[0] = out[0] + m[0][3];
    out[1] = out[1] + m[1][3];
    out[2] = out[2] + m[2][3];
}

} /* extern "C" */
