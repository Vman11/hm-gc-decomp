// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *d, int c, u32 n);
extern u32 fn_801F36D8(u32 src);
extern void fn_80060568(char *msg, int a, int b, int c);
extern void fn_801F1544(u8 *self, u32 *src);
extern char lbl_802A43DC[];
extern char lbl_802A440C[];
extern char lbl_802A4430[];
extern char lbl_802A444C[];

void fn_801F13F0(u8 *self, u32 *src) {
    s32 window;
    u32 dict;
    u8 cmf;
    u8 flg;
    *(u32 *)(self + 0x9320) = 0;
    memset(self + 8, 0, 0x8000);
    *(u32 *)(self + 4) = 1;
    *(u32 *)(self + 0x8008) = 0;
    *(u32 *)(self + 0x800c) = 0;
    *(u32 *)(self + 0x8010) = 0;
    cmf = fn_801F36D8(*src);
    window = 1 << (((cmf & 0xF0) >> 4) + 8);
    flg = fn_801F36D8(*src);
    dict = (flg >> 5) & 1;
    if ((cmf & 0xF) != 8) fn_80060568(lbl_802A43DC, 0, 0, 0);
    if ((flg | (cmf << 8)) % 31 != 0) fn_80060568(lbl_802A440C, 0, 0, 0);
    if (window > 0x8000) fn_80060568(lbl_802A4430, 0, 0, 0);
    if (dict) fn_80060568(lbl_802A444C, 0, 0, 0);
    fn_801F1544(self, src);
}

} /* extern "C" */
