// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct D { u8 pad0[2]; u16 bits; u8 pad4[24]; u16 h28; u16 h30;
    virtual void d0(); virtual void d1(); virtual void d2(); virtual int which();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void lock(void *, void *, u32, int); virtual void get(u8 **, int *, int); virtual void unlock(); };
struct G { u32 w; u16 h4; u16 x; u8 pad[8]; };
struct T { u8 pad[12]; u32 cnt; u32 n; u8 pad20[60]; u32 fl; G *g; };
struct Tmp { u8 b[8]; u8 f8; u8 pad[3]; };
extern char lbl_8029E0A0[];
extern void *lbl_8035A9F4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F6E40(void *, void *);
void fn_80127F34(T *, u32 *, D *, u8 *, int);
int fn_80127D2C(T *t, u32 *v, D *d, u8 *p, int stride, int x);
int fn_800E8F6C(char *, const char *, ...);
void fn_80060568(char *, s32, s32, s32);
int fn_80126A70(const void *, const void *);
void qsort(void *, u32, u32, int (*)(const void *, const void *));

static inline u32 skip0(T *o, u32 *buf, D *d, u8 *b, int st, u32 x, int want) {
    u32 bit;
    u32 j;
    u32 per;
    u8 *p;
    per = (u32)d->bits >> 2;
    j = x;
    bit = x * per;
    p = b + (bit >> 1);
    while (j < d->h28) {
        if (!fn_80127D2C(o, buf, d, p, st, bit & 1)) break;
        bit += per;
        j++;
        p = b + (bit >> 1);
    }
    return j - x;
}
static inline u32 skip1(T *o, u32 *buf, D *d, u8 *b, int st, u32 x, int want) {
    u32 bit;
    u32 j;
    u32 per;
    u8 *p;
    per = (u32)d->bits >> 2;
    j = x;
    bit = x * per;
    p = b + (bit >> 1);
    while (j < d->h28) {
        if (fn_80127D2C(o, buf, d, p, st, bit & 1)) break;
        bit += per;
        j++;
        p = b + (bit >> 1);
    }
    return j - x;
}
static inline void scan(T *o, u32 *buf, D *d, u8 **pb, int *ps, Tmp *tmp, char *err, u32 i, u32 x) {
    for (; i < o->cnt; i++) {
        x += skip0(o, buf, d, *pb, *ps, x, 0);
        o->g[i].x = x;
        o->g[i].w = skip1(o, buf, d, *pb, *ps, x, 1);
        if (o->g[i].w < 1) {
            fn_800E8F6C(err, lbl_8029E0A0, tmp, o->g[i].h4);
            fn_80060568(err, 0, 0, 0);
        }
        x += o->g[i].w;
    }
}
static inline u32 *NewBuf2(u32 n) {
    return new u32[n];
}
void fn_80128550(T *o, void *a, D *d, u16 fl) {
    char err[256];
    Tmp tmp;
    int stride;
    u8 *base;
    u32 i;
    u32 x;
    u32 *buf;
    u32 off;
    fn_800F6E40(&tmp, o);
    tmp.f8 = 0;
    d->lock(a, &tmp, o->fl | (fl | 8), 0);
    o->n = d->h30;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    buf = NewBuf2(o->n);
    fn_800F7E98();
    if (buf == 0) fn_800604C4(-4, 0, 0, 0);
    d->get(&base, &stride, 1);
    fn_80127F34(o, buf, d, base, stride);
    scan(o, buf, d, &base, &stride, &tmp, err, 0, 1);
    d->unlock();
    delete[] buf;
    qsort(o->g, o->cnt, 16, fn_80126A70);
}

} /* extern "C" */
