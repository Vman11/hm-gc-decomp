/* Functions from 0x8010B8F8 to 0x8010B928, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AAA8;
extern s32 lbl_8035AAA4;
extern s32 lbl_8035AAA0;

void fn_8010B8F8(s32* arg0) {
    arg0[0] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    ((s16*)arg0)[8] = 0;
    ((s16*)arg0)[9] = 0;
    arg0[1] = 0;
    lbl_8035AAA4 = 0;
    lbl_8035AAA0 = 0;
}

void fn_8010B920(s32 arg0) {
    lbl_8035AAA8 = arg0;
}
