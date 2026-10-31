// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct O12 { u8 pad[12]; u32 f12; };
struct C80215F50 { u8 pad[36]; void *f36; O12 *f40; R *f44; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct S { u8 d[20]; };
struct C80187498 { u8 d[28]; C80187498(); ~C80187498(); };
struct C8019E778 { u8 d[28]; C8019E778(); ~C8019E778(); };
struct C80215B8C { u8 d[52]; C80215B8C(); ~C80215B8C(); };
struct C80195170 { u8 d[240]; C80195170(); ~C80195170(); };
struct C8018ED98 { u8 d[68]; C8018ED98(); ~C8018ED98(); };
struct C8019CF04 { u8 d[96]; C8019CF04(); ~C8019CF04(); };
struct C8017D12C { u8 d[44]; C8017D12C(); ~C8017D12C(); };
struct C801829F8 { u8 d[120]; C801829F8(); ~C801829F8(); };
struct C801850AC { u8 d[28]; C801850AC(); ~C801850AC(); };
struct C8018AE9C { u8 d[28]; C8018AE9C(); ~C8018AE9C(); };
struct C8017ED58 { u8 d[28]; C8017ED58(); ~C8017ED58(); };
struct T {
    u32 f0;
    C80195170 *a4;
    C8018ED98 *a8;
    C801850AC *a12;
    C8018AE9C *a16;
    C8019CF04 *a20;
    C8017D12C *a24;
    C8017ED58 *a28;
    C80215B8C *a32;
    C80187498 *a36;
    C8019E778 *a40;
    C801829F8 *a44;
    S f48;
    S f68;
    u16 n88;
    u16 n90;
    u16 n92;
    u16 n94;
    u16 n96;
    u16 n98;
    u16 n100;
    u16 n102;
    u16 n104;
    u16 n106;
    u16 n108;
    char **f112;
    virtual void w0(); virtual void clr();
};
extern char **lbl_8035ADE4, **lbl_8035ADE8, **lbl_8035ADEC, **lbl_8035ADF0, **lbl_8035ADF4, **lbl_8035ADF8, **lbl_8035ADFC, **lbl_8035AE00, **lbl_8035AE04, **lbl_8035AE08;
extern char lbl_802E87C0[];
extern char lbl_803648D0[4];
extern char lbl_803648D4[4];
extern void *lbl_8035ADE0;
extern void *lbl_8035A9F4;
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80207A54(void *, u32);
void fn_802079F0(void *, int);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FB0F8(R *, char **);
void fn_80215BFC(C80215F50 *);
void fn_800F8E38(S *, u32);
void fn_80181088(T *, void *, u32);
void fn_8017F5D4(void *, S *);
void *memset(void *, int, unsigned long);
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
void fn_8018182C(T *t, void *a, char *b, u32 d) {
    C80215F50 ld;
    void *g;
    R *r;
    u32 i;
    u32 tok;
    int e;
    if (t->f0) t->clr();
    if ((e = fn_80215C84(&ld, b, lbl_803648D0, 2, 0)) != 0) fn_80060E30(e, lbl_803648D4, b, lbl_803648D0);
    t->f0 = (u32)a;
    g = ld.f36;
    fn_80207A54(g, ld.f40->f12);
    r = ld.f44;
    r->s2(lbl_802E87C0, 11, 0);
    while ((tok = r->next()) != 0) {
        switch (tok) {
        case 66:
            if (t->n104) r->err(39);
            t->n104 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a36, new C80187498[t->n104])
            ALLOC(lbl_8035A9F4, lbl_8035AE04, new char *[t->n104])
            memset(lbl_8035AE04, 0, t->n104 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n104; i++) fn_800FB0F8(r, &lbl_8035AE04[i]);
            fn_800F7E98();
            break;
        case 67:
            if (t->n106) r->err(39);
            t->n106 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a40, new C8019E778[t->n106])
            ALLOC(lbl_8035A9F4, lbl_8035AE08, new char *[t->n106])
            memset(lbl_8035AE08, 0, t->n106 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n106; i++) fn_800FB0F8(r, &lbl_8035AE08[i]);
            fn_800F7E98();
            break;
        case 65:
            if (t->n102) r->err(39);
            t->n102 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a32, new C80215B8C[t->n102])
            ALLOC(lbl_8035A9F4, lbl_8035AE00, new char *[t->n102])
            memset(lbl_8035AE00, 0, t->n102 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n102; i++) fn_800FB0F8(r, &lbl_8035AE00[i]);
            fn_800F7E98();
            break;
        case 57:
            if (t->n88) r->err(39);
            t->n88 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a4, new C80195170[t->n88])
            fn_800F8E38(&t->f48, t->n88);
            ALLOC(lbl_8035A9F4, lbl_8035ADE4, new char *[t->n88])
            memset(lbl_8035ADE4, 0, t->n88 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n88; i++) fn_800FB0F8(r, &lbl_8035ADE4[i]);
            fn_800F7E98();
            break;
        case 58:
            if (t->n90) r->err(39);
            t->n90 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a8, new C8018ED98[t->n90])
            ALLOC(lbl_8035A9F4, lbl_8035ADE8, new char *[t->n90])
            memset(lbl_8035ADE8, 0, t->n90 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n90; i++) fn_800FB0F8(r, &lbl_8035ADE8[i]);
            fn_800F7E98();
            break;
        case 59:
            if (t->n98) r->err(39);
            t->n98 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a20, new C8019CF04[t->n98])
            fn_800F8E38(&t->f68, t->n98);
            fn_8017F5D4((void *)t->f0, &t->f68);
            ALLOC(lbl_8035A9F4, lbl_8035ADF8, new char *[t->n98])
            memset(lbl_8035ADF8, 0, t->n98 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n98; i++) fn_800FB0F8(r, &lbl_8035ADF8[i]);
            fn_800F7E98();
            break;
        case 60:
            if (t->n100) r->err(39);
            t->n100 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a24, new C8017D12C[t->n100])
            ALLOC(lbl_8035A9F4, lbl_8035ADFC, new char *[t->n100])
            memset(lbl_8035ADFC, 0, t->n100 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n100; i++) fn_800FB0F8(r, &lbl_8035ADFC[i]);
            fn_800F7E98();
            break;
        case 61:
            if (t->n108) r->err(39);
            t->n108 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a44, new C801829F8[t->n108])
            ALLOC(lbl_8035A9F4, t->f112, new char *[t->n108])
            memset(t->f112, 0, t->n108 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n108; i++) fn_800FB0F8(r, &t->f112[i]);
            fn_800F7E98();
            break;
        case 62:
            if (t->n92) r->err(39);
            t->n92 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a12, new C801850AC[t->n92])
            ALLOC(lbl_8035A9F4, lbl_8035ADEC, new char *[t->n92])
            memset(lbl_8035ADEC, 0, t->n92 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n92; i++) fn_800FB0F8(r, &lbl_8035ADEC[i]);
            fn_800F7E98();
            break;
        case 63:
            if (t->n94) r->err(39);
            t->n94 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a16, new C8018AE9C[t->n94])
            ALLOC(lbl_8035A9F4, lbl_8035ADF0, new char *[t->n94])
            memset(lbl_8035ADF0, 0, t->n94 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n94; i++) fn_800FB0F8(r, &lbl_8035ADF0[i]);
            fn_800F7E98();
            break;
        case 64:
            if (t->n96) r->err(39);
            t->n96 = fn_800FADA8(r);
            ALLOC(lbl_8035ADE0, t->a28, new C8017ED58[t->n96])
            ALLOC(lbl_8035A9F4, lbl_8035ADF4, new char *[t->n96])
            memset(lbl_8035ADF4, 0, t->n96 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n96; i++) fn_800FB0F8(r, &lbl_8035ADF4[i]);
            fn_800F7E98();
            break;
        default:
            r->err(30);
            break;
        }
        fn_800FAEA0(r);
    }
    fn_80215BFC(&ld);
    fn_80181088(t, a, d);
    fn_802079F0(g, 0);
    if (t->f112) { fa(t->f112, t->n108); t->f112 = 0; }
}

} /* extern "C" */
