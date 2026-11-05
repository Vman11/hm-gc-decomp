#include "common.h"
namespace m8016B5F4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_803646DC;
typedef struct { u8 pad[25]; u8 b25; u8 b26[24]; u8 c[7]; } D8016B5F4;
typedef struct { u8 pad[816]; const D8016B5F4 *p; u8 c[7]; } T8016B5F4;
void fn_800D7264(u8 a, const u8 *b, s32 c, u8 *d);
void fn_8016B5F4(T8016B5F4 *t, u32 x) {
    f32 s = (f32)x * lbl_803646DC;
    t->c[0] = (f32)t->p->c[0] * s;
    t->c[1] = (f32)t->p->c[1] * s;
    t->c[2] = (f32)t->p->c[2] * s;
    t->c[3] = (f32)t->p->c[3] * s;
    t->c[4] = (f32)t->p->c[4] * s;
    t->c[5] = (f32)t->p->c[5] * s;
    t->c[6] = (f32)t->p->c[6] * s;
    fn_800D7264(t->p->b25, t->p->b26, 1, t->c);
}

} /* extern "C" */

} /* namespace m8016B5F4 */

namespace m8016B794 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern s32 lbl_802A0318[];
void fn_800D9A04(u8, s32, u8);

void fn_8016B794(u8 *p, s32 i) {
    s32 v = lbl_802A0318[i];
    if (*(s32 *)(p + 9212) != v) {
        *(s32 *)(p + 9212) = v;
        fn_800D9A04(p[9208], *(s32 *)(p + 9212), p[9216]);
    }
    *(s32 *)(p + 162296) = i;
}

} /* extern "C" */

} /* namespace m8016B794 */

namespace m8016B800 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u32 lbl_803646E8;
void fn_800D99AC(u8);

void fn_8016B800(u8 *p) {
    *(u32 *)(p + 0x2C) |= lbl_803646E8;
    if (p[0x2401] != 0) {
        p[0x2401] = 0;
        fn_800D99AC(p[0x2401]);
    }
}

} /* extern "C" */

} /* namespace m8016B800 */

namespace m8016B848 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800D99AC(int);

void fn_800D99AC(int);

void fn_8016B848(s32 param_1) {
    *(u32 *)(param_1 + 0x2c) = *(u32 *)(param_1 + 0x2c) & 0xffffdfff;
    if (*(u8 *)(param_1 + 0x2401) == 0) {
        *(u8 *)(param_1 + 0x2401) = 1;
        fn_800D99AC((int)(*(u8 *)(param_1 + 0x2401)));
    }
}

} /* extern "C" */

} /* namespace m8016B848 */

namespace m8016B88C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u32 lbl_803646EC;
void fn_800D9A04(u8, void *, u8);

void fn_8016B88C(u8 *p) {
    *(u32 *)(p + 44) |= lbl_803646EC;
    if (p[9216] != 0) {
        p[9216] = 0;
        fn_800D9A04(p[9208], *(void **)(p + 9212), p[9216]);
    }
}

} /* extern "C" */

} /* namespace m8016B88C */

namespace m8016B8E0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800D9A04(int, int, int);

void fn_8016B8E0(s32 param_1) {
    *(u32 *)(param_1 + 0x2c) = *(u32 *)(param_1 + 0x2c) & 0xfffffbff;
    if (*(u8 *)(param_1 + 0x2400) == 0) {
        *(u8 *)(param_1 + 0x2400) = 1;
        fn_800D9A04((int)(*(u8 *)(param_1 + 0x23f8)), (int)(*(u32 *)(param_1 + 0x23fc)), (int)(*(u8 *)(param_1 + 0x2400)));
    }
}

} /* extern "C" */

} /* namespace m8016B8E0 */

namespace m8016B930 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u32 lbl_803646F0;
void fn_800D9A04(u8, void *, u8);

void fn_8016B930(u8 *p) {
    *(u32 *)(p + 44) |= lbl_803646F0;
    if (p[9208] != 0) {
        p[9208] = 0;
        fn_800D9A04(p[9208], *(void **)(p + 9212), p[9216]);
    }
}

} /* extern "C" */

} /* namespace m8016B930 */

namespace m8016B984 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800D9A04(int, int, int);

void fn_8016B984(s32 param_1) {
    *(u32 *)(param_1 + 0x2c) = *(u32 *)(param_1 + 0x2c) & 0xfffffdff;
    if (*(u8 *)(param_1 + 0x23f8) == 0) {
        *(u8 *)(param_1 + 0x23f8) = 1;
        fn_800D9A04((int)(*(u8 *)(param_1 + 0x23f8)), (int)(*(u32 *)(param_1 + 0x23fc)), (int)(*(u8 *)(param_1 + 0x2400)));
    }
}

} /* extern "C" */

} /* namespace m8016B984 */

namespace m8016B9D4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct P { u32 a; } P;
typedef struct O { u8 p0[0x2C]; u32 fl; u8 p30[0x23D8 - 0x30]; s32 on; u8 pdc[4]; f32 a, b, c, d; P p; } O;
void fn_800D9610(int, P *, f32, f32, f32, f32);
void fn_8016B9D4(O *o) {
    o->fl &= ~0x100;
    if (o->on) {
        P t;
        o->on = 0;
        t = o->p;
        fn_800D9610(0, &t, o->a, o->b, o->c, o->d);
    }
}

} /* extern "C" */

} /* namespace m8016B9D4 */

namespace m8016BA38 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

