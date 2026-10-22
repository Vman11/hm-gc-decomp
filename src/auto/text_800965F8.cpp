/* Functions from 0x800965F8 to 0x80096710, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802CBE48[];
extern u8 lbl_803593B0[8];
extern f32 lbl_803610A0;

#pragma opt_propagation off
void fn_800965F8(u8 *p) {
    u8 *base = lbl_802CBE48;
    M2C_FIELD(p, s32 *, 0x54) = 8;
    M2C_FIELD(p, s32 *, 0x2c) = 8;
    M2C_FIELD(p, s32 *, 0x68) = 5;
    M2C_FIELD(p, s32 *, 0x5c) = 3;
    M2C_FIELD(p, s32 *, 0x80) = 1;
    M2C_FIELD(p, s32 *, 0x7c) = 0;
    M2C_FIELD(p, s32 *, 0x84) = 0;
    M2C_FIELD(p, s32 *, 0x88) = 0;
    M2C_FIELD(p, s32 *, 0x8c) = 0;
    M2C_FIELD(p, s32 *, 0x94) = 0;
    M2C_FIELD(p, void **, 0x58) = base + 608;
    M2C_FIELD(p, void **, 0x28) = base + 640;
    M2C_FIELD(p, void **, 0x30) = base + 736;
    M2C_FIELD(p, void **, 0x6c) = base + 588;
    M2C_FIELD(p, void **, 0x78) = base + 540;
    M2C_FIELD(p, void **, 0xc4) = lbl_803593B0;
    M2C_FIELD(p, s32 *, 0xc8) = 0;
    M2C_FIELD(p, s32 *, 0xcc) = 0;
    M2C_FIELD(p, s32 *, 0xf4) = 0;
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
    M2C_FIELD(p, s32 *, 0x13c) = 0;
    M2C_FIELD(p, s32 *, 0x140) = 0;
    M2C_FIELD(p, s32 *, 0x144) = 0;
    M2C_FIELD(p, s32 *, 0x148) = 0;
    M2C_FIELD(p, s32 *, 0x14c) = 0;
    M2C_FIELD(p, s32 *, 0x150) = 0;
    M2C_FIELD(p, s32 *, 0x154) = 0;
    M2C_FIELD(p, s32 *, 0x158) = 0;
    M2C_FIELD(p, f32 *, 0x15c) = lbl_803610A0;
    M2C_FIELD(p, f32 *, 0x160) = lbl_803610A0;
    M2C_FIELD(p, f32 *, 0x164) = lbl_803610A0;
    M2C_FIELD(p, f32 *, 0x168) = lbl_803610A0;
    M2C_FIELD(p, f32 *, 0x16c) = lbl_803610A0;
    M2C_FIELD(p, f32 *, 0x170) = lbl_803610A0;
    M2C_FIELD(p, f32 *, 0x174) = lbl_803610A0;
    M2C_FIELD(p, s32 *, 0x178) = 0;
    M2C_FIELD(p, f32 *, 0x17c) = lbl_803610A0;
    M2C_FIELD(p, s32 *, 0x180) = 1;
}
#pragma opt_propagation reset

} /* extern "C" */
