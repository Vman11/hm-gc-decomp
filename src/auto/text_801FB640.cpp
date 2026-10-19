/* Functions from 0x801FB640 to 0x801FB680, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B118;
void fn_801FB640(s32 arg0) {
    lbl_8035B118 = arg0;
}

void fn_801FB648(s32* arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
}

void fn_801FB668(s32 *arg0) {
    *arg0 = 0;
}

void fn_801FB674(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

} /* extern "C" */
