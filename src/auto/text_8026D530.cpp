// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct A { u8 pad[88]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void stop(s32); virtual void fade(s32, f32); };
struct Q { u8 pad[468]; Q *next; };
struct Y { u8 pad[88]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void stop(s32); virtual void fade(s32, f32);
    u8 pad2[176 - 92]; Q *q; };
struct GV { virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9(); virtual void g10(); virtual void g11(); virtual void rel(void *); };
struct G { GV *v; u8 pad[252]; virtual void h0(); virtual void h1(); virtual void h2(); virtual void tick(void *, f32); };
struct R { virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5(); virtual void rel(void *); };
struct Sub { u8 pad[16]; virtual void s0(); virtual void reset(); };
struct Ent { Y *p; u32 q; };
struct S { u8 pad[24]; void *f24; f32 f28; u8 pad2[40 - 32]; A *a40; A *a44; u32 f48; u8 *f52; u32 n56; void **f60; u8 *f64; u32 n68; Ent ent[40]; u32 f392; u32 f396; u8 pad3[404 - 400]; Sub sub; u8 pad4[428 - 424]; u32 f428; };
extern "C" {
extern f32 lbl_80366DD4, lbl_80366DD0, lbl_80366DE8;
extern G *lbl_8035B7C8;
extern void *lbl_8035B7C4;
extern R *lbl_8035B7C0;

static inline int busy(Y *y) {
    int r = 0;
    Q *q;
    for (q = y->q; q; q = q->next) r = 1;
    return r;
}

static inline void l1(S *s) {
    u32 i;
    Y *y;
    for (i = 0; i < s->n68; i++) {
        if (s->ent[i].p) {
            s->ent[i].p->fade(0, lbl_80366DD4);
            s->ent[i].p->stop(0);
            y = s->ent[i].p;
            do {
                lbl_8035B7C8->tick(lbl_8035B7C4, lbl_80366DD0);
            } while (busy(y) == 1);
        }
    }
}
static inline void l3(S *s) { u32 i; for (i = 0; i < s->n68; i++) s->ent[i].q = 0; }
void fn_8026D530(S *s) {
    u32 i;
    if (s->a40) { s->a40->fade(0, lbl_80366DD4); s->a40->stop(0); }
    if (s->a44) { s->a44->fade(0, lbl_80366DD4); s->a44->stop(0); }
    l1(s);
    if (s->f24) {
        lbl_8035B7C0->rel(s->f24);
        lbl_8035B7C8->tick(lbl_8035B7C4, lbl_80366DE8);
    }
    if (s->f52) delete[] s->f52;
    if (s->f60) {
        for (i = 0; i < s->n56; i++) {
            if (s->f60[i]) {
                lbl_8035B7C8->v->rel(s->f60[i]);
                s->f60[i] = 0;
            }
        }
        delete[] s->f60;
    }
    if (s->f64) delete[] s->f64;
    s->sub.reset();
    s->f24 = 0;
    s->f48 = 0; s->f52 = 0; s->n56 = 0; s->f60 = 0; s->f64 = 0;
    s->n68 = 40;
    s->f392 = 0;
    l3(s);
    s->f396 = 0;
    s->f28 = lbl_80366DD4;
    s->f428 = 0;
}

} /* extern "C" */
