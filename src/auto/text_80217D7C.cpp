// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
typedef union { u8 u8; u16 u16; u32 u32; f32 f32; } WGPipe;
volatile WGPipe GXWGFifo : 0xCC008000;
struct DL { u8 flags; u8 n; u16 cnt; u8 *buf; u32 size; u32 w12; };
struct M { u32 f0; u8 pad[12]; u32 f16; u32 f20; u8 pad2[56]; f32 *fv; u8 *bv; u8 pad3[8]; u32 f96; };
struct Heap { u8 pad[24]; u32 a; u32 b; };
extern Heap *lbl_8035B220;
extern u32 lbl_802A7610[];
extern u8 lbl_803658B8;
extern volatile f32 lbl_803658BC;
extern volatile f32 lbl_803658C0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);
void *memset(void *, int, u32);
void fn_800B48F4(u8 *, u32);
u32 fn_801578A4(u8 *, u32 *, u32);
void fn_800D51E0(u8 *);
void DCInvalidateRange(void *, u32);
void fn_800D52E8(void);

static inline void hmode(Heap *h) {
    if (h->a >= 5) h->b = h->a;
    else h->b = 5;
}

void fn_80217D7C(DL *d, u8 *x, M *m, u8 prim, u32 cnt, u32 start) {
    u8 vf;
    u16 i;
    d->n = m->f96;
    if (m->f20 == 1) d->flags = 2;
    else if ((m->f16 & 0x400) && m->f20 == 0) d->flags = 2;
    else d->flags = 0;
    d->size = d->n * (cnt * 2) + 35;
    d->w12 = d->n * 2;
    if (d->flags & 2) {
        d->size += cnt;
        d->w12 += 1;
    }
    d->size = (d->size + 31) & ~31;
    hmode(lbl_8035B220);
    if (lbl_8035B220 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B220);
    d->buf = new u8[d->size];
    fn_800F7E98();
    if (d->buf == 0) fn_800604C4(-4, 0, 0, 0);
    lbl_8035B220->b = lbl_8035B220->a;
    memset(d->buf, 0, d->size);
    fn_800B48F4(d->buf, d->size);
    d->cnt = cnt;
    d->flags |= lbl_803658B8;
    vf = fn_801578A4(x + 8004, &m->f16, (m->f0 >> 5) & 1);
    fn_800D51E0(d->buf);
    DCInvalidateRange(d->buf, d->size);
    GXWGFifo.u8 = prim | vf;
    GXWGFifo.u16 = cnt;
    i = 0;
    if (d->flags & 2) {
        if (m->f16 & 0x400) {
            if (m->f16 & 0x200) {
                f32 *fp = m->fv + start;
                u8 *bp = m->bv + start * 2;
                for (; i < cnt; i++) {
                    u32 j;
                    f32 v = fp[i];
                    if (v >= lbl_803658BC) GXWGFifo.u8 = lbl_802A7610[bp[i * 2]];
                    else if (v <= lbl_803658C0) GXWGFifo.u8 = lbl_802A7610[bp[i * 2 + 1]];
                    else GXWGFifo.u8 = 3;
                    for (j = 0; j < d->n; j++) GXWGFifo.u16 = i;
                }
            } else {
                u8 *bp = m->bv + start;
                for (; i < cnt; i++) {
                    u32 j;
                    GXWGFifo.u8 = lbl_802A7610[bp[i]];
                    for (j = 0; j < d->n; j++) GXWGFifo.u16 = i;
                }
            }
        } else {
            f32 *fp = m->fv + start;
            u32 t0 = lbl_802A7610[0];
            u32 t1 = lbl_802A7610[1];
            for (; i < cnt; i++) {
                u32 j;
                f32 v = fp[i];
                GXWGFifo.u8 = (v >= lbl_803658BC) ? t0 : ((v <= lbl_803658C0) ? t1 : 3);
                for (j = 0; j < d->n; j++) GXWGFifo.u16 = i;
            }
        }
    } else {
        for (; i < cnt; i++) {
            u32 j;
            for (j = 0; j < d->n; j++) GXWGFifo.u16 = i;
        }
    }
    fn_800D52E8();
}
}

} /* extern "C" */
