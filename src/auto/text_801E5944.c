/* Functions from 0x801E5944 to 0x801E598C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B088;
extern s32 lbl_8035B088;

void fn_801E5944(void *arg0) {
    extern u8 lbl_802EDAC8[];
    *(void **)((char *)arg0 + 0x24) = lbl_802EDAC8;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s16 *)((char *)arg0 + 0x1A) = 0;
    *(s16 *)((char *)arg0 + 0x1C) = 0;
    *(s16 *)((char *)arg0 + 0x1E) = 0;
    *(s16 *)((char *)arg0 + 0x18) = 0;
    *(s16 *)((char *)arg0 + 0x20) = 0;
}

void fn_801E5984(s32 arg0) {
    lbl_8035B088 = arg0;
}
