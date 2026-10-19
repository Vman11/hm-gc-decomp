/* Functions from 0x8023D0CC to 0x8023D104, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_803660B8;

extern s32 lbl_8035B438;

extern s32 lbl_8035B438;

void __ct__9C8023D0CCFv(void* arg0) {
    *(s32*)((u8*)arg0 + 0x0) = 0;
    *(s32*)((u8*)arg0 + 0x4) = 0;
    *(s32*)((u8*)arg0 + 0x8) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(s32*)((u8*)arg0 + 0x18) = 0;
    *(s32*)((u8*)arg0 + 0x20) = 0;
    *(s32*)((u8*)arg0 + 0x24) = 0;
    *(f32*)((u8*)arg0 + 0x14) = lbl_803660B8;
    *(s32*)((u8*)arg0 + 0x28) = 0;
}

void fn_8023D0FC(s32 arg0) {
    lbl_8035B438 = arg0;
}
