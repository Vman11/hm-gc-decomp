/* Functions from 0x80205764 to 0x80205790, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80365760;

void fn_80205764(s32 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *arg0 |= lbl_80365760;
        return;
    }
    *arg0 &= ~0x200;
}
