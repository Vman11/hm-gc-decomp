// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct O12 { u8 pad[12]; u32 f12; };
struct C80215F50 { u8 pad[36]; void *f36; O12 *f40; R *f44; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct S { u8 d[20]; };
struct V0 { virtual void q0(); virtual void q1(); virtual u32 q2(); };
struct A0 { u8 pad[56]; V0 *f56; };
struct C80105EE8 { u8 d[56]; C80105EE8(); ~C80105EE8(); };
struct C80106AB8 { u8 d[56]; C80106AB8(); ~C80106AB8(); };
struct C8010875C { u8 d[28]; C8010875C(); ~C8010875C(); };
struct C8013F098 { u8 d[28]; C8013F098(); ~C8013F098(); };
struct C8013E7A0 { u8 d[60]; C8013E7A0(); ~C8013E7A0(); };
struct C801408B4 { u8 d[76]; C801408B4(); ~C801408B4(); };
struct T {
    A0 *f0;
    C80105EE8 *a4;
    C80106AB8 *a8;
    C8010875C *a12;
    u32 *f16;
    C8013F098 *a20;
    C8013E7A0 *a24;
    C801408B4 *a28;
    u8 pad32[8];
    S f40;
    S f60;
    S f80;
    S f100;
    u16 n120;
    u16 n122;
    u16 n124;
    u16 n126;
    u16 n128;
    u16 n130;
    u16 n132;
    u16 n134;
    u16 n136;
    u16 n138;
    u16 n140;
    u16 n142;
    u8 pad144[2];
    u16 n146;
    u16 n148;
    u16 n150;
    u16 n152;
    u16 n154;
    char **f156;
    u8 pad160[4];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
};
extern char **lbl_8035AB80, **lbl_8035AB84, **lbl_8035AB88, **lbl_8035AB8C, **lbl_8035AB90, **lbl_8035AB94, **lbl_8035AB98, **lbl_8035AB9C, **lbl_8035ABA0, **lbl_8035ABA4, **lbl_8035ABA8, **lbl_8035ABAC, **lbl_8035ABB0, **lbl_8035ABB4, **lbl_8035ABB8, **lbl_8035ABBC;
void fn_80135D00(A0 *, S *);
void fn_80135D24(A0 *, S *);
void fn_80135D48(A0 *, S *);
void fn_80135D6C(A0 *, S *);
extern char lbl_802E4390[];
extern char lbl_80363E8C[4];
extern char lbl_80363E90[4];
extern void *lbl_8035ABC0;
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
void fn_8012A2E8(T *, void *, u32, u32);
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
static inline void ldD(T *t) { u32 i; for (i = 0; i < t->n136; i++) t->f16[i] = t->f0->f56->q2(); }
static inline void rds(R *r, char **&g, u16 &n) {
    u32 i;
    ALLOC(lbl_8035A9F4, g, new char *[n])
    memset(g, 0, n * 4);
    fn_800F7EC0(lbl_8035A9F4);
    for (i = 0; i < n; i++) fn_800FB0F8(r, &g[i]);
    fn_800F7E98();
}
void fn_8012ACAC(T *t, A0 *a, char *b, u32 c, u32 d) {
    C80215F50 ld;
    void *g;
    R *r;
    u32 i;
    u32 tok;
    int e;
    if (t->f0) t->v12();
    if ((e = fn_80215C84(&ld, b, lbl_80363E8C, 2, 0)) != 0) fn_80060E30(e, lbl_80363E90, b, lbl_80363E8C);
    t->f0 = a;
    g = ld.f36;
    fn_80207A54(g, ld.f40->f12);
    r = ld.f44;
    r->s2(lbl_802E4390, 17, 0);
    while ((tok = r->next()) != 0) {
        switch (tok) {
        case 57:
            if (t->n120) r->err(39);
            t->n120 = fn_800FADA8(r);
            t->v0();
            ALLOC(lbl_8035A9F4, lbl_8035AB80, new char *[t->n120])
            memset(lbl_8035AB80, 0, t->n120 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n120; i++) fn_800FB0F8(r, &lbl_8035AB80[i]);
            fn_800F7E98();
            break;
        case 58:
            if (t->n122) r->err(39);
            t->n122 = fn_800FADA8(r);
            t->v2();
            ALLOC(lbl_8035A9F4, lbl_8035AB88, new char *[t->n122])
            memset(lbl_8035AB88, 0, t->n122 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n122; i++) fn_800FB0F8(r, &lbl_8035AB88[i]);
            fn_800F7E98();
            break;
        case 59:
            if (t->n124) r->err(39);
            t->n124 = fn_800FADA8(r);
            t->v1();
            ALLOC(lbl_8035A9F4, lbl_8035AB84, new char *[t->n124])
            memset(lbl_8035AB84, 0, t->n124 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n124; i++) fn_800FB0F8(r, &lbl_8035AB84[i]);
            fn_800F7E98();
            break;
        case 60:
            if (t->n126) r->err(39);
            t->n126 = fn_800FADA8(r);
            t->v3();
            ALLOC(lbl_8035A9F4, lbl_8035AB8C, new char *[t->n126])
            memset(lbl_8035AB8C, 0, t->n126 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n126; i++) fn_800FB0F8(r, &lbl_8035AB8C[i]);
            fn_800F7E98();
            break;
        case 61:
            if (t->n128) r->err(39);
            t->n128 = fn_800FADA8(r);
            t->v4();
            ALLOC(lbl_8035A9F4, lbl_8035AB90, new char *[t->n128])
            memset(lbl_8035AB90, 0, t->n128 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n128; i++) fn_800FB0F8(r, &lbl_8035AB90[i]);
            fn_800F7E98();
            break;
        case 62:
            if (t->n130) r->err(39);
            t->n130 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->a4, new C80105EE8[t->n130])
            fn_800F8E38(&t->f40, t->n130);
            fn_80135D6C(t->f0, &t->f40);
            ALLOC(lbl_8035A9F4, lbl_8035AB94, new char *[t->n130])
            memset(lbl_8035AB94, 0, t->n130 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n130; i++) fn_800FB0F8(r, &lbl_8035AB94[i]);
            fn_800F7E98();
            break;
        case 63:
            if (t->n132) r->err(39);
            t->n132 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->a8, new C80106AB8[t->n132])
            fn_800F8E38(&t->f60, t->n132);
            fn_80135D48(t->f0, &t->f60);
            ALLOC(lbl_8035A9F4, lbl_8035AB98, new char *[t->n132])
            memset(lbl_8035AB98, 0, t->n132 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n132; i++) fn_800FB0F8(r, &lbl_8035AB98[i]);
            fn_800F7E98();
            break;
        case 64:
            if (t->n134) r->err(39);
            t->n134 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->a12, new C8010875C[t->n134])
            fn_800F8E38(&t->f80, t->n134);
            fn_80135D24(t->f0, &t->f80);
            ALLOC(lbl_8035A9F4, lbl_8035AB9C, new char *[t->n134])
            memset(lbl_8035AB9C, 0, t->n134 * 4);
            fn_800F7EC0(lbl_8035A9F4);
            for (i = 0; i < t->n134; i++) fn_800FB0F8(r, &lbl_8035AB9C[i]);
            fn_800F7E98();
            break;
        case 65:
            if (t->n136) r->err(39);
            t->n136 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->f16, new u32[t->n136])
            ldD(t);
            fn_800F8E38(&t->f100, t->n136);
            fn_80135D00(t->f0, &t->f100);
            rds(r, lbl_8035ABA0, t->n136);
            break;
        case 66:
            if (t->n138) r->err(39);
            t->n138 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->a20, new C8013F098[t->n138])
            rds(r, lbl_8035ABA4, t->n138);
            break;
        case 67:
            if (t->n140) r->err(39);
            t->n140 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->a24, new C8013E7A0[t->n140])
            rds(r, lbl_8035ABA8, t->n140);
            break;
        case 68:
            if (t->n142) r->err(39);
            t->n142 = fn_800FADA8(r);
            ALLOC(lbl_8035ABC0, t->a28, new C801408B4[t->n142])
            rds(r, lbl_8035ABAC, t->n142);
            break;
        case 69:
            if (t->n146) r->err(39);
            t->n146 = fn_800FADA8(r);
            t->v6();
            rds(r, lbl_8035ABB0, t->n146);
            break;
        case 70:
            if (t->n148) r->err(39);
            t->n148 = fn_800FADA8(r);
            t->v7();
            rds(r, lbl_8035ABB4, t->n148);
            break;
        case 71:
            if (t->n150) r->err(39);
            t->n150 = fn_800FADA8(r);
            t->v8();
            rds(r, lbl_8035ABB8, t->n150);
            break;
        case 72:
            if (t->n152) r->err(39);
            t->n152 = fn_800FADA8(r);
            t->v9();
            rds(r, lbl_8035ABBC, t->n152);
            break;
        case 73:
            if (t->n154) r->err(39);
            t->n154 = fn_800FADA8(r);
            t->v10();
            rds(r, t->f156, t->n154);
            break;
        default:
            r->err(30);
            break;
        }
        fn_800FAEA0(r);
    }
    fn_80215BFC(&ld);
    fn_8012A2E8(t, a, c, d);
    fn_802079F0(g, 0);
}

} /* extern "C" */
