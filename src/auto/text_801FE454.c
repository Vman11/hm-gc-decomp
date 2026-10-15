/* Functions from 0x801FE454 to 0x801FE48C, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035B158;
extern s32 lbl_8035B15C;

void fn_801FE454(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_r0 = 1 << arg1;
    temp_r4 = temp_r5 - 1;
    *(s32 *)((u8 *)arg0 + 0x10) = temp_r4;
    temp_r0 = ~temp_r0;
    lbl_8035B15C &= temp_r0;
    lbl_8035B158 &= temp_r0 >> 31;
}
