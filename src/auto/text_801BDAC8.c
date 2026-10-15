/* Functions from 0x801BDAC8 to 0x801BDB70, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x0, y0, x1, y1;
} Rect_801BDAC8;

s32 fn_801BDAC8(void) {
    return 0x39;
}

s32 fn_801BDAD0(u8 *arg0, f32 x, f32 y) {
    if (x >= *(f32 *)(arg0 + 0x48) && x < *(f32 *)(arg0 + 0x50) &&
        y >= *(f32 *)(arg0 + 0x4C) && y < *(f32 *)(arg0 + 0x54)) {
        return 1;
    }
    return 0;
}

void fn_801BDB18(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    temp_f2 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x58) = temp_f3;
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x5C) = temp_f2;
    temp_f0 = M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x60) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x64) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x48) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x4C) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x50) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x54) = temp_f0;
}

void fn_801BDB4C(u8 *arg0, f32 *arg1) {
    f32 a = arg1[0];
    f32 b = arg1[1];
    f32 c = arg1[2];
    f32 d = arg1[3];
    *(f32 *)(arg0 + 0x58) = a;
    *(f32 *)(arg0 + 0x5C) = b;
    *(f32 *)(arg0 + 0x60) = c;
    *(f32 *)(arg0 + 0x64) = d;
}

