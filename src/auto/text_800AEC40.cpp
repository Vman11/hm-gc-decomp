// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802D4D90[];
extern char lbl_803594C0[4];
extern void *lbl_8035B530;
void fn_800604C4(s32 a, s32 b, s32 c, s32 d);
void fn_800F7EC0(void *h);
void fn_800F7E98(void);
void __ct__9C8024262CFv(void *p);
void *__nw__FUl(u32 n);
#pragma opt_propagation off
void *fn_800AEC40(void) {
    char *base = lbl_802D4D90;
    u8 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    u8 *p = (u8 *)__nw__FUl(0x118);
    if (p != 0) {
        __ct__9C8024262CFv(p);
        *(void **)(p + 0x0) = base + 0x2e4;
        *(s32 *)(p + 0x54) = 4;
        *(s32 *)(p + 0x2c) = 4;
        *(s32 *)(p + 0x68) = 3;
        *(s32 *)(p + 0x5c) = 0;
        *(s32 *)(p + 0x80) = 1;
        *(s32 *)(p + 0x7c) = 0;
        *(s32 *)(p + 0x84) = 0;
        *(s32 *)(p + 0x88) = 0;
        *(s32 *)(p + 0x8c) = 0;
        *(s32 *)(p + 0x94) = 1;
        *(void **)(p + 0x58) = base + 0x23c;
        *(void **)(p + 0x28) = base + 0x24c;
        *(void **)(p + 0x30) = base + 0x27c;
        *(void **)(p + 0x6c) = base + 0x230;
        *(s32 *)(p + 0x78) = 0;
        *(void **)(p + 0xc4) = lbl_803594C0;
        *(s32 *)(p + 0xc8) = 0;
        *(s32 *)(p + 0xcc) = 0;
        *(s32 *)(p + 0xf4) = 0;
        *(s32 *)(p + 0xfc) = 0;
        *(void **)(p + 0x10c) = base + 0x21c;
    }
    r = p;
    fn_800F7E98();
    if (r == 0) fn_800604C4(-4, 0, 0, 0);
    return r;
}

} /* extern "C" */
