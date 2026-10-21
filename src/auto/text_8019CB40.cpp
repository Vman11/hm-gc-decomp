// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct B { u8 pad[8]; virtual void p0(); virtual void start(void *); };
struct S24 { u8 d[0x24]; };
struct S18 { u8 d[0x18]; };
struct S2C { u8 d[0x2C]; };
struct X { u8 pad[0x210]; u8 sub[0x54]; void *a; void *b; };
struct P { u32 na; void *a; void *af; u32 nb; void *b; void *bf; u32 nc; S24 *c; u32 nd; S18 *d; u32 ne; S18 *e; u32 nf; S18 *f; u32 ng; S2C *g; B *cur; };
extern "C" { u32 fn_800FB33C(R *); void fn_800FB000(R *, s32); void fn_800FAEF8(R *); void fn_800FAFA8(R *); void fn_800FAF50(R *); void fn_8019BB1C(P *); void fn_8019C358(P *); void fn_8019BF34(P *, X *, R *); void fn_80199F54(void *); void fn_8018F424(void *, void *, void *, s32); void fn_8018F3D4(void *); extern u8 lbl_802E9918[]; }

extern "C" void fn_8019CB40(P *p, X *x, R *r) {
    u32 *dst;
    u32 k;
    u32 idx;
    u32 i;
    B *e;
    if (p->cur != 0) {
        fn_8019BB1C(p);
    }
    r->setup(lbl_802E9918, 19, 0);
    fn_800FB000(r, 69);
    fn_800FAEF8(r);
    dst = 0;
    while ((k = r->next()) != 70) {
        switch (k) {
        case 62: dst = &p->na; break;
        case 63: dst = &p->nb; break;
        case 57: dst = &p->nc; break;
        case 58: dst = &p->nd; break;
        case 59: dst = &p->ne; break;
        case 60: dst = &p->nf; break;
        case 61: dst = &p->ng; break;
        default: r->err(30); break;
        }
        fn_800FAFA8(r);
        *dst = fn_800FB33C(r);
        fn_800FAF50(r);
    }
    if (p->ng < 1) {
        r->err(35);
    }
    fn_8019C358(p);
    k = r->next();
    idx = fn_800FB33C(r);
    switch (k) {
    case 57:
        if (idx < p->nc) { e = (B *)&p->c[idx]; goto done; }
        break;
    case 58:
        if (idx < p->nd) { e = (B *)&p->d[idx]; goto done; }
        break;
    case 59:
        if (idx < p->ne) { e = (B *)&p->e[idx]; goto done; }
        break;
    case 60:
        if (idx < p->nf) { e = (B *)&p->f[idx]; goto done; }
        break;
    case 61:
        if (idx < p->ng) { e = (B *)&p->g[idx]; goto done; }
        break;
    default:
        r->err(30);
        break;
    }
    r->err(35);
    e = 0;
done:
    p->cur = e;
    fn_8019BF34(p, x, r);
    for (i = 0; i < p->nc; i++) {
        fn_80199F54(&p->c[i]);
    }
    for (i = 0; i < p->nd; i++) {
        fn_80199F54(&p->d[i]);
    }
    for (i = 0; i < p->ne; i++) {
        fn_80199F54(&p->e[i]);
    }
    for (i = 0; i < p->nf; i++) {
        fn_80199F54(&p->f[i]);
    }
    fn_8018F424(x->sub, x->a, x->b, 1);
    p->cur->start(x);
    fn_8018F3D4(x->sub);
}

} /* extern "C" */
