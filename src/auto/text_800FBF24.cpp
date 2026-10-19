/* Functions from 0x800FBF24 to 0x800FBF5C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035AA18;
void fn_800FBF24(s32* arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
}

void fn_800FBF3C(s32 arg0) {
    lbl_8035AA18 = arg0;
}

void fn_800FBF44(s32* arg0) {
    arg0[0] = 0;
    ((s16*)arg0)[2] = 0;
    ((s16*)arg0)[3] = 0;
}

void fn_800FBF58(void) {

}

} /* extern "C" */
