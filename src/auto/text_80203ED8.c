/* Functions from 0x80203ED8 to 0x80203EF8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B180;
void fn_80203ED8(s32 arg0) {
    lbl_8035B180 = arg0;
}

s32 fn_80203EE0(void* arg0) {
    return *(s32*)((u8*)arg0 + 0x18);
}

