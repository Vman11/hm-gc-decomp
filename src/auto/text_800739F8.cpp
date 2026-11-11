#include "common.h"

struct Vec { f32 x, y, z; };
struct Ent { u8 pad[0x10]; u32 x10; u32 x14; };
struct S338 { u8 pad[0x24]; f32 *x24; u8 pad28[0x80 - 0x28]; s32 *x80; };
struct S5B0 { u8 pad[0x30]; void *x30; };
struct S20C { u8 pad[0x108]; void *x108; };
struct X;
struct X {
    u8 pad0[0x2c]; Vec x2c; u8 pad38[0x44 - 0x38]; Vec x44;
    u8 pad50[0x118 - 0x50]; Vec x118; u8 pad124[0x130 - 0x124]; Vec x130;
    u8 pad13c[0x20c - 0x13c]; S20C *x20c; u8 pad210[0x338 - 0x210]; S338 *x338;
    u8 pad33c[0x500 - 0x33c]; f32 x500, x504; u8 pad508[0x518 - 0x508]; f32 *x518, *x51c;
    u8 pad520[0x528 - 0x520]; f32 *x528, *x52c; u8 pad530[0x5b0 - 0x530]; S5B0 *x5b0;
    u8 pad5b4[0x660 - 0x5b4]; Vec x660;
    Vec vel() { return x118; }
};
extern "C" {
extern f32 lbl_8035A23C;
extern s32 lbl_8035A24C;
extern volatile f32 lbl_8035A2B0;
extern volatile s8 lbl_8035A2B4;
extern Vec lbl_80357E90;
extern f32 lbl_8035F3EC;
#define VK (*(volatile f32 *)&lbl_8035F3EC)
extern f32  lbl_8035F4F0, lbl_8035F4F4, lbl_8035F4E0, lbl_8035F4F8, lbl_8035F4FC;
extern f32 lbl_8035F500, lbl_8035F504, lbl_8035F4A0, lbl_8035F490;
extern f64 lbl_8035F4D0, lbl_8035F4D8;
extern char lbl_8035F508[8];
extern char lbl_802980FC[];
extern void *lbl_8035B65C;
void fn_801072C0(void *, Vec *);
void fn_80100F24(Vec *, Vec *);
void fn_80101030(Vec *, Vec *);
double fn_800F030C(double);
Ent *fn_8025EE5C(void *, const char *);
void fn_802488C4(void *, u32, s32, Vec *, f32, u32);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);

static inline f32 Sq(f32 x) {
    if (x > VK) {
        const f64 _half = lbl_8035F4D0;
        const f64 _three = lbl_8035F4D8;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}

static inline f32 sinf_(f32 x) { return (f32)fn_800F030C((f64)x); }
void fn_800739F8(X *a) {
    f32 m;
    Vec g;
    Vec w;
    Vec v;
    f32 sp, k, r, s, lim;
    lbl_8035A23C = a->x44.z;
    if (a->x338) m = a->x338->x24 ? *a->x338->x24 : VK;
    else m = VK;
    g = lbl_80357E90;
    if (a->x338 && (a->x338->x80 ? *a->x338->x80 : 0) != 0 && a->x5b0 && a->x5b0->x30)
        fn_801072C0(a->x5b0->x30, &g);
    sp = Sq(__fmadds(a->x500, a->x500, a->x504 * a->x504));
    if (sp < lbl_8035F4F0) k = *a->x518;
    else k = *a->x51c;
    if (lbl_8035A24C) k *= lbl_8035F4F4;
    v = a->vel();
    {
        f32 p;
        f32 c = lbl_8035F4E0 * (v.z * v.z);
        p = *a->x52c;
        if (v.z < VK) { f32 q = k + m; r = q * p; }
        else r = __fmadds(k + m, p, c);
    }
    s = Sq(lbl_8035F4F8 * r);
    w = a->x130;
    fn_80100F24(&w, &g);
    a->x118 = a->x660;
    fn_80101030(&a->x118, &g);
    a->x118.x += w.x;
    a->x118.y += w.y;
    a->x118.z += w.z;
    if (!lbl_8035A2B4) { lbl_8035A2B0 = lbl_8035F4FC; lbl_8035A2B4 = 1; }
    lim = sinf_(lbl_8035F500 * (lbl_8035F504 - *a->x528));
    if (a->x118.z < lbl_8035F3EC) a->x118.z = *(f32 *)&lbl_8035F3EC;
    if (a->x2c.z > lim) {
        a->x118.x += s * g.x;
        a->x118.y += s * g.y;
        a->x118.z += s * g.z;
    } else if (a->x2c.z < -lim) {
        f32 t = -s * lbl_8035F4E0;
        a->x118.x += t * g.x;
        a->x118.y += t * g.y;
        a->x118.z += t * g.z;
    } else {
        f32 t = lbl_8035F4A0 * s;
        a->x118.x += t * a->x2c.x;
        a->x118.y += t * a->x2c.y;
        a->x118.z += t * a->x2c.z;
        a->x118.x += t * g.x;
        a->x118.y += t * g.y;
        a->x118.z += t * g.z;
    }
    if (m > lbl_8035F490) __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802980FC, 0, 0, 0);
    if (a->x338) {
        Ent *e = fn_8025EE5C(a->x338, lbl_8035F508);
        if (e) fn_802488C4(a->x20c->x108, e->x10, 0, &a->x44, lbl_8035F490, e->x14);
    }
}
}
