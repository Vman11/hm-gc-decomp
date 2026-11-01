// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 r, g, b, a; } ColorF;
typedef struct { f32 x, y, z; } Vec3;
struct E { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
  virtual void get(void *, s32, s32, s32, s32); virtual void set(void *, s32, s32, s32, s32); };
extern f32 lbl_8035D194, lbl_8035D198, lbl_8035D19C, lbl_8035D1A0, lbl_8035D1A4, lbl_8035D1A8, lbl_8035D1AC, lbl_8035D1B0, lbl_8035D1B4, lbl_8035D1B8;
int rand(void);
double fn_800F030C(double);

static inline f32 frand10() { s32 i = rand() % 10000u; return lbl_8035D198 * (f32)i; }
static inline f32 frand5() { s32 i = rand() % 5000u; return lbl_8035D198 * (f32)i; }
#define frand(n) frand##n()
#define RR(fld, n, c) { s32 ri = rand() % (n##000u); f32 r = lbl_8035D198 * (f32)ri; r = fld + (r - c); fld = r; }

static inline void lerpc(ColorF *o, ColorF *b, ColorF *a, f32 t) {
    ColorF c;
    c.r = t * (b->r - a->r) + a->r;
    c.g = t * (b->g - a->g) + a->g;
    c.b = t * (b->b - a->b) + a->b;
    c.a = t * (b->a - a->a) + a->a;
    *o = c;
}

struct S {
    u8 pad0[0xe0];
    E * fe0;
    u8 pade4[0x34];
    s32 * f118;
    u8 pad11c[0x8];
    void * f124;
    u8 pad128[0x18];
    void * f140;
    f32 f144;
    f32 f148;
    f32 f14c;
    f32 f150;
    u8 pad154[0xc];
    f32 f160;
    f32 f164;
    f32 f168;
    f32 f16c;
    ColorF * f170;
    s32 f174;
    u8 pad178[0x28];
    f32 f1a0;
    s32 f1a4;
    void * f1a8;
    void * f1ac;
    f32 * f1b0;
};

void fn_80048528(S *p, f32 dt) {
    void *e;
    void *q;
    ColorF *c;
    ColorF *d;
    Vec3 v;
    f32 r, g, b, a;
    f32 k;
    if (p->f174 == 0) {
        *(ColorF *)((u8 *)p + 0x178) = *p->f170;
        p->f174 = 1;
    }
    if (p->f118 != 0 && *p->f118 != 0) {
    RR(p->f144, 10, lbl_8035D194)
    if (p->f144 > lbl_8035D19C) p->f144 -= lbl_8035D1A0;
    if (p->f144 < lbl_8035D1A4) p->f144 += lbl_8035D1A0;
    RR(p->f148, 10, lbl_8035D194)
    if (p->f148 > lbl_8035D19C) p->f148 -= lbl_8035D1A0;
    if (p->f148 < lbl_8035D1A4) p->f148 += lbl_8035D1A0;
    RR(p->f14c, 10, lbl_8035D194)
    if (p->f14c > lbl_8035D19C) p->f14c -= lbl_8035D1A0;
    if (p->f14c < lbl_8035D1A4) p->f14c += lbl_8035D1A0;
    if (p->f124 != 0 && (u32)p + 0x124 != 0) {
        p->fe0->get((u8 *)p + 0x154, 0, 0, 0, 0);
    }
    v = *(Vec3 *)((u8 *)p + 0x154);
    v.x += lbl_8035D1A8 * (f32)fn_800F030C(p->f144);
    v.y += lbl_8035D1A8 * (f32)fn_800F030C(p->f148);
    v.z += lbl_8035D1A8 * (f32)fn_800F030C(p->f14c);
    p->fe0->set(&v, 0, 0, 0, 0);
    RR(p->f150, 5, lbl_8035D1AC)
    while (p->f150 > lbl_8035D19C) p->f150 -= lbl_8035D1A0;
    while (p->f150 < lbl_8035D1A4) p->f150 += lbl_8035D1A0;
    k = lbl_8035D1B4 * (f32)fn_800F030C(p->f150) + lbl_8035D1B0;
    if (k > 1.0f) k = 1.0f;
    q = M2C_FIELD(p->fe0, void **, 0x9c);
    if (q != 0) {
        void *s = p->f140;
        void *m = M2C_FIELD(q, void **, 0x6c);
        if (s == 0) {
            r = p->f160 * k;
            g = p->f164 * k;
            b = p->f168 * k;
            a = p->f16c * k;
        } else {
            c = M2C_FIELD(s, ColorF **, 0xc);
            a = c->a * k; r = c->r; r = r * k; g = c->g * k; b = c->b * k;
        }
        d = (ColorF *)((u8 *)M2C_FIELD(m, void **, 0x10) + 0x14);
        d->r = r; d->g = g; d->b = b; d->a = a;
    }
    }
    if (p->f1a4 == 1 && p->f1ac != 0 && p->f1a8 != 0 && p->f1b0 != 0) {
        f32 half, t;
        ColorF *a0, *b0, *o;
        p->f1a0 += dt;
        if (p->f1a0 >= *p->f1b0) p->f1a0 -= *p->f1b0;
{
        f32 per = *p->f1b0; f32 one = lbl_8035D1B8;
        ColorF *A = M2C_FIELD(p->f1ac, ColorF **, 0xc);
        ColorF *B = M2C_FIELD(p->f1a8, ColorF **, 0xc);
        f32 br, bg, bb, ba, ar, ag, ab, aa;
        ar = A->r;
        br = B->r;
        ag = A->g;
        bg = B->g;
        ab = A->b;
        bb = B->b;
        aa = A->a;
        ba = B->a;
        t = one - (f32)__fabs(per * lbl_8035D194 - p->f1a0) / (per * lbl_8035D194);
        o = p->f170;
        o->r = t * (br - ar) + ar;
        o->g = t * (bg - ag) + ag;
        o->b = t * (bb - ab) + ab;
        o->a = t * (ba - aa) + aa;
        }
    }
}

} /* extern "C" */
