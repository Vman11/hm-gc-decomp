// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802C6D70[];
extern u8 lbl_80359350[8];

#pragma opt_propagation off
void fn_8008C094(void *arg0) {
    u8 *base = lbl_802C6D70;
    M2C_FIELD(arg0, s32 *, 0x54) = 6;
    M2C_FIELD(arg0, s32 *, 0x2c) = 6;
    M2C_FIELD(arg0, s32 *, 0x68) = 3;
    M2C_FIELD(arg0, s32 *, 0x5c) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x7c) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 2;
    M2C_FIELD(arg0, s32 *, 0x88) = 5;
    M2C_FIELD(arg0, s32 *, 0x8c) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = base + 640;
    M2C_FIELD(arg0, void **, 0x28) = base + 664;
    M2C_FIELD(arg0, void **, 0x30) = base + 736;
    M2C_FIELD(arg0, void **, 0x6c) = base + 628;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, void **, 0xc4) = lbl_80359350;
    M2C_FIELD(arg0, s32 *, 0xc8) = 0;
    M2C_FIELD(arg0, void **, 0xcc) = base + 540;
    M2C_FIELD(arg0, void **, 0xf4) = base + 564;
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
    M2C_FIELD(arg0, s32 *, 0x138) = 4;
    M2C_FIELD(arg0, s32 *, 0x13c) = 1;
}
#pragma opt_propagation reset

} /* extern "C" */
