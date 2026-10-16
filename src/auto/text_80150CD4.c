/* Functions from 0x80150CD4 to 0x80151030, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z;
} Vec;

void fn_80150CD4(f32 (*m)[4], f32 *v) {
    f32 m30 = m[3][0];
    f32 x = v[0];
    f32 y = v[1];
    f32 z = v[2];

    m[0][0] = m30 * x + m[0][0];
    m[1][0] = m[3][0] * y + m[1][0];
    m[2][0] = m[3][0] * z + m[2][0];
    m[0][1] += m[3][1] * x;
    m[1][1] += m[3][1] * y;
    m[2][1] += m[3][1] * z;
    m[0][2] += m[3][2] * x;
    m[1][2] += m[3][2] * y;
    m[2][2] += m[3][2] * z;
    m[0][3] += m[3][3] * x;
    m[1][3] += m[3][3] * y;
    m[2][3] += m[3][3] * z;
}

void fn_80150DA4(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + ((M2C_FIELD(arg0, f32 *, 4) * farg0) + (M2C_FIELD(arg0, f32 *, 8) * farg1)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + ((M2C_FIELD(arg0, f32 *, 0x14) * farg0) + (M2C_FIELD(arg0, f32 *, 0x18) * farg1)));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + ((M2C_FIELD(arg0, f32 *, 0x24) * farg0) + (M2C_FIELD(arg0, f32 *, 0x28) * farg1)));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) + ((M2C_FIELD(arg0, f32 *, 0x34) * farg0) + (M2C_FIELD(arg0, f32 *, 0x38) * farg1)));
}

void fn_80150E18(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) + ((M2C_FIELD(arg0, f32 *, 0) * farg0) + (M2C_FIELD(arg0, f32 *, 8) * farg1)));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + ((M2C_FIELD(arg0, f32 *, 0x10) * farg0) + (M2C_FIELD(arg0, f32 *, 0x18) * farg1)));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + ((M2C_FIELD(arg0, f32 *, 0x20) * farg0) + (M2C_FIELD(arg0, f32 *, 0x28) * farg1)));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + ((M2C_FIELD(arg0, f32 *, 0x30) * farg0) + (M2C_FIELD(arg0, f32 *, 0x38) * farg1)));
}

void fn_80150E8C(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + ((M2C_FIELD(arg0, f32 *, 0) * farg0) + (M2C_FIELD(arg0, f32 *, 4) * farg1)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + ((M2C_FIELD(arg0, f32 *, 0x10) * farg0) + (M2C_FIELD(arg0, f32 *, 0x14) * farg1)));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + ((M2C_FIELD(arg0, f32 *, 0x20) * farg0) + (M2C_FIELD(arg0, f32 *, 0x24) * farg1)));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + ((M2C_FIELD(arg0, f32 *, 0x30) * farg0) + (M2C_FIELD(arg0, f32 *, 0x34) * farg1)));
}

void fn_80150F00(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) * farg0);
}

void fn_80150F34(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * farg0);
}

void fn_80150F68(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg0);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * farg0);
}

void fn_80150F9C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg0);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * farg0);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * farg0);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) * farg0);
}

