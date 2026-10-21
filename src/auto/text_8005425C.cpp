// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern u8 lbl_802BA218[];
extern f32 lbl_8035E008;
extern f32 lbl_8035DF6C;

void fn_8005425C(void *arg0) {
    u8 *base = lbl_802BA218;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x2c;
    M2C_FIELD(arg0, s32 *, 0x2c) = 0x2b;
    M2C_FIELD(arg0, s32 *, 0x68) = 0xf;
    M2C_FIELD(arg0, s32 *, 0x5c) = 8;
    M2C_FIELD(arg0, s32 *, 0x80) = 5;
    M2C_FIELD(arg0, s32 *, 0x7c) = 0xc;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 9;
    M2C_FIELD(arg0, s32 *, 0x8c) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = base + 1036;
    M2C_FIELD(arg0, void **, 0x28) = base + 1212;
    M2C_FIELD(arg0, void **, 0x30) = base + 1728;
    M2C_FIELD(arg0, void **, 0x6c) = base + 976;
    M2C_FIELD(arg0, void **, 0x78) = base + 848;
    M2C_FIELD(arg0, void **, 0xc4) = base + 540;
    M2C_FIELD(arg0, void **, 0xc8) = base + 560;
    M2C_FIELD(arg0, s32 *, 0xcc) = 0;
    M2C_FIELD(arg0, void **, 0xf4) = base + 704;
    M2C_FIELD(arg0, s32 *, 0xfc) = 0;
    M2C_FIELD(arg0, s32 *, 0x10c) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11c) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12c) = 0;
    M2C_FIELD(arg0, f32 *, 0x130) = lbl_8035E008;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13c) = 0;
    M2C_FIELD(arg0, f32 *, 0x140) = lbl_8035DF6C;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    M2C_FIELD(arg0, s32 *, 0x14c) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15c) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, s32 *, 0x16c) = 0;
    M2C_FIELD(arg0, s32 *, 0x170) = 0;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x19c) = 0;
    M2C_FIELD(arg0, s32 *, 0x1a0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1a4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1a8) = 0;
    M2C_FIELD(arg0, f32 *, 0x1ac) = lbl_8035DF6C;
    M2C_FIELD(arg0, s32 *, 0x1b0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1b4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1b8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1bc) = 0;
    M2C_FIELD(arg0, s32 *, 0x1c0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1c4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1c8) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
