/* Functions from 0x80108CF0 to 0x80108D14, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AA78;

void __ct__9C80108CF0Fv(s32* arg0) {
    extern u8 lbl_802E2518[];
    arg0[2] = (s32)lbl_802E2518;
    arg0[0] = 0;
    arg0[1] = 0;
}

void fn_80108D0C(s32 arg0) {
    lbl_8035AA78 = arg0;
}
