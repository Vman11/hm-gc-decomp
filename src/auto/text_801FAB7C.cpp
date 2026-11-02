// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct O12 { u8 pad[12]; u32 f12; };
struct C80215F50 { u8 pad[36]; void *f36; O12 *f40; R *f44; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct T {
    u32 f0, f4, f8, f12, f16;
    char name[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void *v6(u32); virtual void *v7(u32); virtual void *v8(u32); virtual void *v9(u32);
};
extern char lbl_80365578[4];
extern char lbl_8036557C[4];
extern char lbl_802EF150[];
extern void *lbl_8035A9F4;
extern void *lbl_8035B118;
extern char **lbl_8035B11C;
extern char **lbl_8035B120;
extern char **lbl_8035B124;
extern char **lbl_8035B128;
void *fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_800E8F6C(char *, ...);
void fn_80060E30(void *, char *, ...);
void fn_80207A54(void *, u32);
void fn_802079F0(void *, int);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FB0F8(R *, char **);
void fn_80215BFC(C80215F50 *);
void fn_801FD748(void *, u32, char *, u32);
void fn_801FCFF0(void *, u32, char *, u32);
void fn_801FC2AC(void *, u32, char *, u32);
void fn_801FAB7C(T *, u32, char *, u32);
void *memset(void *, int, unsigned long);
unsigned long strlen(const char *);
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
static inline void post(T *t, u32 a, u32 c) {
    u32 i;
    for (i = 0; i < t->f4; i++) fn_801FD748(t->v6(i), a, lbl_8035B11C[i], c);
    for (i = 0; i < t->f8; i++) fn_801FCFF0(t->v7(i), a, lbl_8035B120[i], c);
    for (i = 0; i < t->f12; i++) fn_801FC2AC(t->v8(i), a, lbl_8035B124[i], c);
    for (i = 0; i < t->f16; i++) fn_801FAB7C((T *)t->v9(i), a, lbl_8035B128[i], c);
}
void fn_801FAB7C(T *t, u32 a, char *b, u32 c) {
    C80215F50 ld;
    char buf[128];
    void *e;
    void *g;
    R *r;
    u32 i;
    u32 j;
    char *s;
    u32 tok;
    if (t->f0) t->v5();
    e = fn_80215C84(&ld, b, lbl_80365578, 2, 0);
    if (e) {
        fn_800E8F6C(buf, lbl_8036557C, b, lbl_80365578);
        fn_80060E30(e, buf);
    }
    t->f0 = a;
    g = ld.f36;
    fn_80207A54(g, ld.f40->f12);
    r = ld.f44;
    r->s2(lbl_802EF150, 4, 0);
    while ((tok = r->v5()) != 0) {
        switch (tok) {
        case 57:
            if (t->f4) r->v4(39);
            t->f4 = fn_800FADA8(r);
            t->v0();
            ALLOC(lbl_8035A9F4, lbl_8035B11C, new char *[t->f4])
            memset(lbl_8035B11C, 0, t->f4 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->f4; i++) {
                s = 0;
                fn_800FB0F8(r, &s);
                ALLOC(lbl_8035B118, lbl_8035B11C[i], new char[strlen(s) + strlen(t->name)])
                fn_800E8F6C(lbl_8035B11C[i], s, t->name);
                delete[] s;
            }
            fn_800F7E98();
            break;
        case 58:
            if (t->f8) r->v4(39);
            t->f8 = fn_800FADA8(r);
            t->v1();
            ALLOC(lbl_8035A9F4, lbl_8035B120, new char *[t->f8])
            memset(lbl_8035B120, 0, t->f8 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->f8; i++) {
                s = 0;
                fn_800FB0F8(r, &s);
                ALLOC(lbl_8035B118, lbl_8035B120[i], new char[strlen(s) + strlen(t->name)])
                fn_800E8F6C(lbl_8035B120[i], s, t->name);
                delete[] s;
            }
            fn_800F7E98();
            break;
        case 59:
            if (t->f12) r->v4(39);
            t->f12 = fn_800FADA8(r);
            t->v2();
            ALLOC(lbl_8035A9F4, lbl_8035B124, new char *[t->f12])
            memset(lbl_8035B124, 0, t->f12 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->f12; i++) {
                s = 0;
                fn_800FB0F8(r, &s);
                ALLOC(lbl_8035B118, lbl_8035B124[i], new char[strlen(s) + strlen(t->name)])
                fn_800E8F6C(lbl_8035B124[i], s, t->name);
                delete[] s;
            }
            fn_800F7E98();
            break;
        case 60:
            if (t->f16) r->v4(39);
            t->f16 = fn_800FADA8(r);
            t->v3();
            ALLOC(lbl_8035A9F4, lbl_8035B128, new char *[t->f16])
            memset(lbl_8035B128, 0, t->f16 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->f16; i++) {
                s = 0;
                fn_800FB0F8(r, &s);
                ALLOC(lbl_8035B118, lbl_8035B128[i], new char[strlen(s) + strlen(t->name)])
                fn_800E8F6C(lbl_8035B128[i], s, t->name);
                delete[] s;
            }
            fn_800F7E98();
            break;
        default:
            r->v4(30);
            break;
        }
        fn_800FAEA0(r);
    }
    fn_80215BFC(&ld);
    post(t, a, c);
    fn_802079F0(g, 0);
    if (lbl_8035B128) { fa(lbl_8035B128, t->f16); lbl_8035B128 = 0; }
    if (lbl_8035B124) { fa(lbl_8035B124, t->f12); lbl_8035B124 = 0; }
    if (lbl_8035B120) { fa(lbl_8035B120, t->f8); lbl_8035B120 = 0; }
    if (lbl_8035B11C) { fa(lbl_8035B11C, t->f4); lbl_8035B11C = 0; }
}

} /* extern "C" */
