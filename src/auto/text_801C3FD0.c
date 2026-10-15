/* Functions from 0x801C3FD0 to 0x801C404C, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035AFDC;
extern u8 lbl_802EBD10[16];
extern f32 lbl_80364FD8;
extern f32 lbl_80364FDC;
extern f32 lbl_80364FE4;
extern u8 lbl_802EBD10[16];
extern f32 lbl_80364FD8;
extern f32 lbl_80364FDC;
extern f32 lbl_80364FE4;

void fn_801C3FD0(void *arg0) {
    *(void **)((char *)arg0 + 0x70) = &lbl_802EBD10;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x64) = 0;
    *(s32 *)((char *)arg0 + 0x4C) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x60) = 0;
    *(s32 *)((char *)arg0 + 0x50) = 0;
    *(s32 *)((char *)arg0 + 0x54) = 0;
    *(f32 *)((char *)arg0 + 0x58) = lbl_80364FD8;
    *(f32 *)((char *)arg0 + 0x5C) = lbl_80364FE4;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x6C) = 0;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(f32 *)((char *)arg0 + 0x48) = lbl_80364FDC;
}

void fn_801C4044(s32 arg0) {
    lbl_8035AFDC = arg0;
}