#include "common.h"
extern "C" {
typedef struct { u8 r, g, b, a; } C;
typedef struct O { u8 pad[0x2c]; u32 f2c; u8 pad2[0x23d8 - 0x30]; s32 f23d8; void *f23dc; f32 a, b, c, d; C col; } O;
extern u32 lbl_803646F4;
void fn_800D9610(void *, f32, f32, f32, f32, C);
void fn_8016BA38(O *o) {
    o->f2c |= lbl_803646F4;
    if (o->f23d8 == 0) {
        o->f23d8 = 1;
        fn_800D9610(o->f23dc, o->a, o->b, o->c, o->d, o->col);
    }
}
} /* extern "C" */

} /* namespace m8016BA38 */

namespace m8016BAA0 {
/* Functions from 0x8016BAA0 to 0x8016BAC8, found by decomp-toolkit. */

extern "C" {

extern f32 lbl_803646F8;
void fn_8016BAA0(void *arg0, f32 *arg1) {
    arg1[0] = lbl_803646F8;
    arg1[1] = lbl_803646F8;
}

s32 fn_8016BAB4(void *arg0) {
    return *(s32 *)((char *)arg0 + 8);
}

s32 fn_8016BABC(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}

void fn_8016BAC4(void) {

}

} /* extern "C" */

} /* namespace m8016BAA0 */

namespace m8016BAC8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80159920(int, int);

void fn_8016BAC8(s32 param_1) {
    fn_80159920((int)(param_1 + 0x29a0), (int)(param_1));
}

} /* extern "C" */

} /* namespace m8016BAC8 */

namespace m8016BAF0 {
/* Functions from 0x8016BAF0 to 0x8016BAF8, found by decomp-toolkit. */

extern "C" void* fn_8016BAF0(u8* arg0) {
    return arg0 + 0x29A0;
}

} /* namespace m8016BAF0 */

namespace m8016BAF8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_801796CC(s32, u32);
s32 fn_80179838(s32, u32, u32, u32);

void fn_8016BAF8(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    s32 iVar1;

    iVar1 = fn_80179838(param_1 + 0xbf20,param_2,param_3,param_4);
    if (iVar1 == 0) {
        fn_801796CC(param_1 + 0xbf20,param_4);
        fn_80179838(param_1 + 0xbf20,param_2,param_3,param_4);
    }
}

} /* extern "C" */

} /* namespace m8016BAF8 */

namespace m8016BB80 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8016BC04(s32, u32);
s32 fn_80179838(s32, u32, u32, u32);

void fn_8016BB80(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    s32 iVar1;

    iVar1 = fn_80179838(param_1 + 0xbf10,param_2,param_3,param_4);
    if (iVar1 == 0) {
        fn_8016BC04(param_1,param_4);
        fn_80179838(param_1 + 0xbf10,param_2,param_3,param_4);
    }
}

} /* extern "C" */

} /* namespace m8016BB80 */

