/* Functions from 0x8003A978 to 0x8003A9AC, found by decomp-toolkit. */
#include "common.h"

extern void* lbl_8035A03C;
extern f32 lbl_8035C0E0;
extern s32 lbl_8035A038;

void fn_8003A978(void* arg0) {
    lbl_8035A03C = arg0;
    *(s32*)((u8*)arg0 + 0x18) = 0;
    *(s32*)((u8*)arg0 + 0x8) = 0;
    *(s32*)((u8*)arg0 + 0x30) = 0;
    *(s32*)((u8*)arg0 + 0x20) = 0;
    *(s32*)((u8*)arg0 + 0x30) = 0;
    *(f32*)((u8*)arg0 + 0x1C) = lbl_8035C0E0;
    *(s32*)((u8*)arg0 + 0x4) = 0;
}

void fn_8003A9A4(s32 arg0) {
    lbl_8035A038 = arg0;
}
