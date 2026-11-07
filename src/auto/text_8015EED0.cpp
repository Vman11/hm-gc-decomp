#include "common.h"
extern "C" {
struct B { u32 a, b; };
struct H { u32 f0; u32 f4; u32 f8; u8 name12[8]; u32 f20; };
struct M { u8 pad[76]; u32 f76; };
struct E100 { u8 b[100]; };
struct C { u8 pad[120]; u8 f120[24]; u8 f144[4]; };
struct T { u32 f0; u32 f4; u32 f8; u32 f12; u8 *f16; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void fin();
    u32 f24; u8 f28[4]; void **f32; u8 f36[8]; u32 f44; u8 pad48[4]; u32 f52; u8 pad56[4]; int f60; u8 pad64[12]; E100 *f76; };
void fn_800F6E88(B *, void *);
void fn_8013EBAC(void *, C *, u32);
void *fn_800F9398(void *, u8 *);
void *fn_800F9788(void *, char *, u8 *);
M *fn_801320AC(T *, u8);
void fn_800FBD10(void *, T *, u32, u8 *);
void fn_8015F808(E100 *, C *, T *, u8 **, void *);
static inline void *look(C *c, char *s, u8 *k) {
    if (!s || !*s) return fn_800F9398(c->f120, k);
    return fn_800F9788(c->f144, s, k);
}
static inline void hd(T *t, C *c, H *h, u8 **p24, u32 &i) {
    for (i = 0; i < h->f8; i++) {
        u8 *e = *p24;
        t->f32[i] = look(c, (char *)(e + 8), e);
        *p24 += 16;
    }
}
void fn_8015EED0(T *__restrict t, C *c, u32 x, u8 **p22, u8 **p23, u8 **p24, u8 **p25, void *p8, B *name) {
    H *h;
    u32 i;
    u32 j;
    t->f60 = 1;
    t->f0 = 0;
    t->f4 = 0;
    t->f52 = 0;
    t->f24 = x;
    h = (H *)*p25;
    t->f8 = h->f0;
    t->f12 = h->f4;
    fn_800F6E88(name, h->name12);
    *p25 += 24;
    if (h->f8) {
        fn_8013EBAC(t->f28, c, h->f8);
        hd(t, c, h, p24, i);
    }
    t->f16 = *p22;
    for (j = 0; j < t->f12; j++) {
        M *m = fn_801320AC(t, (*p22)[14]);
        u32 *q = (u32 *)*p22;
        u32 base = m->f76;
        q[0] = base + q[0] * 12;
        q = (u32 *)*p22;
        q[1] = base + q[1] * 12;
        q = (u32 *)*p22;
        q[2] = base + q[2] * 12;
        *p22 += 16;
    }
    if (h->f20) {
        fn_800FBD10(t->f36, t, h->f20, *p23);
        for (u32 i = 0; i < h->f20; i++) {
            s32 *q = (s32 *)*p23;
            if (q[6] >= 0) q[6] = t->f44 + q[6] * 32;
            else q[6] = 0;
            q = (s32 *)*p23;
            if (q[7] >= 0) q[7] = t->f44 + q[7] * 32;
            else q[7] = 0;
            *p23 += 32;
        }
    }
    t->fin();
    for (u32 i = 0; i < t->f8; i++) fn_8015F808(&t->f76[i], c, t, p25, p8);
}
}
