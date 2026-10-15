/* Functions from 0x80131C18 to 0x80131C58, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC00;
void fn_80131C18(s32 arg0) {
    lbl_8035AC00 = arg0;
}

void fn_80131C20(void* arg0) { ((s32*)arg0)[1] = 0; }

