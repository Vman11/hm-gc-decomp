/* Functions from 0x801AAD7C to 0x801AADCC, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80364E9C;
extern f32 lbl_80364EA0;
extern f32 lbl_80364EA4;

void fn_801AAD7C(u8* arg0) {
    *(s32*)(arg0 + 0x8) = 0;
    *(s32*)(arg0 + 0x0) = 0;
    *(s32*)(arg0 + 0x4) = 0;
    *(s32*)(arg0 + 0xC) = 0;
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x8) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(f32*)(arg0 + 0x110) = lbl_80364E9C;
    *(f32*)(arg0 + 0x114) = lbl_80364E9C;
    *(f32*)(arg0 + 0x118) = lbl_80364EA0;
    *(f32*)(arg0 + 0x11C) = lbl_80364EA4;
    *(s32*)(arg0 + 0x1C) = 0;
    *(s32*)(arg0 + 0x20) = 0;
}
