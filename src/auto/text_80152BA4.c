/* Functions from 0x80152BA4 to 0x80153420, found by decomp-toolkit. */
#include "common.h"

void fn_80152BA4(void) {

}

void fn_801533BC(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;

    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg0, f32 *, 8);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f6 = M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x34) = temp_f5;
    M2C_FIELD(arg0, f32 *, 0x38) = temp_f6;
}

