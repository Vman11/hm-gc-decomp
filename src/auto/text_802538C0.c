/* Functions from 0x802538C0 to 0x80253900, found by decomp-toolkit. */
#include "common.h"

void fn_802538C0(void **arg0) {
    extern u8 lbl_802AFC68[];
    extern u8 lbl_802F236C[];
    arg0[0] = lbl_802AFC68;
    arg0[0] = lbl_802F236C;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = (void *)1;
}

void fn_802538F8(s32 arg0) {
    extern s32 lbl_8035B638;
    lbl_8035B638 = arg0;
}
