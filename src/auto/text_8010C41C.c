/* Functions from 0x8010C41C to 0x8010C4D0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AAB8;
void fn_8010C41C(s32* arg0) {
    extern u8 lbl_802E27F0[];
    arg0[2] = (s32)lbl_802E27F0;
    arg0[0] = 0;
    arg0[1] = 0;
}

void fn_8010C438(s32 arg0) {
    lbl_8035AAB8 = arg0;
}
