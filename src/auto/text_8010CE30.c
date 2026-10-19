/* Functions from 0x8010CE30 to 0x8010CE64, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AAC0;

void __ct__9C8010CE30Fv(void *arg0) {
    extern u8 lbl_802E28D8[];
    *(void **)((char *)arg0 + 0x18) = lbl_802E28D8;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
}

void fn_8010CE5C(s32 arg0) {
    lbl_8035AAC0 = arg0;
}
