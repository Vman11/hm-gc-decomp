// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct O12 { u8 pad[12]; u32 f12; };
struct C80215F50 { u8 pad[36]; void *f36; O12 *f40; R *f44; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct C801AD610 { u8 d[120]; C801AD610(); };
struct C801A67A8 { u8 d[364]; C801A67A8(); };
struct C801CEA58 { u8 d[36]; C801CEA58(); };
struct C801C121C { u8 d[44]; C801C121C(); };
struct C80111028 { u8 d[496]; C80111028(); };
struct C8010C29C { u8 d[80]; C8010C29C(); };
struct C80215B8C { u8 d[52]; C80215B8C(); };
struct Y { virtual void y0(); virtual void y1(); virtual void y2(); virtual void y3(); virtual void y4(); virtual void y5(); virtual void y6(); virtual void y7(); virtual void y8(); virtual void y9(); virtual void y10(); virtual void y11(); virtual void y12(); virtual void y13(); virtual void y14(); virtual void y15(); virtual void y16(); virtual void y17(); virtual void y18(); virtual void y19(); virtual void y20(); virtual void y21(); virtual void y22(); virtual void y23(); virtual void y24(); virtual void y25(); virtual void y26(); virtual u32 y27(); };
struct X { u8 pad[48]; virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4(); virtual void x5(); virtual void x6(); virtual void x7(); virtual void x8(); virtual void x9(); virtual void x10(); virtual void x11(); virtual void x12(); virtual void x13(); virtual void x14(); virtual void x15(); virtual Y *x16(); };
struct X0 { u8 pad[16]; X *f16; };
struct T {
    X0 *f0;
    s32 f4;
    u32 f8;
    u32 f12;
    C801A67A8 **f16;
    C801CEA58 **f20;
    C801C121C **f24;
    C80215B8C ***f28;
    C80111028 **f32;
    C8010C29C **f36;
    C801AD610 **f40;
    u32 f44;
    u32 f48;
    u16 n52, n54, n56, n58, n60, n62, n64, n66;
    s32 f68;
    u16 n72;
    char **f76;
    u32 tbl[9];
};
extern char **lbl_8035AF1C, **lbl_8035AF20, **lbl_8035AF24, **lbl_8035AF2C, **lbl_8035AF30;
extern char ***lbl_8035AF28;
extern char *lbl_8035AF34;
extern void *lbl_8035AF38;
extern void *lbl_8035A9F4;
extern char lbl_802EAAC8[];
extern char lbl_80364EA8[4];
extern char lbl_80364EAC[4];
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80207A54(void *, u32);
void fn_802079F0(void *, int);
u32 fn_800FADA8(R *);
s32 fn_800FB33C(R *);
void fn_800FAEA0(R *);
void fn_800FAEF8(R *);
char *fn_800FB1F8(R *, int);
void fn_801ACEF8(T *, u32, char **);
void fn_801AD0A8(T *);
void fn_801AB15C(T *, u32);
void fn_80215BFC(C80215F50 *);
void *memset(void *, int, unsigned long);
char *strcpy(char *, const char *);
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
}
template <class C> static inline void mk(C **&a, u16 &n) {
    u32 i;
    for (i = 0; i < n; i++) {
        ALLOC(lbl_8035AF38, a[i], new C)
    }
}
extern "C" {
static inline void mk2(T *t, u32 k) {
    u32 i;
    for (i = 0; i < t->n72; i++) {
        ALLOC(lbl_8035AF38, t->f28[k][i], new C80215B8C)
    }
}
void fn_801AB928(T *t, X0 *a, char *nm, u32 c, u32 d, u32 e) {
    C80215F50 ld;
    char *buf;
    void *g;
    R *r;
    u32 i;
    s32 tok;
    s32 id;
    u32 k;
    int err;
    if (t->f4) fn_801AD0A8(t);
    t->f0 = a;
    t->f48 = c;
    if ((err = fn_80215C84(&ld, nm, lbl_80364EA8, 2, 0)) != 0) fn_80060E30(err, lbl_80364EAC, nm, lbl_80364EA8);
    g = ld.f36;
    fn_80207A54(g, ld.f40->f12);
    r = ld.f44;
    r->s2(lbl_802EAAC8, 9, 0);
    ALLOC(lbl_8035A9F4, buf, new char[255])
    k = 0;
    while ((tok = r->next()) != 0) {
        switch (tok) {
        case 65:
            if (t->f68 > 1) r->err(39);
            t->f68 = fn_800FB33C(r);
            ALLOC(lbl_8035A9F4, lbl_8035AF28, new char **[t->f68])
            k = 0;
            break;
        case 63:
            if (t->n64) r->err(39);
            t->n64 = fn_800FADA8(r);
            ALLOC(lbl_8035AF38, t->f40, new C801AD610 *[t->n64])
            mk(t->f40, t->n64);
            ALLOC(lbl_8035A9F4, t->f76, new char *[t->n64])
            memset(t->f76, 0, t->n64 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n64; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035AF38, t->f76[i], new char[strlen(buf) + 1])
                strcpy(t->f76[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 57:
            if (t->n52) r->err(39);
            t->n52 = fn_800FADA8(r);
            ALLOC(lbl_8035AF38, t->f16, new C801A67A8 *[t->n52])
            mk(t->f16, t->n52);
            ALLOC(lbl_8035A9F4, lbl_8035AF1C, new char *[t->n52])
            memset(lbl_8035AF1C, 0, t->n52 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n52; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035AF38, lbl_8035AF1C[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AF1C[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 58:
            if (t->n54) r->err(39);
            t->n54 = fn_800FADA8(r);
            ALLOC(lbl_8035AF38, t->f20, new C801CEA58 *[t->n54])
            mk(t->f20, t->n54);
            ALLOC(lbl_8035A9F4, lbl_8035AF24, new char *[t->n54])
            memset(lbl_8035AF24, 0, t->n54 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n54; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035AF38, lbl_8035AF24[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AF24[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 59:
            if (t->n56) r->err(39);
            t->n56 = fn_800FADA8(r);
            ALLOC(lbl_8035AF38, t->f24, new C801C121C *[t->n56])
            mk(t->f24, t->n56);
            ALLOC(lbl_8035A9F4, lbl_8035AF20, new char *[t->n56])
            memset(lbl_8035AF20, 0, t->n56 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n56; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035AF38, lbl_8035AF20[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AF20[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 60:
            if (t->f68 == 0) { t->f68 = 1; k = 0; }
            if (t->n72) fn_800FADA8(r);
            else t->n72 = fn_800FADA8(r);
            if (!t->f28) {
                ALLOC(lbl_8035AF38, t->f28, new C80215B8C **[t->f68])
            }
            ALLOC(lbl_8035AF38, t->f28[k], new C80215B8C *[t->n72])
            mk2(t, k);
            if (!lbl_8035AF28) {
                ALLOC(lbl_8035A9F4, lbl_8035AF28, new char **[t->f68])
            }
            ALLOC(lbl_8035A9F4, lbl_8035AF28[k], new char *[t->n72])
            memset(lbl_8035AF28[k], 0, t->n72 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n72; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035A9F4, lbl_8035AF28[k][i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AF28[k][i], buf);
            }
            k++;
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 61:
            if (t->n60) r->err(39);
            t->n60 = fn_800FADA8(r);
            ALLOC(lbl_8035AF38, t->f32, new C80111028 *[t->n60])
            mk(t->f32, t->n60);
            ALLOC(lbl_8035A9F4, lbl_8035AF30, new char *[t->n60])
            memset(lbl_8035AF30, 0, t->n60 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n60; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035AF38, lbl_8035AF30[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AF30[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 62:
            if (t->n62) r->err(39);
            t->n62 = fn_800FADA8(r);
            ALLOC(lbl_8035AF38, t->f36, new C8010C29C *[t->n62])
            mk(t->f36, t->n62);
            ALLOC(lbl_8035A9F4, lbl_8035AF2C, new char *[t->n62])
            memset(lbl_8035AF2C, 0, t->n62 * 4);
            id = tok - 57;
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n62; i++) {
                { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
                if (t->tbl[id]) fn_801ACEF8(t, tok, &buf);
                ALLOC(lbl_8035AF38, lbl_8035AF2C[i], new char[strlen(buf) + 1])
                strcpy(lbl_8035AF2C[i], buf);
            }
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        case 64:
            if (t->f12) r->err(0);
            t->f12 = t->f0->f16->x16()->y27();
            fn_800FAEF8(r);
            fn_800F7EC0(lbl_8035A9F4);
            { char *s = fn_800FB1F8(r, 256); strcpy(buf, s); }
            ALLOC(lbl_8035AF38, lbl_8035AF34, new char[strlen(buf) + 1])
            strcpy(lbl_8035AF34, buf);
            fn_800F7E98();
            fn_800FAEA0(r);
            break;
        default:
            r->err(30);
            break;
        }
    }
    fn_80215BFC(&ld);
    delete[] buf;
    if (e) t->f8 = e;
    fn_801AB15C(t, d);
    fn_802079F0(g, 0);
    t->f4 = 1;
}

} /* extern "C" */
