/* Functions from 0x8021EFA8 to 0x8021EFF4, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B258;
extern s32 lbl_8035B25C;
f32 fn_8021EFA8(f32 *arg0, f32 *arg1) {
    return arg0[3] + (arg1[0] * arg0[0] + arg1[1] * arg0[1] + arg1[2] * arg0[2]);
}

void fn_8021EFD8(void) {
    lbl_8035B25C = 0;
}

void fn_8021EFE4(s32 arg0) {
    lbl_8035B258 = arg0;
}

s32 fn_8021EFEC(void) {
    return 0;
}

