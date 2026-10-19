/* Functions from 0x801504CC to 0x80150788, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_801504CC(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * farg0) + M2C_FIELD(arg0, f32 *, 0x10));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((M2C_FIELD(arg0, f32 *, 4) * farg0) + M2C_FIELD(arg0, f32 *, 0x14));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((M2C_FIELD(arg0, f32 *, 8) * farg0) + M2C_FIELD(arg0, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((M2C_FIELD(arg0, f32 *, 0xC) * farg0) + M2C_FIELD(arg0, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * farg1) + M2C_FIELD(arg0, f32 *, 0x20));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 4) * farg1) + M2C_FIELD(arg0, f32 *, 0x24));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((M2C_FIELD(arg0, f32 *, 8) * farg1) + M2C_FIELD(arg0, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((M2C_FIELD(arg0, f32 *, 0xC) * farg1) + M2C_FIELD(arg0, f32 *, 0x2C));
}

void fn_80150550(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x10) * farg0) + M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x14) * farg0) + M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x18) * farg0) + M2C_FIELD(arg0, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x1C) * farg0) + M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((M2C_FIELD(arg0, f32 *, 0x10) * farg1) + M2C_FIELD(arg0, f32 *, 0x20));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 0x14) * farg1) + M2C_FIELD(arg0, f32 *, 0x24));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((M2C_FIELD(arg0, f32 *, 0x18) * farg1) + M2C_FIELD(arg0, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x1C) * farg1) + M2C_FIELD(arg0, f32 *, 0x2C));
}

void fn_801505D4(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x20) * farg0) + M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x24) * farg0) + M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x28) * farg0) + M2C_FIELD(arg0, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x2C) * farg0) + M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((M2C_FIELD(arg0, f32 *, 0x20) * farg1) + M2C_FIELD(arg0, f32 *, 0x10));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((M2C_FIELD(arg0, f32 *, 0x24) * farg1) + M2C_FIELD(arg0, f32 *, 0x14));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((M2C_FIELD(arg0, f32 *, 0x28) * farg1) + M2C_FIELD(arg0, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x2C) * farg1) + M2C_FIELD(arg0, f32 *, 0x1C));
}

void fn_80150658(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * farg0);
}

void fn_8015068C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) * farg0);
}

void fn_801506C0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) * farg0);
}

void fn_801506F4(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) * farg0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) * farg0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * farg0);
}

} /* extern "C" */
