/* Functions from 0x80140008 to 0x80140030, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80364358;

void fn_80140008(void* arg0) {
    *(s32*)((u8*)arg0 + 0x0) = 0;
    *(s32*)((u8*)arg0 + 0x8) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(f32*)((u8*)arg0 + 0x4) = lbl_80364358;
    *(s32*)((u8*)arg0 + 0x10) = 0;
    *(s32*)((u8*)arg0 + 0x14) = 0;
    *(s32*)((u8*)arg0 + 0x18) = 0;
}
