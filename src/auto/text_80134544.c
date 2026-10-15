/* Functions from 0x80134544 to 0x80134570, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035AC20;
extern u8 lbl_802E5030[];
extern u8 lbl_802E5030[];

void fn_80134544(void* arg0) {
    u8* p = (u8*)arg0;
    *(u8**)(p + 0xC) = lbl_802E5030;
    *(u16*)(p + 0) = 0;
    p[2] = 0;
    *(u32*)(p + 4) = 0;
    *(u32*)(p + 8) = 0;
}

void fn_80134568(s32 arg0) {
    lbl_8035AC20 = arg0;
}
