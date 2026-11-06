#include "common.h"
extern "C" {
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct H { u8 pad[144]; u8 f144[4]; };
struct G { u8 pad[8]; H *f8; };
struct D { u8 pad[4]; u16 type; u8 pad2[146]; u32 f152; void **f156; f32 *f160; };
struct Y { virtual void y0(); virtual void y1(); virtual void y2(); virtual void y3(); virtual void y4(); virtual void y5(); virtual void y6(); virtual void y7(); virtual void y8(); virtual void y9(); virtual void y10(); virtual void y11(); virtual void y12(); virtual void y13(); virtual void y14(); virtual void y15(); virtual void y16(); virtual void y17(); virtual void y18(); virtual void y19(); virtual void y20();
    u8 pad[136]; u8 f140[136]; u32 f276; };
struct C8023C7CC { u8 d[28]; C8023C7CC(); };
struct C8018E150 { u8 d[168]; C8018E150(); };
struct C801883E0 { u8 d[204]; C801883E0(); };
struct C8018CED0 { u8 d[168]; C8018CED0(); };
struct T {
    s32 f0;
    C8018E150 ***f4;
    C801883E0 ***f8;
    C8018CED0 ***f12;
    u32 c16[20];
    u32 c96[20];
    u32 c176[20];
    u32 n256;
    C8023C7CC *f260;
    Y ***f264;
};
extern void *lbl_8035B7F0;
extern void *lbl_8035B308;
extern G *lbl_8035B460;
void fn_80270320(T *);
void fn_8023C720(C8023C7CC *, void *);
u32 fn_800FADA8(R *);
s32 fn_800FB33C(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, char *);
void *fn_800F9398(void *, char *);
void fn_8018DFAC(C8018E150 *, H *, D *);
void fn_80188144(C801883E0 *, H *, void *, C801883E0 *);
void fn_8018CD74(C8018CED0 *, H *, D *);
void fn_8018C510(C8018CED0 *, C801883E0 *, f32);
Y *fn_8022992C(void *, char *, char *, void *);
void fn_800F6E88(u8 *, char *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
void fn_8026F768(T *t, R *r) {
    char a[8];
    char b[8];
    u32 i, j, k;
    s32 n;
    void *d;
    if (t->f0) fn_80270320(t);
    t->f0 = 1;
    ALLOC(lbl_8035B7F0, t->f260, new C8023C7CC)
    fn_8023C720(t->f260, lbl_8035B308);
    r->next();
    t->n256 = fn_800FADA8(r);
    ALLOC(lbl_8035B7F0, t->f4, new C8018E150 **[t->n256])
    ALLOC(lbl_8035B7F0, t->f8, new C801883E0 **[t->n256])
    ALLOC(lbl_8035B7F0, t->f12, new C8018CED0 **[t->n256])
    ALLOC(lbl_8035B7F0, t->f264, new Y **[t->n256])
    for (i = 0; i < t->n256; i++) {
        fn_800FB064(r, a);
        fn_800FB064(r, b);
        n = fn_800FB33C(r);
        d = fn_800F9398(lbl_8035B460->f8->f144, a);
        t->f4[i] = 0;
        t->f8[i] = 0;
        t->f12[i] = 0;
        switch (((D *)d)->type) {
        case 2: {
            u32 j2;
            D *q = (D *)d;
            t->c16[i] = n;
            ALLOC(lbl_8035B7F0, t->f4[i], new C8018E150 *[t->c16[i]])
            ALLOC(lbl_8035B7F0, t->f264[i], new Y *[t->c16[i]])
            t->c176[i] = 0;
            t->f12[i] = 0;
            for (j2 = 0; j2 < n; j2++) {
                ALLOC(lbl_8035B7F0, t->f4[i][j2], new C8018E150)
                fn_8018DFAC(t->f4[i][j2], lbl_8035B460->f8, q);
                t->f264[i][j2] = fn_8022992C(lbl_8035B308, b, a, t->f4[i][j2]);
                fn_800F6E88(t->f264[i][j2]->f140, a);
                t->f264[i][j2]->y18();
                t->f264[i][j2]->y20();
                t->f264[i][j2]->f276 = 1;
            }
            break;
        }
        case 3: {
            D *q = (D *)d;
            t->c96[i] = n;
            ALLOC(lbl_8035B7F0, t->f8[i], new C801883E0 *[t->c96[i]])
            ALLOC(lbl_8035B7F0, t->f264[i], new Y *[t->c96[i]])
            t->f12[i] = (C8018CED0 **)(t->c176[i] = j = 0);
            for (; j < n; j++) {
                ALLOC(lbl_8035B7F0, t->f8[i][j], new C801883E0)
                fn_80188144(t->f8[i][j], lbl_8035B460->f8, q, 0);
                t->f264[i][j] = fn_8022992C(lbl_8035B308, b, a, t->f8[i][j]);
                fn_800F6E88(t->f264[i][j]->f140, a);
                t->f264[i][j]->y18();
                t->f264[i][j]->y20();
                t->f264[i][j]->f276 = 1;
            }
            break;
        }
        case 13: {
            D *q = (D *)d;
            t->c176[i] = n;
            ALLOC(lbl_8035B7F0, t->f12[i], new C8018CED0 *[t->c176[i]])
            ALLOC(lbl_8035B7F0, t->f264[i], new Y *[t->c176[i]])
            t->c96[i] = n * q->f152;
            ALLOC(lbl_8035B7F0, t->f8[i], new C801883E0 *[t->c96[i]])
            for (j = 0; j < t->c176[i]; j++) {
                ALLOC(lbl_8035B7F0, t->f12[i][j], new C8018CED0)
                fn_8018CD74(t->f12[i][j], lbl_8035B460->f8, q);
                for (k = 0; k < q->f152; k++) {
                    void *e = q->f156[k];
                    ALLOC(lbl_8035B7F0, t->f8[i][j * q->f152 + k], new C801883E0)
                    if (k == 0) fn_80188144(t->f8[i][j * q->f152 + k], lbl_8035B460->f8, e, 0);
                    else fn_80188144(t->f8[i][j * q->f152 + k], lbl_8035B460->f8, e, t->f8[i][j * q->f152]);
                    if (t->f8[i][j * q->f152 + k]) fn_8018C510(t->f12[i][j], t->f8[i][j * q->f152 + k], q->f160[k]);
                }
                t->f264[i][j] = fn_8022992C(lbl_8035B308, b, a, t->f12[i][j]);
                t->f264[i][j]->y18();
                t->f264[i][j]->y20();
                t->f264[i][j]->f276 = 1;
            }
            break;
        }
        }
    }
    fn_800FAEA0(r);
}
}
