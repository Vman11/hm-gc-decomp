// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8002D080: big init (name lookups, registrations). NonMatching draft, see hm-work/wFC.
#define F(T, p, off) (*(T *)((u8 *)(p) + (off)))
struct VT { virtual void d0(); virtual void vc(); };
struct V6c { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void *v6c(); };
struct V58 { u8 pad[0x80]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void v58(int); };
struct V1c { u8 pad[0x8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual s32 *v1c(int); };
struct V20 { u8 pad[0x8]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void v20(void *, int, int); };
struct V64 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual u8 *v64(u32); };
struct Vd0 { virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47(); virtual void d48(); virtual void d49(); virtual void vd0(void *, int); };
struct B8 { u32 a, b; };
struct K { u8 pad[0xc0]; virtual void d0(); virtual void d1(); virtual void d2(); virtual void get(B8 *, int); };
extern "C" {
extern f32 lbl_8035BA28, lbl_8035BA2C, lbl_8035B9D8, lbl_8035BA30, lbl_8035B99C, lbl_8035B97C, lbl_8035BA34, lbl_8035BA38, lbl_8035BA54, lbl_8035BA58, lbl_8035BB9C, lbl_8035BBA0;
extern char lbl_8035B8A0[4], lbl_8035B8A8[4], lbl_8035B8B0[4], lbl_8035B8B8[4], lbl_8035B8C0[4], lbl_8035B8C8[4], lbl_8035B8D0[4], lbl_8035B8D8[4], lbl_8035B8E0[4], lbl_8035B8E8[4], lbl_8035B8F0[4], lbl_8035B8F8[4], lbl_8035B900[4], lbl_8035B908[4], lbl_8035B910[4], lbl_8035B918[4], lbl_8035B920[4], lbl_8035B928[4], lbl_8035B930[4], lbl_8035B938[4], lbl_8035B940[4], lbl_8035B948[4], lbl_8035B950[4], lbl_8035B958[4], lbl_8035B970[4], lbl_8035B988[4], lbl_8035BA24[4], lbl_8035BA3C[4], lbl_8035BA44[4], lbl_8035BA4C[4], lbl_8035BA5C[4], lbl_8035BA64[4], lbl_8035BA6C[4], lbl_8035BA74[4], lbl_8035BA7C[4], lbl_8035BA84[4], lbl_8035BA8C[4], lbl_8035BA94[4], lbl_8035BA9C[4], lbl_8035BAA4[4], lbl_8035BAAC[4], lbl_8035BAB4[4], lbl_8035BABC[4], lbl_8035BAC4[4], lbl_8035BACC[4], lbl_8035BAD4[4], lbl_8035BADC[4], lbl_8035BAE4[4], lbl_8035BAEC[4], lbl_8035BAF0[4], lbl_8035BAF8[4], lbl_8035BB00[4], lbl_8035BB08[4], lbl_8035BB10[4], lbl_8035BB18[4], lbl_8035BB20[4], lbl_8035BB28[4], lbl_8035BB30[4], lbl_8035BB38[4], lbl_8035BB40[4], lbl_8035BB48[4], lbl_8035BB50[4], lbl_8035BB58[4], lbl_8035BB60[4], lbl_8035BB64[4], lbl_8035BB6C[4], lbl_8035BB74[4], lbl_8035BB7C[4], lbl_8035BB84[4], lbl_8035BB8C[4], lbl_8035BB94[4], lbl_8035BBA4[4], lbl_8035BBAC[4], lbl_8035BBB4[4], lbl_8035BBBC[4], lbl_8035BBC4[4], lbl_8035BBCC[4], lbl_8035BBD4[4], lbl_8035BBD8[4], lbl_8035BBE0[4], lbl_8035BBE8[4], lbl_8035BBF0[4];
}
struct V3 { f32 x, y, z; };
struct Q4 { f32 a, b, c, d; };
struct PM { u32 a, b, c; };
struct C801829F8 { u8 pad[0x78]; C801829F8(); };
struct C8026F260 { u8 pad[0x1c]; C8026F260(); };
struct Z { u8 pad[0x10]; void *f10; };
struct N { u32 f0; u8 pad4[0x2c]; Z *f30; };
struct FT { u8 pad[0x130]; void (*f130)(void *, V3 *); };
struct Ent { N *n; V3 v; u8 pad[8]; };
struct TE { u8 pad[0xc]; Ent e[6]; };
struct TA { u8 pad[0x200]; V58 *a[10]; };
struct E34 { u8 pad[0x30]; u32 f30; u8 pad34[0x34 - 0x34]; };
struct LNode { Vd0 *f0; u32 f4; LNode *f8; };
extern "C" {
extern char lbl_80294400[];
extern PM lbl_802AF7B8, lbl_802AF7C4;
extern FT lbl_803286D0;
extern u8 lbl_80357E78[], lbl_80357E84[];
extern void *lbl_80359F28;
extern s32 lbl_80359F30;
extern s8 lbl_80359F34;
extern void *lbl_8035A0A4;
extern u8 *lbl_8035A1DC;
extern u8 *lbl_8035B308;
extern u8 *lbl_8035B460;
extern void *lbl_8035B478;
extern u8 *lbl_8035B5E4;
extern u8 *lbl_8035B65C;
extern K *lbl_8035B684;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98();
N *fn_800F9398(void *, char *);
N *fn_800F9788(void *, char *, char *);
N *fn_8019565C(N *);
void fn_80216044(void *, char *);
void fn_80215FDC(void *);
void fn_8018182C(void *, void *, char *, int);
void *fn_80180E8C(void *, int);
void fn_80180BA8(void *, void *);
void fn_80129938(void *, void *);
void fn_8012962C(void *, f32, f32, f32, f32);
void fn_80129710(void *, V3 *, V3 *, V3 *);
void fn_801075B8(void *, Q4 *);
void fn_80107244(void *, V3 *);
void fn_800FFE84(Q4 *, void *, f32);
void fn_8010041C(Q4 *, Q4 *);
void fn_801079E8(void *, Q4 *, V3 *, int);
void fn_80190C98(N *);
void *fn_801AA9B4(void *, char *, int);
void *fn_801AA960(void *, char *, char *);
V1c *fn_80248F64(char *, char *, char *);
void fn_8026F0F4(C8026F260 *, void *, void *, void *);
void fn_8023D504(void *);
void fn_801D6E5C(void *, void *, int, int);
V1c *fn_80207198(void *, char *, int);
void *fn_800F80DC(void *, char *, int);
void *fn_801104C0(void *, char *, void *, int);
V20 **fn_8010FEDC(void *, void *, char *, int);
s32 fn_8003CC3C(void *);
s32 fn_8003CDA4(void *);
s32 fn_8003C930(void *);
void fn_80253B24(void *, void *, PM *, char *);
}
#define HNEW(lv, T) \
    if (!lbl_80359F28) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_80359F28); \
    lv = new T; \
    fn_800F7E98(); \
    if (!lv) fn_800604C4(-4, 0, 0, 0);
