#include "common.h"

extern "C" {

typedef union { u8 u8; u16 u16; u32 u32; f32 f32; } W;
#define FIFO (*(volatile W *)0xCC008000)
typedef struct Dl { u8 flags; u8 nattr; u16 cnt; u8 *buf; u32 size; u32 n12; } Dl;
typedef struct Mat {
    u32 x0; u8 pad4[16 - 4]; u32 x16; u32 x20; u8 pad24[80 - 24]; f32 *x80; u8 *x84; u8 pad88[96 - 88]; u32 x96;
} Mat;
typedef struct Heap { u8 pad[24]; u32 x24; u32 x28; } Heap;
extern Heap *lbl_8035B220;
extern u8 lbl_803658B8;
extern f32 lbl_803658BC, lbl_803658C0;
extern u32 lbl_802A7610[];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void *memset(void *, int, u32);
void fn_800B48F4(void *, u32);
u32 fn_801578A4(u8 *, u32 *, u32);
void fn_800D51E0(void *);
void DCInvalidateRange(void *, u32);
void fn_800D52E8(void);
void fn_80217954(Dl *d, u8 *base, Mat *m, u8 prim, u16 *idx, u16 cnt, int off) {
    u8 vf;
    u16 *p;
    u16 *end;
    u32 j;
    u32 n;
    u32 k;
    d->nattr = m->x96;
    if (m->x20 == 1) d->flags = 2;
    else if ((m->x16 & 0x400) && m->x20 == 0) d->flags = 2;
    else d->flags = 0;
    n = cnt & 0xFFFF;
    d->size = d->nattr * (cnt * 2) + 35;
    d->n12 = d->nattr * 2;
    if (d->flags & 2) {
        d->size += n;
        d->n12 += 1;
    }
    d->size = (d->size + 31) & ~31;
    if (lbl_8035B220->x24 >= 5) lbl_8035B220->x28 = lbl_8035B220->x24;
    else lbl_8035B220->x28 = 5;
    if (!lbl_8035B220) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B220);
    d->buf = (u8 *)__nwa__FUl(d->size);
    fn_800F7E98();
    if (!d->buf) fn_800604C4(-4, 0, 0, 0);
    lbl_8035B220->x28 = lbl_8035B220->x24;
    memset(d->buf, 0, d->size);
    fn_800B48F4(d->buf, d->size);
    d->cnt = n;
    end = idx + cnt;
    p = idx;
    d->flags |= lbl_803658B8;
    vf = fn_801578A4(base + 8004, &m->x16, (m->x0 >> 5) & 1);
    fn_800D51E0(d->buf);
    DCInvalidateRange(d->buf, d->size);
    FIFO.u8 = prim | vf;
    FIFO.u16 = cnt;
    if (d->flags & 2) {
        if (m->x16 & 0x400) {
            if (m->x16 & 0x200) {
                f32 *fa = m->x80 + off;
                u8 (*ba)[2] = (u8 (*)[2])m->x84 + off;
                for (; p < end; p++) {
                    k = *p;
                    f32 v = fa[k & 0xFFFF];
                    if (v >= lbl_803658BC) FIFO.u8 = lbl_802A7610[ba[(u16)k][0]];
                    else if (v <= lbl_803658C0) FIFO.u8 = lbl_802A7610[ba[(u16)k][1]];
                    else FIFO.u8 = 3;
                    for (j = 0; j < d->nattr; j++) FIFO.u16 = *p;
                }
            } else {
                u8 *ba = m->x84 + off;
                for (; p < end; p++) {
                    FIFO.u8 = lbl_802A7610[ba[*p]];
                    for (j = 0; j < d->nattr; j++) FIFO.u16 = *p;
                }
            }
        } else {
            f32 *fa = m->x80 + off;
            u32 a = lbl_802A7610[0];
            u32 b = lbl_802A7610[1];
            for (; p < end; p++) {
                f32 v = fa[*p];
                FIFO.u8 = v >= lbl_803658BC ? a : (v <= lbl_803658C0 ? b : 3);
                for (j = 0; j < d->nattr; j++) FIFO.u16 = *p;
            }
        }
    } else {
        for (; p < end; p++) {
            for (j = 0; j < d->nattr; j++) FIFO.u16 = *p;
        }
    }
    fn_800D52E8();
}

} /* extern "C" */