namespace m8016BC04 {
struct wA_O;
typedef void (wA_O::*wA_PMF)(void *, s32);
struct wA_T { u8 pad[0x10]; u32 flags; };
struct wA_O { wA_T *tex; u8 pad4[0x26]; u16 nidx; union { u8 b[4]; u8 *p; } idx; u8 pad30[0x24]; f32 *col; wA_PMF pmf; };
struct wA_M { u8 pad0[8]; u8 c[4]; u8 padc[8]; u32 *ids; u8 pad18[0x14]; u32 flags; u8 pad30[0xf8]; u32 passes; };
struct wA_N { u8 pad0[0x14]; wA_M *m; u8 c[4]; wA_O *o; u16 base; u16 ent; u32 nids; };
struct wA_E { u32 v[8]; u8 n; u8 c[3]; };
struct wA_Q { u8 pad0[0x1930]; virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7();
    virtual void q8(); virtual void q9(); virtual void q10(); virtual void q11(); virtual void q12(); virtual void q13(); virtual void q14(); virtual void q15(); virtual void q16();
    virtual void q17(); virtual void q18(); virtual void q19(); virtual void q20(); virtual void q21(); virtual void q22(); virtual void q23(); virtual void q24(); virtual void q25();
    virtual void q26(); virtual void q27(); virtual void q28(); virtual void q29(); virtual void q30(); virtual void q31(); virtual void q32(); virtual void reset(u32 n);
    void *f1934; void *f1938; };
extern "C" {
extern s32 lbl_8035ACF8;
extern volatile u32 lbl_803646EC;
void fn_801796CC(u8 *a, wA_Q *q);
void fn_800D9A04(u8 a, u32 b, u8 c);
wA_N *fn_800F9BBC(u8 *l);
wA_N *fn_800F9F44(wA_N *n);
void fn_800D7A88(s32 a, u32 *c);
void fn_800D7A0C(u32 a, u32 b);
void fn_8015C998(wA_M *m, void *a, wA_T *t);
void fn_8015FD3C(wA_O *o, void *a);
void fn_8015D624(wA_M *m, wA_Q *q, u32 j);
void fn_8015C95C(wA_M *m, void *a, u32 j);
s32 fn_80164310(wA_Q *q, wA_O *o);
void fn_8015F4A0(wA_O *o, wA_Q *q);

}
static inline void bind(u8 *p, wA_N *n, wA_M *m, wA_O *o, u32 val) {
    u32 end;
    u32 v;
    s32 k;
    u32 *arr;
    u32 i;
    u32 *ids;
            v = *(u32 *)(p + 0x1f7b4) + n->base * 0x40;
            if (n->nids != 0) {
                ids = m->ids;
                for (i = 0; i < n->nids; i++) {
                    *(u32 *)(p + ids[4] * 4 + 0x3abc) = v;
                    ids++;
                    v += 0x40;
                }
            }
            {
                u32 cnt = o->nidx;
                if (cnt != 0) {
                k = 0;
                end = v + cnt * 0x40;
                do {
                    u32 id;
                    arr = *(u32 **)(p + 0x2aa0);
                    if (o->nidx <= 4) {
                        id = o->idx.b[k];
                    } else {
                        id = o->idx.p[k];
                    }
                    k++;
                    arr[id] = v;
                    v += 0x40;
                    *(u32 *)(p + id * 4 + 0x36bc) = val;
                } while (v < end);
                }
            }
}
extern "C" void fn_8016BC04(u8 *p, wA_Q *q) {
    fn_801796CC(p + 0xbf20, q);
    if (*(u32 *)(p + 0x279cc) != 0) {
        void *ctx = q->f1934;
        wA_E *e;
        wA_N *n;
        *(u8 **)(p + 0x2aa0) = p + 0x2ea4;
        lbl_8035ACF8 = 1;
        { u32 t = *(volatile u32 *)(p + 0x2c); *(u32 *)(p + 0x2c) = t | lbl_803646EC; }
        if (*(u8 *)(p + 0x2400) != 0) {
            *(u8 *)(p + 0x2400) = 0;
            fn_800D9A04(*(u8 *)(p + 0x23f8), *(u32 *)(p + 0x23fc), *(u8 *)(p + 0x2400));
        }
        for (n = fn_800F9BBC(p + 0x279cc); n != 0; n = fn_800F9F44(n)) {
            u32 *ev;
            u8 *qv;
            u32 j;
            u32 i2;
            s32 f;
            wA_M *m = n->m;
            wA_O *o;
            m->c[0] = n->c[0];
            m->c[1] = n->c[1];
            m->c[2] = n->c[2];
            m->c[3] = n->c[3];
            o = n->o;
            bind(p, n, m, o, 0);
            if (o->tex == 0) {
                f = 0;
            } else {
                u32 fl = o->tex->flags;
                if (fl & 0x800) {
                    f = 1;
                } else {
                    f = (u8)(((fl >> 13) & 1) ^ 1);
                }
            }
            if (f != 0 && !(m->flags & 0x4000)) {
                e = (wA_E *)(p + n->ent * 0x24 + 0x1f7bc);
                u8 a = e->c[0];
                u8 b = e->c[1];
                u8 c = e->c[2];
                *(u8 *)((u8 *)q + 0x19b0) = a;
                *(u8 *)((u8 *)q + 0x19b1) = b;
                *(u8 *)((u8 *)q + 0x19b2) = c;
                *(u8 *)((u8 *)q + 0x19b3) = 0xff;
                if (*(u8 *)(p + 0x23b1) != a || *(u8 *)(p + 0x23b2) != b || *(u8 *)(p + 0x23b3) != c) {
                    u32 tmp;
                    *(u8 *)(p + 0x23b1) = a;
                    *(u8 *)(p + 0x23b2) = b;
                    *(u8 *)(p + 0x23b3) = c;
                    *(u8 *)(p + 0x23b4) = 0xff;
                    tmp = *(u32 *)(p + 0x23b1);
                    fn_800D7A88(0, &tmp);
                }
                if (e->n != *(u32 *)((u8 *)q + 0x1a94)) {
                    q->reset(e->n);
                }
                {
                    ev = e->v;
                    qv = (u8 *)q;
                    for (i2 = 0; i2 < e->n; i2++) {
                        if (*ev != *(u32 *)(qv + 0x1a98)) {
                            *(u32 *)(qv + 0x1a98) = *ev;
                            fn_800D7A0C(*ev, 1 << i2);
                        }
                        ev++;
                        qv += 4;
                    }
                }
            }
            fn_8015C998(m, q->f1938, o->tex);
            fn_8015FD3C(o, ctx);
            {
                j = 0;
                do {
                    fn_8015D624(m, q, j);
                    fn_8015C95C(m, ctx, j);
                    s32 r;
                    if ((r = fn_80164310(q, o)) != 0) {
                        f32 *col = o->col;
                        if (col != 0) {
                            *(f32 *)(p + 0x279fc) = col[0];
                            *(f32 *)(p + 0x27a00) = col[1];
                            *(f32 *)(p + 0x27a04) = col[2];
                            *(f32 *)(p + 0x27a08) = col[3];
                        }
                        fn_8015F4A0(o, q);
                    } else {
                        (o->*o->pmf)(ctx, r);
                    }
                    j++;
                } while (j < m->passes);
            }
        }
        *(u32 *)(p + 0x279cc) = 0;
        *(u32 *)(p + 0x23fc4) = 0;
        *(u32 *)(p + 0x23fbc) = 0;
        *(u32 *)(p + 0x23fc0) = 0;
        *(u32 *)(p + 0x2c) &= ~0x400;
        if (*(u8 *)(p + 0x2400) == 0) {
            *(u8 *)(p + 0x2400) = 1;
            fn_800D9A04(*(u8 *)(p + 0x23f8), *(u32 *)(p + 0x23fc), *(u8 *)(p + 0x2400));
        }
        lbl_8035ACF8 = 0;
        fn_801796CC(p + 0xbf10, q);
        *(u8 **)(p + 0x2aa0) = p + 0x2aa4;
    }
}

} /* namespace m8016BC04 */

