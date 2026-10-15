/* Functions from 0x8017DE50 to 0x8017DEA8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035ADD0;
s32 fn_8017DE88(void* arg0) {
    return *(s32*)((char*)arg0 + 0x230);
}

s32 fn_8017DE90(s32 *arg0) {
    return *arg0;
}

s32 fn_8017DE98(void) {
    return lbl_8035ADD0;
}

void fn_8017DEA0(s32* arg0, s32 arg1) {
    arg0[2] = arg1;
}

