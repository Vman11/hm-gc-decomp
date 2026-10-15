/* Functions from 0x80255AD0 to 0x80255B0C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B694;

void fn_80255AD0(void) {
    lbl_8035B694 = 0;
}

void fn_80255ADC(s32 *arg0, s32 *arg1) {
    if ((u32)lbl_8035B694 != 0) {
        lbl_8035B694 = 0;
    }
    arg0[0] = arg1[1];
    arg0[1] = arg1[3];
    lbl_8035B694 = arg1[2];
}