namespace m8016BFF0 {

struct Ent { u8 p0[16]; f32 f16; void *f20; u8 f24, f25, f26, f27; void *f28; u16 f32; u16 f34; u32 f36; };
struct Lt { u32 w[8]; u8 f32, f33, f34, f35; };
struct R {
    u8 p0[10884]; void *f10884; u8 p1[24]; void **f10912; u8 p2[4120]; void *tab[8477];
    Ent ents[2000]; u8 *f128944_x; u8 *buf; u8 p3[4]; Lt lts[512]; u32 n0; u32 n1; u32 n2; u8 p4[14852]; u8 lst[4];
};
struct Gx { u8 p0[6444]; u32 f6444; u8 p1[128]; u8 f6576, f6577, f6578; u8 p2[225]; u32 f6804; u32 f6808[8]; };
struct Mt { u8 p[16]; u32 f16; };
struct Mx { Mt *f0; u8 p[38]; u16 f42; union { u8 b[4]; u8 *p; } f44; };
struct Xs { u8 p[16]; u32 ids[8]; u32 f48; };
struct Ex { u8 p0[8]; u8 f8, f9, f10, f11; u8 p1[8]; Xs *f20; u8 p2[16]; f32 f40; u32 f44; u8 p3[12]; f32 f60; };
struct FT { void (*f0)(u8 *, void *); void (*f4)(u8 *); u8 pad[388]; f32 (*f396)(void *, u32); };
extern "C" {
extern FT lbl_803286D0;
void fn_800F9BEC(u8 *, Ent *);
}
inline int Lit(Mt *p) {
    if (!p) return false;
    if (p->f16 & 0x800) return true;
    return (u8)(((p->f16 >> 13) & 1) ^ 1);
}
inline u8 *Alloc(R *r, Ent *t, u32 n) {
    u8 *q;
    if (r->n1 + n > 4000) r->n1 = 0;
    t->f32 = r->n1;
    q = r->buf + r->n1 * 64;
    r->n1 += n;
    return q;
}
inline Lt *NewLt(R *r, Ent *t) {
    if (r->n2 >= 512) r->n2 = 0;
    t->f34 = r->n2;
    return &r->lts[r->n2++];
}
inline void SetLt(Lt *l, Gx *g) {
    u32 c = g->f6804;
    u32 k;
    l->f32 = c;
    l->f33 = g->f6576; l->f34 = g->f6577; l->f35 = g->f6578;
    for (k = 0; k < c; k++) l->w[k] = g->f6808[k];
}
inline u32 Hdr(Lt *l, Gx *g) {
    u32 c = g->f6804;
    l->f32 = c;
    l->f33 = g->f6576; l->f34 = g->f6577; l->f35 = g->f6578;
    return c;
}
extern "C" void fn_8016BFF0(R *r, Mx *m, Ex *e, Gx *g) {
    Ent *t;
    f32 f;
    Xs *s;
    u32 i;
    u8 *q;
    Lt *l;
    u32 c;
    u32 k;
    f = lbl_803286D0.f396(r->f10884, g->f6444);
    if ((e->f44 & 0x200) && e->f40 < f) return;
    if (r->n0 >= 2000) r->n0 = 0;
    t = &r->ents[r->n0++];
    t->f20 = e;
    t->f24 = e->f8; t->f25 = e->f9; t->f26 = e->f10; t->f27 = e->f11;
    t->f28 = m;
    if (Lit(m->f0) && !(e->f44 & 0x4000)) {
        l = NewLt(r, t);
        c = Hdr(l, g);
        for (k = 0; k < c; k++) l->w[k] = g->f6808[k];
    }
    s = e->f20;
    if (s && s->f48) {
        t->f36 = s->f48;
        q = Alloc(r, t, t->f36 + m->f42);
        for (i = 0; i < t->f36; s = (Xs *)((u8 *)s + 4), i++, q += 64) {
            void *v = r->tab[s->ids[0]];
            if (v) lbl_803286D0.f0(q, v);
            else lbl_803286D0.f4(q);
        }
    } else {
        t->f36 = 0;
        q = Alloc(r, t, m->f42);
    }
    if (m->f42) {
        for (i = 0; i < m->f42; q += 64, i++) {
            u32 ix;
            if (m->f42 <= 4) ix = m->f44.b[i]; else ix = m->f44.p[i];
            lbl_803286D0.f0(q, r->f10912[ix]);
        }
    }
    t->f16 = f + e->f60;
    fn_800F9BEC(r->lst, t);
}

} /* namespace m8016BFF0 */

namespace m8016C3CC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800D6DAC(int);

void fn_8016C3CC(s32 param_1, u32 param_2) {
    s32 iVar1;

    *(u32 *)(param_1 + 0x32c) = param_2;
    iVar1 = *(s32 *)(param_1 + 0x32c);
    if (*(s32 *)(param_1 + 0x23d4) != iVar1) {
        *(s32 *)(param_1 + 0x23d4) = iVar1;
        fn_800D6DAC((int)(iVar1));
    }
}

} /* extern "C" */

} /* namespace m8016C3CC */

namespace m8016C408 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];
void __ct__9C80152B64Fv(void *);

void fn_8016C408(u8 *p, s32 i, void *b) {
    u8 t[0x48];
    __ct__9C80152B64Fv(t);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(t, (*(void ***)(p + 0x2AA0))[i]);
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(b, *(void **)(p + 0x2A84), t);
}

} /* extern "C" */

} /* namespace m8016C408 */

namespace m8016C494 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];
void fn_8016C494(u8 *p, s32 i, void *b) {
    if (*(s32 *)(p + 0x2A94) == 0) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x2A90), *(void **)(p + 0x2A84));
        *(s32 *)(p + 0x2A94) = 1;
    }
    (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(b, (*(void ***)(p + 0x2AA0))[i], *(void **)(p + 0x2A90));
}

} /* extern "C" */

} /* namespace m8016C494 */

