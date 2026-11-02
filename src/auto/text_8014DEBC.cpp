// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" void *memset(void *, int, unsigned long);
extern volatile f32 lbl_80364500, lbl_80364520, lbl_80364524, lbl_80364528, lbl_80364530;
extern u32 lbl_8036452C;
struct P { u32 f0, f4, f8, f12; f32 f16, f20, f24, f28, f32_; };
struct E8 { u32 f0, f4; };
struct D { u32 f0; u32 f4; u8 pad8[4]; int f12; u8 pad16[8]; u32 f24; u32 f28; u8 pad32[48]; E8 *f80; };
struct S64 { u8 b[64]; };
struct R { u8 pad[52]; u32 f52; };
struct Cfg { u32 f0; u32 f4; u8 pad8[4]; f32 f12; u8 pad16[4]; u32 f20; int f24; };
struct T { D *f0; u8 pad4[8]; virtual int busy(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual int i6(); virtual int i7(); u32 f16; u32 f20; u8 pad24[12]; S64 s36[16]; };
int fn_8011F5C0(D *, Cfg *);
void fn_80118B5C(S64 *, P *);
R *fn_8011DC84(D *, u32);
static inline void fill(T *t, f32 k, u32 i) {
    P p;
    for (; i < 4; i++) {
        memset(&p, 0, sizeof(P));
        D *d = t->f0;
        *(volatile u32 *)&p.f8 = d->f80[i].f0;
        *(volatile u32 *)&p.f4 = 0;
        *(volatile u32 *)&p.f0 = d->f24;
        u32 n = i + d->f0;
        *(volatile f32 *)&p.f28 = k;
        *(volatile u32 *)&p.f12 = n;
        *(volatile f32 *)&p.f32_ = lbl_80364530;
        *(volatile f32 *)&p.f16 = lbl_80364520;
        *(volatile f32 *)&p.f20 = lbl_80364524;
        *(volatile f32 *)&p.f24 = lbl_80364500;
        fn_80118B5C(&t->s36[i], &p);
    }
    for (; i < t->f0->f4; i++) {
        memset(&p, 0, sizeof(P));
        D *d = t->f0;
        *(volatile u32 *)&p.f8 = d->f80[i].f0;
        *(volatile u32 *)&p.f4 = 0;
        *(volatile u32 *)&p.f0 = d->f24;
        u32 n = i + d->f0;
        *(volatile f32 *)&p.f28 = k;
        *(volatile u32 *)&p.f12 = n;
        *(volatile f32 *)&p.f32_ = lbl_80364530;
        f32 z = lbl_80364500;
        *(volatile f32 *)&p.f16 = z;
        *(volatile f32 *)&p.f20 = lbl_80364528;
        *(volatile f32 *)&p.f24 = z;
        fn_80118B5C(&t->s36[i], &p);
    }
}
int fn_8014DEBC(T *t, Cfg *c) {
    u32 e;
    u32 a;
    u32 b;
    D *d;
    int err = t->busy();
    if (err) return err;
    a = *(volatile u32 *)&c->f0;
    d = *(D *volatile *)&t->f0;
    b = *(volatile u32 *)&c->f20;
    *(volatile u32 *)&d->f28 = a;
    e = *(volatile u32 *)&c->f4;
    *(volatile u32 *)&t->f16 = b;
    *(volatile u32 *)&t->f20 = e;
    if ((err = fn_8011F5C0(t->f0, c)) == 0 && (err = t->i7()) == 0 && (err = t->i6()) == 0) {
        fill(t, c->f12, 0);
        fn_8011DC84(t->f0, 0x40000001)->f52 |= lbl_8036452C;
        fn_8011DC84(t->f0, 0x40000003)->f52 |= lbl_8036452C;
    }
    if (err) t->busy();
    if (c->f24) t->f0->f12 = 1;
    else t->f0->f12 = 0;
    return err;
}

} /* extern "C" */
