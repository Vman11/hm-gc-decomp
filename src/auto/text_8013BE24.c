/* Functions from 0x8013BE24 to 0x8013BE6C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC60;
void fn_8013BE58(s32 arg0) {
    lbl_8035AC60 = arg0;
}

extern u8 lbl_802E58B0[];
void fn_8013BE60(void* arg0) {
    *(u32*)((u8*)arg0 + 0x14) = 0;
}

