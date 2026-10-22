// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R24F { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key24F { char d[8]; };
struct E24F { Key24F a; Key24F b; Key24F c; s32 f18; s32 f1c; s32 f20; s32 f24; };
struct O24F { u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void v2(char *); };
class C8023C7CC { public: u8 d[0x1c]; C8023C7CC(); };
struct T24F { virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3(); virtual void t4(); virtual void t5(); virtual void t6(); virtual void go(R24F *, Key24F *, s32, Key24F *, Key24F *, s32, f32); };
struct Q24F { u8 pad[0xbc]; void *fbc; };
struct P24F { u8 pad[0x48]; s32 f48; O24F o4c; u8 pad60[0x94 - 0x60]; C8023C7CC *f94; u32 f98; u8 pad9c[0x268 - 0x9c]; u8 f268[4]; };
struct H24F { u8 pad[0xc0]; virtual void h0(); virtual void h1(); virtual void h2(); virtual void a(void *, s32); virtual void h4(); virtual s32 b(void *); };
u32 fn_800FADA8(R24F *);
void fn_800FB064(R24F *, void *);
void fn_800FB000(R24F *, s32);
f32 fn_800FB2E0(R24F *);
s32 fn_800FB33C(R24F *);
void fn_800FAEA0(R24F *);
void fn_800FAEF8(R24F *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
s32 fn_800F6CD0(void *, char *);
void fn_800F6E88(void *, void *);
void fn_8023CA84(P24F *, char *);
T24F *fn_8023CA4C(void *, void *);
void *fn_8021616C(void *);
void fn_8024E7BC(P24F *, Q24F *, void *, void *, s32, void *);
void fn_80250794(T24F *, Key24F *, R24F *, s32);
void fn_80250FA4(T24F *, Key24F *, R24F *, s32);
void fn_8024FD6C(void *, u32, E24F *, s32);
extern void *lbl_8035B590;
extern void *lbl_8035A9F4;
extern H24F *lbl_8035B684;
extern char lbl_80366430[8];
extern char lbl_80366440[8];
extern char lbl_80366448[8];
extern char lbl_80366450[8];
extern char lbl_80366458[8];
extern char lbl_80366484[8];

void fn_8024F13C(P24F *p, Q24F *q, void *s5, R24F *r, void *s7, s32 flag) {
    Key24F k48;
    Key24F k40;
    Key24F k38;
    Key24F k30;
    Key24F k28;
    Key24F k20;
    Key24F k18;
    Key24F k10;
    u8 loc8[8];
    s32 r23 = 0;
    s32 r24 = 0;
    E24F *arr;
    u32 cnt;
    u32 off;
    u32 i;
    s32 b1;
    s32 b3;
    s32 b2;
    s32 v21;
    s32 t;
    f32 fv;
    T24F *o;

    if (flag) {
        p->f48 = 1;
        fn_8023CA84(p, lbl_80366430);
    } else {
        p->o4c.v2(lbl_80366430);
        if (!lbl_8035B590) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B590);
        p->f94 = new C8023C7CC;
        fn_800F7E98();
        if (!p->f94) fn_800604C4(-4, 0, 0, 0);
    }
    fn_8024E7BC(p, q, fn_8021616C(q->fbc), s5, flag, s7);
    fn_800FB000(r, 0x3a);
    p->f98 = fn_800FADA8(r);
    if (p->f98) {
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        arr = new E24F[p->f98 * 3];
        fn_800F7E98();
        if (!arr) fn_800604C4(-4, 0, 0, 0);
        cnt = 0;
        for (i = 0; i < p->f98; i++) {
            fn_800FB000(r, 0x3a);
            fn_800FAEF8(r);
            fn_800FB064(r, &k48);
            fn_800FB064(r, &k40);
            fn_800FB064(r, &k38);
            b1 = 0;
            if (fn_800FB33C(r) == 1) b1 = 1;
            fn_800FB064(r, &k30);
            fn_800FB064(r, &k18);
            b2 = 0;
            if (fn_800FB33C(r) == 1) b2 = 1;
            fn_800FB064(r, &k10);
            fv = fn_800FB2E0(r);
            fn_800FB064(r, &k28);
            b3 = 0;
            if (fn_800FB33C(r) == 1) b3 = 1;
            fn_800FB064(r, &k20);
            v21 = fn_800FB33C(r);
            t = 0;
            if (fn_800FB33C(r) == 1) {
                t = 1;
                if (fn_800F6CD0(&k48, lbl_80366450) || fn_800F6CD0(&k48, lbl_80366458)) {
                    r23 = r24;
                    if (flag) {
                        lbl_8035B684->a(loc8, -1);
                        r23 = r24 + (lbl_8035B684->b(loc8) + 1) * 8;
                    }
                    r24++;
                }
            }
            if (fn_800F6CD0(&k48, lbl_80366440)) {
                if (flag) o = fn_8023CA4C(p, &k48);
                else o = fn_8023CA4C(&p->o4c, &k48);
                fn_80250794(o, &k40, r, t);
                t = 1;
            } else if (fn_800F6CD0(&k48, lbl_80366448)) {
                if (flag) o = fn_8023CA4C(p, &k48);
                else o = fn_8023CA4C(&p->o4c, &k48);
                fn_80250FA4(o, &k40, r, t);
                t = 2;
            } else if (fn_800F6CD0(&k48, lbl_80366450)) {
                if (flag) o = fn_8023CA4C(p, &k48);
                else o = fn_8023CA4C(&p->o4c, &k48);
                o->go(r, &k40, t, &k18, &k10, r23, fv);
                t = 3;
            } else {
                if (flag) o = fn_8023CA4C(p, &k48);
                else o = fn_8023CA4C(&p->o4c, &k48);
                o->go(r, &k40, t, &k18, &k10, r23, fv);
                t = 3;
            }
            if (!fn_800F6CD0(&k38, lbl_80366484)) {
                E24F *e = &arr[cnt];
                fn_800F6E88(&e->a, &k40);
                fn_800F6E88(&e->b, &k38);
                fn_800F6E88(&e->c, &k30);
                e->f1c = 0;
                cnt++;
                e->f18 = t;
                e->f20 = b1;
                e->f24 = v21;
            }
            if (!fn_800F6CD0(&k18, lbl_80366484)) {
                E24F *e = &arr[cnt];
                fn_800F6E88(&e->a, &k40);
                fn_800F6E88(&e->b, &k18);
                fn_800F6E88(&e->c, &k10);
                e->f1c = 0;
                cnt++;
                e->f18 = t;
                e->f20 = b2;
                e->f24 = v21;
            }
            if (!fn_800F6CD0(&k28, lbl_80366484)) {
                E24F *e = &arr[cnt];
                fn_800F6E88(&e->a, &k40);
                fn_800F6E88(&e->b, &k28);
                fn_800F6E88(&e->c, &k20);
                e->f1c = 1;
                cnt++;
                e->f18 = t;
                e->f20 = b3;
            }
            fn_800FAEA0(r);
        }
        if (cnt) fn_8024FD6C(p->f268, cnt, arr, flag);
        delete[] arr;
    }
    fn_800FAEA0(r);
}

}

} /* extern "C" */
