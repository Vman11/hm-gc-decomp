/* Functions from 0x801E32DC to 0x801E337C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B070;

void __ct__9C801E32DCFv(void *arg0) {
    extern char lbl_802ED7A0[];
    extern f32 lbl_803652D4;
    extern f32 lbl_803652D8;
    *(void **)((u8 *)arg0 + 0x78) = lbl_802ED7A0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x2c) = 0;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x4c) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(s32 *)((u8 *)arg0 + 0x5c) = 0;
    *(s32 *)((u8 *)arg0 + 0x60) = 0;
    *(s32 *)((u8 *)arg0 + 0x64) = 0;
    *(s32 *)((u8 *)arg0 + 0x70) = 0;
    *(s32 *)((u8 *)arg0 + 0x74) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 30;
    *(f32 *)((u8 *)arg0 + 12) = *(f32 *)((u8 *)arg0 + 8) = lbl_803652D4;
    *(s32 *)((u8 *)arg0 + 0x1c) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3c) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x68) = 0;
    *(s32 *)((u8 *)arg0 + 0x6c) = 0;
    *(s32 *)((u8 *)arg0 + 0x0) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(f32 *)((u8 *)arg0 + 0x10) = lbl_803652D8;
}

void fn_801E3374(s32 arg0) {
    lbl_8035B070 = arg0;
}

} /* extern "C" */
