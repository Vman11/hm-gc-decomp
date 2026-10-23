// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802D1180[];
extern void *lbl_80359460;
extern f32 lbl_80361F5C;

#pragma opt_propagation off
void fn_800A7CB0(u8 *p) {
    char *s = lbl_802D1180;
    *(s32 *)(p + 0x54) = 10;
    *(s32 *)(p + 0x2c) = 10;
    *(s32 *)(p + 0x68) = 6;
    *(s32 *)(p + 0x5c) = 4;
    *(s32 *)(p + 0x80) = 2;
    *(s32 *)(p + 0x7c) = 2;
    *(s32 *)(p + 0x84) = 1;
    *(s32 *)(p + 0x88) = 0;
    *(s32 *)(p + 0x8c) = 3;
    *(s32 *)(p + 0x94) = 0;
    *(char **)(p + 0x58) = s + 676;
    *(char **)(p + 0x28) = s + 716;
    *(char **)(p + 0x30) = s + 836;
    *(char **)(p + 0x6c) = s + 652;
    *(char **)(p + 0x78) = s + 588;
    *(void ***)(p + 0xc4) = &lbl_80359460;
    *(char **)(p + 200) = s + 540;
    *(char **)(p + 0xcc) = s + 564;
    *(s32 *)(p + 0xf4) = 0;
    *(char **)(p + 0xfc) = s + 576;
    *(s32 *)(p + 0x10c) = 0;
    *(s32 *)(p + 0x118) = 0;
    *(s32 *)(p + 0x11c) = 0;
    *(s32 *)(p + 0x120) = 0;
    *(s32 *)(p + 0x124) = 0;
    *(s32 *)(p + 0x128) = 0;
    *(s32 *)(p + 0x12c) = 0;
    *(s32 *)(p + 0x130) = 0;
    *(s32 *)(p + 0x134) = 0;
    *(s32 *)(p + 0x138) = 0;
    *(s32 *)(p + 0x13c) = 0;
    *(s32 *)(p + 0x140) = 0;
    *(s32 *)(p + 0x144) = 0;
    *(s32 *)(p + 0x148) = 0;
    *(s32 *)(p + 0x14c) = 0;
    *(s32 *)(p + 0x150) = 0;
    *(s32 *)(p + 0x154) = 0;
    *(s32 *)(p + 0x158) = 0;
    *(s32 *)(p + 0x15c) = 0;
    *(s32 *)(p + 0x160) = 0;
    *(s32 *)(p + 0x164) = 0;
    *(s32 *)(p + 0x168) = -1;
    *(s32 *)(p + 0x16c) = 0;
    *(s32 *)(p + 0x170) = 1;
    *(f32 *)(p + 0x174) = lbl_80361F5C;
}
#pragma opt_propagation reset

} /* extern "C" */
