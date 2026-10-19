/* Functions from 0x8013BE24 to 0x8013BE6C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802E58B0[];

extern s32 lbl_8035AC60;
void fn_8013BE24(void* arg0) {
    u8* p = (u8*)arg0;
    *(u8**)(p + 0x18) = lbl_802E58B0;
    *(u16*)(p + 2) = 0;
    *(u16*)(p + 4) = 0;
    *(u16*)(p + 0) = 0;
    p[6] = 0;
    *(u32*)(p + 8) = 0;
    *(u32*)(p + 0xC) = 0;
    *(u32*)(p + 0x10) = 0;
    *(u32*)(p + 0x14) = 0;
}

void fn_8013BE58(s32 arg0) {
    lbl_8035AC60 = arg0;
}

extern u8 lbl_802E58B0[];
void fn_8013BE60(void* arg0) {
    *(u32*)((u8*)arg0 + 0x14) = 0;
}

} /* extern "C" */
