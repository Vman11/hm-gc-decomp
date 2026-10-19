/* Functions from 0x8002F118 to 0x8002F3C8, found by decomp-toolkit. */
#include "common.h"

s32 fn_8002F118(s32 arg0) {
    return arg0 + 0xC;
}

extern f32 lbl_8035B99C;
void fn_8002F120(void *arg0) {
    u8 i;

    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    M2C_FIELD(arg0, s32 *, 0x16C) = 0;
    M2C_FIELD(arg0, f32 *, 0x168) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, f32 *, 0x170) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s32 *, 0x288) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    M2C_FIELD(arg0, s32 *, 0x244) = 0;
    M2C_FIELD(arg0, s32 *, 0x23C) = 0;
    M2C_FIELD(arg0, s32 *, 0x240) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A4) = 0;
    M2C_FIELD(arg0, f32 *, 0x2A8) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x2AC) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x2B0) = 0;
    M2C_FIELD(arg0, f32 *, 0x250) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x260) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x25C) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x264) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x228) = 0;
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    M2C_FIELD(arg0, s32 *, 0x270) = 0;
    M2C_FIELD(arg0, s32 *, 0x274) = 0;
    M2C_FIELD(arg0, s32 *, 0x278) = 0;
    M2C_FIELD(arg0, f32 *, 0x27C) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x280) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 0;
    M2C_FIELD(arg0, f32 *, 0x2F4) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x290) = 0;
    M2C_FIELD(arg0, f32 *, 0x294) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x298) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x29C) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x2A0) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x28C) = 0;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x14) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x48) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, f32 *, 0x50) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, f32 *, 0x58) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x5C) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x60) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, f32 *, 0x68) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x74) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x78) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, f32 *, 0x80) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, f32 *, 0x88) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x8C) = lbl_8035B99C;
    M2C_FIELD(arg0, f32 *, 0x90) = lbl_8035B99C;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, f32 *, 0x98) = lbl_8035B99C;
    for (i = 0; i < 10; i++) {
        ((struct { u8 pad[0x200]; s32 a[10]; } *)arg0)->a[i] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, f32 *, 0x268) = lbl_8035B99C;
}

