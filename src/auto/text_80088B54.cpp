// fn_80088B54 NonMatching draft: SDIFF 15 (volatile stores/loads pin constant-load order).
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
#define VS(v) (*(volatile f32 *)&(v))
#define VK(v) (*(volatile f32 *)&(v))

extern "C" {

struct V3 { f32 x, y, z; };
struct Sph { f32 x, y, z, r; };
struct G { u8 pad[16]; void *h; u8 pad20[12]; u32 fl; };
struct El { u8 pad[0x28]; };
struct Z { u8 pad[0x24]; El *e; };
class Node { public:
    u32 f0; u16 type; u8 pad6[0x12]; f32 x, y, z, r; u8 pad28[8]; G *g; u8 pad34[0x68 - 0x34];
    virtual void n0(); virtual void n1(); virtual void upd(); virtual void n3(); virtual void n4(); virtual void n5();
    virtual void n6(); virtual void n7(); virtual void n8(); virtual void n9(); virtual void n10();
    virtual void tick(f32 dt);
    u8 pad6c[0x78 - 0x6c]; void *f78; u8 pad7c[0xa8 - 0x7c]; Z *za8; };
struct X { u8 pad[0x9c]; Node *n; u8 pada0[0x1d4 - 0xa0]; s32 *p1d4; u8 pad1d8[0x220 - 0x1d8]; s32 v220; };
struct FT { void *f0, *f4, *f8; void (*fc)(void *, V3 *); void *f10, *f14, *f18; void (*f1c)(void *, V3 *, V3 *, V3 *); };
struct F152 { u32 fl0; u8 pad[148]; u32 fl152; };
struct P {
    u8 pad0[0x26c];
    s32 on;
    u8 pad270[0x2c0 - 0x270];
    Node *n704;
    u8 pad2c4[0x2f8 - 0x2c4];
    F152 *f2f8[5];
    u8 pad30c[0x368 - 0x30c];
    f32 f872;
    u8 pad36c[0x37c - 0x36c];
    s32 st892;
    u8 pad380[0x39c - 0x380];
    V3 tgt;
    V3 base;
    u32 cnt;
    X *x[6];
    u8 pad3d0[0x3e8 - 0x3d0];
    Node *n[6];
    s32 idx[6];
    f32 tm[6];
    f32 t430;
    f32 *p434;
    f32 t438;
    u8 pad43c[4];
    f32 *p440;
    f32 *p444;
};
extern f32 lbl_8035FEB8, lbl_8035FEF4, lbl_8035FF08, lbl_8035FEC8, lbl_8035FED4, lbl_8035FF18, lbl_8035FF28;
extern f64 lbl_8035FF20;
extern u32 lbl_8035FEA0, lbl_8035FEA4, lbl_8035FEA8;
extern FT lbl_803286D0;
void fn_80190C98(Node *);
void fn_80100CF4(Sph *s);
void fn_80107244(El *, V3 *);
void fn_80101820(V3 *v);
f32 fn_80101590(V3 *a, V3 *b);
void fn_80107F3C(void *o, V3 *s);
void fn_8008930C(P *, V3 *, int, f32);
int rand(void);

inline void SetPos(Node *n, V3 *v) {
    G *g = n->g;
    if (g) {
        lbl_803286D0.fc(g->h, v);
        g->fl |= lbl_8035FEA4;
        fn_80190C98(n);
    }
}
inline void SetAxes(Node *n, V3 *a, V3 *b, V3 *c) {
    G *g = n->g;
    if (g) {
        lbl_803286D0.f1c(g->h, a, b, c);
        g->fl |= lbl_8035FEA4;
        fn_80190C98(n);
    }
}
inline f32 Rnd(u32 n) {
    s32 r = rand() % n;
    return lbl_8035FEF4 * (f32)r;
}
inline void Cross(V3 *o, const V3 *a, const V3 *b) {
    f32 x = a->y * b->z - a->z * b->y;
    f32 y = a->z * b->x - a->x * b->z;
    f32 z = a->x * b->y - a->y * b->x;
    o->x = x; o->y = y; o->z = z;
}
inline s32 IsOn(X *x) {
    if (x->v220 > 0) return 1;
    if (x->v220 < 0) return 0;
    if (x->p1d4) return *x->p1d4;
    return 1;
}

void fn_80088B54(P *p, f32 dt) {
    V3 c, side, d, up, sc;
    Sph sp;
    V3 t;
    V3 v;
    fn_80100CF4(&sp);
    if (p->n704) {
        f32 z, b;
        f32 a;
        p->n704->tick(dt);
        {
            s32 r = rand() % 1000u;
            a = lbl_8035FEF4 * (f32)r;
        }
        {
            s32 r = rand() % 1000u;
            b = lbl_8035FEF4 * (f32)r;
            v.y = a;
            *(volatile f32 *)&v.x = b; z = *(volatile f32 *)&lbl_8035FEB8; v.z = z;
        }
        v.x = b + p->base.x;
        v.y = a + p->base.y;
        v.z = z + p->base.z;
        SetPos(p->n704, &v);
    }
    {
        s32 r = rand() % 30000u;
        f32 d = lbl_8035FEF4 * (f32)r;
        d = lbl_8035FF08 + d;
        p->f872 = d;
    }
    p->st892 = 3;
    if (p->t430 <= lbl_8035FEB8) {
        p->t430 = *p->p434;
        f32 z;
        VS(t.x) = p->base.x; VS(t.y) = p->base.y; z = p->base.z; VS(t.z) = z;
        t.z = z - VK(lbl_8035FEC8);
        fn_8008930C(p, &t, 0, *p->p440);
    }
    p->t430 -= dt;
    u32 i;
    for (i = 0; i < p->cnt; i++) {
        Node *n = p->n[i];
        if (n) {
            Node *y = p->x[i]->n;
            if (y->type == 3) {
                fn_80107244(&y->za8->e[p->idx[i]], &c);
            } else {
                if (y->f0 & 4) y->upd();
                sp.x = y->x; sp.y = y->y; sp.z = y->z; sp.r = y->r;
                c.x = sp.x; c.y = sp.y; c.z = sp.z;
            }
            d.x = p->tgt.x - c.x;
            d.y = p->tgt.y - c.y;
            d.z = p->tgt.z - c.z;
            fn_80101820(&d);
            { f32 z0 = lbl_8035FEB8; VS(up.x) = z0; VS(up.y) = z0; VS(up.z) = VK(lbl_8035FED4); }
            Cross(&side, &d, &up);
            fn_80101820(&side);
            Cross(&up, &d, &side);
            fn_80101820(&up);
            f32 dist = fn_80101590(&c, &p->tgt) / lbl_8035FF20;
            f32 a, b;
            {
                s32 r = rand() % 4000u;
                a = lbl_8035FEF4 * (f32)r;
                a = lbl_8035FF18 + a;
            }
            {
                s32 r = rand() % 4000u;
                b = lbl_8035FEF4 * (f32)r;
                b = lbl_8035FF18 + b;
            }
            VS(sc.x) = b; sc.y = a; sc.z = dist;
            f32 k = VK(lbl_8035FF28) * dist;
            t.x = k * d.x + p->tgt.x;
            t.y = k * d.y + p->tgt.y;
            t.z = k * d.z + p->tgt.z;
            SetPos(p->n[i], &t);
            SetAxes(p->n[i], &side, &up, &d);
            if (n->f78) fn_80107F3C(n->f78, &sc);
            {
                if (Rnd(10000) < *p->p444) n->f0 |= lbl_8035FEA8;
                else n->f0 &= ~0x800;
            }
            n->tick(dt);
            if (!(p->x[i]->n->f0 & 2) || !IsOn(p->x[i])) {
                if (p->tm[i] > lbl_8035FEB8) p->tm[i] -= dt;
                else n->f0 &= ~0x800;
            }
        }
    }
    p->t438 -= dt;
    if (p->t438 <= lbl_8035FEB8) {
        for (u32 j = 0; j < 6; j++) {
            if (p->n[i]) p->n[j]->f0 &= ~0x800;
        }
        if (p->n704) p->n704->f0 &= ~0x800;
        for (u32 j = 0; j < 5; j++) {
            if (p->f2f8[j]) p->f2f8[j]->fl152 |= lbl_8035FEA0;
        }
        p->on = 0;
    }
}

} /* extern "C" */
