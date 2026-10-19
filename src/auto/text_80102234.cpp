/* Functions from 0x80102234 to 0x801022FC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80102234(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg2, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) M2C_FIELD(arg2, s32 *, 0x20);
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) M2C_FIELD(arg2, s32 *, 0x24);
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x26) = (s16) M2C_FIELD(arg2, s32 *, 0x2C);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg2, s32 *, 0x30);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg2, s32 *, 0x34);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg2, s32 *, 0x38);
    M2C_FIELD(arg0, s16 *, 0x2E) = (s16) M2C_FIELD(arg2, s32 *, 0x3C);
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) M2C_FIELD(arg2, s32 *, 0x40);
    M2C_FIELD(arg0, s16 *, 0x32) = (s16) M2C_FIELD(arg2, s32 *, 0x44);
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) M2C_FIELD(arg2, s32 *, 0x48);
    M2C_FIELD(arg0, s16 *, 0x36) = (s16) M2C_FIELD(arg2, s32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg2, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg2, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg2, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg2, f32 *, 0x5C);
}

} /* extern "C" */
