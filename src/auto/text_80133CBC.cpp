// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Nm { u8 d[8]; };
struct P;
struct EA { u8 pad[0xC]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void load(void *, R *, u32); };
struct El { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void load(void *, P *, R *, Nm *); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); virtual void init(void *); virtual void p3(); virtual void initA(void *); virtual void initB(void *); virtual void p6(); virtual void p7(); virtual void p8(); virtual El *get(u32); virtual EA *getA(u32); virtual void *getB(u32); u32 n; u32 pad18; u32 na; u32 nb; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); void fn_800F8E38(P *, u32); void fn_80135F28(void *, P *, void *); void fn_800F87F0(P *, void *, void *); void fn_8012F548(void *, R *, u32); extern u8 lbl_802E4DB8[]; }

extern "C" void fn_80133CBC(P *p, void *x, R *r) {
    Nm key;
    Nm nm;
    u32 k;
    u32 i;
    Nm *name;
    El *e;
    u32 j;
    u32 m;
    if (p->n != 0) {
        p->clr();
    }
    r->setup(lbl_802E4DB8, 65, 0);
    k = r->next();
    name = 0;
    if (k == 58) {
        fn_800FB064(r, &nm);
        name = &nm;
        k = r->next();
    }
    while (k == 62 || k == 103) {
        if (k == 62) {
            if (p->na != 0) {
                r->err(39);
            }
            p->na = fn_800FADA8(r);
            p->initA(x);
            for (j = 0; j < p->na; j++) {
                fn_800FB000(r, 62);
                p->getA(j)->load(x, r, j);
            }
            fn_800FAEA0(r);
        } else {
            if (p->nb != 0) {
                r->err(39);
            }
            p->nb = fn_800FADA8(r);
            p->initB(x);
            for (m = 0; m < p->nb; m++) {
                fn_800FB000(r, 103);
                fn_8012F548(p->getB(m), r, m);
            }
            fn_800FAEA0(r);
        }
        k = r->next();
    }
    if (k != 57) {
        r->err(30);
    }
    p->n = fn_800FADA8(r);
    if (p->n < 1) {
        r->err(35);
    }
    fn_800F8E38(p, p->n);
    fn_80135F28(x, p, name);
    p->init(x);
    for (i = 0; i < p->n; i++) {
        fn_800FB000(r, 57);
        fn_800FB064(r, &key);
        e = p->get(i);
        fn_800F87F0(p, &key, e);
        e->load(x, p, r, name);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
