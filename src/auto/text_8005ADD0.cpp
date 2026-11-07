#include "common.h"
extern "C" {
}
struct Y { u8 pad[8]; s32 type; u8 pc[4]; u32 n; union { s32 i; f32 f; } a14, a18; };
struct Rg { u8 pad[4]; s32 lo; s32 hi; };
struct X {
    Y *f0; u8 p4[4];
    virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4();
    virtual void *get(u32); virtual void set(void *, u32, int);
    Rg rA; u8 *f10_dummy;
};
struct X2 { Y *f0; u8 p4[0xc - 4]; Rg rA; u8 p18[8]; Rg rB; u8 p2c[8]; s32 f34; };
struct X3 { u8 p[0x10]; u8 *data; };
struct Nd;
struct NB { u8 pad[0x18]; virtual void n0(); virtual void *mk(); };
struct Nd { X *f0; const char *name; u8 p8[4]; Nd *next; Nd *child; };
struct SN : NB { };
extern "C" {
int strcmp(const char *, const char *);
Nd *fn_8010F0F8(void *, s32, u32);
void fn_8010CAF4(Nd *, Nd *);
void fn_8010CC84(Nd *, const char *);
void fn_800FA474(u8 *, char *, int);
void fn_80113140(X *, u32, char *);
void fn_8010A244(X *, s32, int);
void fn_80109DD4(X *, Rg *);
void fn_8005ADD0(void *c, Nd *dst, Nd *src) {
    X *nx; Nd *sc; X *sx; u32 off; Nd *d; Nd *s; Nd *dc; int uniq; Nd *n; u32 i;
    for (s = src->child; s; s = s->next) {
        if (s->child == 0) continue;
        for (d = dst->child; d; d = d->next) {
            if (strcmp(d->name, s->name) != 0) continue;
            for (dc = d->child; dc; dc = dc->next) {
                uniq = 1;
                for (sc = s->child; sc; sc = sc->next) {
                    if (strcmp(dc->name, sc->name) == 0) { uniq = 0; break; }
                }
                if (uniq != 1) continue;
                void *m = ((NB *)s)->mk();
                { Y *t = dc->f0->f0; u32 nn = *(volatile u32 *)&t->n; n = fn_8010F0F8(m, *(volatile s32 *)&t->type, nn); }
                fn_8010CAF4(n, s);
                sx = dc->f0;
                nx = n->f0;
                nx->f0->a18.i = sx->f0->a18.i;
                nx->f0->a18.f = sx->f0->a18.f;
                nx->f0->a14.i = sx->f0->a14.i;
                nx->f0->a14.f = sx->f0->a14.f;
                fn_8010CC84(n, dc->name);
                for (i = 0, off = 0; i < sx->f0->n; off += 20, i++) {
                    X2 *s2 = (X2 *)sx;
                    if (dc->f0->f0->type == 11) {
                        char buf[256];
                        fn_800FA474(((X3 *)sx)->data + off, buf, 255);
                        fn_80113140(nx, i, buf);
                    } else if (dc->f0->f0->type == 5) {
                        Rg *r = s2->f34 ? &s2->rB : &s2->rA;
                        fn_8010A244(nx, r->hi - r->lo + 1, 0);
                        fn_80109DD4(nx, s2->f34 ? &s2->rB : &s2->rA);
                    } else {
                        nx->set(sx->get(i), i, 1);
                    }
                }
                fn_8005ADD0(c, dc, n);
            }
        }
    }
}
}
