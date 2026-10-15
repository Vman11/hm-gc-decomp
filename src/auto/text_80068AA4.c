/* Functions from 0x80068AA4 to 0x80068AC4, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8035E758;

void fn_80068AA4(void* arg0) {
    u8* p = *(u8**)((u8*)arg0 + 0x9C);
    *(f32*)(p + 0x13C) = lbl_8035E758;
    *(f32*)(p + 0x140) = lbl_8035E758;
    *(f32*)(p + 0x144) = lbl_8035E758;
}
