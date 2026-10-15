/* Functions from 0x80109020 to 0x8010904C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AA80;
void fn_80109020(s32* arg0) {
    extern u8 lbl_802E2528[];
    arg0[2] = (s32)lbl_802E2528;
    arg0[0] = 0;
    arg0[1] = 0;
}

void fn_8010903C(s32 arg0) {
    lbl_8035AA80 = arg0;
}

extern s32 lbl_8035AA88;
void fn_80109044(s32 arg0) {
    lbl_8035AA88 = arg0;
}

