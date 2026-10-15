/* Functions from 0x80242AA4 to 0x80242AC8, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035B4A0;

void fn_80242AA4(s32* arg0) {
    extern u8 lbl_802F1AC8[];
    extern s32 lbl_8035B4A4;
    arg0[2] = (s32)lbl_802F1AC8;
    arg0[0] = 0;
    lbl_8035B4A4 = 0;
}

void fn_80242AC0(s32 arg0) {
    lbl_8035B4A0 = arg0;
}
