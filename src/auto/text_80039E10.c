/* Functions from 0x80039E10 to 0x80039E48, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035A018;
extern void *lbl_8035A01C;
extern f32 lbl_8035C060;

void __ct__9C80039E10Fv(void *arg0) {
    lbl_8035A01C = arg0;
    *(s32 *)((u8 *)arg0 + 0x00) = 0;
    *(s32 *)((u8 *)arg0 + 0x04) = 0;
    *(s32 *)((u8 *)arg0 + 0x08) = 0;
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(f32 *)((u8 *)arg0 + 0x14) = lbl_8035C060;
    *(s32 *)((u8 *)arg0 + 0x1C) = 1;
}

void fn_80039E40(s32 arg0) {
    lbl_8035A018 = arg0;
}
