/* Functions from 0x8003A490 to 0x8003A4C4, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035A028;
extern void *lbl_8035A02C;
extern f32 lbl_8035C090;

void fn_8003A490(void *arg0) {
    lbl_8035A02C = arg0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(f32 *)((u8 *)arg0 + 0x1C) = lbl_8035C090;
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
}

void fn_8003A4BC(s32 arg0) {
    lbl_8035A028 = arg0;
}
