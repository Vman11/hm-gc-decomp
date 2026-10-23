// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802B8B30[];
extern f32 lbl_8035DAB0;

#pragma opt_propagation off
void fn_8004FE08(void *arg0) {
    u8 *base = lbl_802B8B30;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x23;
    M2C_FIELD(arg0, s32 *, 0x2c) = 0x20;
    M2C_FIELD(arg0, s32 *, 0x68) = 0xc;
    M2C_FIELD(arg0, s32 *, 0x5c) = 9;
    M2C_FIELD(arg0, s32 *, 0x80) = 5;
    M2C_FIELD(arg0, s32 *, 0x7c) = 9;
    M2C_FIELD(arg0, s32 *, 0x84) = 5;
    M2C_FIELD(arg0, s32 *, 0x88) = 10;
    M2C_FIELD(arg0, s32 *, 0x8c) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 2;
    M2C_FIELD(arg0, void **, 0x58) = base + 1124;
    M2C_FIELD(arg0, void **, 0x28) = base + 1264;
    M2C_FIELD(arg0, void **, 0x30) = base + 1648;
    M2C_FIELD(arg0, void **, 0x6c) = base + 1076;
    M2C_FIELD(arg0, void **, 0x78) = base + 892;
    M2C_FIELD(arg0, void **, 0xc4) = base + 540;
    M2C_FIELD(arg0, void **, 0xc8) = base + 560;
    M2C_FIELD(arg0, void **, 0xcc) = base + 668;
    M2C_FIELD(arg0, void **, 0xf4) = base + 728;
    M2C_FIELD(arg0, s32 *, 0xfc) = 0;
    M2C_FIELD(arg0, void **, 0x10c) = base + 1036;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12c) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13c) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    M2C_FIELD(arg0, s32 *, 0x14c) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15c) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, f32 *, 0x164) = lbl_8035DAB0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
