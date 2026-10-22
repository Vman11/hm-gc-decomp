// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802D5978[];
extern u8 lbl_803594D0[8];

#pragma opt_propagation off
void fn_800B01D8(u8 *p) {
    u8 *base = lbl_802D5978;
    M2C_FIELD(p, s32 *, 0x54) = 14;
    M2C_FIELD(p, s32 *, 0x2c) = 14;
    M2C_FIELD(p, s32 *, 0x68) = 4;
    M2C_FIELD(p, s32 *, 0x5c) = 3;
    M2C_FIELD(p, s32 *, 0x80) = 1;
    M2C_FIELD(p, s32 *, 0x7c) = 4;
    M2C_FIELD(p, s32 *, 0x84) = 4;
    M2C_FIELD(p, s32 *, 0x88) = 1;
    M2C_FIELD(p, s32 *, 0x8c) = 0;
    M2C_FIELD(p, s32 *, 0x94) = 0;
    M2C_FIELD(p, void **, 0x58) = base + 720;
    M2C_FIELD(p, void **, 0x28) = base + 776;
    M2C_FIELD(p, void **, 0x30) = base + 944;
    M2C_FIELD(p, void **, 0x6c) = base + 704;
    M2C_FIELD(p, void **, 0x78) = base + 656;
    M2C_FIELD(p, void **, 0xc4) = lbl_803594D0;
    M2C_FIELD(p, void **, 0xc8) = base + 540;
    M2C_FIELD(p, void **, 0xcc) = base + 588;
    M2C_FIELD(p, void **, 0xf4) = base + 636;
    M2C_FIELD(p, s32 *, 0xfc) = 0;
    M2C_FIELD(p, s32 *, 0x10c) = 0;
    M2C_FIELD(p, s32 *, 0x118) = 0;
    M2C_FIELD(p, s32 *, 0x11c) = 0;
    M2C_FIELD(p, s32 *, 0x120) = 0;
    M2C_FIELD(p, s32 *, 0x124) = 0;
    M2C_FIELD(p, s32 *, 0x128) = 0;
    M2C_FIELD(p, s32 *, 0x12c) = 0;
    M2C_FIELD(p, s32 *, 0x130) = 0;
    M2C_FIELD(p, s32 *, 0x134) = 0;
    M2C_FIELD(p, s32 *, 0x138) = 0;
    M2C_FIELD(p, s32 *, 0x13c) = 1;
}
#pragma opt_propagation reset

} /* extern "C" */
