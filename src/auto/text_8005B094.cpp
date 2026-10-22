// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802BC0A0[];
extern u8 lbl_80359288[8];
extern f32 lbl_8035E358;

#pragma opt_propagation off
void fn_8005B094(u8 *p) {
    u8 *base = lbl_802BC0A0;
    M2C_FIELD(p, s32 *, 0x54) = 16;
    M2C_FIELD(p, s32 *, 0x2c) = 16;
    M2C_FIELD(p, s32 *, 0x68) = 4;
    M2C_FIELD(p, s32 *, 0x5c) = 3;
    M2C_FIELD(p, s32 *, 0x80) = 1;
    M2C_FIELD(p, s32 *, 0x7c) = 0;
    M2C_FIELD(p, s32 *, 0x84) = 0;
    M2C_FIELD(p, s32 *, 0x88) = 2;
    M2C_FIELD(p, s32 *, 0x8c) = 10;
    M2C_FIELD(p, s32 *, 0x94) = 0;
    M2C_FIELD(p, void **, 0x58) = base + 664;
    M2C_FIELD(p, void **, 0x28) = base + 728;
    M2C_FIELD(p, void **, 0x30) = base + 920;
    M2C_FIELD(p, void **, 0x6c) = base + 648;
    M2C_FIELD(p, void **, 0x78) = base + 616;
    M2C_FIELD(p, void **, 0xc4) = lbl_80359288;
    M2C_FIELD(p, s32 *, 0xc8) = 0;
    M2C_FIELD(p, s32 *, 0xcc) = 0;
    M2C_FIELD(p, void **, 0xf4) = base + 540;
    M2C_FIELD(p, void **, 0xfc) = base + 576;
    M2C_FIELD(p, s32 *, 0x10c) = 0;
    M2C_FIELD(p, s32 *, 0x118) = 1;
    M2C_FIELD(p, s32 *, 0x11c) = 0;
    M2C_FIELD(p, s32 *, 0x120) = 0;
    M2C_FIELD(p, s32 *, 0x124) = 0;
    M2C_FIELD(p, s32 *, 0x128) = 0;
    M2C_FIELD(p, s32 *, 0x12c) = 0;
    M2C_FIELD(p, s32 *, 0x130) = 0;
    M2C_FIELD(p, s32 *, 0x134) = 0;
    M2C_FIELD(p, f32 *, 0x138) = lbl_8035E358;
    M2C_FIELD(p, s32 *, 0x13c) = 0;
    M2C_FIELD(p, s32 *, 0x140) = 0;
    M2C_FIELD(p, s32 *, 0x144) = 0;
    M2C_FIELD(p, f32 *, 0x148) = lbl_8035E358;
    M2C_FIELD(p, f32 *, 0x14c) = lbl_8035E358;
    M2C_FIELD(p, s32 *, 0x150) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
