/* Functions from 0x8003965C to 0x80039688, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035A008;
extern s32 *lbl_8035A00C;

void __ct__9C8003965CFv(s32 *arg0) {
    lbl_8035A00C = arg0;
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[3] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[4] = 0;
}

void fn_80039680(s32 arg0) {
    lbl_8035A008 = arg0;
}
