// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key { u8 d[8]; };
struct V3 { u8 d[12]; };
struct Set { u8 a[0x18]; u8 b[0x18]; };
struct Sub { u8 pad[0x168]; Set s; u8 pad198[0xFC]; u8 t294[4]; };
struct X { u32 pad0; Sub *sub; u8 pad8[8]; void *db; u8 pad14[0x7C]; Set s90; u8 padC0[0xC]; Set sCC; };
class C8018D1A4 { public: u8 d[0x1C]; C8018D1A4(); };
class C8017AB98 { public: void *first; u8 d[0x20]; C8017AB98(); };
class C80105EE8 { public: u8 d[0x38]; C80105EE8(); };
struct Mk { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void *make(); };
struct Own { u32 pad0; Mk *mk; };
struct F { u8 pad[0x84]; void **pp; };
struct P { u32 flags; u8 pad4[0x28]; Own *own; u8 pad30[0x3C]; void *res1; u32 n; C8018D1A4 *arr; void *obj; void *res2; u32 pad80; C8017AB98 *m; u32 pad88; void *res3; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FAEA0(R *); char *fn_800FB284(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, char *, void *); void fn_80101124(V3 *, R *); void fn_80107F3C(void *, V3 *); void fn_8018CFA0(C8018D1A4 *, Sub *, R *); void fn_8017A8DC(C8017AB98 *, X *, R *); void fn_8017A8D4(C8017AB98 *, void *); void fn_8017A780(C8017AB98 *, X *, R *, s32); void fn_80105350(C80105EE8 *, void *, void *); F *fn_8019565C(void *); void fn_800EB720(char *, char *, s32); void *fn_80207144(void *, char *, char *); void fn_80191484(P *, X *, R *); extern void *lbl_8035AEA8; extern u32 lbl_80364D88, lbl_80364D8C, lbl_80364D90, lbl_80364D94; }

static inline void *findA(Sub *sb, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(sb->s.a, key);
    }
    return fn_800F9788(sb->s.b, grp, key);
}
static inline void *findB(X *x, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(x->sCC.a, key);
    }
    return fn_800F9788(x->sCC.b, grp, key);
}
static inline void *findC(X *x, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(x->s90.a, key);
    }
    return fn_800F9788(x->s90.b, grp, key);
}
static inline void ensure(P *p) {
    if (p->m == 0) {
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        p->m = new C8017AB98;
        fn_800F7E98();
        if (!p->m) fn_800604C4(-4, 0, 0, 0);
    }
}
static inline void *deref(F *f) {
    if (f->pp == 0) {
        return 0;
    }
    return *f->pp;
}

extern "C" void fn_801A17B8(P *p, X *x, R *r, u32 k) {
    Key key;
    char grp[8];
    V3 v;
    char buf[260];
    void *t;
    u32 i;
    switch (k) {
    case 108:
        p->flags |= lbl_80364D8C;
        break;
    case 109:
        p->flags &= ~0x800;
        break;
    case 95:
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        p->res1 = findA(x->sub, grp, &key);
        if (p->res1 == 0) {
            r->err(37);
        }
        break;
    case 114:
        if (p->obj == 0) {
            r->err(39);
        }
        fn_80101124(&v, r);
        fn_80107F3C(p->obj, &v);
        break;
    case 118:
        p->flags |= lbl_80364D90;
        break;
    case 62:
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        p->res2 = findB(x, grp, &key);
        if (p->res2 == 0) {
            r->err(37);
        }
        break;
    case 130:
        p->flags |= lbl_80364D94;
        break;
    case 112:
        if (p->n != 0) {
            r->err(39);
        }
        p->n = fn_800FADA8(r);
        if (p->n < 1) {
            r->err(35);
        }
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        p->arr = new C8018D1A4[p->n];
        fn_800F7E98();
        if (!p->arr) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->n; i++) {
            fn_8018CFA0(&p->arr[i], x->sub, r);
        }
        fn_800FAEA0(r);
        break;
    case 133:
        ensure(p);
        fn_8017A8DC(p->m, x, r);
        break;
    case 134: {
        C80105EE8 *o;
        ensure(p);
        if (p->m->first != 0) {
            r->err(39);
        }
        fn_800FB064(r, &key);
        t = fn_800F9398(x->sub->t294, &key);
        if (t == 0) {
            r->err(37);
        }
        p->flags |= lbl_80364D88;
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        o = new C80105EE8;
        fn_800F7E98();
        if (!o) fn_800604C4(-4, 0, 0, 0);
        fn_80105350(o, p->own->mk->make(), t);
        fn_8017A8D4(p->m, o);
        break;
    }
    case 135: {
        F *f;
        ensure(p);
        if (p->m->first != 0) {
            r->err(39);
        }
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        f = fn_8019565C(findC(x, grp, &key));
        if (f == 0 || deref(f) == 0) {
            r->err(37);
        }
        fn_8017A8D4(p->m, deref(f));
        break;
    }
    case 136:
        ensure(p);
        fn_8017A780(p->m, x, r, 136);
        break;
    case 115:
        fn_800EB720(buf, fn_800FB284(r), 256);
        fn_800FB064(r, grp);
        p->res3 = fn_80207144(x->db, buf, grp);
        break;
    default:
        fn_80191484(p, x, r);
        break;
    }
}

} /* extern "C" */