namespace m8016C52C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];
void fn_8012951C(void *);

void fn_8016C52C(u8 *p, u8 *q) {
    fn_8012951C(q);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x0))(*(void **)(p + 0x2A84), *(void **)(q + 0x2C));
    fn_8012951C(q);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x174))(*(void **)(p + 0x2A88), *(void **)(q + 0x2C));
    *(s32 *)(p + 0x2A94) = 0;
    *(s32 *)(p + 0x279D8) += 1;
}

} /* extern "C" */

} /* namespace m8016C52C */

namespace m8016C5C0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_803286D0[];

void fn_8016C5C0(u8 *p, void *a) {
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x160))(*(void **)(p + 0x2A84), a);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x160))(*(void **)(p + 0x2A88), a);
    *(s32 *)(p + 0x2A94) = 0;
    *(s32 *)(p + 0x279D8) += 1;
}

} /* extern "C" */

} /* namespace m8016C5C0 */

namespace m8016C640 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800D9CC8(int, int);

void fn_8016C640(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x2c) & 0x1000) != 0) {
        fn_800D9CC8((int)(*(u32 *)(param_1 + 0x2a80)), (int)(1));
    }
    else {
        fn_800D9CC8((int)(*(u32 *)(param_1 + 0x2a80)), (int)(0));
    }
}

} /* extern "C" */

} /* namespace m8016C640 */

namespace m8016C684 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef void (*FP8016C684)(void *, void *);
extern FP8016C684 lbl_803286D0[];
void fn_8012951C(void *p);
void fn_800BC02C(void *p, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);
void fn_800BBF5C(void *p, f32 a, f32 b, f32 c, f32 d);
void fn_800D9CC8(void *p, s32 v);
extern u32 lbl_803646FC;
extern f32 lbl_80364700;

void fn_8016C684(u8 *p, u8 *q) {
    fn_8012951C(q);
    lbl_803286D0[0](M2C_FIELD(p, void **, 10884), M2C_FIELD(q, void **, 44));
    fn_8012951C(q);
    lbl_803286D0[93](M2C_FIELD(p, void **, 10888), M2C_FIELD(q, void **, 44));
    M2C_FIELD(p, s32 *, 10900) = 0;
    M2C_FIELD(p, s32 *, 10908) = 0;
    M2C_FIELD(p, s32 *, 0x279D8) += 1;
    if (M2C_FIELD(q, s32 *, 100) != 0) {
        fn_800BC02C(M2C_FIELD(p, void **, 10880), M2C_FIELD(q, f32 *, 72), M2C_FIELD(q, f32 *, 64), M2C_FIELD(q, f32 *, 60),
                    M2C_FIELD(q, f32 *, 68), M2C_FIELD(q, f32 *, 76), M2C_FIELD(q, f32 *, 80));
        M2C_FIELD(p, u32 *, 44) |= lbl_803646FC;
        fn_800D9CC8(M2C_FIELD(p, void **, 10880), 1);
    } else {
        fn_800BBF5C(M2C_FIELD(p, void **, 10880), lbl_80364700 * M2C_FIELD(q, f32 *, 52), M2C_FIELD(q, f32 *, 56),
                    M2C_FIELD(q, f32 *, 76), M2C_FIELD(q, f32 *, 80));
        M2C_FIELD(p, u32 *, 44) &= ~0x1000;
        fn_800D9CC8(M2C_FIELD(p, void **, 10880), 0);
    }
    lbl_803286D0[92](M2C_FIELD(p, void **, 10876), M2C_FIELD(p, void **, 10880));
}

} /* extern "C" */

} /* namespace m8016C684 */

namespace m8016C7BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct L36 { u8 d[0x40]; };
struct T36 { u8 pad[0x174]; void (*f174)(L36 *l, s32 x); };
extern T36 lbl_803286D0;
extern volatile s32 lbl_8035ACE8;
void __ct__9C80152B64Fv(L36 *l);
void fn_8011B250(void);
void fn_800D6700(void);
void fn_8015B0D8(void *p);
void fn_800D9DF8(L36 *l, s32 n);
void fn_800D9E48(L36 *l, s32 n);
void fn_8016C7BC(u8 *p) {
    if (*(u32 *)(p + 0x344) == 1) {
        if (*(s32 *)(p + 0x3b4) == 0) {
            fn_8011B250();
            while (lbl_8035ACE8 != 0) {}
        }
    } else if (*(s32 *)(p + 0x279d4) != 0) {
        fn_8011B250();
        fn_800D6700();
        fn_8015B0D8(p + 0x348);
        *(s32 *)(p + 0x279d4) = 0;
    }
    {
        s32 x = *(s32 *)(p + 0x2a78);
        L36 a;
        __ct__9C80152B64Fv(&a);
        lbl_803286D0.f174(&a, x);
        fn_800D9DF8(&a, 3);
        *(s32 *)(p + 0x1fbc) = x;
    }
    {
        s32 x = *(s32 *)(p + 0x2a78);
        L36 b;
        __ct__9C80152B64Fv(&b);
        lbl_803286D0.f174(&b, x);
        fn_800D9E48(&b, 3);
        *(s32 *)(p + 0x21bc) = x;
    }
    *(s32 *)(p + 0x3f0c) = 0;
    *(s32 *)(p + 0x23fc4) = 0;
    *(s32 *)(p + 0x23fbc) = 0;
    *(s32 *)(p + 0x23fc0) = 0;
    *(s32 *)(p + 0x279c8) = 0;
}

} /* extern "C" */

} /* namespace m8016C7BC */

