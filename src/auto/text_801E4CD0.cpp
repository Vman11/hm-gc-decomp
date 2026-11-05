// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct O12 { u8 pad[12]; u32 f12; };
struct C80215F50 { u8 pad[36]; void *f36; O12 *f40; R *f44; u8 pad2[8]; C80215F50(); ~C80215F50(); };
struct A { u8 pad[184]; void *f184; };
struct C801E3708 { u8 d[28]; C801E3708(); ~C801E3708(); };
struct C801ECD58 { u8 d[144]; C801ECD58(); ~C801ECD58(); };
struct C801FA0D4 { u8 d[212]; C801FA0D4(); ~C801FA0D4(); };
struct C80109410 { u8 d[32]; C80109410(); ~C80109410(); };
struct C801E5944;
struct C801E5944 {
    u32 f0;
    C801E3708 *f4; C801ECD58 *f8; C801FA0D4 *f12; C80109410 *f16; C801E5944 *f20;
    u16 f24, f26, f28, f30, f32;
    virtual void v0(); virtual void v1();
    C801E5944(); ~C801E5944();
};
typedef C801E5944 T;
extern char lbl_80365300[4];
extern char lbl_80365304[4];
extern char lbl_802EDAA0[];
extern void *lbl_8035A9F4;
extern void *lbl_8035B088;
extern char **lbl_8035B08C;
extern char **lbl_8035B090;
extern char **lbl_8035B094;
extern char **lbl_8035B098;
extern char **lbl_8035B09C;
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80207A54(void *, u32);
void fn_802079F0(void *, int);
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FB0F8(R *, char **);
void fn_80215BFC(C80215F50 *);
void fn_8010917C(C80109410 *, void *, char *, u32);
void fn_801ECA20(C801ECD58 *, A *, char *, u32);
void fn_801F9EBC(C801FA0D4 *, A *, char *, u32);
void fn_801E35A0(C801E3708 *, A *, char *, u32);
void fn_801E4CD0(T *, A *, char *, u32);
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
#define CASE(N, F, P, C, G) \
        case N: \
            if (t->F) r->v4(39); \
            t->F = fn_800FADA8(r); \
            ALLOC(lbl_8035B088, t->P, new C[t->F]) \
            ALLOC(lbl_8035A9F4, G, new char *[t->F]) \
            memset(G, 0, t->F * 4); \
            fn_800F7EC0(lbl_8035A9F4); \
            for (i = 0; i < t->F; i++) fn_800FB0F8(r, &G[i]); \
            fn_800F7E98(); \
            break;
static inline void fa(char **a, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) if (a[i]) delete[] a[i];
    delete[] a;
}
static inline C801E3708 *gf4(T *t, u32 i) { return &t->f4[i]; }
static inline C801ECD58 *gf8(T *t, u32 i) { return &t->f8[i]; }
static inline C801FA0D4 *gf12(T *t, u32 i) { return &t->f12[i]; }
static inline C80109410 *gf16(T *t, u32 i) { return &t->f16[i]; }
static inline C801E5944 *gf20(T *t, u32 i) { return &t->f20[i]; }
static inline char *gs(char **l, u32 i) { return l[i]; }
static inline void post(T *t, A *a, u32 c) {
    u32 i;
    for (i = 0; i < t->f30; i++) fn_8010917C(gf16(t, i), a->f184, lbl_8035B098[i], c);
    for (i = 0; i < t->f26; i++) fn_801ECA20(gf8(t, i), a, lbl_8035B090[i], c);
    for (i = 0; i < t->f28; i++) fn_801F9EBC(gf12(t, i), a, lbl_8035B094[i], c);
    for (i = 0; i < t->f24; i++) fn_801E35A0(gf4(t, i), a, lbl_8035B08C[i], c);
    for (i = 0; i < t->f32; i++) fn_801E4CD0(gf20(t, i), a, lbl_8035B09C[i], c);
}
void fn_801E4CD0(T *t, A *a, char *b, u32 c) {
    C80215F50 ld;
    void *g;
    R *r;
    u32 i;
    u32 j;
    u32 tok;
    int e;
    if (t->f0) t->v1();
    if ((e = fn_80215C84(&ld, b, lbl_80365300, 2, 0)) != 0) fn_80060E30(e, lbl_80365304, b, lbl_80365300);
    t->f0 = (u32)a;
    g = ld.f36;
    fn_80207A54(g, ld.f40->f12);
    r = ld.f44;
    r->s2(lbl_802EDAA0, 5, 0);
    while ((tok = r->v5()) != 0) {
        switch (tok) {
        CASE(57, f24, f4, C801E3708, lbl_8035B08C)
        CASE(58, f26, f8, C801ECD58, lbl_8035B090)
        CASE(59, f28, f12, C801FA0D4, lbl_8035B094)
        CASE(60, f30, f16, C80109410, lbl_8035B098)
        CASE(61, f32, f20, C801E5944, lbl_8035B09C)
        default:
            r->v4(30);
            break;
        }
        fn_800FAEA0(r);
    }
    fn_80215BFC(&ld);
    post(t, a, c);
    fn_802079F0(g, 0);
    if (lbl_8035B09C && t->f32) { fa(lbl_8035B09C, t->f32); lbl_8035B09C = 0; }
    if (lbl_8035B08C) { fa(lbl_8035B08C, t->f24); lbl_8035B08C = 0; }
    if (lbl_8035B090) { fa(lbl_8035B090, t->f26); lbl_8035B090 = 0; }
    if (lbl_8035B094) { fa(lbl_8035B094, t->f28); lbl_8035B094 = 0; }
    if (lbl_8035B098) { fa(lbl_8035B098, t->f30); lbl_8035B098 = 0; }
}

} /* extern "C" */
