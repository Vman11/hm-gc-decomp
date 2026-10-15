/* Functions from 0x80037FF4 to 0x80038058, found by decomp-toolkit. */
#include "common.h"

void fn_80037FF4(void) {

}

void fn_80037FF8(void) {

}

void fn_80037FFC(void *arg0) {
    extern f32 lbl_8035BFD8;
    s32 saved = *(s32 *)((char *)arg0 + 0x4);
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(f32 *)((char *)arg0 + 0x8) = lbl_8035BFD8;
    *(f32 *)((char *)arg0 + 0xC) = lbl_8035BFD8;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 4;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(s32 *)((char *)arg0 + 0x30) = 4;
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s32 *)((char *)arg0 + 0x38) = 0x61A8;
    *(s32 *)((char *)arg0 + 0x20) = 1;
    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x4) = saved;
}

