// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R17E { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C80199874 { public: u8 d[0x34]; C80199874(); };
class C8017E040 { public: u8 d[0x18]; C8017E040(); };
struct L17E { u8 pad[0x10]; virtual void p0(); virtual void clr(); };
struct Key17E { u8 d[8]; };
struct B17E { u8 b[8]; };
struct Q17E { u8 pad[4]; u8 *tbl; };
struct P17E { u32 f0; u32 n1; C80199874 *arr2; u32 n3; C8017E040 *arr4; u32 f14; C80199874 *f18; L17E l1c; L17E l30; u32 f44; };
struct S17E { u8 pad[0xc]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void go(); };
u32 fn_800FADA8(R17E *);
void fn_800FB064(R17E *, void *);
void fn_800FB000(R17E *, s32);
void fn_800FAEA0(R17E *);
void fn_800FAEF8(R17E *);
u32 fn_800FB33C(R17E *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(L17E *, u32);
void fn_800F87F0(L17E *, void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void fn_80199430(C80199874 *, P17E *, R17E *);
void fn_8017DF50(C8017E040 *, P17E *, R17E *);
void fn_80199348(C80199874 *, Q17E *, P17E *, B17E *, B17E *, B17E *);
S17E *fn_801320AC(u32, u32);
extern void *lbl_8035ADBC;
extern void *lbl_8035A9F4;
extern u32 lbl_80330258[4];
extern u32 lbl_8035ADA8;
extern B17E *lbl_8035ADAC;
extern B17E *lbl_8035ADB0;
extern B17E *lbl_8035ADB4;
extern u32 lbl_8035ADB8;
void *__nwa__FUl(u32);

void fn_8017E1DC(P17E *p, Q17E *q, R17E *r) {
    Key17E key;
    char grp[8];
    u32 k;
    u32 i;
    u32 first;
    void *v;

    if (p->arr4 != 0) {
        p->l30.clr();
        if (p->arr4) delete[] p->arr4;
        p->l1c.clr();
        if (p->arr2) delete[] p->arr2;
        p->f0 = 0;
        p->n1 = 0;
        p->arr2 = 0;
        p->n3 = 0;
        p->arr4 = 0;
        p->f14 = 0;
        p->f18 = 0;
        p->f44 = 0;
    }
    fn_800FAEF8(r);
    lbl_80330258[0] = 0;
    k = r->next();
    if (k == 0x3b) {
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        u8 *tb = q->tbl;
        if ((char *)grp == 0 || grp[0] == 0) {
            v = fn_800F9398(tb + 0xf0, &key);
        } else {
            v = fn_800F9788(tb + 0x108, grp, &key);
        }
        p->f0 = (u32)v;
        if (p->f0 == 0) {
            r->err(0x25);
        }
        k = r->next();
        if (k == 0x3c) {
            p->n1 = fn_800FADA8(r);
            if (p->n1 < 1) {
                r->err(0x23);
            }
            if (!lbl_8035ADBC) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ADBC);
            p->arr2 = new C80199874[p->n1];
            fn_800F7E98();
            if (!p->arr2) fn_800604C4(-4, 0, 0, 0);
            fn_800F8E38(&p->l1c, p->n1);
            if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            lbl_8035ADAC = new B17E[p->n1];
            fn_800F7E98();
            if (!lbl_8035ADAC) fn_800604C4(-4, 0, 0, 0);
            if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            lbl_8035ADB0 = new B17E[p->n1];
            fn_800F7E98();
            if (!lbl_8035ADB0) fn_800604C4(-4, 0, 0, 0);
            if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            lbl_8035ADB4 = new B17E[p->n1];
            fn_800F7E98();
            if (!lbl_8035ADB4) fn_800604C4(-4, 0, 0, 0);
            for (lbl_8035ADA8 = 0; lbl_8035ADA8 < p->n1; lbl_8035ADA8++) {
                lbl_8035ADAC[lbl_8035ADA8].b[0] = 0;
                lbl_8035ADB0[lbl_8035ADA8].b[0] = 0;
                lbl_8035ADB4[lbl_8035ADA8].b[0] = 0;
                fn_800FB000(r, 0x3c);
                fn_800FB064(r, &key);
                fn_800F87F0(&p->l1c, &key, &p->arr2[lbl_8035ADA8]);
                fn_80199430(&p->arr2[lbl_8035ADA8], p, r);
            }
            fn_800FAEA0(r);
            k = r->next();
        }
    }
    if (k != 0x42) {
        r->err(0x1e);
    }
    p->n3 = fn_800FADA8(r);
    if (p->n3 < 1) {
        r->err(0x23);
    }
    if (!lbl_8035ADBC) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035ADBC);
    p->arr4 = new C8017E040[p->n3];
    fn_800F7E98();
    if (!p->arr4) fn_800604C4(-4, 0, 0, 0);
    fn_800F8E38(&p->l30, p->n3);
    for (i = 0; i < p->n3; i++) {
        fn_800FB000(r, 0x42);
        fn_800FB064(r, &key);
        fn_800F87F0(&p->l30, &key, &p->arr4[i]);
        fn_8017DF50(&p->arr4[i], p, r);
    }
    fn_800FAEA0(r);
    k = r->next();
    if (k == 0x44) {
        first = fn_800FB33C(r);
        p->f14 = fn_800FB33C(r);
        if (first + p->f14 > p->n1) {
            r->err(0x23);
        }
        p->f18 = &p->arr2[first];
        k = r->next();
    }
    if (k != 6) {
        r->err(7);
    }
    if (lbl_8035ADB4 != 0) {
        for (lbl_8035ADA8 = 0; lbl_8035ADA8 < p->n1; lbl_8035ADA8++) {
            fn_80199348(&p->arr2[lbl_8035ADA8], q, p, &lbl_8035ADAC[lbl_8035ADA8], &lbl_8035ADB0[lbl_8035ADA8], &lbl_8035ADB4[lbl_8035ADA8]);
        }
        delete[] lbl_8035ADB4;
        delete[] lbl_8035ADAC;
        delete[] lbl_8035ADB0;
        lbl_8035ADB4 = 0;
        lbl_8035ADAC = 0;
        lbl_8035ADB0 = 0;
    }
    if (lbl_80330258[0] != 0) {
        fn_801320AC(p->f0, lbl_8035ADB8)->go();
    }
}

} /* extern "C" */
