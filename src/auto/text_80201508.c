/* Functions from 0x80201508 to 0x80201534, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B170;
extern s32 lbl_8035B170;

void fn_80201508(u8 *arg0) {
    *(u32 *)(arg0 + 0x0) = 0;
    *(u32 *)(arg0 + 0x4) = 0;
    *(u16 *)(arg0 + 0x8) = 0;
    *(u32 *)(arg0 + 0xC) = 0;
    *(u32 *)(arg0 + 0x10) = 1;
    *(u32 *)(arg0 + 0x18) = 0;
}

void fn_8020152C(s32 arg0) {
    lbl_8035B170 = arg0;
}
