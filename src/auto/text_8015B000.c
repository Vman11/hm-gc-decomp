/* Functions from 0x8015B000 to 0x8015B020, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035ACE8;
void fn_8015B000(void* arg0) {
    *(s32*)((u8*)arg0 + 0x6C) = 1;
    lbl_8035ACE8 = 0;
}

void fn_8015B014(void* arg0) {
    *(s32*)((u8*)arg0 + 0x6C) = 0;
}
