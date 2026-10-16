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

void fn_8014F3EC(void *arg0, void *arg1, void *arg2) {
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f7;

    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    temp_f7 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f4 * M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f4 * M2C_FIELD(arg0, f32 *, 0x10));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f4 * M2C_FIELD(arg0, f32 *, 0x20));
    temp_f4_2 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f7 * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_f7 * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f7 * M2C_FIELD(arg0, f32 *, 0x24)) + M2C_FIELD(arg2, f32 *, 8));
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f4_2 * M2C_FIELD(arg0, f32 *, 8)) + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_f4_2 * M2C_FIELD(arg0, f32 *, 0x18)) + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f4_2 * M2C_FIELD(arg0, f32 *, 0x28)) + M2C_FIELD(arg2, f32 *, 8));
}

f32 fn_8014F568(f32* m, f32* v) {
    f32 r = v[0] * m[8];
    r += v[1] * m[9];
    r += v[2] * m[10];
    r += m[11];
    return r;
}

