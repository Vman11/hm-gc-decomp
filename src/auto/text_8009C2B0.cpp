/* Functions from 0x8009C2B0 to 0x8009C3AC, found by decomp-toolkit. */
#include "common.h"

/* Functions from 0x8009C2B0 to 0x8009C3AC, found by decomp-toolkit. */

extern "C" {

extern u8 lbl_802CD6C8[];
extern f32 lbl_80361574;

#pragma opt_propagation off
void fn_8009C2B0(void *arg0) {
    u8 *data = lbl_802CD6C8;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x1A;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x1A;
    M2C_FIELD(arg0, s32 *, 0x68) = 4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, void **, 0x58) = data + 0x22C;
    M2C_FIELD(arg0, void **, 0x28) = data + 0x294;
    M2C_FIELD(arg0, void **, 0x30) = data + 0x3CC;
    M2C_FIELD(arg0, void **, 0x6C) = data + 0x21C;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 1;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D8) = 1;
    M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
    M2C_FIELD(arg0, f32 *, 0x2E0) = lbl_80361574;
    M2C_FIELD(arg0, f32 *, 0x2E4) = lbl_80361574;
    M2C_FIELD(arg0, s32 *, 0x308) = 0;
    M2C_FIELD(arg0, s32 *, 0x30C) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
