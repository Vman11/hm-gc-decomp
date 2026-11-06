#include "common.h"

// fn_800904CC: NonMatching draft (wBX), DIFF 8: sc init K load and d copy stores scheduled 1 slot off.
extern "C" {

struct V3 { f32 x, y, z; };
struct G { u8 pad[16]; void *h; u8 pad20[12]; u32 fl; };
struct N {
    u8 pad0[48];
    G *g;
    u8 pad52[52];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void s11(f32);
    u8 pad108[12];
    void *m120;
};
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, V3 *, V3 *, V3 *, int);
};
struct P {
    u8 pad0[224];
    OB *o224;
    u8 pad228[52];
    OB *o280;
    u8 pad284[80];
    N *n364;
    void *m368;
};
struct T { u8 pad12[12]; void (*f12)(void *, V3 *); u8 pad16[12]; void (*f28)(void *, V3 *, V3 *, V3 *); };
extern T lbl_803286D0;
extern f32 lbl_803608FC, lbl_80360904, lbl_80360908, lbl_80360968, lbl_8036096C;
extern u32 lbl_80360964;
void fn_80107244(void *, V3 *);
void fn_80100F24(V3 *, V3 *);
void fn_80101820(V3 *);
void fn_80101414(V3 *, V3 *, f32);
void fn_80107F3C(void *, V3 *);
void fn_80190C98(N *);

static inline f32 dot(V3 *a, V3 *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }

static inline void h12(N *n, V3 *m) { G *g = n->g; if (g) { lbl_803286D0.f12(g->h, m); g->fl |= lbl_80360964; fn_80190C98(n); } }
static inline void h28(N *n, V3 *a, V3 *b, V3 *c) { G *g = n->g; if (g) { lbl_803286D0.f28(g->h, a, b, c); g->fl |= lbl_80360964; fn_80190C98(n); } }
static inline void cross(V3 *r, V3 *a, V3 *b) { r->x = a->y * b->z - a->z * b->y; r->y = a->z * b->x - a->x * b->z; r->z = a->x * b->y - a->y * b->x; }
static inline void neg(V3 *v) { v->x = -v->x; v->y = -v->y; v->z = -v->z; }
void fn_800904CC(P *p, f32 dt, f32 s) {
    G *g;
    N *n;
    V3 m, t, a, b, c, d, r, u, sc;
    if (p->n364) {
        fn_80107244(p->m368, &m);
        p->o224->s13(0, &a, &b, &c, 0);
        *(volatile f32 *)&sc.x = s;
        *(volatile f32 *)&sc.y = *(volatile f32 *)&lbl_803608FC;
        *(volatile f32 *)&sc.z = s;
        p->o280->s13(&t, 0, 0, 0, 0);
        t.z += lbl_803608FC;
        d.x = t.x - m.x;
        d.y = t.y - m.y;
        d.z = t.z - m.z;
        fn_80100F24(&d, &c);
        fn_80101820(&d);
        if (dot(&d, &a) < lbl_80360908) {
            f32 k = dot(&d, &b);
            d.x = a.x; d.y = a.y; ((f32 *)&r)[5] = a.z;
            if (k > lbl_80360904) fn_80101414(&d, &c, lbl_80360968);
            else fn_80101414(&d, &c, lbl_8036096C);
        }
        neg(&d);
        u = c;
        neg(&u);
        cross(&r, &u, &d);
        fn_80101820(&r);
        {
            n = p->n364;
            g = n->g;
            if (g) { lbl_803286D0.f28(g->h, &u, &d, &r); g->fl |= lbl_80360964; fn_80190C98(n); }
        }
        if (p->n364->m120) fn_80107F3C(p->n364->m120, &sc);
        {
            n = p->n364;
            g = n->g;
            if (g) { lbl_803286D0.f12(g->h, &m); g->fl |= lbl_80360964; fn_80190C98(n); }
        }
        p->n364->s11(dt);
    }
}

}
