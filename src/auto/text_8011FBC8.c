/* Functions from 0x8011FBC8 to 0x8011FC24, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AB60;

void fn_8011FBC8(void *arg0) {
    extern u8 lbl_802E3F40[];
    extern u8 lbl_802E3ED8[];
    extern f32 lbl_80363DC8;
    *(void **)((char *)arg0 + 0x0) = lbl_802E3F40;
    *(void **)((char *)arg0 + 0x0) = lbl_802E3ED8;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(f32 *)((char *)arg0 + 0x10) = lbl_80363DC8;
    *(s32 *)((char *)arg0 + 0x2C) = 1;
    *(s32 *)((char *)arg0 + 0x20) = 0;
}

void fn_8011FC1C(s32 arg0) {
    lbl_8035AB60 = arg0;
}
