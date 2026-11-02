// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V_D97C { u8 pad_[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int f24(int);
};
struct C_D97C { f64 al; u8 pad[36]; int f44; u8 pad2[26424 - 48]; };
struct R_D97C { int a, b, c, d; };
struct Q_D97C { u8 pad[28]; u16 w; u16 h; };
struct P_D97C { u8 pad[16]; int f16; int f20; int f24; u8 f28[20]; u8 f48[4]; V_D97C *f52; int f56; u8 f60[1344 - 60]; u32 f1344; u8 *f1348; int f1352; };
extern "C" {
extern void *lbl_8035A9F4;
extern char lbl_8029FAB0[];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void __ct__9C8013D770Fv(C_D97C *);
void dtor_8013D5C8(C_D97C *, int);
void fn_801485B4(P_D97C *, int);
int fn_802108B4(void *, u8 *, u32, int *);
void fn_8013D4CC(C_D97C *, u8 *, u32);
int fn_8013D344(C_D97C *);
void fn_801486B4(P_D97C *, char *);
void fn_80129168(Q_D97C *, void *, void *, int);
void fn_80148330(P_D97C *, int, Q_D97C *, int);
void fn_80128F98(Q_D97C *, R_D97C *, int, int, R_D97C *);
void fn_80128F54(Q_D97C *);
void fn_8013D97C(P_D97C *p, int a, Q_D97C *q, int c) {
    C_D97C o;
    R_D97C r2;
    R_D97C r1;
    int l8;
    u8 *buf;
    int e;
    __ct__9C8013D770Fv(&o);
    if (p->f1348 == 0) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        buf = new u8[p->f1344];
        fn_800F7E98();
        if (buf == 0) fn_800604C4(-4, 0, 0, 0);
        if ((e = p->f52->f24(p->f1352)) != 0) fn_801485B4(p, e);
        if ((e = fn_802108B4(p->f48, buf, p->f1344, &l8)) != 0) fn_801485B4(p, e);
    } else {
        buf = p->f1348;
    }
    fn_8013D4CC(&o, buf, p->f1344);
    if (!fn_8013D344(&o)) fn_801486B4(p, lbl_8029FAB0);
    fn_80129168(q, p->f28, p->f60, p->f56);
    fn_80148330(p, a, q, c);
    r2.b = 0;
    r2.a = 0;
    r2.c = p->f16;
    r2.d = p->f20;
    r1.b = 0;
    r1.a = 0;
    r1.c = q->w;
    r1.d = q->h;
    fn_80128F98(q, &r1, o.f44, p->f24, &r2);
    fn_80128F54(q);
    if (p->f1348 == 0) delete[] buf;
    dtor_8013D5C8(&o, -1);
}
}
extern "C" {

} /* extern "C" */
