#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(const char *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct C { u32 f0, f4, f8, fc; };
struct X { C *c; void *o; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void init(C *, R *); };
struct T { u32 n; u32 cap; s32 type; u32 fc; void *a16; void *a20; void *a24; void *a28; };
struct O { u8 pad0[8]; u8 f8[0x20]; s32 f28; u8 pad2c[4]; O *f30; u8 pad34[4]; T slots[13]; u32 n1d8; u8 pad1dc[12]; s32 f1e8; };
struct Loc { u8 key[8]; u8 rest[0x34]; };
void *memset(void *, int, u32);
u32 strlen(const char *);
char *strcpy(char *, const char *);
void fn_800FB064(R *, void *);
void fn_800F6E88(void *, void *);
s32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
u32 fn_800FADA8(R *);
void fn_800FAEF8(R *);
void fn_800FAEA0(R *);
char *fn_800FB284(R *);
extern f32 lbl_803596E0[4];
extern u32 lbl_8035AAD8, lbl_8035AADC, lbl_8035A9F4;
extern char lbl_802E2A48[];
void fn_8010CAF4(void *, void *);
void fn_80110E5C(O *);
void fn_8011131C(T *);
X **fn_8010F17C(O *, s32, s32);
void fn_8010C790(C *, s32, s32);
void fn_8010C440(C *, f32, f32);
void fn_8010C470(C *, s32, s32);
void fn_8010CB34(X **, char *, X *, void *);
void fn_8010F1E0(O *, s32, X *);
void *fn_8010FFD0(O *, char *, s32);
void *fn_80110444(O *, char *, s32);
void fn_80207280(s32, O *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void __dla__FPv(void *);

#define SLOT(K) case 71 + K: o->slots[K].n = 0; o->slots[K].cap = 4; o->slots[K].type = 0; o->slots[K].fc = 0; \
    o->slots[K].a16 = 0; o->slots[K].a20 = 0; o->slots[K].a24 = 0; o->slots[K].a28 = 0; \
    o->slots[K].n = v; o->slots[K].cap = v; o->slots[K].type = K; break;

s32 fn_8010F3DC(O *o, s32 a, R *r, u8 *name, O *parent) {
    Loc loc;
    u32 i;
    u32 k;
    o->f28 = a;
    if (name) *name = 0;
    o->f30 = parent;
    if (o->f30) fn_8010CAF4(o->f8, o->f30->f8);
    if (o->f1e8) fn_80110E5C(o);
    lbl_8035AADC = lbl_8035AAD8;
    memset(loc.rest, 0, 0x34);
    r->p2(lbl_802E2A48, 28, 0);
    k = r->next();
    loc.key[0] = 0;
    if (k == 83) {
        fn_800FB064(r, loc.key);
        if (name) fn_800F6E88(name, loc.key);
        k = r->next();
    }
    if (k != 57) r->err(30);
    o->n1d8 = fn_800FADA8(r);
    for (i = 0; i < o->n1d8; i++) {
        u32 t;
        s32 v;
        if (r->next() != 58) r->err(30);
        fn_800FAEF8(r);
        if (r->next() != 63) r->err(30);
        t = r->next();
        if (r->next() != 59) r->err(30);
        v = fn_800FB33C(r);
        switch (t) {
        SLOT(0) SLOT(1) SLOT(2) SLOT(3) SLOT(4) SLOT(5) SLOT(6) SLOT(7) SLOT(8) SLOT(9) SLOT(10) SLOT(11)
        }
        fn_800FAEA0(r);
    }
    fn_800FAEA0(r);
    for (i = 0; i < 13; i++) fn_8011131C(&o->slots[i]);
    {
        s32 type = 13;
        u32 cnt;
        u32 j;
        X **xp;
        X *x;
        x = 0;
        if (r->next() != 60) r->err(30);
        cnt = fn_800FADA8(r);
        for (j = 0; j < cnt; j++) {
            void *tgt = o->f8;
            xp = 0;
            char *nm;
            s32 n, lo, hi;
            f32 flo, fhi;
            char *s;
            if (r->next() != 61) r->err(30);
            while (r->next() != 5) {
            }
            nm = 0;
            lo = 0x80000000;
            hi = 0x7FFFFFFF;
            n = 1;
            flo = -lbl_803596E0[0];
            fhi = lbl_803596E0[0];
            while ((k = r->next()) != 6) {
                switch (k) {
                case 62:
                    s = fn_800FB284(r);
                    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
                    fn_800F7EC0(lbl_8035A9F4);
                    nm = new char[strlen(s) + 1];
                    fn_800F7E98();
                    if (!nm) fn_800604C4(-4, 0, 0, 0);
                    strcpy(nm, s);
                    break;
                case 63:
                    switch (r->next()) {
                    case 71: type = 0; break;
                    case 72: type = 1; break;
                    case 73: type = 2; break;
                    case 74: type = 3; break;
                    case 75: type = 4; break;
                    case 76: type = 5; break;
                    case 77: type = 6; break;
                    case 78: type = 7; break;
                    case 79: type = 8; break;
                    case 80: type = 9; break;
                    case 81: type = 10; break;
                    case 82: type = 11; break;
                    default: r->err(30); break;
                    }
                    break;
                case 64:
                    s = fn_800FB284(r);
                    if ((u32)parent == 0) tgt = fn_8010FFD0(o, s, 0);
                    else tgt = fn_8010FFD0(parent, s, 0);
                    if (!tgt) tgt = fn_80110444(o, s, 0);
                    break;
                case 66:
                    n = fn_800FB33C(r);
                    break;
                case 67:
                    if (type == 3 || type == 9) flo = fn_800FB2E0(r);
                    else lo = fn_800FB33C(r);
                    break;
                case 68:
                    if (type == 3 || type == 9) fhi = fn_800FB2E0(r);
                    else hi = fn_800FB33C(r);
                    break;
                case 70: {
                    C *c;
                    xp = fn_8010F17C(o, type, 1);
                    c = (*xp)->c;
                    x = *xp;
                    fn_8010C790(c, type, n);
                    if (type == 3 || type == 9) fn_8010C440(c, flo, fhi);
                    else fn_8010C470(c, lo, hi);
                    x->init(c, r);
                    x->o = o;
                    break;
                }
                case 84:
                    { X *y = *xp; C *cc = y->c; u32 t = cc->fc; x = y; cc->fc = t | 4; }
                    break;
                default:
                    r->err(30);
                    break;
                }
            }
            if (!tgt) tgt = o->f8;
            fn_8010CB34(xp, nm, x, tgt);
            delete[] nm;
            fn_8010F1E0(o, type, x);
        }
    }
    fn_800FAEA0(r);
    o->f1e8 = 1;
    fn_80207280(a, o, loc.key);
    return 0;
}

} /* extern "C" */
