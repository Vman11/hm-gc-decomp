// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
typedef struct { int on; f32 tgt, x, v, k, fs, d, fd, a, im; } Spr;
struct CS {
    u8 pad0[0x284];
    s32 f284;
    u8 pad288[0x2a8 - 0x288];
    Spr spr;
    f32 f2d0;
    f32 amp;
    V3 off;
    f32 t;
    s32 st;
};
struct FT {
    u8 pad0[0xc];
    void (*setPos)(void *, V3 *);
    u8 pad10[0x130 - 0x10];
    void (*getPos)(void *, V3 *);
};
extern FT lbl_803286D0;
struct Obj { u8 pad[0x10]; void *h; u8 pad14[0xc]; u32 fl; };
struct G65C { u8 pad[0x28]; Obj *o; };
extern G65C *lbl_8035B65C;
struct E52 { u8 pad[0x34]; };
struct G5E4 { u8 pad[0x68]; s32 idx; u8 pad6c[4]; E52 *arr; };
extern G5E4 *lbl_8035B5E4;
extern const u32 lbl_80365A9C;
extern f32 lbl_80365A70;
extern f32 lbl_80365A80;
extern f32 lbl_80365AA0;
extern f32 lbl_80365AA4;
extern f32 lbl_80365AA8;
extern f32 lbl_80365AAC;
f32 fn_8023D494(Spr *s, f32 dt, f32 t);
void fn_80253304(E52 *, s32, f32);
void fn_80253250(E52 *);
int rand(void);
static inline f64 fabs(f64 x) { return __fabs(x); }

static inline s32 rmod(u32 n) { s32 r = 0; if (n) r = rand() % n; return r; }
static inline f32 sgn() { f32 s; if (rand() & 1) s = lbl_80365A80; else s = lbl_80365AA0; return s; }
static inline f32 roff(s32 n, f32 s) {
    f32 r;
    if (n < 0) r = lbl_80365AA8 * (f32)-rmod(-n); else r = lbl_80365AA8 * (f32)rmod(n);
    return r * s;
}

#pragma opt_propagation off
void fn_80222FE8(CS *p, f32 dt) {
    switch (p->st) {
    case 1:
        fn_8023D494(&p->spr, dt, lbl_80365A70);
        break;
    case 2: case 3: case 4:
        p->t -= dt;
        { f32 t = p->t; if (t <= lbl_80365A70) { p->t = lbl_80365A70; p->spr.x = lbl_80365A70; } }
        break;
    default:
        p->spr.x = lbl_80365A70;
        break;
    }
    f32 x = p->spr.x;
    if (p->st != 0) {
        f32 s = sgn();
        s32 n = (s32)(lbl_80365AA4 * x);
        p->off.x = roff(n, s);
        s = sgn();
        p->off.y = roff(n, s);
        s = sgn();
        p->off.z = roff(n, s);
        V3 v;
        Obj *o = lbl_8035B65C->o;
        lbl_803286D0.getPos(o->h, &v);
        v.x += p->off.x;
        v.y += p->off.y;
        v.z += p->off.z;
        lbl_803286D0.setPos(o->h, &v);
        o->fl |= lbl_80365A9C;
        E52 *e = &lbl_8035B5E4->arr[lbl_8035B5E4->idx];
        p->amp = fabs(lbl_80365AAC * p->spr.x);
        fn_80253304(e, 1000, p->amp);
        if (x <= lbl_80365AA8) {
            p->off.x = lbl_80365A70;
            p->off.y = lbl_80365A70;
            p->off.z = lbl_80365A70;
            p->t = lbl_80365A70;
            p->st = 1;
            p->spr.v = lbl_80365A70;
            fn_80253250(&lbl_8035B5E4->arr[lbl_8035B5E4->idx]);
            p->spr.x = lbl_80365A70;
            fn_80253304(e, 1000, lbl_80365A70);
            p->st = 0;
        }
    }
}

} /* extern "C" */
