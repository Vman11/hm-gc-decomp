/* Functions from 0x8020AD80 to 0x8020AE14, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B1A8;
void fn_8020AD80(s32 arg0) {
    lbl_8035B1A8 = arg0;
}

u8 fn_8020AD88(u8 *arg0, u8 *arg1, u8 *arg2) {
    if (arg1[0] == arg0[4] && arg1[1] == arg0[5]) {
        s32 ret = 0;
        if (arg2[0] == arg0[6] && arg2[1] == arg0[7] && arg2[2] == arg0[8] && arg2[3] == arg0[9]) {
            ret = 1;
        }
        return ret;
    }
    return 0;
}

s32 fn_8020AE00(void) {
    return 4;
}

s32 fn_8020AE08(void) {
    return 0x8000;
}

