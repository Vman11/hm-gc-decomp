#include "common.h"

extern "C" {

struct E { void *f0; u32 f4; u32 f8; };
struct V2 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void bind(void *); };
struct R { u8 pad[12]; char *name; };
struct Arg { u8 pad[12]; void *x; void *y; };
struct E0 { u8 pad[0x8c]; char name[8]; };
struct C80248E00 { u8 pad[0x34]; C80248E00(); };
struct C8024826C { u8 pad[0x20]; C8024826C(); };
struct C802444F0 { u8 pad[0x20]; C802444F0(); };
struct G2 { u8 pad[4]; u8 *f4; };
struct G1 { u8 pad[8]; G2 *f8; };
struct P {
    virtual void v0(); virtual void v1(); virtual void v2();
    u8 pad4[0x78];
    s32 n7c; s32 n80; s32 n84; s32 n88; s32 n8c; u8 pad90[4]; s32 n94; u8 pad98[4];
    f32 *f9c; f32 *fa0; u8 pada4[0x1c];
    V2 **c0; u32 *c4; E *c8; E *cc; void **d0; void **d4; u8 padd8[8];
    E0 *e0; u8 pade4[0x10];
    u32 f4; C802444F0 *f8; u32 fc; C8024826C *f100; u32 f104; C80248E00 *f108; u32 f10c; void **f110;
};
extern char lbl_802A8D48[];
extern char lbl_8036619C[8];
extern char lbl_803661A4[8];
extern void *lbl_8035B530;
extern G1 *lbl_8035B460;
extern void *lbl_8035B7BC;
void fn_80249AC4(P *, Arg *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *fn_8010FEDC(void *, void *, const char *, int);
R *fn_8010FFFC(void *, void *, void *, int);
void fn_800F6E88(char *, const char *);
void fn_800F6FBC(u32, char *);
void fn_800F6E40(void *, const char *);
void *fn_800F9398(void *, char *);
void *fn_800F8274(void *, char *);
int fn_800E8F6C(char *, const char *, ...);
void *fn_8026D254(void *, char *);
void fn_80248CAC(C80248E00 *, int);
void fn_802483E4(C80248E00 *, int, f32);
void fn_802483AC(C80248E00 *, int, f32);
void fn_80247F54(C8024826C *, void *, s32, u32);
void *fn_8023BC90(char *);
V2 *fn_8023B8FC(void *, char *, int);
void fn_80244154(C802444F0 *, s32, u32, E0 *);

static inline void hbeg() {
    if (!lbl_8035B530) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
}

void fn_802416D4(P *p, Arg *a) {
    char m1[256];
    char m2[256];
    u8 t54[12];
    u8 t48[12];
    u8 t3c[12];
    u8 t30[12];
    char b28[8];
    char b20[8];
    char b18[8];
    char b10[8];
    char b8[8];
    char *str = lbl_802A8D48;
    void *x, *y;
    u8 *db;
    u32 off, off4;
    void *g;
    void *ld;
    void *found;
    s32 i;
    fn_80249AC4(p, a);
    p->e0 = (E0 *)a;
    found = 0;
    x = a->x;
    y = a->y;
    hbeg();
    p->d0 = new void *[p->n7c];
    fn_800F7E98();
    if (!p->d0) fn_800604C4(-4, 0, 0, 0);
    if (y && x) found = fn_8010FEDC(x, y, str + 0x124, 1);
    off = 0;
    off4 = off;
    for (i = 0; i < p->n7c; off += 12, off4 += 4, i++) {
        db = lbl_8035B460->f8->f4;
        R *r = 0;
        if (found) r = fn_8010FFFC(x, found, ((E *)((u8 *)p->c8 + off))->f0, 1);
        if (r) {
            fn_800F6E88(b20, r->name);
            fn_800F6E88(b28, r->name + 8);
        } else {
            fn_800F6FBC(((E *)((u8 *)p->c8 + off))->f8, b28);
            fn_800F6FBC(((E *)((u8 *)p->c8 + off))->f4, b20);
        }
        if (!b20[0]) fn_800F6E88(b20, p->e0->name);
        void *s = fn_800F9398(db + 0x2dc, b20);
        *(void **)((u8 *)p->d0 + off4) = 0;
        if (!s) {
            fn_800F6E40(t54, b20);
            fn_800E8F6C(m1, str + 0x130, t54);
        } else {
            *(void **)((u8 *)p->d0 + off4) = fn_800F8274(s, b28);
            if (!*(void **)((u8 *)p->d0 + off4)) {
                fn_800F6E40(t48, b28);
                fn_800F6E40(t3c, b20);
                fn_800E8F6C(m2, str + 0x170, t48, t3c);
            }
        }
    }
    p->f108 = 0;
    hbeg();
    p->d4 = new void *[p->n84];
    fn_800F7E98();
    if (!p->d4) fn_800604C4(-4, 0, 0, 0);
    ld = lbl_8035B7BC;
    hbeg();
    p->f108 = new C80248E00;
    fn_800F7E98();
    if (!p->f108) fn_800604C4(-4, 0, 0, 0);
    fn_80248CAC(p->f108, 1);
    if (p->f9c) fn_802483E4(p->f108, 0, *p->f9c);
    if (p->fa0) fn_802483AC(p->f108, 0, *p->fa0);
    if (y && x) found = fn_8010FEDC(x, y, lbl_8036619C, 1);
    for (i = 0; i < p->n84; i++) {
        R *r = 0;
        if (found) {
            R *q = fn_8010FFFC(x, found, p->cc[i].f0, 1);
            if (q) r = q;
        }
        if (r) fn_800F6E88(b18, (char *)&r->name);
        else fn_800F6FBC(p->cc[i].f4, b18);
        p->d4[i] = fn_8026D254(ld, b18);
    }
    if (p->n8c) {
        hbeg();
        p->f100 = new C8024826C;
        fn_800F7E98();
        if (!p->f100) fn_800604C4(-4, 0, 0, 0);
        fn_800F6E88(b10, p->e0->name);
        fn_800F6E40(t30, b10);
        fn_80247F54(p->f100, t30, p->n8c, p->fc);
        p->f104 = 0;
    }
    g = fn_8023BC90(lbl_803661A4);
    if (p->n80) {
        hbeg();
        p->c0 = new V2 *[p->n80];
        fn_800F7E98();
        if (!p->c0) fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < p->n80; i++) {
        fn_800F6FBC(p->c4[i], b8);
        p->c0[i] = fn_8023B8FC(g, b8, -1);
        if (p->c0[i]) p->c0[i]->bind(a);
    }
    if (p->n88) {
        hbeg();
        p->f8 = new C802444F0;
        fn_800F7E98();
        if (!p->f8) fn_800604C4(-4, 0, 0, 0);
        fn_80244154(p->f8, p->n88, p->f4, p->e0);
    }
    if (p->n94) {
        hbeg();
        p->f110 = new void *[p->n94];
        fn_800F7E98();
        if (!p->f110) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->n94; i++) p->f110[i] = 0;
    }
    p->v2();
}

} /* extern "C" */
