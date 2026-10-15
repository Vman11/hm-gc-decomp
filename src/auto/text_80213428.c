/* Functions from 0x80213428 to 0x80213454, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B1E8;

void fn_80213428(void* arg0) {
    ((s32*)arg0)[0] = 0;
    ((s32*)arg0)[1] = 0;
    ((s32*)arg0)[2] = 0;
    ((s16*)arg0)[6] = 0;
    ((s16*)arg0)[7] = 0;
    ((s16*)arg0)[8] = 0;
    ((s16*)arg0)[9] = 0;
}

void fn_8021344C(s32 arg0) {
    lbl_8035B1E8 = arg0;
}
