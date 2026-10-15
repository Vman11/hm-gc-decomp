/* Functions from 0x8003C388 to 0x8003C3D4, found by decomp-toolkit. */
#include "common.h"

void fn_8003C388(void *arg0) {
    extern void *lbl_8035A074;
    lbl_8035A074 = arg0;
    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x38) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(s32 *)((char *)arg0 + 0x50) = 0;
    *(s32 *)((char *)arg0 + 0x74) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x30) = 0;
    *(s32 *)((char *)arg0 + 0x64) = 0;
    *(s32 *)((char *)arg0 + 0x6C) = 0x12;
    *(s32 *)((char *)arg0 + 0x78) = 0;
}

void fn_8003C3CC(s32 arg0) {
    extern s32 lbl_8035A070;
    lbl_8035A070 = arg0;
}
