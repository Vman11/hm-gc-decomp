/* Functions from 0x80068F50 to 0x80068F98, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802BD300[];
extern f32 lbl_8035E758;

void fn_80068F50(void* arg0) {
    u8* p = (u8*)arg0;
    *(s32*)(p + 0x184) = 0;
    *(f32*)(p + 0x16C) = lbl_8035E758;
    *(f32*)(p + 0x170) = lbl_8035E758;
    *(s32*)(p + 0x174) = 0;
    *(s32*)(p + 0x178) = 0;
    *(s32*)(p + 0x17C) = 0;
    *(s32*)(p + 0x1A0) = 0;
    *(f32*)(p + 0x1A4) = lbl_8035E758;
    *(s32*)(p + 0x198) = 0;
    *(s32*)(p + 0x1AC) = 0;
    *(void**)(p + 0x1B0) = lbl_802BD300;
}
