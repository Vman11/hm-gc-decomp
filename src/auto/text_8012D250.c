/* Functions from 0x8012D250 to 0x8012D280, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80363E98;

void fn_8012D250(void* arg0) {
    *(u8*)arg0 = 0;
    *(s32*)((u8*)arg0 + 0x8) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(s32*)((u8*)arg0 + 0x10) = 0;
    *(s32*)((u8*)arg0 + 0x14) = 0;
    *(s32*)((u8*)arg0 + 0x18) = 0;
    *(f32*)((u8*)arg0 + 0x1C) = lbl_80363E98;
    *(f32*)((u8*)arg0 + 0x20) = lbl_80363E98;
}
