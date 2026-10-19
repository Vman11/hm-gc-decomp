// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802CE5E0[];
extern u32 lbl_803593B8;

void fn_8009DA04(u8 *p) {
    u8 *b = lbl_802CE5E0;
    *(s32 *)(p + 84) = 7;
    *(s32 *)(p + 44) = 7;
    *(s32 *)(p + 104) = 6;
    *(s32 *)(p + 92) = 0;
    *(s32 *)(p + 128) = 1;
    *(s32 *)(p + 124) = 7;
    *(s32 *)(p + 132) = 0;
    *(s32 *)(p + 136) = 1;
    *(s32 *)(p + 140) = 0;
    *(s32 *)(p + 148) = 0;
    *(u8 **)(p + 88) = b + 664;
    *(u8 **)(p + 40) = b + 692;
    *(u8 **)(p + 48) = b + 776;
    *(u8 **)(p + 108) = b + 640;
    *(s32 *)(p + 120) = 0;
    *(void **)(p + 196) = &lbl_803593B8;
    *(u8 **)(p + 200) = b + 540;
    *(s32 *)(p + 204) = 0;
    *(u8 **)(p + 244) = b + 624;
    *(s32 *)(p + 252) = 0;
    *(s32 *)(p + 268) = 0;
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(s32 *)(p + 312) = 0;
    *(s32 *)(p + 316) = 0;
    *(s32 *)(p + 320) = 3;
}

} /* extern "C" */