namespace m8016C8D0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8016C8D0_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };

void fn_8016C8D0(u32 param_1, s32 param_2) {
    ((VCall_fn_8016C8D0_0 *)(param_2))->m();
}
}

} /* namespace m8016C8D0 */

namespace m8016C900 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_801335E8(int);
struct VCall_fn_8016C900_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(int, int, int); };

s32 fn_8016C900(s32 param_1, u32 param_2) {
    s32 iVar1;

    iVar1 = fn_801335E8((int)(param_1 + 0x2a1c));
    ((VCall_fn_8016C900_0 *)(iVar1))->m((s32)(param_1), (s32)(param_2), (s32)(0));
    return iVar1;
}
}

} /* namespace m8016C900 */

namespace m8016C968 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern s32 lbl_8035ACE8;
void fn_800D6668(void); void fn_8011B250(void); void fn_800D6700(void); void fn_8015B0D8(void *);
typedef struct O { u8 p[0x344]; u32 st; u8 b[4]; } O;
void fn_8016C968(O *o, int f) {
    if (o->st == 1) {
        if (lbl_8035ACE8 == 0) lbl_8035ACE8 = 1; fn_800D6668();
    } else if (f) {
        fn_8011B250(); fn_800D6700(); fn_8015B0D8(o->b);
    } else {
        *(s32 *)((u8 *)o + 0x279D4) = 1;
    }
}

} /* extern "C" */

} /* namespace m8016C968 */

namespace m8016C9E0 {
/* Functions from 0x8016C9E0 to 0x8016CC50, found by decomp-toolkit. */

extern "C" {

s32 fn_8016C9E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x33C);
}

s32 fn_8016C9E8(s32 arg0) {
    return arg0 + 0x2998;
}

s32 fn_8016C9F0(s32 arg0) {
    return arg0 + 0x27B8;
}

void fn_8016C9F8(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F40);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x20);
            return;
        }
        pp = (u8 **)(p + 0x20);
        p = *pp;
    }
}

void fn_8016CA28(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x1F40);
    M2C_FIELD(arg0, void **, 0x1F40) = arg1;
}

void fn_8016CA38(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F3C);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x20);
            return;
        }
        pp = (u8 **)(p + 0x20);
        p = *pp;
    }
}

void fn_8016CA68(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x1F3C);
    M2C_FIELD(arg0, void **, 0x1F3C) = arg1;
}

void fn_8016CA78(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F38);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x30);
            return;
        }
        pp = (u8 **)(p + 0x30);
        p = *pp;
    }
}

void fn_8016CAA8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x1F38);
    M2C_FIELD(arg0, void **, 0x1F38) = arg1;
}

void fn_8016CAB8(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F34);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x38);
            return;
        }
        pp = (u8 **)(p + 0x38);
        p = *pp;
    }
}

void fn_8016CAE8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x1F34);
    M2C_FIELD(arg0, void **, 0x1F34) = arg1;
}

void fn_8016CAF8(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F30);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x44);
            return;
        }
        pp = (u8 **)(p + 0x44);
        p = *pp;
    }
}

void fn_8016CB28(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x44) = (void *) M2C_FIELD(arg0, void **, 0x1F30);
    M2C_FIELD(arg0, void **, 0x1F30) = arg1;
}

void fn_8016CB38(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F2C);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x3C);
            return;
        }
        pp = (u8 **)(p + 0x3C);
        p = *pp;
    }
}

void fn_8016CB68(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x1F2C);
    M2C_FIELD(arg0, void **, 0x1F2C) = arg1;
}

void fn_8016CB78(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F28);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x3C);
            return;
        }
        pp = (u8 **)(p + 0x3C);
        p = *pp;
    }
}

void fn_8016CBA8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x1F28);
    M2C_FIELD(arg0, void **, 0x1F28) = arg1;
}

void fn_8016CBB8(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F24);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x1AFC);
            return;
        }
        pp = (u8 **)(p + 0x1AFC);
        p = *pp;
    }
}

void fn_8016CBE8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x1AFC) = (void *) M2C_FIELD(arg0, void **, 0x1F24);
    M2C_FIELD(arg0, void **, 0x1F24) = arg1;
}

void fn_8016CBF8(u8 *arg0, u8 *arg1) {
    u8 **pp = (u8 **)(arg0 + 0x1F20);
    u8 *p = *pp;
    while (p != NULL) {
        if (p == arg1) {
            *pp = *(u8 **)(arg1 + 0x54);
            return;
        }
        pp = (u8 **)(p + 0x54);
        p = *pp;
    }
}

void fn_8016CC28(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x54) = (void *) M2C_FIELD(arg0, void **, 0x1F20);
    M2C_FIELD(arg0, void **, 0x1F20) = arg1;
}

s32 fn_8016CC38(s32 arg0) {
    return arg0 + 0x410;
}

s32 fn_8016CC40(s32 arg0) {
    return arg0 + 0x3B8;
}

s32 fn_8016CC48(s32 arg0) {
    return arg0 + 0x348;
}

} /* extern "C" */

} /* namespace m8016C9E0 */

namespace m8016CC50 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
void *memset(void *, int, u32);
void fn_8016B564(void);
void fn_8012163C(void *);
extern f32 lbl_803646D8;
extern f32 lbl_803646F8;
extern f32 lbl_80364704;

