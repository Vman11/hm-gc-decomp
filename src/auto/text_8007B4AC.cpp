// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern u8 lbl_802C25B8[];
extern u8 lbl_803592C8[8];
extern f32 lbl_8035F76C;

void fn_8007B4AC(void *arg0) {
    u8 *base = lbl_802C25B8;
    M2C_FIELD(arg0, s32 *, 0x2c) = M2C_FIELD(arg0, s32 *, 0x54) = 0xe;
    M2C_FIELD(arg0, s32 *, 0x68) = 4;
    M2C_FIELD(arg0, s32 *, 0x5c) = 2;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x7c) = 1;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 1;
    M2C_FIELD(arg0, s32 *, 0x8c) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = base + 616;
    M2C_FIELD(arg0, void **, 0x28) = base + 672;
    M2C_FIELD(arg0, void **, 0x30) = base + 840;
    M2C_FIELD(arg0, void **, 0x6c) = base + 600;
    M2C_FIELD(arg0, void **, 0x78) = base + 568;
    M2C_FIELD(arg0, void **, 0xc4) = lbl_803592C8;
    M2C_FIELD(arg0, void **, 0xc8) = base + 540;
    M2C_FIELD(arg0, s32 *, 0xcc) = 0;
    M2C_FIELD(arg0, void **, 0xf4) = base + 552;
    M2C_FIELD(arg0, s32 *, 0xfc) = 0;
    M2C_FIELD(arg0, s32 *, 0x10c) = 0;
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
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, s32 *, 0x17c) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 1;
    M2C_FIELD(arg0, s32 *, 0x188) = 1;
    M2C_FIELD(arg0, s32 *, 0x18c) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, f32 *, 0x198) = lbl_8035F76C;
    M2C_FIELD(arg0, f32 *, 0x19c) = lbl_8035F76C;
    M2C_FIELD(arg0, f32 *, 0x1a0) = lbl_8035F76C;
    M2C_FIELD(arg0, f32 *, 0x1a4) = lbl_8035F76C;
    M2C_FIELD(arg0, f32 *, 0x1a8) = lbl_8035F76C;
    M2C_FIELD(arg0, s32 *, 0x1ac) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
