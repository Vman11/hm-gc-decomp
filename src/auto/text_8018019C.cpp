// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual s32 next(); };
class C801804F0 { public: f32 a, b, c, d; s32 e; C801804F0(); };
struct P { u32 f0; u8 pad4[0xC]; u32 n10; C801804F0 *a14; u32 n18; C801804F0 *a1c; };
u32 fn_800FADA8(R *); f32 fn_800FB2E0(R *); s32 fn_800FB33C(R *); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_8018E20C(P *, R *, s32);
extern void *lbl_8035ADD8; extern u32 lbl_803648C8;

static inline void rd2(P *p, R *r, u32 i) {
    for (; i < p->n18; i++) {
        p->a1c[i].a = fn_800FB2E0(r);
        p->a1c[i].b = fn_800FB2E0(r);
        p->a1c[i].c = fn_800FB2E0(r);
        p->a1c[i].d = fn_800FB2E0(r);
        p->a1c[i].e = fn_800FB33C(r);
    }
}

void fn_8018019C(P *p, R *r) {
    s32 t;
    u32 i;
    fn_800FAEF8(r);
    while ((u32)(t = r->next()) != 6) {
        switch (t) {
        case 0x70:
            if (p->a14) r->err(0x27);
            p->n10 = fn_800FADA8(r);
            if (p->n10 < 1) r->err(0x23);
            if (!lbl_8035ADD8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ADD8);
            p->a14 = new C801804F0[p->n10];
            fn_800F7E98();
            if (!p->a14) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n10; i++) {
                p->a14[i].a = fn_800FB2E0(r);
                p->a14[i].b = fn_800FB2E0(r);
                p->a14[i].c = fn_800FB2E0(r);
                p->a14[i].d = fn_800FB2E0(r);
                p->a14[i].e = fn_800FB33C(r);
            }
            fn_800FAEA0(r);
            break;
        case 0x71:
            if (p->a1c) r->err(0x27);
            p->n18 = fn_800FADA8(r);
            if (p->n18 < 1) r->err(0x23);
            if (!lbl_8035ADD8) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ADD8);
            p->a1c = new C801804F0[p->n18];
            fn_800F7E98();
            if (!p->a1c) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n18; i++) {
                p->a1c[i].a = fn_800FB2E0(r);
                p->a1c[i].b = fn_800FB2E0(r);
                p->a1c[i].c = fn_800FB2E0(r);
                p->a1c[i].d = fn_800FB2E0(r);
                p->a1c[i].e = fn_800FB33C(r);
            }
            fn_800FAEA0(r);
            break;
        default:
            fn_8018E20C(p, r, t);
            break;
        }
    }
    p->f0 |= lbl_803648C8;
}

} /* extern "C" */