#pragma opt_common_subs off
void fn_8016CC50(u8 *p) {
    M2C_FIELD(p, s32 *, 832) = 0;
    M2C_FIELD(p, s32 *, 7952) = 0;
    M2C_FIELD(p, s32 *, 7956) = 0;
    M2C_FIELD(p, s32 *, 836) = 0;
    memset(p + 7960, 0, 8);
    M2C_FIELD(p, s32 *, 7968) = 0;
    M2C_FIELD(p, s32 *, 7972) = 0;
    M2C_FIELD(p, s32 *, 7976) = 0;
    M2C_FIELD(p, s32 *, 7980) = 0;
    M2C_FIELD(p, s32 *, 7984) = 0;
    M2C_FIELD(p, s32 *, 7988) = 0;
    M2C_FIELD(p, s32 *, 7992) = 0;
    M2C_FIELD(p, s32 *, 7996) = 0;
    M2C_FIELD(p, s32 *, 8000) = 0;
    M2C_FIELD(p, s32 *, 10872) = 0;
    M2C_FIELD(p, s32 *, 10892) = 0;
    M2C_FIELD(p, s32 *, 10876) = 0;
    M2C_FIELD(p, s32 *, 10880) = 0;
    M2C_FIELD(p, s32 *, 10884) = 0;
    M2C_FIELD(p, s32 *, 10888) = 0;
    M2C_FIELD(p, s32 *, 10896) = 0;
    M2C_FIELD(p, s32 *, 10900) = 0;
    M2C_FIELD(p, s32 *, 10904) = 0;
    M2C_FIELD(p, s32 *, 10908) = 0;
    M2C_FIELD(p, u8 **, 10912) = p + 10916;
    memset(p + 10916, 0, 1024);
    memset(p + 11940, 0, 1024);
    memset(p + 14012, 0, 1024);
    memset(p + 15036, 0, 1024);
    memset(p + 16060, 0, 80);
    M2C_FIELD(p, s32 *, 16140) = 0;
    memset(p + 16144, 0, 0x8000);
    M2C_FIELD(p, s32 *, 147396) = 0;
    memset(p + 128956, 0, 18432);
    M2C_FIELD(p, s32 *, 147388) = 0;
    M2C_FIELD(p, s32 *, 147392) = 0;
    M2C_FIELD(p, s32 *, 147396) = 0;
    M2C_FIELD(p, s32 *, 162248) = 0;
    M2C_FIELD(p, void **, 162256) = (void *)fn_8016B564;
    M2C_FIELD(p, s32 *, 162260) = 0;
    M2C_FIELD(p, s32 *, 162264) = 0;
    M2C_FIELD(p, s32 *, 812) = 2;
    M2C_FIELD(p, s32 *, 10144) = 0;
    M2C_FIELD(p, s32 *, 10148) = 1;
    M2C_FIELD(p, s32 *, 10152) = 1;
    M2C_FIELD(p, s32 *, 10156) = 0;
    M2C_FIELD(p, s32 *, 10160) = 0;
    M2C_FIELD(p, s32 *, 10164) = 0;
    fn_8012163C(p + 162268);
    M2C_FIELD(p, s32 *, 162272) = 2;
    M2C_FIELD(p, f32 *, 162276) = lbl_803646D8;
    M2C_FIELD(p, f32 *, 162280) = lbl_803646F8;
    M2C_FIELD(p, f32 *, 162284) = lbl_803646F8;
    M2C_FIELD(p, f32 *, 162288) = lbl_80364704;
    memset(p + 820, 0, 7);
    M2C_FIELD(p, s32 *, 162292) = 0;
    M2C_FIELD(p, s32 *, 162296) = 2;
}
#pragma opt_common_subs reset

} /* extern "C" */

} /* namespace m8016CC50 */

namespace m8016CE20 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
void __dla__FPv(void *);
} /* extern "C" */
struct V8016CE20 { u8 pad[32]; virtual void v0(); virtual void v1(); };
extern "C" {
static inline void freeBufs(u8 *self) {
    u32 i;
    for (i = 0; i < *(u32 *)(self + 836); i++) {
        if (*(void **)(self + i * 4 + 7960) != 0) {
            __dla__FPv(*(void **)(self + i * 4 + 7960));
            *(void **)(self + i * 4 + 7960) = 0;
        }
    }
}
void fn_8016CE20(u8 *self) {
    ((V8016CE20 *)(self + 952))->v1();
    ((V8016CE20 *)(self + 840))->v1();
    freeBufs(self);
}

} /* extern "C" */

} /* namespace m8016CE20 */

namespace m8016CEC0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_8016CEF4(void);

s32 fn_8016CEC0(void) {
    s32 iVar1;
    s32 iVar2;

    iVar2 = fn_8016CEF4();
    iVar1 = 0;
    if (iVar2 != 0) {
        iVar1 = iVar2;
    }
    return iVar1;
}

} /* extern "C" */

} /* namespace m8016CEC0 */

