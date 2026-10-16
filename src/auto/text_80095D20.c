/* Functions from 0x80095D20 to 0x80095DD4, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802CBB00[];
extern u8 lbl_803593A8[4];
extern f32 lbl_80361010;
extern f32 lbl_8036103C;

void fn_80095D20(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = 6;
    M2C_FIELD(arg0, s32 *, 0x2C) = 6;
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 2;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = lbl_802CBB00 + 0x238;
    M2C_FIELD(arg0, void **, 0x28) = lbl_802CBB00 + 0x250;
    M2C_FIELD(arg0, void **, 0x30) = lbl_802CBB00 + 0x298;
    M2C_FIELD(arg0, void **, 0x6C) = lbl_803593A8;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, void **, 0xF4) = lbl_802CBB00 + 0x21C;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 1;
    M2C_FIELD(arg0, f32 *, 0x128) = lbl_8036103C;
    M2C_FIELD(arg0, f32 *, 0x12C) = lbl_80361010;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0xA;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
}
