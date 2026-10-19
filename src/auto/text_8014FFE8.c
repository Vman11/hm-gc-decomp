/* Functions from 0x8014FFE8 to 0x8015012C, found by decomp-toolkit. */
#include "common.h"

void fn_8014FFE8(void *arg0, void *arg1) {
    extern f32 lbl_8036453C;
    extern f32 lbl_80364544;
    f32 m00 = M2C_FIELD(arg1, f32 *, 0x0);
    f32 m01 = M2C_FIELD(arg1, f32 *, 0x4);
    f32 m02 = M2C_FIELD(arg1, f32 *, 0x8);
    f32 m03 = M2C_FIELD(arg1, f32 *, 0xC);
    f32 m10 = M2C_FIELD(arg1, f32 *, 0x10);
    f32 m11 = M2C_FIELD(arg1, f32 *, 0x14);
    f32 m12 = M2C_FIELD(arg1, f32 *, 0x18);
    f32 m13 = M2C_FIELD(arg1, f32 *, 0x1C);
    f32 m20 = M2C_FIELD(arg1, f32 *, 0x20);
    f32 m21 = M2C_FIELD(arg1, f32 *, 0x24);
    f32 m22 = M2C_FIELD(arg1, f32 *, 0x28);
    f32 m23 = M2C_FIELD(arg1, f32 *, 0x2C);

    M2C_FIELD(arg0, f32 *, 0xC) = -(m03 * m00 + m13 * m10 + m23 * m20);
    M2C_FIELD(arg0, f32 *, 0x1C) = -(m03 * m01 + m13 * m11 + m23 * m21);
    M2C_FIELD(arg0, f32 *, 0x2C) = -(m03 * m02 + m13 * m12 + m23 * m22);
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_8036453C;
    M2C_FIELD(arg0, f32 *, 0x0) = m00;
    M2C_FIELD(arg0, f32 *, 0x10) = m01;
    M2C_FIELD(arg0, f32 *, 0x20) = m02;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x4) = m10;
    M2C_FIELD(arg0, f32 *, 0x14) = m11;
    M2C_FIELD(arg0, f32 *, 0x24) = m12;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_80364544;
    M2C_FIELD(arg0, f32 *, 0x8) = m20;
    M2C_FIELD(arg0, f32 *, 0x18) = m21;
    M2C_FIELD(arg0, f32 *, 0x28) = m22;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_80364544;
}

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
