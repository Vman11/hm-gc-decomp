#include "common.h"
extern "C" {
}
struct Y_AD38;
struct M_AD38 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual Y_AD38 *f108(); virtual void f112(Y_AD38 *);
};
struct Y_AD38 { u8 pad_[36];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void f20();
};
struct C80272E68 { u8 pad[28]; };
struct S_AD38 { int a0; void *a4; int a8; int a12; Y_AD38 *a16; };
struct G_AD38 { u8 pad[11316]; u8 f11316[16]; M_AD38 *f11332; u8 pad2[4]; int f11340; int f11344; u8 pad3[12332 - 11348]; int f12332; };
extern "C" {
extern C80272E68 *lbl_8035B818;
extern void *lbl_8035A060;
extern G_AD38 *lbl_8035A1DC;
extern void *lbl_8035B5E4;
extern u8 lbl_8035C130;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *memset(void *, int, u32);
void fn_80129938(Y_AD38 *, int);
void fn_80272CD4(C80272E68 *, S_AD38 *);
void fn_80251428(void *, void *);
void fn_80251488(void *, void *);
void fn_80272538(C80272E68 *, int, int, int);
void fn_80272538b(C80272E68 *, void *, int, int);
void fn_80272D7C(C80272E68 *);
void fn_80272DDC(C80272E68 *, int);
void *__nw__FUl(u32);
void __ct__9C80272E68Fv(C80272E68 *);
void fn_8003AD38(int u, int a, int b, void *c, int d) {
    void *lk;
    int own = 1;
    C80272E68 *o;
    Y_AD38 *y = 0;
    if (lbl_8035B818 == 0) {
        S_AD38 s;
        if (lbl_8035A060 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A060);
        o = (C80272E68 *)__nw__FUl(28);
        if (o) __ct__9C80272E68Fv(o);
        fn_800F7E98();
        if (o == 0) fn_800604C4(-4, 0, 0, 0);
        memset(&s, 0, 20);
        y = lbl_8035A1DC->f11332->f108();
        fn_80129938(y, lbl_8035A1DC->f11340);
        *(Y_AD38 *volatile *)&s.a16 = y;
        {
        G_AD38 *g = *(G_AD38 *volatile *)&lbl_8035A1DC;
        s.a4 = g->f11316;
        s.a8 = g->f11344;
        s.a12 = g->f12332;
        }
        fn_80272CD4(o, &s);
    } else {
        o = lbl_8035B818;
        own = 0;
    }
    fn_80251428(lk = lbl_8035B5E4, &lbl_8035C130);
    fn_80272538(o, a, b, 0);
    if (c) fn_80272538(o, (int)c, d, 0);
    fn_80251488(lk, &lbl_8035C130);
    if (own == 1) {
        fn_80272D7C(o);
        fn_80272DDC(o, 1);
        if (y) {
            y->f20();
            lbl_8035A1DC->f11332->f112(y);
        }
    }
}
}
extern "C" {
}
