/* Functions from 0x80112A14 to 0x80112A4C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AAE0;

void fn_80112A14(s32 arg0) {
    lbl_8035AAE0 = arg0;
}

s32 fn_80112A1C(u32 *arg0, u32 arg1) {
    if (arg0[0] != 0) {
        arg0[1] = 1;
        arg0[3] = 0;
        arg0[2] = 0;
        arg0[0] = 0;
    }
    arg0[0] = arg1;
    return 0;
}

