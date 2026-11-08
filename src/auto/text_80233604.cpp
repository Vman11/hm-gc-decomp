#include "common.h"

extern "C" {
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct H { u8 pad[144]; u8 f144[24]; u8 f168[4]; };
struct G { u8 pad[8]; H *f8; };
struct D { u8 pad[4]; u16 type; };
struct Y { virtual void y0(); virtual void y1(); virtual void y2(); virtual void y3(); virtual void y4(); virtual void y5(); virtual void y6(); virtual void y7(); virtual void y8(); virtual void y9(); virtual void y10(); virtual void y11(); virtual void y12(); virtual void y13(); virtual void y14(); virtual void y15(); virtual void y16(); virtual void y17(); virtual void y18(); virtual void y19(); virtual void y20(); virtual void y21(); virtual void y22(); virtual void y23(); virtual void y24(); virtual void y25(); virtual void y26(); virtual void y27(); virtual void y28(); virtual void y29(); virtual void y30(); virtual void y31(); virtual void y32(); virtual void y33(); virtual void y34(); virtual void y35(char (*)[8], char (*)[8], s32, int); };
struct C8023C7CC { u8 d[28]; C8023C7CC(); ~C8023C7CC(); };
struct C8018E150 { u8 d[168]; C8018E150(); ~C8018E150(); };
struct C801883E0 { u8 d[204]; C801883E0(); ~C801883E0(); };
struct C80192398 { u8 d[104]; virtual void z0(); virtual void z1(); virtual void z2(); virtual void z3(); virtual void z4(); virtual void z5(); virtual void z6(); virtual void z7(); virtual void z8(); virtual void z9(H *, D *); C80192398(); ~C80192398(); };
struct WX { u8 pad[8]; virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(); virtual void w4(); virtual void *w5(int); };
struct L { u8 pad[12]; void *f12; };
struct T {
    s32 f0;
    D **f4;
    u32 *f8;
    u32 n12;
    void *f16;
    C8023C7CC *f20;
};
extern void *lbl_8035B370;
extern void *lbl_8035B308;
extern G *lbl_8035B460;
extern L *lbl_8035B754;
extern char lbl_802A8840[];
void fn_800E1E88(void *, void *);
void __dt__9C8018E150Fv(void *, int);
void __dt__9C801883E0Fv(void *, int);
void __dt__9C80192398Fv(void *, int);
void fn_8023C754(C8023C7CC *);
void fn_8023C720(C8023C7CC *, void *);
u32 fn_800FADA8(R *);
s32 fn_800FB33C(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, char *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_8018DFAC(C8018E150 *, H *, D *);
void fn_80188144(C801883E0 *, H *, D *, C801883E0 *);
Y *fn_8022992C(void *, char *, char *, void *);
WX **fn_801104C0(void *, char *, int, int);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
static inline void destroy(T *t) {
    u32 i;
    for (i = 0; i < t->n12; i++) {
        D *o = t->f4[i];
        if (o) {
            if (o->type == 2) fn_800E1E88(o, (void *)__dt__9C8018E150Fv);
            else if (o->type == 3) fn_800E1E88(o, (void *)__dt__9C801883E0Fv);
            else fn_800E1E88(o, (void *)__dt__9C80192398Fv);
        }
    }
}
static inline void *Look(char *a, char *b) {
    H *h = lbl_8035B460->f8;
    if (b == 0 || *b == 0) return fn_800F9398(h->f144, a);
    return fn_800F9788(h->f168, b, a);
}

void fn_80233604(T *t, R *r) {
    char s112[10][8];
    char sb[10][8];
    char a[8];
    char b[8];
    char c[8];
    u32 i, j;
    s32 m;
    int flag;
    if (t->f0) {
        if (t->f4) {
            destroy(t);
            delete[] t->f4;
        }
        if (t->f20) {
            fn_8023C754(t->f20);
            delete t->f20;
        }
        if (t->f8) delete[] t->f8;
        t->f0 = 0;
        t->f4 = 0;
        t->n12 = 0;
        t->f20 = 0;
        t->f16 = 0;
        t->f8 = 0;
    }
    t->f0 = 1;
    ALLOC(lbl_8035B370, t->f20, new C8023C7CC)
    fn_8023C720(t->f20, lbl_8035B308);
    t->n12 = fn_800FADA8(r);
    ALLOC(lbl_8035B370, t->f4, new D *[t->n12])
    ALLOC(lbl_8035B370, t->f8, new u32[t->n12])
    for (i = 0; i < t->n12; i++) {
        void *d;
        fn_800FB064(r, a);
        fn_800FB064(r, b);
        fn_800FB064(r, c);
        t->f8[i] = fn_800FB33C(r);
        m = fn_800FB33C(r);
        for (j = 0; j < m; j++) {
            fn_800FB064(r, s112[j]);
            fn_800FB064(r, sb[j]);
        }
        flag = 0;
        if (fn_800FB33C(r) == 1) flag = 1;
        d = Look(a, b);
        if (d) {
            if (((D *)d)->type == 2) {
                D *q = (D *)d;
                C8018E150 *arr, *p;
                ALLOC(lbl_8035B370, arr, new C8018E150[t->f8[i]])
                t->f4[i] = (D *)arr;
                t->f4[i] = (D *)arr;
                p = arr;
                for (u32 jj = 0; jj < t->f8[i]; jj++) {
                    fn_8018DFAC(p, lbl_8035B460->f8, q);
                    fn_8022992C(lbl_8035B308, c, a, p)->y35(s112, sb, m, flag);
                    p++;
                }
            } else if (((D *)d)->type == 3) {
                D *q = (D *)d;
                C801883E0 *arr, *p;
                ALLOC(lbl_8035B370, arr, new C801883E0[t->f8[i]])
                t->f4[i] = (D *)arr;
                t->f4[i] = (D *)arr;
                p = arr;
                for (u32 jj = 0; jj < t->f8[i]; jj++) {
                    fn_80188144(p, lbl_8035B460->f8, q, 0);
                    fn_8022992C(lbl_8035B308, c, a, p)->y35(s112, sb, m, flag);
                    p++;
                }
            } else {
                ALLOC(lbl_8035B370, t->f4[i], (D *)new C80192398[t->f8[i]])
                for (j = 0; j < t->f8[i]; j++) {
                    ((C80192398 *)t->f4[i])[j].z9(lbl_8035B460->f8, (D *)d);
                    fn_8022992C(lbl_8035B308, c, a, &((C80192398 *)t->f4[i])[j])->y35(s112, sb, m, flag);
                }
            }
        } else {
            t->f4[i] = 0;
            t->f8[i] = 0;
        }
    }
    fn_800FAEA0(r);
    {
        WX **x = fn_801104C0(lbl_8035B754->f12, lbl_802A8840, 0, 0);
        if (x) t->f16 = (*x)->w5(0);
    }
}

}
