/* Functions from 0x80150CD4 to 0x80151030, found by decomp-toolkit. */
#include "common.h"

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

