/* Functions from 0x8018F358 to 0x8018F380, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035AE50;
void __ct__9C8018F358Fv(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
}

void fn_8018F368(s32 arg0) {
    lbl_8035AE50 = arg0;
}

void fn_8018F370(s32 *arg0) {
    arg0[1]--;
}

} /* extern "C" */
