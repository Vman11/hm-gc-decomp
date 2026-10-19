// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802C7160[];
extern u32 lbl_80359358;

void fn_8008C734(u8 *p) {
    u8 *b = lbl_802C7160;
    *(s32 *)(p + 84) = 5;
    *(s32 *)(p + 44) = 5;
    *(s32 *)(p + 104) = 3;
    *(s32 *)(p + 92) = 0;
    *(s32 *)(p + 128) = 1;
    *(s32 *)(p + 124) = 16;
    *(s32 *)(p + 132) = 0;
    *(s32 *)(p + 136) = 5;
    *(s32 *)(p + 140) = 0;
    *(s32 *)(p + 148) = 0;
    *(u8 **)(p + 88) = b + 808;
    *(u8 **)(p + 40) = b + 828;
    *(u8 **)(p + 48) = b + 888;
    *(u8 **)(p + 108) = b + 796;
    *(s32 *)(p + 120) = 0;
    *(void **)(p + 196) = &lbl_80359358;
    *(u8 **)(p + 200) = b + 540;
    *(s32 *)(p + 204) = 0;
    *(u8 **)(p + 244) = b + 732;
    *(s32 *)(p + 252) = 0;
    *(s32 *)(p + 268) = 0;
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 1;
    *(s32 *)(p + 308) = 1;
    *(s32 *)(p + 312) = 4;
}

} /* extern "C" */
