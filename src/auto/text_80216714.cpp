/* Functions from 0x80216714 to 0x80216738, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_803658AC;
void fn_80216714(s32 *arg0) {
    arg0[0x14] &= 0xFFFFFFFD;
}

void fn_80216724(s32 *arg0) {
    arg0[0x14] |= lbl_803658AC;
}

} /* extern "C" */
