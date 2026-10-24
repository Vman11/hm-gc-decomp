// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S;
struct R { S *s; };
struct QT { u8 b[904]; };
struct C { u32 pad0; u32 h; u32 v; u8 pad12[56]; };
struct D {
    R *r;
    u8 pad4[40];
    u8 *buf;
    u32 w;
    u32 h;
    s32 err;
    u8 pad60[3300];
    QT qt[4];
    u8 pad6976[4];
    s32 prog;
    s32 marker;
    u32 maxh;
    u32 maxv;
    u32 ids[255];
    C comp[256];
    u8 pad25424[1544 - 1612 + 1612];
};
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern char lbl_8029FA84[];
extern void *lbl_8035A9F4;
u8 fn_801F5934(D *);
void fn_80060568(char *, int, int, int);
u16 fn_801F359C(S *);
u8 fn_801F36D8(S *);
void fn_801F4624(C *, u32);
void fn_801F45C4(C *, u32);
void fn_801F45BC(C *, QT *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

s32 fn_8013CCD0(D *d) {
    u16 len;
    u32 i;
    d->marker = fn_801F5934(d);
    if (d->marker == 0xC2) {
        fn_80060568(lbl_8029FA84, 0, 0, 0);
        d->prog = 1;
    } else {
        d->prog = 0;
    }
    len = fn_801F359C(d->r->s);
    if (fn_801F36D8(d->r->s) != 8) { d->err = 1; return 0; }
    d->h = fn_801F359C(d->r->s);
    d->w = fn_801F359C(d->r->s);
    F(d, 26408, u32) = fn_801F36D8(d->r->s);
    if (F(d, 26408, u32) != 1 && F(d, 26408, u32) != 3) { d->err = 1; return 0; }
    if (len != F(d, 26408, u32) * 3 + 8) { d->err = 1; return 0; }
    d->maxh = 0;
    d->maxv = 0;
    for (i = 0; i < F(d, 26408, u32); i++) {
        u32 id = fn_801F36D8(d->r->s);
        u8 hv;
        u8 q;
        if (F(d, 26408, u32) == 1 && id != 1) { d->err = 1; return 0; }
        if (id != i + 1) { d->err = 1; return 0; }
        d->ids[i] = id;
        hv = fn_801F36D8(d->r->s);
        fn_801F4624(&d->comp[id], hv >> 4);
        fn_801F45C4(&d->comp[id], hv & 0xF);
        q = fn_801F36D8(d->r->s);
        if (q >= 4) { d->err = 1; return 0; }
        fn_801F45BC(&d->comp[id], &d->qt[q]);
        if (d->comp[id].h > d->maxh) d->maxh = d->comp[id].h;
        if (d->comp[id].v > d->maxv) d->maxv = d->comp[id].v;
    }
    F(d, 26388, u32) = d->maxv * 8;
    F(d, 26392, u32) = d->maxh * 8;
    F(d, 26400, u32) = (d->h + F(d, 26388, u32) - 1) / F(d, 26388, u32);
    F(d, 26396, u32) = (d->w + F(d, 26392, u32) - 1) / F(d, 26392, u32);
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    d->buf = new u8[F(d, 26408, u32) * (d->w * d->h)];
    fn_800F7E98();
    if (!d->buf) fn_800604C4(-4, 0, 0, 0);
    F(d, 25356, s32) = 1;
    return 1;
}

} /* extern "C" */
