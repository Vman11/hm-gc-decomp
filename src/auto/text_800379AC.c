/* Functions from 0x800379AC to 0x80037E64, found by decomp-toolkit. */
#include "common.h"

void fn_800379AC(void) {

}

void fn_800379B0(void) {

}

void fn_80037A34(void) {

}

s32 fn_80037AA4(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0x67: return M2C_FIELD(arg0, s32 *, 0x28);
    case 0x68: return M2C_FIELD(arg0, s32 *, 0x2C);
    case 0x69: return M2C_FIELD(arg0, s32 *, 0x30);
    case 0x6A: return M2C_FIELD(arg0, s32 *, 0x34);
    case 0x6B: return M2C_FIELD(arg0, s32 *, 0x38);
    case 0x6C: return M2C_FIELD(arg0, s32 *, 0x3C);
    case 0x6D: return M2C_FIELD(arg0, s32 *, 0x40);
    case 0x6E: return M2C_FIELD(arg0, s32 *, 0x44);
    case 0x6F: return M2C_FIELD(arg0, s32 *, 0x48);
    case 0x70: return M2C_FIELD(arg0, s32 *, 0x4C);
    case 0x71: return M2C_FIELD(arg0, s32 *, 0x50);
    default: return 0;
    }
}

void fn_80037D2C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

void fn_80037D60(void *arg0) {
    extern f32 lbl_8035BFC0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8035BFC0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

