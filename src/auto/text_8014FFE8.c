/* Functions from 0x8014FFE8 to 0x8015012C, found by decomp-toolkit. */
#include "common.h"

void fn_80150090(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f5 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) -((M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x20)) + ((temp_f4 * M2C_FIELD(arg0, f32 *, 0)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x10))));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -((M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x24)) + ((temp_f4 * M2C_FIELD(arg0, f32 *, 4)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x14))));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) -((M2C_FIELD(arg0, f32 *, 0x2C) * M2C_FIELD(arg0, f32 *, 0x28)) + ((temp_f4 * M2C_FIELD(arg0, f32 *, 8)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x18))));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 4) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 8) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f3;
}
