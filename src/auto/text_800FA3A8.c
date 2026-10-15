/* Functions from 0x800FA3A8 to 0x800FA3DC, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E1FC0[];

extern s32 lbl_8035AA08;

extern s32 lbl_8035AA08;

void fn_800FA3A8(void *arg0) {
    *(void **)((char *)arg0 + 0x18) = lbl_802E1FC0;
    *(s32 *)((char *)arg0 + 0x0) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
}

void fn_800FA3D4(s32 arg0) {
    lbl_8035AA08 = arg0;
}
