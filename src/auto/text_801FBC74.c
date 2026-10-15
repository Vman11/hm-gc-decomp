/* Functions from 0x801FBC74 to 0x801FBCC4, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_803655AC;
void fn_801FBC7C(s32 *arg0) {
    *arg0 &= 0xFFFFFFBF;
}

void fn_801FBC8C(s32 *arg0) {
    *arg0 |= lbl_803655AC;
}
