// Merged TU (wCU): text_80222ED0..text_80223A50 share the int->float magic lbl_80365A88 (.sdata2 80365A88-80365A90).
#include "common.h"

namespace m80222ED0 {
extern "C" {
extern f32 lbl_80365A90;
extern f32 lbl_80365A94;
extern f32 lbl_80365A70;

#pragma opt_propagation off
void fn_80222ED0(u8 *p, s32 n) {
    if (*(s32 *)(p + 644) != 0 && n != 0) {
        f32 a = lbl_80365A90;
        s32 t = (s32)(a * (f32)n);
        *(f32 *)(p + 660) = lbl_80365A94 * (f32)t;
        *(f32 *)(p + 656) = *(f32 *)(p + 660);
        *(s32 *)(p + 672) = *(s32 *)(p + 664);
        *(s32 *)(p + 668) = *(s32 *)(p + 664);
        *(s32 *)(p + 664) = 0;
    } else {
        *(f32 *)(p + 660) = lbl_80365A70;
        *(f32 *)(p + 656) = lbl_80365A70;
        *(s32 *)(p + 668) = 0;
        *(s32 *)(p + 672) = 0;
        *(s32 *)(p + 664) = 0;
    }
    *(s32 *)(p + 644) = 0;
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m80222ED0 */

namespace m80222F8C {
extern "C" {
extern f32 lbl_80365A94;
extern f32 lbl_80365A98;
#pragma opt_propagation off
void fn_80222F8C(u8 *p, s32 a, s32 n) {
    *(s32 *)(p + 644) = 1;
    *(f32 *)(p + 660) = lbl_80365A94 * (f32)n;
    *(f32 *)(p + 656) = *(f32 *)(p + 660);
    *(s32 *)(p + 668) = 0;
    *(s32 *)(p + 672) = 0;
    *(s32 *)(p + 664) = a;
    *(f32 *)(p + 748) = lbl_80365A98;
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m80222F8C */

namespace m80222FE8 {
extern "C" {
struct V3 { f32 x, y, z; };
typedef struct { int on; f32 tgt, x, v, k, fs, d, fd, a, im; } Spr;
struct CS {
    u8 pad0[0x284];
    s32 f284;
    u8 pad288[0x2a8 - 0x288];
    Spr spr;
    f32 f2d0;
    f32 amp;
    V3 off;
    f32 t;
    s32 st;
};
struct FT {
    u8 pad0[0xc];
    void (*setPos)(void *, V3 *);
    u8 pad10[0x130 - 0x10];
    void (*getPos)(void *, V3 *);
};
extern FT lbl_803286D0;
struct Obj { u8 pad[0x10]; void *h; u8 pad14[0xc]; u32 fl; };
struct G65C { u8 pad[0x28]; Obj *o; };
extern G65C *lbl_8035B65C;
struct E52 { u8 pad[0x34]; };
struct G5E4 { u8 pad[0x68]; s32 idx; u8 pad6c[4]; E52 *arr; };
extern G5E4 *lbl_8035B5E4;
extern const u32 lbl_80365A9C;
extern f32 lbl_80365A70;
extern f32 lbl_80365A80;
extern f32 lbl_80365AA0;
extern f32 lbl_80365AA4;
extern f32 lbl_80365AA8;
extern f32 lbl_80365AAC;
f32 fn_8023D494(Spr *s, f32 dt, f32 t);
void fn_80253304(E52 *, s32, f32);
void fn_80253250(E52 *);
int rand(void);
static inline f64 fabs(f64 x) { return __fabs(x); }

static inline s32 rmod(u32 n) { s32 r = 0; if (n) r = rand() % n; return r; }
static inline f32 sgn() { f32 s; if (rand() & 1) s = lbl_80365A80; else s = lbl_80365AA0; return s; }
static inline f32 roff(s32 n, f32 s) {
    f32 r;
    if (n < 0) r = lbl_80365AA8 * (f32)-rmod(-n); else r = lbl_80365AA8 * (f32)rmod(n);
    return r * s;
}

#pragma opt_propagation off
void fn_80222FE8(CS *p, f32 dt) {
    switch (p->st) {
    case 1:
        fn_8023D494(&p->spr, dt, lbl_80365A70);
        break;
    case 2: case 3: case 4:
        p->t -= dt;
        { f32 t = p->t; if (t <= lbl_80365A70) { p->t = lbl_80365A70; p->spr.x = lbl_80365A70; } }
        break;
    default:
        p->spr.x = lbl_80365A70;
        break;
    }
    f32 x = p->spr.x;
    if (p->st != 0) {
        f32 s = sgn();
        s32 n = (s32)(lbl_80365AA4 * x);
        p->off.x = roff(n, s);
        s = sgn();
        p->off.y = roff(n, s);
        s = sgn();
        p->off.z = roff(n, s);
        V3 v;
        Obj *o = lbl_8035B65C->o;
        lbl_803286D0.getPos(o->h, &v);
        v.x += p->off.x;
        v.y += p->off.y;
        v.z += p->off.z;
        lbl_803286D0.setPos(o->h, &v);
        o->fl |= lbl_80365A9C;
        E52 *e = &lbl_8035B5E4->arr[lbl_8035B5E4->idx];
        p->amp = fabs(lbl_80365AAC * p->spr.x);
        fn_80253304(e, 1000, p->amp);
        if (x <= lbl_80365AA8) {
            p->off.x = lbl_80365A70;
            p->off.y = lbl_80365A70;
            p->off.z = lbl_80365A70;
            p->t = lbl_80365A70;
            p->st = 1;
            p->spr.v = lbl_80365A70;
            fn_80253250(&lbl_8035B5E4->arr[lbl_8035B5E4->idx]);
            p->spr.x = lbl_80365A70;
            fn_80253304(e, 1000, lbl_80365A70);
            p->st = 0;
        }
    }
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m80222FE8 */

namespace m8022340C {
extern "C" {
extern f32 lbl_80365AB0;
extern f32 lbl_80365AB4;
extern f32 lbl_80365AB8;

void fn_8022340C(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2E4) = farg0;
    M2C_FIELD(arg0, s32 *, 0x2E8) = arg1;
    switch (arg1) {                                 /* irregular */
    case 2:
        M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) lbl_80365AB0;
        return;
    case 3:
        M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) lbl_80365AB4;
        return;
    case 4:
        M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) lbl_80365AB8;
        return;
    }
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m8022340C */

namespace m8022345C {
extern "C" {
extern f32 lbl_80365A70;
extern u8 *lbl_8035B5E4;
void fn_80253250(void *);

void fn_8022345C(u8 *p, f32 f) {
    *(f32 *)(p + 740) = lbl_80365A70;
    *(s32 *)(p + 744) = 1;
    *(f32 *)(p + 692) = f;
    if (lbl_80365A70 == f) {
        fn_80253250(*(u8 **)(lbl_8035B5E4 + 112) + *(s32 *)(lbl_8035B5E4 + 104) * 52);
    }
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m8022345C */

namespace m802234B0 {
extern "C" {
struct V3 { f32 x, y, z; };
struct N {
    u32 flags;
    u8 pad4[20];
    f32 x, y, z, r;
    u8 pad40[20];
    struct Q *q60;
    u8 pad64[40];
    virtual void v0(); virtual void v1(); virtual void upd();
    f32 gx() { if (flags & 4) upd(); return x; }
    f32 gy() { if (flags & 4) upd(); return y; }
    f32 gz() { if (flags & 4) upd(); return z; }
    f32 gr() { if (flags & 4) upd(); return r; }
};
struct Q { u8 pad[552]; u32 fl; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
};
struct P {
    u8 pad0[20];
    V3 axis;
    u8 pad32[36];
    V3 org;
    u8 pad80[76];
    N *n156;
    u8 pad160[236];
    OB *o396;
    u8 pad400[164];
    Q *q564;
    u8 pad568[228];
    f32 best;
    s32 hit;
    s32 who;
};
extern f32 lbl_80365ABC;
f32 fn_80101590(V3 *, V3 *);
void fn_80101820(V3 *);
int fn_8023BD28(V3, V3, V3, f32, f32 *, f32 *);

void fn_802234B0(P *p, N *q, s32 k) {
    if (q->q60 != p->q564 && !(q->q60->fl & 0x80)) {
        f32 ra = p->n156->gr();
        f32 rq = q->gr();
        V3 pa, pq, w, d;
        f32 dot;
        f32 t1, t2;
        {
            f32 z = p->n156->gz();
            f32 y = p->n156->gy();
            pa.x = p->n156->gx();
            pa.y = y;
            pa.z = z;
        }
        {
            f32 z = q->gz();
            f32 y = q->gy();
            pq.x = q->gx();
            pq.y = y;
            pq.z = z;
        }
        if (fn_80101590(&pa, &pq) < ra + rq) {
            p->o396->s13(&w, 0, 0, 0, 0);
            d.x = w.x - p->org.x;
            d.y = w.y - p->org.y;
            d.z = w.z - p->org.z;
            dot = d.x * p->axis.x + d.y * p->axis.y + d.z * p->axis.z;
            fn_80101820(&d);
            if (fn_8023BD28(pq, pa, d, rq, &t1, &t2)) {
                if (t2 > dot - lbl_80365ABC) t2 = dot - lbl_80365ABC;
                p->hit = 1;
                if (t2 > p->best) p->best = t2;
                p->who = k;
            }
        }
    }
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m802234B0 */

namespace m802237B8 {
extern "C" {
void fn_800F6E88(int);

void fn_802237B8(s32 param_1) {
    *(u32 *)(param_1 + 0x308) = 1;
    fn_800F6E88((int)(param_1 + 0x30c));
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m802237B8 */

namespace m802237E4 {
extern "C" {
extern u8 *lbl_8035B65C;
extern f32 lbl_80365AC0;
extern f32 lbl_80365A70;
extern f32 lbl_80365AC4;
extern f32 lbl_80365AC8;
extern f32 lbl_80365A80;
extern f32 lbl_80365ACC;
extern f32 lbl_80365AD0;
extern f32 lbl_80365AD4;
extern f32 lbl_80365AD8;
f64 fn_800F049C(f64 x);
void fn_8012962C(void *o, f32 a, f32 b, f32 c, f32 d);

typedef struct {
    u8 pad[596];
    f32 cur;
    f32 tgt;
    f32 dst;
    f32 rate;
    f32 timer;
    f32 damp;
} S802237E4;

void fn_802237E4(S802237E4 *p, f32 dt) {
    u8 *o;
    f32 d;
    f32 diff;
    f32 damp;
    f32 k;
    o = M2C_FIELD(lbl_8035B65C, u8 **, 40);
    p->cur = lbl_80365AC0 * M2C_FIELD(o, f32 *, 52);
    if (p->cur != p->dst) {
        p->timer -= dt;
        if (p->timer <= lbl_80365A70 && (d = p->cur - p->tgt) >= lbl_80365AC4 && d <= lbl_80365AC8) {
            p->timer = lbl_80365A70;
            p->cur = p->dst;
            p->tgt = p->dst;
        } else {
            if (p->timer > *(volatile f32 *)&lbl_80365A70) p->tgt = p->rate * dt + p->tgt;
            diff = p->tgt - p->cur;
            damp = p->damp;
            if ((f32)__fabs(diff) > lbl_80365A70) {
                k = lbl_80365A80 - (f32)fn_800F049C(-damp * dt);
                p->cur = k * diff + p->cur;
            }
        }
        fn_8012962C(o, lbl_80365ACC * p->cur, lbl_80365AD0, lbl_80365AD4, lbl_80365AD8);
    }
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m802237E4 */

namespace m80223934 {
extern "C" {
extern f32 lbl_80365A70;
extern const char lbl_80365ADC[8];
extern const char lbl_80365AE4[8];
extern const char lbl_802A8268[];
extern void *lbl_8035B7BC;
int strncmp(const char *a, const char *b, u32 n);
void fn_80263044(char *s);
void fn_8026B524(void *a);
void fn_8026B3B4(void *a);
void fn_8026B7CC(void *a, const char *s);
struct Q50 { u8 pad[0xc0]; char **fc0; char **fc4; u8 pc8[0xd8 - 0xc8]; s32 fd8; };
struct P50 { u8 pad[0x20c]; Q50 *q; u8 p210[0x280 - 0x210]; s32 f280; s32 f284; u8 p288[8]; f32 f290, f294; s32 f298, f29c, f2a0; u8 p2a4[0x2ec - 0x2a4]; f32 f2ec; u8 p2f0[0x300 - 0x2f0]; s32 f300; u8 p304[0x328 - 0x304]; s32 f328, f32c; };
void fn_80223934(P50 *p) {
    p->f300 = 1;
    p->f2ec = lbl_80365A70;
    if (strncmp(p->q->fc4[p->q->fd8], lbl_80365ADC, 5) == 0) fn_80263044(p->q->fc0[p->q->fd8]);
    p->f300 = 0;
    fn_8026B524(lbl_8035B7BC);
    fn_8026B3B4(lbl_8035B7BC);
    if (p->f328 != 0) {
        p->f328 = 0;
        if (p->f32c == 0) fn_8026B7CC(lbl_8035B7BC, lbl_80365AE4);
        p->f32c = 0;
    }
    p->f294 = lbl_80365A70;
    p->f290 = lbl_80365A70;
    p->f29c = 0;
    p->f2a0 = 0;
    p->f298 = 0;
    p->f284 = 0;
    if (strncmp(p->q->fc4[p->q->fd8], lbl_802A8268, 8) != 0) p->f280 = 1;
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m80223934 */

namespace m80223A50 {
extern "C" {
extern u8 *lbl_8035B65C;



extern f32 lbl_80365AC0;
extern f32 lbl_80365A70;
extern f32 lbl_80365AC4;
extern f32 lbl_80365AC8;
extern f32 lbl_80365A80;
extern f32 lbl_80365ACC;
extern f32 lbl_80365AD0;
extern f32 lbl_80365AD4;
extern f32 lbl_80365AD8;
f64 fn_800F049C(f64 x);
void fn_8012962C(void *o, f32 a, f32 b, f32 c, f32 d);

typedef struct {
    u8 pad[596];
    f32 cur;
    f32 tgt;
    f32 dst;
    f32 rate;
    f32 timer;
    f32 damp;
} S802237E4;




extern f32 lbl_80365A70;
extern const char lbl_80365ADC[8];
extern const char lbl_80365AE4[8];
extern char lbl_802A8228[];
extern void *lbl_8035B7BC;
int strncmp(const char *a, const char *b, u32 n);
void fn_80263044(char *s);
void fn_8026B524(void *a);
void fn_8026B3B4(void *a);
void fn_8026B7CC(void *a, const char *s);
struct Q50 { u8 pad[0xc0]; char **fc0; char **fc4; u8 pc8[0xd8 - 0xc8]; s32 fd8; };
struct P50 { u8 pad[0x20c]; Q50 *q; u8 p210[0x280 - 0x210]; s32 f280; s32 f284; u8 p288[8]; f32 f290, f294; s32 f298, f29c, f2a0; u8 p2a4[0x2ec - 0x2a4]; f32 f2ec; u8 p2f0[0x300 - 0x2f0]; s32 f300; u8 p304[0x328 - 0x304]; s32 f328, f32c; };

struct V3 { f32 x, y, z; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
};
struct Fd { u8 pad[0xb]; u8 a; u8 pc[0x2c - 0xc]; u32 fl; };
struct Ctl { u8 pad[4]; s32 on; };
struct CS {
    u8 pad0[0x44];
    V3 org;
    u8 pad50[0x18c - 0x50];
    OB *o18c;
    u8 pad190[0x20c - 0x190];
    Q50 *q;
    u8 pad210[0x270 - 0x210];
    f32 f270, f274, f278;
    s32 i27c, i280, i284;
    u8 pad288[8];
    f32 f290, f294;
    s32 i298, i29c, i2a0;
    u8 pad2a4[4];
    s32 spr_on; f32 spr_tgt, spr_x, spr_v;
    u8 pad2b8[0x2ec - 0x2b8];
    f32 f2ec;
    Fd *fd;
    f32 f2f4;
    s32 i2f8;
    f32 f2fc;
    s32 i300;
    u8 pad304[0x314 - 0x304];
    s32 i314;
    f32 f318, f31c;
    s32 i320;
    void *o324;
};
s32 lbl_8035B2B0;
extern s32 lbl_8035B2B4;
extern s32 lbl_8035B2BC;
extern void *lbl_8035B5E4;
extern u32 lbl_80365A74;
extern f32 lbl_80365A78;
extern f32 lbl_80365A7C;
extern f32 lbl_80365B10;
extern char lbl_80365AE8[7];
extern char lbl_80365AF0[6];
extern char lbl_80365AF8[8];
extern char lbl_80365B00[7];
extern char lbl_80365B08[8];
void fn_80238618(CS *, f32);
Ctl *fn_800F8274(void *, const char *);
s32 fn_80253664(Ctl *, int);
void fn_80241DD0(Q50 *, const char *, int, int, int, int);
void fn_80222FE8(CS *, f32);
void fn_80101820(V3 *);
void fn_80225EC0(void *, CS *, V3 *);

#define OUT(c, n) (!((f32)fn_80253664(c, n) >= lbl_80365AC4 && (f32)fn_80253664(c, n) <= lbl_80365AC8))
static inline int busy(CS *p) { return p->i284 != 0 || p->f290 != lbl_80365A70; }

#pragma opt_propagation off
void fn_80223A50(CS *p, f32 dt) {
    char *str = lbl_802A8228;
    if (p->i314 != 0) return;
    if (lbl_8035B2B0 == 0 && p->q->fd8 != 0) return;
    if (lbl_80365A70 == dt) {
        p->spr_v = lbl_80365A70;
        p->spr_x = lbl_80365A70;
    }
    if (p->f290 > lbl_80365A70 && p->f294 > lbl_80365A70) {
        p->f290 = p->f290 - dt;
        { f32 t = p->f290; if (t < lbl_80365A70) p->f290 = lbl_80365A70; }
        f32 r = lbl_80365A80 - p->f290 / p->f294;
        if (r > lbl_80365A80) r = lbl_80365A80;
        if (r < lbl_80365A70) r = lbl_80365A70;
        if ((f32)(p->i298 - p->i29c) > *(volatile f32 *)&lbl_80365A70) p->i2a0 = (s32)(r * (f32)p->i298);
        else { f32 q = *(volatile f32 *)&lbl_80365A80 - r; p->i2a0 = (s32)(q * (f32)p->i29c); }
    }
    if (p->fd) {
        int done = 0;
        f32 d = lbl_80365A7C * dt;
        d = d * p->f2fc;
        if (p->i2f8) {
            p->f2f4 += d;
            f32 t = p->f2f4;
            if (t >= lbl_80365A78) { p->f2f4 = lbl_80365A78; done = 1; }
        } else {
            p->f2f4 -= d;
            f32 t = p->f2f4;
            if (t <= lbl_80365A70) { p->f2f4 = lbl_80365A70; done = 1; }
        }
        Fd *f = p->fd;
        f->a = (u32)p->f2f4;
        f->fl = f->fl | lbl_80365A74;
        if (done) p->fd = 0;
    }
    p->f2ec -= dt;
    lbl_8035B2B0 = 0;
    if (p->i27c) {
        p->f278 -= dt;
        p->f270 = p->f274 * dt + p->f270;
        f32 t = p->f278;
        if (t < lbl_80365A70) {
            p->f278 = lbl_80365A70;
            p->f274 = lbl_80365A70;
            p->i27c = 0;
        }
    }
    fn_80238618(p, dt);
    Ctl *c = fn_800F8274(lbl_8035B5E4, lbl_80365AE8);
    if (c && c->on) {
        if (OUT(c, 0x42)) fn_80241DD0(p->q, str + 0x4c, 0, 0, 0, 0);
        if (OUT(c, 0x43)) fn_80241DD0(p->q, lbl_80365AF0, 0, 0, 0, 0);
        if (OUT(c, 0x44)) fn_80241DD0(p->q, str + 0x58, 0, 0, 0, 0);
        if (OUT(c, 0x45)) fn_80241DD0(p->q, str + 0x64, 0, 0, 0, 0);
        if (OUT(c, 0x46)) fn_80241DD0(p->q, str + 0x70, 0, 0, 0, 0);
    }
    static s32 s1 = 0;
    static s32 s2 = 0;
    c = fn_800F8274(lbl_8035B5E4, lbl_80365AF8);
    Ctl *b = fn_800F8274(lbl_8035B5E4, lbl_80365B00);
    if (b && b->on) {
        if (OUT(b, 0x4e)) s2 = 1;
        else if (s2 == 1) { s2 = 0; fn_80241DD0(p->q, lbl_80365B08, 0, 0, 0, 0); }
        if (OUT(b, 0x4f)) s1 = 1;
        else if (s1 == 1) { s1 = 0; fn_80241DD0(p->q, str + 0x58, 0, 0, 0, 0); }
    }
    if (c && c->on && OUT(c, 0x4c)) {
        if (busy(p) && lbl_80365A70 == p->f290 && p->f2ec <= lbl_80365A70) {
        P50 *q = (P50 *)p;
    q->f300 = 1;
    q->f2ec = lbl_80365A70;
    if (strncmp(q->q->fc4[q->q->fd8], lbl_80365ADC, 5) == 0) fn_80263044(q->q->fc0[q->q->fd8]);
    q->f300 = 0;
    fn_8026B524(lbl_8035B7BC);
    fn_8026B3B4(lbl_8035B7BC);
    if (q->f328 != 0) {
        q->f328 = 0;
        if (q->f32c == 0) fn_8026B7CC(lbl_8035B7BC, lbl_80365AE4);
        q->f32c = 0;
    }
    q->f294 = lbl_80365A70;
    q->f290 = lbl_80365A70;
    q->f29c = 0;
    q->f2a0 = 0;
    q->f298 = 0;
    q->f284 = 0;
    if (strncmp(q->q->fc4[q->q->fd8], str + 0x40, 8) != 0) q->f280 = 1;
        }
    }
    if (p->i320) {
        f32 d = p->f31c - p->f318;
        if ((f32)__fabs(d) > lbl_80365A70) {
            f32 k = lbl_80365A80 - (f32)fn_800F049C(lbl_80365B10 * dt);
            p->f318 = k * d + p->f318;
        }
        p->i320 = 0;
    } else {
        f32 d = lbl_80365A70 - p->f318;
        if ((f32)__fabs(d) > lbl_80365A70) {
            f32 k = lbl_80365A80 - (f32)fn_800F049C(lbl_80365B10 * dt);
            p->f318 = k * d + p->f318;
        }
    }
    fn_80222FE8(p, dt);
    V3 v, d;
    p->o18c->s13(&v, 0, 0, 0, 0);
    d.x = v.x - p->org.x;
    d.y = v.y - p->org.y;
    d.z = v.z - p->org.z;
    fn_80101820(&d);
    f32 k = p->f318;
    d.x *= k; d.y *= k; d.z *= k;
    if (p->o324) fn_80225EC0(p->o324, p, &d);
    p->f31c = lbl_80365A70;
    {
        S802237E4 *q = (S802237E4 *)p;

    u8 *o;
    f32 d;
    f32 diff;
    f32 damp;
    f32 k;
    o = M2C_FIELD(lbl_8035B65C, u8 **, 40);
    q->cur = lbl_80365AC0 * M2C_FIELD(o, f32 *, 52);
    if (q->cur != q->dst) {
        q->timer -= dt;
        if (q->timer <= lbl_80365A70 && (d = q->cur - q->tgt) >= lbl_80365AC4 && d <= lbl_80365AC8) {
            q->timer = lbl_80365A70;
            q->cur = q->dst;
            q->tgt = q->dst;
        } else {
            if (q->timer > *(volatile f32 *)&lbl_80365A70) q->tgt = q->rate * dt + q->tgt;
            diff = q->tgt - q->cur;
            damp = q->damp;
            if ((f32)__fabs(diff) > lbl_80365A70) {
                k = lbl_80365A80 - (f32)fn_800F049C(-damp * dt);
                q->cur = k * diff + q->cur;
            }
        }
        fn_8012962C(o, lbl_80365ACC * q->cur, lbl_80365AD0, lbl_80365AD4, lbl_80365AD8);
    }
    }
}
#pragma opt_propagation reset
} /* extern "C" */
} /* namespace m80223A50 */
