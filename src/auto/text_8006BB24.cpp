// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V3 { f32 x, y, z; };
struct H { u8 pad[16]; void *h; u8 pad2[12]; u32 f32; };
struct A { u8 pad[48]; H *f48; u8 pad2[52];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void f(f32);
    u8 pad3[12]; void *f120; };
struct B36 { u8 pad[36]; void *f36; };
struct B168 { u8 pad[168]; B36 *f168; };
struct B { u8 pad[156]; B168 *f156; };
struct Tb { u8 pad[12]; void (*f12)(void *, V3 *); u8 pad2[12]; void (*f28)(void *, V3 *, V3 *, V3 *); };
struct L12 { u8 pad[12]; u32 *f12; };
struct T { u8 pad[280]; void *f280; u8 pad2[240]; L12 *f524; u8 pad3[20]; A **f548; B **f552; u8 pad4[12]; f32 *f568; };
extern "C" {
extern Tb lbl_803286D0;
extern f32 lbl_8035F0C0;
extern f32 lbl_8035F1C8;
extern f64 lbl_8035F220;
extern f32 lbl_8035F228;
extern f32 lbl_8035F210;
extern u32 lbl_8035F200;
void fn_80107244(void *, V3 *);
void fn_80072AC8(void *, V3 *);
void fn_80101820(V3 *);
f32 fn_80101590(V3 *, V3 *);
int rand(void);
void fn_80190C98(A *);
void fn_80107F3C(void *, V3 *);
u32 fn_8007239C(void *);
static inline void cross(V3 &r, const V3 &a, const V3 &b) {
    r.x = a.y * b.z - a.z * b.y;
    r.y = a.z * b.x - a.x * b.z;
    r.z = a.x * b.y - a.y * b.x;
}
static inline f32 rnd() { s32 i = rand() % 3000u; f32 r = lbl_8035F228 * (f32)i; r = lbl_8035F210 + r; return r; }
void fn_8006BB24(T *t, f32 dt) {
    u32 i;
    for (i = 0; i < t->f524->f12[(u32)(fn_8007239C(t->f280) - 1)]; i++) {
        V3 p, q, r, u, d, s, w;
        A *a = t->f548[i];
        B *b;
        f32 sc, r1, k;
        H *h;
        if (a == 0) continue;
        b = t->f552[i];
        if (b == 0) continue;
        fn_80107244(b->f156->f168->f36, &p);
        fn_80072AC8(t->f280, &q);
        d.x = q.x - p.x; d.y = q.y - p.y; d.z = q.z - p.z;
        fn_80101820(&d);
        {
            f32 dz, dy, dx, o, ux, uy;
            ux = *(f32 *)&lbl_8035F0C0;
            uy = lbl_8035F0C0;
            dy = d.y;
            *(volatile f32 *)&u.x = ux;
            dz = d.z;
            *(volatile f32 *)&u.y = uy;
            dx = *(volatile f32 *)&d.x;
            o = *(f32 *)&lbl_8035F1C8;
            u.z = o;
            r.x = dy * o - dz * uy;
            r.y = dz * ux - dx * o;
            r.z = dx * uy - dy * ux;
        }
        fn_80101820(&r);
        cross(u, r, d);
        fn_80101820(&u);
        sc = fn_80101590(&p, &q) / (lbl_8035F220 * *t->f568);
        r1 = rnd();
        {
            f32 r2 = rnd();
            s.y = r1;
            s.z = sc;
            s.x = r2;
        }
        k = -*t->f568 * sc;
        w.x = k * d.x + q.x; w.y = k * d.y + q.y; w.z = k * d.z + q.z;
        h = a->f48;
        if (h) { lbl_803286D0.f12(h->h, &w); h->f32 |= lbl_8035F200; fn_80190C98(a); }
        h = a->f48;
        if (h) { lbl_803286D0.f28(h->h, &r, &u, &d); h->f32 |= lbl_8035F200; fn_80190C98(a); }
        if (a->f120) fn_80107F3C(a->f120, &s);
        a->f(dt);
    }
}

} /* extern "C" */
