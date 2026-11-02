// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802BD3F8[];
extern char lbl_803592C0[8];
extern f32 lbl_803596E0[];
extern f32 lbl_8035F0C0;
#pragma opt_propagation off
void fn_80070490(u8 *p) {
    char *b = lbl_802BD3F8;
    *(s32 *)(p + 0x54) = 139;
    *(s32 *)(p + 0x2c) = 138;
    *(s32 *)(p + 0x68) = 41;
    *(s32 *)(p + 0x5c) = 17;
    *(s32 *)(p + 0x80) = 6;
    *(s32 *)(p + 0x7c) = 119;
    *(s32 *)(p + 0x84) = 10;
    *(s32 *)(p + 0x88) = 14;
    *(s32 *)(p + 0x8c) = 1;
    *(s32 *)(p + 0x94) = 10;
    *(void **)(p + 0x58) = b + 0xba0;
    *(void **)(p + 0x28) = b + 0xdcc;
    *(void **)(p + 0x30) = b + 0x1444;
    *(void **)(p + 0x6c) = b + 0xafc;
    *(void **)(p + 0x78) = b + 0x924;
    *(void **)(p + 0xc4) = b + 0x21c;
    *(void **)(p + 0xc8) = b + 0x234;
    *(void **)(p + 0xcc) = b + 0x7c8;
    *(void **)(p + 0xf4) = b + 0x840;
    *(void **)(p + 0xfc) = &lbl_803592C0;
    *(void **)(p + 0x10c) = b + 0xa34;
    *(s32 *)(p + 0x140) = 0;
    *(s32 *)(p + 0x144) = 0;
    *(s32 *)(p + 0x148) = 0;
    *(s32 *)(p + 0x14c) = 0;
    *(s32 *)(p + 0x150) = 1;
    *(s32 *)(p + 0x154) = 0;
    *(s32 *)(p + 0x158) = 0;
    *(s32 *)(p + 0x15c) = 1;
    *(s32 *)(p + 0x160) = 0;
    *(s32 *)(p + 0x164) = 1;
    *(s32 *)(p + 0x168) = 0;
    *(s32 *)(p + 0x16c) = 0;
    *(s32 *)(p + 0x170) = 0;
    *(f32 *)(p + 0x174) = lbl_803596E0[0];
    *(s32 *)(p + 0x180) = 0;
    *(s32 *)(p + 0x184) = 0;
    *(s32 *)(p + 0x188) = 0;
    *(f32 *)(p + 0x18c) = lbl_8035F0C0;
    *(f32 *)(p + 0x190) = lbl_8035F0C0;
    *(f32 *)(p + 0x194) = lbl_8035F0C0;
    *(s32 *)(p + 0x198) = 0;
    *(s32 *)(p + 0x19c) = 0;
    *(s32 *)(p + 0x1a0) = 0;
    *(s32 *)(p + 0x1a4) = 0;
    *(s32 *)(p + 0x1a8) = 0;
    *(f32 *)(p + 0x1ac) = lbl_8035F0C0;
    *(f32 *)(p + 0x1b0) = lbl_8035F0C0;
    *(f32 *)(p + 0x1b4) = lbl_8035F0C0;
    *(f32 *)(p + 0x1b8) = lbl_8035F0C0;
    *(f32 *)(p + 0x1bc) = lbl_8035F0C0;
    *(f32 *)(p + 0x1c0) = lbl_8035F0C0;
    *(s32 *)(p + 0x1c4) = 0;
    *(s32 *)(p + 0x1c8) = 0;
    *(s32 *)(p + 0x1cc) = 0;
    *(f32 *)(p + 0x1d0) = lbl_8035F0C0;
    *(f32 *)(p + 0x1d4) = lbl_8035F0C0;
    *(f32 *)(p + 0x1d8) = lbl_8035F0C0;
    *(f32 *)(p + 0x1dc) = lbl_8035F0C0;
    *(f32 *)(p + 0x1e0) = lbl_8035F0C0;
    *(f32 *)(p + 0x1e4) = lbl_8035F0C0;
    *(s32 *)(p + 0x1e8) = 0;
    *(s32 *)(p + 0x1ec) = 0;
    *(s32 *)(p + 0x1f0) = 0;
    *(s32 *)(p + 0x1f4) = 0;
    *(s32 *)(p + 0x1f8) = 0;
    *(s32 *)(p + 0x1fc) = 0;
    *(s32 *)(p + 0x200) = 0;
    *(s32 *)(p + 0x204) = 0;
    *(s32 *)(p + 0x208) = 0;
    *(s32 *)(p + 0x20c) = 0;
    *(s32 *)(p + 0x210) = 0;
    *(s32 *)(p + 0x214) = 0;
    *(s32 *)(p + 0x218) = 0;
    *(s32 *)(p + 0x21c) = 0;
    *(s32 *)(p + 0x220) = 0;
    *(s32 *)(p + 0x224) = 0;
    *(s32 *)(p + 0x228) = 0;
    *(s32 *)(p + 0x22c) = 0;
    *(s32 *)(p + 0x230) = 0;
    *(s32 *)(p + 0x234) = 0;
    *(s32 *)(p + 0x238) = 0;
    *(s32 *)(p + 0x23c) = 0;
    *(s32 *)(p + 0x240) = 0;
    *(s32 *)(p + 0x254) = 0;
    *(s32 *)(p + 0x258) = 0;
    *(s32 *)(p + 0x25c) = 0;
    *(s32 *)(p + 0x260) = 0;
    *(s32 *)(p + 0x264) = 0;
    *(s32 *)(p + 0x268) = 0;
    *(f32 *)(p + 0x26c) = lbl_8035F0C0;
    *(f32 *)(p + 0x270) = lbl_8035F0C0;
    *(s32 *)(p + 0x274) = 0;
    *(s32 *)(p + 0x278) = 0;
    *(s32 *)(p + 0x27c) = 0;
    *(s32 *)(p + 0x280) = 0;
    *(s32 *)(p + 0x284) = 0;
    *(s32 *)(p + 0x294) = 0;
    *(s32 *)(p + 0x298) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
