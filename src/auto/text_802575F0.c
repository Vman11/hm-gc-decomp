/* Functions from 0x802575F0 to 0x8025764C, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_803666B0;

void fn_802575F0(u8* p) {
    *(s32*)(p + 0xB4) = 0;
    *(s32*)(p + 0xBC) = 0;
    *(s32*)(p + 0xB8) = 0;
    *(f32*)(p + 0x50) = lbl_803666B0;
    *(f32*)(p + 0x54) = lbl_803666B0;
    *(f32*)(p + 0x58) = lbl_803666B0;
    *(f32*)(p + 0x68) = lbl_803666B0;
    *(f32*)(p + 0x6C) = lbl_803666B0;
    *(f32*)(p + 0x70) = lbl_803666B0;
    *(f32*)(p + 0x5C) = lbl_803666B0;
    *(f32*)(p + 0x60) = lbl_803666B0;
    *(f32*)(p + 0x64) = lbl_803666B0;
}
