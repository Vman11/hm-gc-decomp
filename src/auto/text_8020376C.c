/* Functions from 0x8020376C to 0x8020379C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B178;

void __ct__9C8020376CFv(u32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
    ((u16 *)arg0)[0x0C] = 0;
    ((u8 *)arg0)[0x1A] = 0;
}

void fn_80203794(s32 arg0) {
    lbl_8035B178 = arg0;
}
