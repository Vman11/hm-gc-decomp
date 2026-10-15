/* Functions from 0x8021CA10 to 0x8021CC4C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B250;
void fn_8021CA10(void **arg0) {
    extern u8 lbl_802F03A0[];
    extern u8 lbl_802F0388[];
    arg0[0] = lbl_802F03A0;
    arg0[0] = lbl_802F0388;
}

void fn_8021CA2C(s32 arg0) {
    lbl_8035B250 = arg0;
}
