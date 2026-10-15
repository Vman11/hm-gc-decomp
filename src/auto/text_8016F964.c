/* Functions from 0x8016F964 to 0x8016F9A0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AD30;

extern s32 lbl_8035AD30;

void fn_8016F964(u8* arg0) {
    *(s16*)(arg0 + 0x0) = 0;
    *(s32*)(arg0 + 0x4) = 0;
    *(s16*)(arg0 + 0x2) = 0;
    *(s16*)(arg0 + 0x10) = 0;
    *(s16*)(arg0 + 0x12) = 0;
    *(s16*)(arg0 + 0x14) = 1;
    *(s16*)(arg0 + 0x16) = 1;
    *(s16*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x8) = 0;
    *(s32*)(arg0 + 0xc) = 0;
}

void fn_8016F998(s32 arg0) {
    extern s32 lbl_8035AD30;
    lbl_8035AD30 = arg0;
}
