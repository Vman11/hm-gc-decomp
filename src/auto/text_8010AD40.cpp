#include "common.h"
extern "C" {
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct O12 { u8 pad[12]; u32 f12; };
struct C80215F50 { u8 pad[36]; void *f36; O12 *f40; R *f44; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct C80111028 { u8 pad[488]; s32 f488; virtual ~C80111028(); C80111028(); };
struct C8010C29C { u8 pad[16]; virtual ~C8010C29C(); virtual void v1(); u8 pad2[52]; s32 f72; u8 pad3[4]; C8010C29C(); };
struct T { s32 f0; u32 f4; C80111028 **f8; C8010C29C **f12; u16 f16; u16 f18; };
extern char lbl_80363948[4];
extern char lbl_8036394C[4];
extern char lbl_802E26C0[];
extern void *lbl_8035A9F4;
extern void *lbl_8035AAA8;
extern char **lbl_8035AAA4;
extern char **lbl_8035AAA0;
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80207A54(void *, u32);
void fn_802079F0(void *, int);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
char *fn_800FB1F8(R *, int);
void fn_80215BFC(C80215F50 *);
void fn_80110E5C(C80111028 *);
void fn_8010FD54(C80111028 *, u32, char *, u32, u8 *, u32);
void fn_8010BF74(C8010C29C *, u32, char *, u32, u8 *, int, int);
void *memset(void *, int, unsigned long);
unsigned long strlen(const char *);
char *strcpy(char *, const char *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
static inline void fa(char **a, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) if (a[i]) delete[] a[i];
    delete[] a;
}
static inline void k1(T *t) {
    u32 i;
    for (i = 0; i < t->f16; i++) {
        if (t->f8[i]) {
            if (t->f8[i]->f488) fn_80110E5C(t->f8[i]);
            delete t->f8[i];
            t->f8[i] = 0;
        }
    }
}
static inline void a57(T *t) {
    u32 i;
    for (i = 0; i < t->f16; i++) {
        ALLOC(lbl_8035AAA8, t->f8[i], new C80111028)
    }
}
static inline void k2(T *t, u32 &j) {
            for (j = 0; j < t->f18; j++) {
                if (t->f12[j]) {
                    if (t->f12[j]->f72) t->f12[j]->v1();
                    delete t->f12[j];
                    t->f12[j] = 0;
                }
            }
}
static inline void k3(T *t) {
    u32 j;
            for (j = 0; j < t->f18; j++) {
                if (t->f12[j]) {
                    if (t->f12[j]->f72) t->f12[j]->v1();
                    delete t->f12[j];
                    t->f12[j] = 0;
                }
            }
}
void fn_8010AD40(T *t, u32 a, char *b, u32 c, u32 d) {
    C80215F50 ld;
    u8 flag[8];
    u32 i;
    u32 j;
    void *g;
    R *r;
    char *buf;
    u32 tok;
    int e;
    if (t->f0) {
        if (t->f8) {
            k1(t);
            delete[] t->f8;
        }
        if (t->f12) {
            k3(t);
            delete[] t->f12;
        }
        t->f0 = 0;
        t->f8 = 0;
        t->f12 = 0;
        t->f16 = 0;
        t->f18 = 0;
        t->f4 = 0;
        lbl_8035AAA4 = 0;
        lbl_8035AAA0 = 0;
    }
    if ((e = fn_80215C84(&ld, b, lbl_80363948, 2, 0)) != 0) fn_80060E30(e, lbl_8036394C, b, lbl_80363948);
    g = ld.f36;
    fn_80207A54(g, ld.f40->f12);
    t->f4 = a;
    r = ld.f44;
    r->s2(lbl_802E26C0, 2, 0);
    ALLOC(lbl_8035A9F4, buf, new char[255])
    while ((tok = r->v5()) != 0) {
        switch (tok) {
        case 57:
            if (t->f16) r->v4(39);
            t->f16 = fn_800FADA8(r);
            ALLOC(lbl_8035AAA8, t->f8, new C80111028 *[t->f16])
            a57(t);
            ALLOC(lbl_8035A9F4, lbl_8035AAA4, new char *[t->f16])
            memset(lbl_8035AAA4, 0, t->f16 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->f16; i++) {
                char *s = fn_800FB1F8(r, 256);
                strcpy(buf, s);
                ALLOC(lbl_8035AAA8, lbl_8035AAA4[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AAA4[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 58:
            if (t->f18) r->v4(39);
            t->f18 = fn_800FADA8(r);
            ALLOC(lbl_8035AAA8, t->f12, new C8010C29C *[t->f18])
            for (i = 0; i < t->f18; i++) {
                ALLOC(lbl_8035AAA8, t->f12[i], new C8010C29C)
            }
            ALLOC(lbl_8035A9F4, lbl_8035AAA0, new char *[t->f18])
            memset(lbl_8035AAA0, 0, t->f18 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->f18; i++) {
                char *s = fn_800FB1F8(r, 256);
                strcpy(buf, s);
                ALLOC(lbl_8035AAA8, lbl_8035AAA0[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AAA0[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        default:
            r->v4(30);
            break;
        }
    }
    fn_80215BFC(&ld);
    delete[] buf;
    for (i = 0; i < t->f16; i++) {
        flag[0] = 0;
        fn_8010FD54(t->f8[i], t->f4, lbl_8035AAA4[i], c, flag, d);
    }
    for (i = 0; i < t->f18; i++) {
        flag[0] = 0;
        fn_8010BF74(t->f12[i], t->f4, lbl_8035AAA0[i], c, flag, 0, 1);
    }
    if (lbl_8035AAA4) { fa(lbl_8035AAA4, t->f16); lbl_8035AAA4 = 0; }
    if (lbl_8035AAA0) { fa(lbl_8035AAA0, t->f18); lbl_8035AAA0 = 0; }
    fn_802079F0(g, 0);
    t->f0 = 1;
}
}