namespace m8016CEF4 {
// fn_8016CEF4: code matches 100% (GC/2.0p1). NonMatching only because the native u16->f32 magic
// double (lbl_803646E0) is pooled with text_8016B5F4 (one TU 80168AE8..8016CEF4); needs a TU merge to link.

extern "C" {

struct RM {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u8 pad0a[0x19 - 0x0a];
    u8 aa;
    u8 sample_pattern[0x32 - 0x1a];
    u8 vfilter[7];
};
struct H { u8 pad[24]; u32 f24; u32 f28; };
struct Clr { u8 r, g, b, a; };
struct Buf { u8 d[0x14]; };
struct V27B8 { virtual void s0(); virtual void init(void *a, void *b); };
struct P {
    u8 pad0[4];
    u8 f4[0x330 - 4];
    RM *rm;
    u8 pad334[0x340 - 0x334];
    void *f340;
    u32 nfb;
    u8 f348[0x3b8 - 0x348];
    u8 f3b8[0x1f10 - 0x3b8];
    void *fifo;
    void *gxfifo;
    u8 *xfb[(0x27b8 - 0x1f18) / 4];
    V27B8 v27b8;
};
extern H *lbl_8035AD28;
extern f32 lbl_803646D8;
extern f32 lbl_803646F8;
void fn_80148310(Buf *);
RM *fn_80153B24(void *, void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(H *);
void fn_800F7E98(void);
void fn_800C182C(RM *);
void *GXInit(void *, u32);
void fn_800DA010(f32 x, f32 y, f32 w, f32 h, f32 n, f32 f);
void fn_800DA0C4(u32 x, u32 y, u32 w, u32 h);
void fn_800D6E48(u16 x, u16 y, u16 w, u16 h);
void fn_800D6F40(u16 w, u16 h);
void fn_800D7120(f32);
void fn_800D7264(u8 a, const u8 *b, s32 c, const u8 *d);
void fn_800D9A6C(s32, s32);
void fn_801481D4(Buf *out, u16 id, u32 a, u32 b, u32 flag);
void fn_800D71EC(Clr c, u32 z);
void fn_800C2584(int);
void fn_800D7480(void *a, s32 b);
void fn_800D746C(s32);
void fn_800C2518(void *);
void fn_800C23E8(void);
void fn_800C1364(void);
void fn_80148138(Buf *, u16, u32, u32, u32);
void fn_8015B218(void *, u16, u16, u32, Buf *, u32, u8 **);
void fn_8015755C(void *, P *, u16, u16, Buf *);
void *__nwa__FUl(u32);
void __dla__FPv(void *);

static inline void lvl(u32 n) { H *h = lbl_8035AD28; if (h->f24 >= n) h->f28 = h->f24; else h->f28 = n; }

int fn_8016CEF4(P *p, void *a, u8 *q) {
    Buf b2c;
    Buf b18;
    Clr clr;
    s32 i;
    u32 stride;
    s32 size;
    u32 j;
    fn_80148310(&b2c);
    fn_80148310(&b18);
    p->f340 = a;
    p->rm = fn_80153B24(p->f340, q + 8, p->f4);
    stride = (u16)((p->rm->fbWidth + 15) & ~15) * 2;
    size = p->rm->xfbHeight * stride;
    lvl(5);
    if (!lbl_8035AD28) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AD28);
    for (i = 0; i < p->nfb; i++) {
        if (!lbl_8035AD28) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AD28);
        p->xfb[i] = (u8 *)__nwa__FUl(size);
        fn_800F7E98();
        if (!p->xfb[i]) fn_800604C4(-4, 0, 0, 0);
        if (!p->xfb[i]) {
            fn_800F7E98();
            lbl_8035AD28->f28 = lbl_8035AD28->f24;
            while (--i >= 0) {
                __dla__FPv(p->xfb[i]);
                p->xfb[i] = 0;
            }
            return 2;
        }
        for (j = 0; j < (u32)size / 4; j++) {
            p->xfb[i][j * 4 + 0] = 0x10;
            p->xfb[i][j * 4 + 1] = 0x80;
            p->xfb[i][j * 4 + 2] = 0x10;
            p->xfb[i][j * 4 + 3] = 0x80;
        }
    }
    fn_800F7E98();
    lbl_8035AD28->f28 = lbl_8035AD28->f24;
    fn_800C182C(p->rm);
    p->gxfifo = GXInit(p->fifo, 0x20000);
    fn_800DA010(lbl_803646D8, lbl_803646D8, (f32)p->rm->fbWidth, (f32)p->rm->efbHeight, lbl_803646D8, lbl_803646F8);
    fn_800DA0C4(0, 0, p->rm->fbWidth, p->rm->efbHeight);
    fn_800D6E48(0, 0, p->rm->fbWidth, p->rm->efbHeight);
    fn_800D6F40(p->rm->fbWidth, p->rm->xfbHeight);
    fn_800D7120((f32)p->rm->xfbHeight / (f32)p->rm->efbHeight);
    fn_800D7264(p->rm->aa, p->rm->sample_pattern, 1, p->rm->vfilter);
    if (p->rm->aa) {
        fn_800D9A6C(2, 0);
        fn_801481D4(&b18, 0x10, 0xFFFF, 0, 0);
    } else {
        fn_800D9A6C(0, 0);
        fn_801481D4(&b18, 0x18, 0xFFFFFF, 0, 0);
    }
    clr.r = 0;
    clr.g = 0;
    clr.b = 0;
    clr.a = 0xFF;
    fn_800D71EC(clr, 0xFFFFFF);
    fn_800C2584(0);
    fn_800D7480(p->xfb[0], 1);
    fn_800D746C(1);
    fn_800C2518(p->xfb[0]);
    fn_800C23E8();
    fn_800C1364();
    fn_800D7480(p->xfb[0], 1);
    fn_800C23E8();
    fn_800C1364();
    if (p->rm->viTVmode & 1) fn_800C1364();
    p->v27b8.init(a, p->f4);
    fn_80148138(&b2c, 0x10, 0xFC00, 0x3E0, 0x1F);
    fn_8015B218(p->f348, p->rm->fbWidth, p->rm->xfbHeight, stride, &b2c, p->nfb, p->xfb);
    fn_8015755C(p->f3b8, p, p->rm->fbWidth, p->rm->efbHeight, &b18);
    return 0;
}

}

} /* namespace m8016CEF4 */
