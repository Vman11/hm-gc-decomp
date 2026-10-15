/* Functions from 0x801FA118 to 0x801FA224, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B110;
void fn_801FA118(s32 arg0) {
    lbl_8035B110 = arg0;
}

void fn_801FA138(void) {

}

void fn_801FA13C(void) {

}

void fn_801FA198(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x80) = farg0;
    M2C_FIELD(arg0, f32 *, 0x84) = farg1;
}

