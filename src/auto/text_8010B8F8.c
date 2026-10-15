/* Functions from 0x8010B8F8 to 0x8010B928, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AAA8;
extern s32 lbl_8035AAA4;
extern s32 lbl_8035AAA0;

void fn_8010B8F8(void *arg0) {
    u8 *bytes = (u8 *)arg0;
    *(u32 *)(bytes + 0x0) = 0;
    *(u32 *)(bytes + 0x8) = 0;
    *(u32 *)(bytes + 0xC) = 0;
    *(u16 *)(bytes + 0x10) = 0;
    *(u16 *)(bytes + 0x12) = 0;
    *(u32 *)(bytes + 0x4) = 0;
    lbl_8035AAA4 = 0;
    lbl_8035AAA0 = 0;
}

void fn_8010B920(s32 arg0) {
    lbl_8035AAA8 = arg0;
}
