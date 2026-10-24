// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); };
struct Key { u8 d[8]; };
struct Mk { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void *make(); };
struct Own { u32 pad0; Mk *mk; };
struct Lis { u8 pad[36]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void add(void *); };
struct Obj { u8 pad[44]; void *f44; };
struct Sub { u8 pad[660]; u8 t660[4]; };
struct X { u32 pad0; Sub *sub; u8 pad8[136]; u8 a144[24]; u8 b168[24]; };
struct F { u8 pad[168]; void *f168; };
class C8017AB98 { public: Obj *first; u8 d[0x20]; C8017AB98(); };
class C80105EE8 { public: u8 d[0x38]; C80105EE8(); };
struct P {
    u32 flags; u8 pad4[40]; Own *own; s32 f48; u8 pad52[28]; u32 f80; u8 pad84[20];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual Lis *lis();
    u8 pad108[12]; s32 f120; u8 pad124[44]; C8017AB98 m;
};
void fn_800FB064(R *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void fn_8017A8DC(C8017AB98 *, X *, R *);
void fn_8017A8D4(C8017AB98 *, void *);
void fn_8017A780(C8017AB98 *, X *, R *, s32);
void fn_80105350(C80105EE8 *, void *, void *);
F *fn_8019556C(void *);
void fn_80190348(F *, P *);
void fn_8018DBAC(P *, X *, R *, s32);
extern void *lbl_8035AEA8;
extern u32 lbl_803649E8, lbl_803649EC, lbl_803649F0;

static inline void *findC(X *x, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(x->a144, key);
    }
    return fn_800F9788(x->b168, grp, key);
}

void fn_801879EC(P *p, X *x, R *r, s32 k) {
    Obj *g;
    Key key;
    char grp[8];
    void *t;
    switch (k) {
    case 66: {
        fn_8017A8DC(&p->m, x, r);
        g = p->m.first;
        if (g->f44 && p->lis()) p->lis()->add(g->f44);
        break;
    }
    case 67: {
        C80105EE8 *o;
        if (p->m.first != 0) r->err(39);
        fn_800FB064(r, &key);
        t = fn_800F9398(x->sub->t660, &key);
        if (t == 0) r->err(37);
        p->flags |= lbl_803649E8;
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        o = new C80105EE8;
        fn_800F7E98();
        if (!o) fn_800604C4(-4, 0, 0, 0);
        fn_80105350(o, p->own->mk->make(), t);
        if (((Obj *)o)->f44 && p->lis()) p->lis()->add(((Obj *)o)->f44);
        fn_8017A8D4(&p->m, o);
        break;
    }
    case 124: {
        F *f;
        if (p->m.first != 0 || p->f80 != 0) r->err(39);
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        f = fn_8019556C(findC(x, grp, &key));
        if (f == 0 || f->f168 == 0) r->err(37);
        p->f48 = 0;
        p->f120 = 0;
        fn_80190348(f, p);
        p->flags |= lbl_803649EC;
        fn_8017A8D4(&p->m, f->f168);
        break;
    }
    case 68:
        fn_8017A780(&p->m, x, r, 68);
        break;
    case 122:
        p->flags |= lbl_803649F0;
        break;
    case 123:
        p->flags &= ~0x80000;
        break;
    case 96:
    case 97:
        if (p->flags & 0x40000) r->err(39);
    default:
        fn_8018DBAC(p, x, r, k);
        break;
    }
}
}

} /* extern "C" */
