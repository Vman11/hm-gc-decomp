// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern u8 lbl_802D3A50[];
extern u8 lbl_803594B8[8];
extern f32 lbl_80362878;

void fn_800AE4AC(void *arg0) {
    u8 *base = lbl_802D3A50;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x38;
    M2C_FIELD(arg0, s32 *, 0x2c) = 0x36;
    M2C_FIELD(arg0, s32 *, 0x68) = 0xb;
    M2C_FIELD(arg0, s32 *, 0x5c) = 7;
    M2C_FIELD(arg0, s32 *, 0x80) = 3;
    M2C_FIELD(arg0, s32 *, 0x7c) = 0x19;
    M2C_FIELD(arg0, s32 *, 0x84) = 0x14;
    M2C_FIELD(arg0, s32 *, 0x88) = 9;
    M2C_FIELD(arg0, s32 *, 0x8c) = 1;
    M2C_FIELD(arg0, s32 *, 0x94) = 4;
    M2C_FIELD(arg0, void **, 0x58) = base + 1472;
    M2C_FIELD(arg0, void **, 0x28) = base + 1696;
    M2C_FIELD(arg0, void **, 0x30) = base + 2344;
    M2C_FIELD(arg0, void **, 0x6c) = base + 1428;
    M2C_FIELD(arg0, void **, 0x78) = base + 1236;
    M2C_FIELD(arg0, void **, 0xc4) = base + 540;
    M2C_FIELD(arg0, void **, 0xc8) = base + 552;
    M2C_FIELD(arg0, void **, 0xcc) = base + 852;
    M2C_FIELD(arg0, void **, 0xf4) = base + 1092;
    M2C_FIELD(arg0, void **, 0xfc) = lbl_803594B8;
    M2C_FIELD(arg0, void **, 0x10c) = base + 1348;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11c) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12c) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13c) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = -1;
    M2C_FIELD(arg0, s32 *, 0x14c) = -1;
    M2C_FIELD(arg0, f32 *, 0x150) = lbl_80362878;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15c) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, s32 *, 0x16c) = 0;
    M2C_FIELD(arg0, s32 *, 0x170) = 0;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, s32 *, 0x17c) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0x18c) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
