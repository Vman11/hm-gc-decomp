/* Functions from 0x8023B710 to 0x8023B738, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B3E8;
extern s32 lbl_802F1958[];

void fn_8023B710(s32* arg0) {
    arg0[3] = (s32)lbl_802F1958;
    arg0[2] = 0;
    arg0[0] = 0;
    arg0[1] = 0;
}

void fn_8023B730(s32 arg0) {
    lbl_8035B3E8 = arg0;
}
