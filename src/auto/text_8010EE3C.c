/* Functions from 0x8010EE3C to 0x8010EE60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AAD0;
extern u8 lbl_802E29F8[];

void fn_8010EE3C(s32 *arg0) {
    arg0[2] = (s32)lbl_802E29F8;
    arg0[0] = 0;
    arg0[1] = 0;
}

void fn_8010EE58(s32 arg0) {
    lbl_8035AAD0 = arg0;
}
