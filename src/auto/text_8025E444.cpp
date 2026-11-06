#include "common.h"
extern "C" {
struct PM { u32 a, b, c; };
extern PM lbl_802F2918;
extern void *lbl_8035B65C;
extern char lbl_803669E0[7];
extern f32 lbl_80357AE0[3];
extern f32 lbl_80366950;
extern f32 lbl_80366954;
void fn_80253AD8(void *, void *, PM *, char *);
void fn_8025764C(u8 *self);
void fn_8025E444(u8 *self) {
    PM *q = &lbl_802F2918;
    volatile PM v;
    { u32 z, y, x; x = q->a; y = q->b; z = q->c; v.a = x; v.b = y; v.c = z; }
    fn_80253AD8(*(void *volatile *)&lbl_8035B65C, self, (PM *)&v, lbl_803669E0);
    lbl_80357AE0[0] = lbl_80366950;
    lbl_80357AE0[1] = lbl_80366950;
    lbl_80357AE0[2] = lbl_80366950;
    *(s32 *)(self + 0x15c) = 4;
    *(s32 *)(self + 0x158) = 0;
    *(s32 *)(self + 0x150) = 0;
    *(f32 *)(self + 0x160) = lbl_80366954;
    *(f32 *)(self + 0x180) = lbl_80366950;
    *(f32 *)(self + 0x184) = lbl_80366950;
    *(s32 *)(self + 0xcc) = 0;
    *(f32 *)(self + 0xd0) = lbl_80366950;
    *(f32 *)(self + 0xd4) = lbl_80366950;
    *(f32 *)(self + 0xd8) = lbl_80366950;
    *(f32 *)(self + 0x118) = lbl_80366950;
    *(s32 *)(self + 0x11c) = 0;
    *(f32 *)(self + 0x120) = lbl_80366950;
    *(f32 *)(self + 0x124) = lbl_80366950;
    *(f32 *)(self + 0x128) = lbl_80366950;
    *(s32 *)(self + 0x12c) = 0;
    *(s32 *)(self + 0x130) = 0;
    fn_8025764C(self);
}
}
