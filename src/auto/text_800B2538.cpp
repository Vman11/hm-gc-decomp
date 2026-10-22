// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern u8 lbl_802D6D40[];
extern u8 *lbl_803594E8[2];
extern f32 lbl_80362F88;

void fn_800B2538(u8 *p)
{
    u8 *base = lbl_802D6D40;

    *(s32 *)(p + 0x54) = 11;
    *(s32 *)(p + 0x2c) = 11;
    *(s32 *)(p + 0x68) = 6;
    *(s32 *)(p + 0x5c) = 2;
    *(s32 *)(p + 0x80) = 2;
    *(s32 *)(p + 0x7c) = 1;
    *(s32 *)(p + 0x84) = 10;
    *(s32 *)(p + 0x88) = 0;
    *(s32 *)(p + 0x8c) = 0;
    *(s32 *)(p + 0x94) = 3;
    *(u8 **)(p + 0x58) = base + 788;
    *(u8 **)(p + 0x28) = base + 832;
    *(u8 **)(p + 0x30) = base + 964;
    *(u8 **)(p + 0x6c) = base + 764;
    *(u8 **)(p + 0x78) = base + 672;
    *(u8 ***)(p + 0xc4) = lbl_803594E8;
    *(u8 **)(p + 200) = base + 540;
    *(u8 **)(p + 0xcc) = base + 552;
    *(s32 *)(p + 0xf4) = 0;
    *(s32 *)(p + 0xfc) = 0;
    *(u8 **)(p + 0x10c) = base + 704;
    *(s32 *)(p + 0x118) = 0;
    *(s32 *)(p + 0x11c) = 0;
    *(s32 *)(p + 0x120) = 0;
    *(s32 *)(p + 0x124) = 0;
    *(s32 *)(p + 0x128) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 0x130) = 0;
    *(s32 *)(p + 0x134) = 0;
    *(s32 *)(p + 0x138) = 0;
    *(s32 *)(p + 0x13c) = 0;
    *(s32 *)(p + 0x140) = 0;
    *(s32 *)(p + 0x144) = 0;
    *(s32 *)(p + 0x148) = 0;
    *(s32 *)(p + 0x14c) = 0;
    *(s32 *)(p + 0x150) = 0;
    *(s32 *)(p + 0x154) = 0;
    *(s32 *)(p + 0x158) = 0;
    *(s32 *)(p + 0x15c) = 0;
    *(s32 *)(p + 0x160) = 0;
    *(s32 *)(p + 0x164) = 0;
    *(s32 *)(p + 0x174) = 1;
    *(f32 *)(p + 0x178) = lbl_80362F88;
    *(s32 *)(p + 0x17c) = 1;
    *(f32 *)(p + 0x180) = lbl_80362F88;
    *(s32 *)(p + 0x184) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
