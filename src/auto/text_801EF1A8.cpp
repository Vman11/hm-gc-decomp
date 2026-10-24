// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X { u32 f0; u8 pad4[20]; f32 p24[3]; f32 r36; u8 pad40[52]; u32 m92; u32 m96; u8 pad100[4]; virtual void s0(); virtual void s1(); virtual void upd(); };
struct T { u8 pad[20]; virtual void s0(); virtual void fire(); X *f24; X *f28; X *f32; X *f36; int f40; u32 f44; };
f32 fn_8010155C(f32 *, f32 *);
static inline X *gA(T *t) { return t->f28 ? t->f28 : t->f24; }
static inline X *gB(T *t) { return t->f36 ? t->f36 : t->f32; }
static inline int test(X *a, X *b) {
    if ((a->m92 & b->m96) | (a->m96 & b->m92)) {
        f32 r;
        if (a->f0 & 4) a->upd();
        if (b->f0 & 4) b->upd();
        r = a->r36 + b->r36;
        r = r * r;
        return fn_8010155C(b->p24, a->p24) <= r;
    }
    return 0;
}
void fn_801EF1A8(T *t) {
    int hit;
    if (gA(t)->f0 & 2 && gB(t)->f0 & 2) {
        X *a = gA(t);
        X *b = gB(t);
        hit = test(a, b);
    } else {
        hit = 0;
    }
    if (hit && t->f40) {
        if (t->f44 & 4) t->fire();
    } else if (hit && !t->f40) {
        if (t->f44 & 1) t->fire();
    } else if (!hit && t->f40) {
        if (t->f44 & 2) t->fire();
    }
    t->f40 = hit;
}

} /* extern "C" */
