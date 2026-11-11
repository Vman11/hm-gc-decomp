#include "common.h"
/* NonMatching draft (wMO): DIFF 28 / SDIFF 10. r.z computed first fixes r store order. Left: target keeps the u const loads/stores below the f loads (no hoist of sdata2 loads above stack stores, wDG-like) + f-scale stfs 40 sched. Pointer/inline u stores, 2.0p1 no help. */
extern "C" {
struct V3 { f32 x, y, z; };
struct A {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
    virtual void s14(V3 *, int, int, int, int);
    u8 pad4[276];
    V3 v280;
    u8 pad292[48];
    f32 f340;
};
struct Q { u8 pad[12]; void *a12; };
struct P {
    u8 pad0[192];
    struct { u8 pad[8]; void *a8; } *o192;
    u8 pad196[28];
    A *a224;
    A *a228;
    u8 pad232[4];
    V3 *v236;
    u8 pad240[96];
    f32 *f336;
    u8 pad340[84];
    A *a424;
    V3 *v428;
};
extern f32 lbl_8035D34C, lbl_8035D364;
#define VK(x) (*(volatile f32 *)&(x))
extern f64 lbl_8035D350, lbl_8035D358;
Q *fn_80240004(P *, int);
V3 *fn_80245F8C(Q *, int);
void fn_80101820(V3 *);
void fn_80257A4C(void *, V3 *);

inline f32 Sqrt(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035D350 * g * (lbl_8035D358 - g * g * x);
    g = lbl_8035D350 * g * (lbl_8035D358 - g * g * x);
    g = lbl_8035D350 * g * (lbl_8035D358 - g * g * x);
    y = x * g;
    return y;
}

void fn_8004B388(P *p) {
    V3 pos, t, f, r, u;
    p->a424 = p->a228;
    p->a424->s13(&pos, 0, 0, 0, 0);
    if (fn_80240004(p, 0)->a12) {
        V3 *s = fn_80245F8C(fn_80240004(p, 0), 0);
        t.x = s->x;
        t.y = s->y;
        t.z = s->z;
    } else {
        t = pos;
    }
    if (p->a424 != p->a224) {
        p->v428 = p->v236;
        if (p->v428) {
            t.x = p->v236->x;
            t.y = p->v236->y;
            t.z = p->v236->z;
        }
    }
    f32 z = VK(lbl_8035D34C);
    *(volatile f32 *)&f.x = z;
    *(volatile f32 *)&f.y = z;
    *(volatile f32 *)&f.z = VK(lbl_8035D364);
    fn_80101820(&f);
    u.x = lbl_8035D364;
    u.y = u.z = *(f32 *)&lbl_8035D34C;
    r.x = f.y * u.z - f.z * u.y;
    r.y = f.z * u.x - f.x * u.z;
    r.z = f.x * u.y - f.y * u.x;
    fn_80101820(&r);
    u.x = r.y * f.z - r.z * f.y;
    u.y = r.z * f.x - r.x * f.z;
    u.z = r.x * f.y - r.y * f.x;
    fn_80101820(&u);
    p->a224->s14(&pos, 0, 0, 0, 0);
    {
        f32 d;
        f32 x;
        f32 s;
        f32 y;
        f32 z;
        s = *p->f336;
        x = f.x * s;
        y = f.y * s;
        z = f.z * s;
        f32 xx = x * x;
        *(volatile f32 *)&f.x = x;
        f32 yy = y * y;
        f32 zz = z * z;
        *(volatile f32 *)&f.y = y;
        d = zz + (xx + yy);
        *(volatile f32 *)&f.z = z;
        if (d > VK(lbl_8035D34C)) d = Sqrt(d);
        A *o = p->a224;
        o->v280 = f;
        o->f340 = d;
    }
    fn_80257A4C(p->o192->a8, &t);
}
}
