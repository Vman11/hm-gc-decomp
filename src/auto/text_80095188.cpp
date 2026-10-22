/* Functions from 0x80095188 to 0x8009525C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802CB720[];
extern u8 lbl_803593A0[8];
extern f32 lbl_80360F84, lbl_80360FA8, lbl_80360FB0;

#pragma opt_propagation off
void fn_80095188(void *arg0) {
    u8 *data = lbl_802CB720;
    M2C_FIELD(arg0, s32 *, 0x54) = 9;
    M2C_FIELD(arg0, s32 *, 0x2c) = 9;
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, s32 *, 0x5c) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x7c) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 2;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8c) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = data + 0x244;
    M2C_FIELD(arg0, void **, 0x28) = data + 0x268;
    M2C_FIELD(arg0, void **, 0x30) = data + 0x2D4;
    M2C_FIELD(arg0, void **, 0x6c) = lbl_803593A0;
    M2C_FIELD(arg0, void **, 0x78) = data + 0x234;
    M2C_FIELD(arg0, s32 *, 0xc4) = 0;
    M2C_FIELD(arg0, s32 *, 0xc8) = 0;
    M2C_FIELD(arg0, void **, 0xcc) = data + 0x21C;
    M2C_FIELD(arg0, s32 *, 0xf4) = 0;
    M2C_FIELD(arg0, s32 *, 0xfc) = 0;
    M2C_FIELD(arg0, s32 *, 0x10c) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11c) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 1;
    M2C_FIELD(arg0, f32 *, 0x124) = lbl_80360FB0;
    M2C_FIELD(arg0, f32 *, 0x128) = lbl_80360F84;
    M2C_FIELD(arg0, s32 *, 0x12c) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13c) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, f32 *, 0x144) = lbl_80360FA8;
    M2C_FIELD(arg0, f32 *, 0x148) = lbl_80360F84;
    M2C_FIELD(arg0, s32 *, 0x14c) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