static inline N *Look(u8 *w, char *grp, char *name) {
    if (!grp || !*grp) return fn_800F9398(w + 0x90, name);
    return fn_800F9788(w + 0xa8, grp, name);
}
static inline N *LookT(u8 *w, char *grp, char *name) {
    N *r = Look(w, grp, name);
    if (r) r = fn_8019565C(r);
    return r;
}
static inline N *Look2(u8 *w, char *grp, char *name) {
    if (!grp || !*grp) return fn_800F9398(w + 0xcc, name);
    return fn_800F9788(w + 0xe4, grp, name);
}
#define LT(off, g, n) F(N *, t, off) = LookT(F(u8 *, t, 0xac), g, n)
#define CLR(off) F(N *, t, off)->f0 &= ~0x800
#define FA(off, n) F(void *, t, off) = fn_801AA960(x, n, lbl_8035B988)
#define V58(off, a) F(V58 *, t, off)->v58(a)
#define V58C(off, a) if (F(V58 *, t, off)) F(V58 *, t, off)->v58(a)
#define REG(n) fn_801D6E5C(fn_801AA960(x, n, s + 0x18), (u8 *)t + 0xa4, 0, 1)

#pragma opt_common_subs off
#pragma opt_loop_invariants off
void fn_8002D080(VT *t, u8 *a, void *c) {
    char *s = lbl_80294400;
    V3 v74;
    V3 v68;
    V3 v5c;
    Q4 q4c;
    V3 v40;
    Q4 q30;
    B8 b10;
    s32 m1;
    s32 v8;
    void *x;
    int i;
    if (F(s32, t, 4)) t->vc();
    F(u32, t, 4) = 1;
    F(u8 *, t, 0xac) = a + 0x3040;
    F(u8 *, t, 0xb0) = a + 0x2c34;
    F(u32, t, 0xb8) = F(u32, F(u8 *, t, 0xac), 8);
    F(u32, t, 0xbc) = F(u32, F(u8 *, t, 0xb0), 0x18);
    fn_80216044(c, lbl_8035BA24);
    HNEW(F(C801829F8 *, t, 0xb4), C801829F8)
    fn_8018182C(F(void *, t, 0xb4), F(void *, t, 0xac), s + 0x4c, 1);
    F(void *, t, 0xc0) = fn_80180E8C(F(void *, t, 0xb4), 0);
    fn_80180BA8(F(void *, t, 0xb4), F(void *, t, 0xc0));
    fn_80215FDC(c);
    F(void *, t, 0xc4) = F(V6c *, F(u8 *, lbl_8035B65C, 4), 0x10)->v6c();
    fn_80129938(F(void *, t, 0xc4), F(void *, F(u8 *, lbl_8035B65C, 4), 0x18));
    fn_8012962C(F(void *, t, 0xc4), lbl_8035BA28, lbl_8035BA2C, lbl_8035B9D8, lbl_8035BA30);
    {
        f32 z = lbl_8035B99C;
        *(volatile f32 *)&v5c.x = z;
        *(volatile f32 *)&v5c.y = *(volatile f32 *)&lbl_8035B97C;
        *(volatile f32 *)&v5c.z = *(volatile f32 *)&lbl_8035BA34;
        *(volatile f32 *)&v74.x = z;
        *(volatile f32 *)&v74.y = z;
        *(volatile f32 *)&v74.z = z;
        *(volatile f32 *)&v74.z = *(volatile f32 *)&lbl_8035BA38;
        *(volatile f32 *)&v68.x = z;
        *(volatile f32 *)&v68.y = z;
        *(volatile f32 *)&v68.z = z;
    }
    fn_80129710(F(void *, t, 0xc4), &v74, &v68, &v5c);
    LT(0xe0, lbl_8035BA3C, lbl_8035BA3C);
    CLR(0xe0);
    LT(0x14c, lbl_8035BA3C, s + 0x68);
    LT(0x150, lbl_8035BA3C, s + 0x74);
    LT(0x154, lbl_8035BA3C, lbl_8035BA44);
    LT(0x158, lbl_8035BA3C, lbl_8035BA4C);
    LT(0x15c, lbl_8035BA3C, s + 0x80);
    LT(0x160, lbl_8035BA3C, s + 0x8c);
    CLR(0x14c);
    CLR(0x150);
    CLR(0x154);
    CLR(0x158);
    CLR(0x15c);
    CLR(0x160);
    LT(0xe4, lbl_8035BA3C, s + 0x98);
    LT(0xe8, lbl_8035BA3C, s + 0xa4);
    if (F(N *, t, 0xe4)->f30) fn_801075B8(F(N *, t, 0xe4)->f30, &q4c);
    if (F(N *, t, 0xe4)->f30) fn_80107244(F(N *, t, 0xe4)->f30, &v40);
    else {
        v40.x = lbl_8035B99C;
        v40.y = lbl_8035B99C;
        v40.z = lbl_8035B99C;
    }
    fn_800FFE84(&q30, lbl_80357E78, lbl_8035BA54);
    fn_8010041C(&q4c, &q30);
    fn_800FFE84(&q30, lbl_80357E84, lbl_8035BA58);
    fn_8010041C(&q4c, &q30);
    F(f32, t, 0xd0) = q4c.a;
    F(f32, t, 0xd4) = q4c.b;
    F(f32, t, 0xd8) = q4c.c;
    F(f32, t, 0xdc) = q4c.d;
    {
        N *n = F(N *, t, 0xe4);
        if (n->f30) {
            fn_801079E8(n->f30, &q4c, &v40, 0);
            fn_80190C98(n);
        }
    }
    LT(0xec, lbl_8035BA3C, s + 0xb0);
    LT(0xf0, lbl_8035BA3C, s + 0xbc);
    LT(0xf4, lbl_8035BA3C, s + 0xc8);
    LT(0xf8, lbl_8035BA3C, s + 0xd4);
    LT(0xfc, lbl_8035BA3C, lbl_8035BA5C);
    LT(0x100, lbl_8035BA3C, lbl_8035BA64);
    LT(0x104, lbl_8035BA3C, s + 0xe0);
    LT(0x108, lbl_8035BA3C, s + 0xec);
    LT(0x10c, lbl_8035BA3C, s + 0xf8);
    LT(0x110, lbl_8035BA3C, s + 0x104);
    LT(0x114, lbl_8035BA3C, lbl_8035BA6C);
    LT(0x118, lbl_8035BA3C, lbl_8035BA74);
    LT(0x11c, lbl_8035BA24, lbl_8035BA7C);
    LT(0x120, lbl_8035BA24, lbl_8035BA84);
    LT(0x124, lbl_8035BA24, lbl_8035BA8C);
    LT(0x128, lbl_8035BA24, lbl_8035BA94);
    LT(0x12c, lbl_8035BA24, lbl_8035BA9C);
    LT(0x130, lbl_8035BA24, lbl_8035BAA4);
    LT(0x134, lbl_8035BA24, lbl_8035BAAC);
    LT(0x138, lbl_8035BA24, lbl_8035BAB4);
    LT(0x13c, lbl_8035BA24, lbl_8035BABC);
    LT(0x140, lbl_8035BA24, lbl_8035BAC4);
    LT(0x144, lbl_8035BA24, lbl_8035BACC);
    LT(0x148, lbl_8035BA24, lbl_8035BAD4);
    LT(0xc, s + 0x110, lbl_8035BADC);
    LT(0x24, s + 0x110, lbl_8035BAE4);
    LT(0x3c, s + 0x110, lbl_8035BAEC);
    LT(0x54, s + 0x110, lbl_8035BAF0);
    LT(0x6c, s + 0x110, lbl_8035BAF8);
    LT(0x84, s + 0x110, lbl_8035BB00);
    {
        for (i = 0; i < 6; i++) {
            Ent *e = &((TE *)t)->e[i];
            if (e->n) {
                if (e->n->f30) lbl_803286D0.f130(e->n->f30->f10, &e->v);
                else {
                    e->v.x = lbl_8035B99C;
                    e->v.y = lbl_8035B99C;
                    e->v.z = lbl_8035B99C;
                }
            }
        }
    }
    x = F(void *, F(u8 *, lbl_8035B65C, 0x24), 0x33b0);
    F(void *, t, 0x17c) = fn_801AA9B4(x, lbl_8035BB08, 0);
    F(void *, t, 0x180) = fn_801AA9B4(x, lbl_8035BB10, 0);
    F(void *, t, 0x184) = fn_801AA9B4(x, lbl_8035BB18, 0);
    FA(0x188, lbl_8035BB08);
    FA(0x18c, s + 0x11c);
    FA(0x190, s + 0x128);
    FA(0x194, lbl_8035BB20);
    FA(0x198, lbl_8035BB28);
    FA(0x19c, s + 0x134);
    FA(0x1a0, s + 0x140);
    FA(0x1a4, s + 0x14c);
    V58(0x194, 0);
    V58(0x198, 0);
    V58(0x19c, 0);
    V58(0x1a0, 0);
    V58(0x1a4, 0);
    F(s32, t, 0x1a8) = (s32)(F(f32, F(u8 *, t, 0x198), 0x50) - F(f32, F(u8 *, t, 0x198), 0x48));
    FA(0x1cc, s + 0x158);
    FA(0x1d0, s + 0x164);
    FA(0x1d4, s + 0x170);
    FA(0x1dc, s + 0x17c);
    FA(0x1e0, s + 0x11c);
    FA(0x1e4, lbl_8035BB30);
    FA(0x1f0, lbl_8035BB38);
    FA(0x1f4, s + 0x188);
    V58(0x1f0, 0);
    V58(0x1f4, 0);
    FA(0x1b4, lbl_8035BB40);
    FA(0x1b8, s + 0x194);
    FA(0x1bc, s + 0x1a0);
    V58(0x1bc, 0);
    FA(0x1c8, s + 0x1ac);
    V58(0x1c8, 0);
    FA(0x1c0, s + 0x1b8);
    V58C(0x1c0, 0);
    FA(0x1c4, s + 0x1c4);
    V58C(0x1c4, 0);
    FA(0x1d8, s + 0x1d0);
    V58C(0x1d8, 1);
    FA(0x1e8, lbl_8035BB48);
    V58C(0x1e8, 0);
    FA(0x1ec, s + 0x1dc);
    V58C(0x1ec, 0);
    FA(0x200, s + 0x1e8);
    FA(0x204, s + 0x1f4);
    FA(0x208, s + 0x200);
    FA(0x20c, s + 0x20c);
    FA(0x210, s + 0x218);
    FA(0x214, s + 0x224);
    FA(0x218, s + 0x230);
    FA(0x21c, s + 0x23c);
    FA(0x220, s + 0x248);
    FA(0x224, s + 0x254);
    {
        for (i = 0; i < 10; i++)
            if (((TA *)t)->a[i]) ((TA *)t)->a[i]->v58(0);
    }
    FA(0x1f8, s + 0x260);
    F(void *, t, 0x1fc) = fn_801AA9B4(x, s + 0x260, 0);
    F(f32 *, t, 0x290) = (f32 *)(F(u8 *, t, 0x188) + 0x48);
    {
        f32 *q = F(f32 *, t, 0x290);
        F(f32, t, 0x294) = q[0];
        F(f32, t, 0x298) = q[1];
        F(f32, t, 0x29c) = q[2];
        F(f32, t, 0x2a0) = q[3];
    }
    F(u32, t, 0x28c) = 1;
    F(void *, t, 0x230) = fn_80248F64(lbl_8035B988, lbl_8035BA24, lbl_8035BB50);
    F(void *, t, 0x234) = fn_80248F64(lbl_8035B988, lbl_8035BA24, s + 0x26c);
    F(void *, t, 0x238) = fn_80248F64(lbl_8035B988, lbl_8035BA24, s + 0x278);
    F(void *, t, 0x244) = fn_80248F64(lbl_8035BB58, lbl_8035BB60, lbl_8035BB64);
    F(void *, t, 0x26c) = fn_80248F64(lbl_8035B988, lbl_8035BA24, lbl_8035BB6C)->v1c(0);
    F(void *, t, 0x270) = fn_80248F64(lbl_8035B988, lbl_8035BA24, s + 0x284)->v1c(0);
    F(void *, t, 0x24c) = fn_80248F64(lbl_8035B988, lbl_8035BA24, lbl_8035BB74)->v1c(0);
    F(void *, t, 0x274) = fn_80248F64(lbl_8035BB58, lbl_8035BA24, s + 0x290)->v1c(0);
    F(void *, t, 0x278) = fn_80248F64(lbl_8035BB58, lbl_8035BA24, s + 0x29c)->v1c(0);
    F(u32, t, 0x22c) = 3;
    HNEW(F(C8026F260 **, t, 0x228), C8026F260 *[F(u32, t, 0x22c)])
    HNEW(F(C8026F260 **, t, 0x228)[0], C8026F260)
    HNEW(F(C8026F260 **, t, 0x228)[1], C8026F260)
    HNEW(F(C8026F260 **, t, 0x228)[2], C8026F260)
    {
        void *y = F(void *, F(u8 *, lbl_8035B65C, 0x24), 0x33b0);
        fn_8026F0F4(F(C8026F260 **, t, 0x228)[0], fn_801AA960(y, s + 0x2a8, lbl_8035B958), fn_801AA960(y, lbl_8035BB7C, lbl_8035B958), fn_801AA960(y, lbl_8035B970, lbl_8035B958));
    }
    {
        void *y = F(void *, F(u8 *, lbl_8035B65C, 0x24), 0x33b0);
        fn_8026F0F4(F(C8026F260 **, t, 0x228)[1], fn_801AA960(y, s + 0x2b4, lbl_8035B958), fn_801AA960(y, lbl_8035BB84, lbl_8035B958), fn_801AA960(y, lbl_8035B970, lbl_8035B958));
    }
    {
        void *y = F(void *, F(u8 *, lbl_8035B65C, 0x24), 0x33b0);
        fn_8026F0F4(F(C8026F260 **, t, 0x228)[2], fn_801AA960(y, lbl_8035BB8C, lbl_8035B958), fn_801AA960(y, lbl_8035BB94, lbl_8035B958), fn_801AA960(y, lbl_8035B970, lbl_8035B958));
    }
    F(u32, F(u8 *, F(u8 *, lbl_8035B65C, 0x24), 0x33b0), 4) = 1;
    F(u32, t, 0xc8) = F(u32, lbl_8035B65C, 0x28);
    fn_8023D504((u8 *)t + 0x2b8);
    F(f32, t, 0x2d0) = lbl_8035BB9C;
    F(f32, t, 0x2c8) = lbl_8035BBA0;
    lbl_8035B684->get(&b10, -1);
    F(u32, t, 0x2e8) = F(u32, lbl_8035B308, 0x48);
    fn_801D6E5C(fn_801AA960(x, s + 0x2c0, s + 0x2cc), (u8 *)t + 0xa8, 1, 1);
    {
        V1c *r = fn_80207198(F(u8 *, lbl_8035B65C, 0x24) + 0x3e0, lbl_8035BBA4, 0);
        fn_801D6E5C(fn_801AA960(x, lbl_8035BBAC, s + 0x2d8), (u8 *)t + 0x9c, 1, 1);
        if (*r->v1c(0) == 1) {
            u8 *e = F(V64 *, lbl_8035B5E4, 0x18)->v64(F(u32, lbl_8035B5E4, 0x68));
            F(u32, e, 8) = 0;
            F(E34 *, lbl_8035B5E4, 0x70)[F(u32, lbl_8035B5E4, 0x68)].f30 = 1;
        } else {
            u8 *e = F(V64 *, lbl_8035B5E4, 0x18)->v64(F(u32, lbl_8035B5E4, 0x68));
            F(u32, e, 8) = 1;
            F(E34 *, lbl_8035B5E4, 0x70)[F(u32, lbl_8035B5E4, 0x68)].f30 = 0;
        }
    }
    REG(lbl_8035BBB4);
    REG(lbl_8035BBBC);
    REG(lbl_8035BBC4);
    REG(lbl_8035BBCC);
    REG(lbl_8035B8A8);
    REG(lbl_8035B8B0);
    REG(lbl_8035B8B8);
    REG(lbl_8035B8C0);
    REG(lbl_8035B8C8);
    REG(lbl_8035B8D0);
    REG(lbl_8035B8D8);
    REG(lbl_8035B8E0);
    REG(lbl_8035B8E8);
    REG(lbl_8035B8F0);
    REG(lbl_8035B8F8);
    REG(lbl_8035B900);
    REG(lbl_8035B908);
    REG(lbl_8035B910);
    REG(lbl_8035B918);
    REG(lbl_8035B920);
    REG(lbl_8035B928);
    REG(lbl_8035B930);
    REG(lbl_8035B938);
    REG(lbl_8035B940);
    REG(lbl_8035B948);
    REG(lbl_8035B950);
    *(volatile s32 *)&m1 = -1;
    {
        void *d = fn_800F80DC(*(void *volatile *)&lbl_8035B478, lbl_8035B988, 0);
        if (d) {
            u32 k = (u32)fn_801104C0(d, lbl_8035BA24, (u8 *)d + 8, 0);
            V20 **r = fn_8010FEDC(d, (void *)k, s + 0x2e4, 1);
            if (r) {
                F(V20 *, t, 0x23c) = *r;
                F(V20 *, t, 0x23c)->v20(&m1, 0, 1);
            }
            r = fn_8010FEDC(d, fn_801104C0(d, lbl_8035BA24, (u8 *)d + 8, 0), s + 0x2f0, 1);
            if (r) {
                F(V20 *, t, 0x240) = *r;
                F(V20 *, t, 0x240)->v20(&m1, 0, 1);
            }
        }
    }
    F(void *, t, 0x1ac) = fn_80248F64(lbl_8035BB58, lbl_8035BA24, s + 0x2fc);
    F(void *, t, 0x1b0) = fn_80248F64(lbl_8035BB58, lbl_8035BA24, s + 0x308);
    {
        void *g = lbl_8035A0A4;
        s32 k = fn_8003CC3C(g);
        F(s32, t, 0x248) = k - fn_8003CDA4(g);
    }
    F(V20 *, t, 0x240)->v20((u8 *)t + 0x248, 0, 1);
    v8 = fn_8003C930(lbl_8035A0A4);
    F(V20 *, t, 0x23c)->v20(&v8, 0, 1);
    F(N *, t, 0x2f8) = Look2(F(u8 *, lbl_8035B460, 8), lbl_8035BA3C, lbl_8035BBD4);
    F(N *, t, 0x2fc) = Look2(F(u8 *, lbl_8035B460, 8), lbl_8035BA3C, lbl_8035BBD8);
    F(N *, t, 0x300) = Look2(F(u8 *, lbl_8035B460, 8), lbl_8035BA3C, lbl_8035BBE0);
    if (!lbl_80359F34) {
        lbl_80359F30 = 0;
        lbl_80359F34 = 1;
    }
    if (!lbl_80359F30) {
        { u8 *n = F(u8 *, t, 0x2f8);
        F(f32, t, 0x304) = F(f32, n, 0x18);
        F(f32, t, 0x308) = F(f32, n, 0x1c);
        F(f32, t, 0x30c) = F(f32, n, 0x20);
        }
        { u8 *n = F(u8 *, t, 0x2fc);
        F(f32, t, 0x310) = F(f32, n, 0x18);
        F(f32, t, 0x314) = F(f32, n, 0x1c);
        F(f32, t, 0x318) = F(f32, n, 0x20);
        }
        { u8 *n = F(u8 *, t, 0x300);
        F(f32, t, 0x31c) = F(f32, n, 0x18);
        F(f32, t, 0x320) = F(f32, n, 0x1c);
        F(f32, t, 0x324) = F(f32, n, 0x20);
        }
        { u8 *n = F(u8 *, F(u8 *, t, 0x2f8), 0x10);
        F(f32, t, 0x328) = F(f32, n, 0x14);
        F(f32, t, 0x32c) = F(f32, n, 0x18);
        F(f32, t, 0x330) = F(f32, n, 0x1c);
        F(f32, t, 0x334) = F(f32, n, 0x20);
        }
        { u8 *n = F(u8 *, F(u8 *, t, 0x2fc), 0x10);
        F(f32, t, 0x338) = F(f32, n, 0x14);
        F(f32, t, 0x33c) = F(f32, n, 0x18);
        F(f32, t, 0x340) = F(f32, n, 0x1c);
        F(f32, t, 0x344) = F(f32, n, 0x20);
        }
        { u8 *n = F(u8 *, F(u8 *, t, 0x300), 0x10);
        F(f32, t, 0x348) = F(f32, n, 0x14);
        F(f32, t, 0x34c) = F(f32, n, 0x18);
        F(f32, t, 0x350) = F(f32, n, 0x1c);
        F(f32, t, 0x354) = F(f32, n, 0x20);
        }
        lbl_80359F30 = 1;
    }
    {
        volatile PM *q = &lbl_802AF7B8;
        volatile PM v;
        { s32 z, x0, y; x0 = q->a; y = q->b; z = q->c; v.a = x0; v.b = y; v.c = z; }
        fn_80253B24(*(u8 *volatile *)&lbl_8035B65C, t, (PM *)&v, lbl_8035BBE8);
    }
    {
        volatile PM *q = &lbl_802AF7C4;
        volatile PM v;
        { s32 z, x0, y; x0 = q->a; y = q->b; z = q->c; v.a = x0; v.b = y; v.c = z; }
        fn_80253B24(*(u8 *volatile *)&lbl_8035B65C, t, (PM *)&v, lbl_8035BBF0);
    }

    {
        u8 *o;
        a = (u8 *)fn_801AA960(F(void *, lbl_8035A1DC, 0x33b0), s + 0xc, lbl_8035B8A0);
        o = a;
        if (o) {
            LNode *p;
            for (p = F(LNode *, o, 0x88); p; p = p->f8) p->f0->vd0(o, 1);
            F(u32, o, 0x148) = F(u32, o, 0x144);
            F(u32, o, 0x144) = (F(u32, o, 0x144) & ~0xffff) | 1;
            F(u32, o, 0x6c) &= ~2;
        }
    }
}

} /* extern "C" */
