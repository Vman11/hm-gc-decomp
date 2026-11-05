#include "common.h"
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
