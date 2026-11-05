#include "common.h"

extern "C" {

struct R { u32 f0; u32 f4; u8 pad[0x11c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct V { u8 b[0x14]; };
struct D {
    f32 *pos; u32 posS;
    f32 *w; u32 wS;
    u8 *idx; u32 idxS;
    f32 *nrm; u32 nrmS;
    u32 *c0; u32 c0S;
    u32 *c1; u32 c1S;
    f32 *tex[8]; u32 texS[8];
};
struct MB {
    u32 f0, f4, f8;
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void clr();
    virtual void s5();
    virtual void fin();
    virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12();
    virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18();
    virtual void alloc();
    virtual void s20(); virtual void s21();
    virtual void get(D *d, s32 n);
    virtual void fmt(V *v);
};
struct Sub { u32 f0; u32 n; u32 f8; u32 nt; };
struct M : MB {
    Sub sub;
    u8 pad20[0xc];
    f32 cx, cy, cz;
    char name[8];
    short ident;
};

void fn_80148310(V *);
u32 fn_80147F68(V *); u32 fn_80147F38(V *); u32 fn_80147F08(V *); u32 fn_80147ED8(V *);
void fn_800FAEF8(R *); void fn_800FAEA0(R *); u32 fn_800FADA8(R *); void fn_800FB064(R *, void *);
f32 fn_800FB2E0(R *); u32 fn_800FB33C(R *);
u32 fn_80139228(R *r, u32 *a, u32 *b);
void fn_8014C8C8(Sub *, u32, u32, u32);
void *memset(void *, int, u32);
extern u32 lbl_80364248, lbl_8036424C, lbl_80364250, lbl_80364254, lbl_80364258;
extern f32 lbl_803641D0, lbl_803641D4;

#pragma inline_max_size(4000)
static inline void Vtx(M *m, R *r, D *d, u32 f, u32 f2, u32 &a2, u32 &b2, u32 s0, u32 s1, u32 s2, u32 s3) {
    u32 j;
    if (f2 & 0x80) {
        if (f & 0x80) {
            f32 *p = d->pos;
            p[0] = fn_800FB2E0(r); m->cx += p[0];
            p[1] = fn_800FB2E0(r); m->cy += p[1];
            p[2] = fn_800FB2E0(r); m->cz += p[2];
            d->pos = (f32 *)((u8 *)d->pos + d->posS);
        } else {
            fn_800FB2E0(r); fn_800FB2E0(r); fn_800FB2E0(r);
        }
    } else if (f2 & 0x40) {
        if (f & 0x40) {
            f32 *p = d->pos;
            p[0] = fn_800FB2E0(r); m->cx += p[0];
            p[1] = fn_800FB2E0(r); m->cy += p[1];
            d->pos = (f32 *)((u8 *)d->pos + d->posS);
        } else {
            fn_800FB2E0(r); fn_800FB2E0(r);
        }
    } else if (f2 & 0x100) {
        if (f & 0x100) {
            f32 *p = d->pos;
            p[0] = fn_800FB2E0(r); m->cx += p[0];
            p[1] = fn_800FB2E0(r); m->cy += p[1];
            p[2] = fn_800FB2E0(r); m->cz += p[2];
            p[3] = fn_800FB2E0(r);
            d->pos = (f32 *)((u8 *)d->pos + d->posS);
        } else {
            fn_800FB2E0(r); fn_800FB2E0(r); fn_800FB2E0(r); fn_800FB2E0(r);
        }
    }
    if (f2 & 0x200) {
        u32 n = a2;
        f32 sum = lbl_803641D0;
        f32 *w = d->w;
        for (u32 j = 0; j < n; j++) {
            f32 x = fn_800FB2E0(r);
            sum += x;
            if (j < m->sub.n) {
                *w = x;
                w++;
            }
        }
        if (n == m->sub.n - 1) {
            if (sum < lbl_803641D4) *w = lbl_803641D4 - sum;
            else *w = lbl_803641D0;
        }
        d->w = (f32 *)((u8 *)d->w + d->wS);
    }
    if (f2 & 0x400) {
        if (f & 0x400) {
            for (u32 j = 0; j < a2 + 1; j++) d->idx[j] = fn_800FB33C(r);
            d->idx = d->idx + d->idxS;
        } else {
            for (u32 j = 0; j < a2 + 1; j++) fn_800FB33C(r);
        }
    }
    if (f2 & 0x800) {
        if (f & 0x800) {
            f32 *p = d->nrm;
            p[0] = fn_800FB2E0(r);
            p[1] = fn_800FB2E0(r);
            p[2] = fn_800FB2E0(r);
            d->nrm = (f32 *)((u8 *)d->nrm + d->nrmS);
        } else {
            fn_800FB2E0(r); fn_800FB2E0(r); fn_800FB2E0(r);
        }
    }
    if (f2 & 0x2000) {
        if (f & 0x2000) {
            u32 *p = d->c0;
            u32 c0 = fn_800FB33C(r);
            u32 c1 = fn_800FB33C(r);
            u32 c2 = fn_800FB33C(r);
            u32 c3 = fn_800FB33C(r);
            *p = (c0 << s0) | (c1 << s1) | (c2 << s2) | (c3 << s3);
            d->c0 = (u32 *)((u8 *)d->c0 + d->c0S);
        } else {
            fn_800FB33C(r); fn_800FB33C(r); fn_800FB33C(r); fn_800FB33C(r);
        }
    }
    if (f2 & 0x4000) {
        if (f & 0x4000) {
            u32 *p = d->c1;
            u32 c0 = fn_800FB33C(r);
            u32 c1 = fn_800FB33C(r);
            u32 c2 = fn_800FB33C(r);
            u32 c3 = fn_800FB33C(r);
            *p = (c0 << s0) | (c1 << s1) | (c2 << s2) | (c3 << s3);
            d->c1 = (u32 *)((u8 *)d->c1 + d->c1S);
        } else {
            fn_800FB33C(r); fn_800FB33C(r); fn_800FB33C(r); fn_800FB33C(r);
        }
    }
    if (f2 & 0x8000) {
        u32 n = b2;
        u32 j; u32 m1; u32 m2;
        m1 = 0x10000;
        m2 = 0x1000000;
        for (j = 0; j < n; j++) {
            f32 *t = d->tex[j];
            if (j < m->sub.nt) {
                t[0] = fn_800FB2E0(r);
                t[1] = fn_800FB2E0(r);
                if (f2 & (m1 | m2)) {
                    t[2] = fn_800FB2E0(r);
                    if (f2 & m2) t[3] = fn_800FB2E0(r);
                }
            } else {
                fn_800FB2E0(r);
                fn_800FB2E0(r);
                if (f2 & (m1 | m2)) {
                    fn_800FB2E0(r);
                    if (f2 & m2) fn_800FB2E0(r);
                }
            }
            d->tex[j] = (f32 *)((u8 *)d->tex[j] + d->texS[j]);
            m1 <<= 1;
            m2 <<= 1;
        }
    }
}

void fn_8013A1B0(M *m, void *, R *r, short id) {
    D d;
    V v;
    u32 a2, a1, b2, b1;
    u32 f, i, f2, k;
    s32 seen;
    u32 s0, s1, s2, s3;

    fn_80148310(&v);
    if (m->f4 & 1) m->clr();
    m->ident = id;
    fn_800FAEF8(r);
    m->f0 = 0;
    f = 0;
    f2 = 0;
    seen = 0;
    a1 = 0; a2 = 0; b1 = 0; b2 = 0;
    while ((k = r->next()) != 0x5d) {
        switch (k) {
        case 0x3f:
            f |= fn_80139228(r, &a1, &b1);
            break;
        case 0x76:
            f2 = fn_80139228(r, &a2, &b2);
            seen = 1;
            break;
        case 0x58:
            m->f0 &= ~0xF;
            m->f0 |= lbl_80364248;
            break;
        case 0x59:
            m->f0 &= ~0xF;
            m->f0 |= lbl_8036424C;
            break;
        case 0x5a:
            m->f0 &= ~0xF;
            m->f0 |= lbl_80364250;
            break;
        case 0x5b:
            m->f0 &= ~0xF;
            m->f0 |= lbl_80364254;
            break;
        default:
            r->err(30);
            break;
        }
    }
    if (!seen) {
        f2 = f;
        a2 = a1;
        b2 = b1;
    }
    fn_8014C8C8(&m->sub, f, a1, b1);
    m->f8 = fn_800FADA8(r);
    k = r->next();
    if (k == 0x77) {
        m->f4 |= lbl_80364258;
        fn_800FB064(r, m->name);
        fn_800FAEA0(r);
    } else if (k == 6) {
        if (f) m->alloc();
    } else {
        r->f4 = 1;
        if (f) {
            m->alloc();
            m->get(&d, 8);
        } else {
            memset(&d, 0, 0x70);
        }
        m->fmt(&v);
        s0 = fn_80147F68(&v);
        s1 = fn_80147F38(&v);
        s2 = fn_80147F08(&v);
        s3 = fn_80147ED8(&v);
        m->cx = lbl_803641D0;
        m->cy = lbl_803641D0;
        m->cz = lbl_803641D0;
        for (i = 0; i < m->f8; i++) {
            Vtx(m, r, &d, f, f2, a2, b2, s0, s1, s2, s3);
        }
        if (f) {
            f32 sc = lbl_803641D4 / (f32)(s32)m->f8;
            m->cx *= sc;
            m->cy *= sc;
            m->cz *= sc;
            m->fin();
        }
        fn_800FAEA0(r);
    }
    fn_800FAEA0(r);
}

}
