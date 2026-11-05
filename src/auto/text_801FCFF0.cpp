#include "common.h"
// NonMatching: callee-saved rotation (target g r31, n r26, p24 r27, i r28, off r25); instructions match except len add order
extern "C" {
extern "C" unsigned long strlen(const char *);
typedef struct S28 { u8 pad[12]; char *fC; } S28;
struct C80215F50 {
    u8 pad0[36];
    char *f24;
    S28 *f28;
    void *f2C;
    u8 pad30[8];
    C80215F50();
    ~C80215F50();
};
extern void *lbl_8035A9F4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
extern char lbl_80365674[4], lbl_80365678[8];
struct G { u8 pad[92]; u32 f92; u8 pad96[4]; void **f100; };
extern G *lbl_8035B1C0;
s32 fn_80215C84(C80215F50 *, const char *, const char *, s32, s32);
void fn_80215BFC(C80215F50 *);
void fn_80060E30(s32, const char *, ...);
void fn_800E8F6C(char *, const char *, ...);
void fn_80207A54(void *, char *);
void fn_80207DAC(char *, char *, u32);
void fn_802079F0(void *, int);
struct A { u8 pad[8]; void *f8; };
struct T;
struct E { u8 pad[8]; u32 f8; void *f12; u8 pad16[12]; virtual void e0(); virtual void e1(); virtual void attach(void *, T *); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void set(void *); };
struct T { u8 pad[16]; virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3(); virtual void load(A *, void *); virtual E *get(u32); virtual void name(void *, char *); u32 f20; };
void fn_801FCFF0(T *t, A *a, const char *nm) {
    C80215F50 f;
    G *g;
    char *p24;
    u32 i;
    s32 r;
    u32 n;
    if ((r = fn_80215C84(&f, nm, lbl_80365674, 2, 0)) != 0) {
        char buf[128];
        fn_800E8F6C(buf, lbl_80365678, nm, lbl_80365674);
        fn_80060E30(r, buf);
    }
    g = lbl_8035B1C0;
    p24 = f.f24;
    n = g->f92;
    for (i = 0; i < n; i++) fn_80207A54(g->f100[i], f.f28->fC);
    char *s = f.f28->fC;
    u32 len = strlen(p24);
    len = strlen(s) + (len + 4);
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    char *b2 = new char[len];
    fn_800F7E98();
    if (b2 == 0) fn_800604C4(-4, 0, 0, 0);
    fn_80207DAC(p24, b2, len);
    t->load(a, f.f2C);
    fn_80215BFC(&f);
    t->name(a->f8, b2);
    for (i = 0; i < t->f20; i++) {
        E *e = t->get(i);
        if (!(e->f8 & 0x8000)) {
            e->attach(a->f8, t);
            e->set(e->f12);
        }
    }
    for (i = 0; i < n; i++) fn_802079F0(g->f100[i], 0);
    delete[] b2;
}
}
