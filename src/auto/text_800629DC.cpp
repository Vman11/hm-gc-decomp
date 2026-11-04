// Code of main that had no source file yet: decomp.wtf gave it this one.
// fn_800629DC: app init (heap-allocated subsystems + descriptor structs). 1.3.2 + lmw;
// 2 instructions off (addi/stw swap at d6c), see hm-work/wER.
#include "common.h"

extern "C" {
} /* extern "C" */
struct VApp;
struct V2c34;
struct VQ54;
struct VP3c;
struct V2c4c;
struct V2c44;
struct V33dc;
struct V207;
struct V351c;
struct V33c8;
struct VA0A4;
struct V1c4;
struct V346c;
struct V18;
struct VApp {
    u8 pad[0x2a0];
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void v20();
};
struct V2c34 {
    u8 pad[0x30];
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void v18(void *, int, int, int, int, int, int);
};
struct VQ54 {
    u8 pad[0x30];
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void dv20();
    virtual void dv24();
    virtual void dv28();
    virtual void dv2c();
    virtual void dv30();
    virtual void dv34();
    virtual void dv38();
    virtual void dv3c();
    virtual void dv40();
    virtual void dv44();
    virtual void dv48();
    virtual void dv4c();
    virtual void dv50();
    virtual void * v54();
};
struct VP3c {
    VQ54 *f0;
};
struct V2c4c {
    u8 pad[0x30];
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void dv20();
    virtual void dv24();
    virtual void dv28();
    virtual void dv2c();
    virtual void dv30();
    virtual void dv34();
    virtual void dv38();
    virtual VP3c * v3c();
    virtual void dv40();
    virtual void dv44();
    virtual void dv48();
    virtual void dv4c();
    virtual void dv50();
    virtual void dv54();
    virtual void dv58();
    virtual u32 v5c();
    virtual u32 v60();
};
struct V2c44 {
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void dv20();
    virtual void dv24();
    virtual void dv28();
    virtual void dv2c();
    virtual void dv30();
    virtual void dv34();
    virtual void dv38();
    virtual void dv3c();
    virtual void dv40();
    virtual void dv44();
    virtual void dv48();
    virtual void dv4c();
    virtual void dv50();
    virtual void dv54();
    virtual void dv58();
    virtual void dv5c();
    virtual void dv60();
    virtual void dv64();
    virtual void dv68();
    virtual void * v6c();
    virtual void dv70();
    virtual struct V33c8 * v74();
};
struct V33dc {
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void * v1c(int, int);
};
struct V207 {
    u8 pad[0x8];
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void * v1c(int);
};
struct V351c {
    u8 pad[0xc0];
    virtual void dv8();
    virtual void vc(void *);
};
struct V33c8 {
    u8 pad[0xa4];
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void dv20();
    virtual void dv24();
    virtual void dv28();
    virtual void dv2c();
    virtual void dv30();
    virtual void dv34();
    virtual void v38();
};
struct VA0A4 {
    u8 pad[0x648];
    virtual void dv8();
    virtual void dvc();
    virtual void v10();
    virtual void v14();
};
struct V1c4 {
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void dv20();
    virtual void dv24();
    virtual void dv28();
    virtual void dv2c();
    virtual void dv30();
    virtual void dv34();
    virtual void v38();
};
struct V346c {
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void v1c(void *, int, void *);
    virtual void v20(int);
};
struct V18 {
    virtual void dv8();
    virtual void dvc();
    virtual void dv10();
    virtual void dv14();
    virtual void dv18();
    virtual void dv1c();
    virtual void dv20();
    virtual void dv24();
    virtual void dv28();
    virtual void dv2c();
    virtual void dv30();
    virtual void dv34();
    virtual void dv38();
    virtual void dv3c();
    virtual void dv40();
    virtual void dv44();
    virtual void dv48();
    virtual void dv4c();
    virtual void dv50();
    virtual void dv54();
    virtual void dv58();
    virtual void dv5c();
    virtual void dv60();
    virtual u32 * v64(u32);
};

struct C8023DC00 { u8 d[0x14]; C8023DC00(); };
struct C80255B54 { u8 d[0x8]; C80255B54(); };
struct C8022E70C { u8 d[0x1c]; C8022E70C(); };
struct C80244CC4 { u8 d[0x14]; C80244CC4(); };
struct C8024A388 { u8 d[0x4]; C8024A388(); };
struct C80250E34 { u8 d[0x8]; C80250E34(); };
struct C80252D60 { u8 d[0xc]; C80252D60(); };
struct C802539B4 { u8 d[0x4]; C802539B4(); };
struct C80030270 { u8 d[0x820]; C80030270(); };
struct C80262FA0 { u8 d[0x18]; C80262FA0(); };
struct C8026A4F4 { u8 d[0xc]; C8026A4F4(); };
struct C8026F640 { u8 d[0x14]; C8026F640(); };
struct C801AD710 { u8 d[0x78]; C801AD710(); ~C801AD710(); };
struct C801C3FD0 {
    u8 d[0x70];
    virtual void dv8();
    virtual void vc(void *, int);
    C801C3FD0();
    ~C801C3FD0();
};
extern "C" {
extern u8 lbl_802BD254[];
extern u8 lbl_802F21AC[];
extern u8 lbl_802AFC18[];
}
struct I0 { void *vt; I0() { vt = lbl_802BD254; } };
struct I1 : I0 { I1() { vt = lbl_802F21AC; } };
struct I2 : I1 { u32 f4; I2() { vt = lbl_802AFC18; f4 = 0; } };
extern "C" {
struct W12 { u8 d[12]; };
struct D8 { u32 x; void *volatile heap; };
struct D24 { u32 x; void *volatile app; void *volatile heap; void *volatile p; volatile u32 a, b; };
struct D12b { u32 x; void *volatile f; void *volatile heap; };
struct D16a { u32 x; void *volatile app; void *volatile heap; void *volatile f; };
struct D16b { u32 x; void *volatile heap; u32 y; void *volatile f; };
struct D20 { void *volatile app; u32 x; volatile u32 a, b, c, d, e; void *volatile heap; };
struct DA8 { void *p; u32 a, b; };
struct S14 { u8 d[0x14]; };
struct S24 { u8 d[0x24]; };
struct GG { u8 pad[0x18]; V18 *f18; u8 pad2[0x68 - 0x1c]; u32 f68; u8 pad3[0x80 - 0x6c]; W12 f80; void *f8c; };
struct G24 { u8 p[0x20]; u32 f20; void On() { f20 = 1; } };
extern char lbl_80297350[];
extern void *volatile lbl_8035A1D8;
extern u8 *lbl_8035A1DC;
extern int lbl_803592A0;
extern u8 lbl_80356DAC[];
extern W12 lbl_802BCEE0;
extern GG *lbl_8035B5E4;
extern void *lbl_8035A00C;
extern u32 lbl_80359200;
extern u32 lbl_80359B88;
extern u8 lbl_802AFC88[];
extern u8 lbl_802F21C0[];
extern VA0A4 *volatile lbl_8035A0A4;
extern u8 *lbl_8035B7E4;
extern u8 *lbl_8035B684;
extern void *lbl_8035B478;
extern const f32 lbl_8035E6A0, lbl_8035E6A4, lbl_8035E6A8, lbl_8035E6AC, lbl_8035E6D8, lbl_8035E6DC;
extern const char lbl_8035E5A8[5];
extern const char lbl_8035E5C0[5];
extern const char lbl_8035E5C8[8];
extern const char lbl_8035E620[6];
extern const char lbl_8035E628[8];
extern const char lbl_8035E630[6];
extern const char lbl_8035E638[6];
extern const char lbl_8035E640[7];
extern const char lbl_8035E650[7];
extern const char lbl_8035E6B0[4];
extern const char lbl_8035E6B4[8];
extern const char lbl_8035E6BC[7];
extern const char lbl_8035E6C4[8];
extern const char lbl_8035E6CC[3];
extern const char lbl_8035E6D0[5];
extern const char lbl_8035E6E0[8];
extern const char lbl_8035E6E8[7];
extern const char lbl_8035E6F0[8];
extern G24 lbl_80306F44;
extern G24 lbl_80302BFC;
extern G24 lbl_80302C2C;
extern G24 lbl_80302B9C;
extern G24 lbl_80302BCC;
extern G24 lbl_80302D1C;
extern G24 lbl_80302D7C;
extern G24 lbl_80302C5C;
extern G24 lbl_80302C8C;
extern G24 lbl_80302CBC;
extern G24 lbl_80302CEC;
extern G24 lbl_80302B0C;
extern G24 lbl_80302D4C;
extern G24 lbl_80306884;
extern G24 lbl_80302B3C;
extern G24 lbl_80302B6C;
extern G24 lbl_80306AC4;
extern G24 lbl_80306A94;
extern G24 lbl_80306AF4;
extern G24 lbl_80306B24;
extern G24 lbl_80302DAC;
extern G24 lbl_80306A04;
extern G24 lbl_80307264;
extern G24 lbl_803074D4;
extern G24 lbl_80307354;
extern G24 lbl_803070E4;
extern G24 lbl_80302ADC;
extern G24 lbl_803071A4;
extern G24 lbl_8030265C;
extern G24 lbl_8030268C;
extern G24 lbl_80306D64;
extern G24 lbl_80306D34;
extern G24 lbl_803026BC;
extern G24 lbl_80306E24;
extern G24 lbl_80306974;
extern G24 lbl_803072F4;
extern G24 lbl_80307234;
extern G24 lbl_80306D04;
extern G24 lbl_803073E4;
extern G24 lbl_803026EC;
extern G24 lbl_8030271C;
extern G24 lbl_803074A4;
extern G24 lbl_80307294;
extern G24 lbl_8030274C;
extern G24 lbl_80307474;
extern G24 lbl_8030277C;
extern G24 lbl_803027AC;
extern G24 lbl_803027DC;
extern G24 lbl_80307114;
extern G24 lbl_80307144;
extern G24 lbl_80306EE4;
extern G24 lbl_80306E84;
extern G24 lbl_8030280C;
extern G24 lbl_80306DF4;
extern G24 lbl_80306EB4;
extern G24 lbl_803068E4;
extern G24 lbl_80307444;
extern G24 lbl_8030283C;
extern G24 lbl_8030286C;
extern G24 lbl_80306C44;
extern G24 lbl_80307324;
extern G24 lbl_803073B4;
extern G24 lbl_80306E54;
extern G24 lbl_80307174;
extern G24 lbl_80306CA4;
extern G24 lbl_80306C74;
extern G24 lbl_80306FD4;
extern G24 lbl_80307084;
extern G24 lbl_80306CD4;
extern G24 lbl_80306D94;
extern G24 lbl_8030289C;
extern G24 lbl_803067A4;
extern G24 lbl_803028CC;
extern G24 lbl_80306944;
extern G24 lbl_80306BE4;
extern G24 lbl_80306B84;
extern G24 lbl_80306BB4;
extern G24 lbl_80306B54;
extern G24 lbl_803070B4;
extern G24 lbl_803069D4;
extern G24 lbl_803028FC;
extern G24 lbl_803069A4;
extern G24 lbl_8030292C;
extern G24 lbl_8030295C;
extern G24 lbl_8030298C;
extern G24 lbl_803029BC;
extern G24 lbl_803029EC;
extern G24 lbl_80307054;
extern G24 lbl_80306F74;
extern G24 lbl_80302A1C;
extern G24 lbl_80306A34;
extern G24 lbl_80306DC4;
extern G24 lbl_80307204;
extern G24 lbl_80306FA4;
extern G24 lbl_803068B4;
extern G24 lbl_80306A64;
extern G24 lbl_80302A4C;
extern G24 lbl_80307024;
extern G24 lbl_80302A7C;
extern G24 lbl_80306914;
extern G24 lbl_80302AAC;
extern G24 lbl_80306C14;
extern G24 lbl_80306F14;
extern G24 lbl_803071D4;
extern G24 lbl_80307384;
extern G24 lbl_80307414;
extern G24 lbl_803072C4;
extern G24 lbl_80306774;
extern G24 lbl_8030261C;
extern G24 lbl_80306844;

void fn_8014CB5C(S24 *);
void fn_80148310(S14 *);
void fn_801A3470(void *);
void fn_8011B250(void);
int fn_800FBB9C(void);
void srand(int);
void fn_80148288(S14 *, int, int, int, int, int, int);
void fn_8014CB00(S24 *, u32, u32, S14 *, int, int);
void fn_80219888(u8 *, void *, int, int);
void fn_80129938(void *, void *);
void fn_8012962C(void *, f32, f32, f32, f32);
void fn_80216194(void *, void *);
void *fn_80211298(void *, const char *, int);
void fn_80060BB4(void *);
void fn_8006088C(void *);
void fn_8003B3A8(void *);
void fn_8003ACF8(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8023D7F8(void *, void *);
void fn_80255ADC(void *, void *);
void fn_8022E16C(void *, void *);
void fn_80244A50(void *, void *);
void fn_8024A2EC(void *, void *);
void fn_80252B0C(void *, void *);
void fn_802515D0(GG *, const char *, const char *);
void fn_802514F0(GG *, const char *, const char *);
void fn_800391E4(void *, int);
void fn_800391A8(void *, int);
void fn_80251A44(GG *, u32, const char *, const char *, const char *, u8 *, u32);
void fn_802516A4(GG *, int);
void fn_80216044(void *, const char *);
void fn_8012ACAC(void *, void *, const char *, int, int);
void fn_80215FDC(void *);
void fn_8003C3CC(void *);
void fn_8003C0D8(void *, void *, void *, u32, u32, void *);
void fn_8003BC2C(void *);
void fn_8003E814(void *);
void fn_8003B06C(void *, void *, void *, u32, u32);
void fn_8003AF34(void *, int, int);
void fn_801AB928(void *, void *, const char *, void *, int, int);
void *fn_80207198(void *, const char *, int);
void fn_80253938(void *, void *);
void fn_802625FC(void *, void *);
void fn_8026A15C(void *, void *);
void fn_801C4044(void *);
void fn_8026F508(void *, void *);
u32 *fn_800F8274(GG *, const char *);
int fn_80253664(u32 *, int);
void fn_801AAFAC(void *, u32);
void fn_80250BA0(void *, void *);
void fn_8023E200(void *, void *);
void fn_8003C674(VA0A4 *, const char *, u32 **);
void fn_80039E40(void *);
void *fn_8021616C(void *);
void fn_80039A3C(void *, void *, void *, u32, u32);
void fn_8003A4BC(void *);
void fn_8003A118(void *, void *, void *, u32, u32);
void fn_8003A9A4(void *);
void fn_8003A600(void *, void *, void *, u32, u32);
void fn_80039680(void *);
void fn_80039330(void *, void *, void *, u32, u32);
void fn_8014C8C8(void *, int, int, int);
int fn_8003AEEC(void *);
void fn_8003AD38(void *, const char *, int, const char *, int);
void fn_8003B198(void *);

#define F(o, T) (*(T *)((u8 *)a + (o)))
#define S20(x) (*(u32 *)((x) + 0x20) = 1)
#define HNEW(off, T) \
    if (!lbl_8035A1D8) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035A1D8); \
    F(off, T *) = new T; \
    fn_800F7E98(); \
    if (!F(off, T *)) fn_800604C4(-4, 0, 0, 0);
static inline u32 Name(u32 *x) { u32 n = (u32)x; if (x) n = *x; return n; }
static inline u8 *Tbl() { return lbl_8035A1DC + 0x3040; }
static inline u32 *GetX(GG *g) { return g->f18->v64(g->f68); }
static inline f32 Val(u32 *x) { return (f32)fn_80253664(x, 0x4c); }

#pragma opt_common_subs off
#pragma opt_loop_invariants off
int fn_800629DC(VApp *a, GG *p1, u32 *p2) {
    char *s = lbl_80297350;
    S24 sc8;
    S14 sb4;
    D24 d9c;
    D20 d7c;
    D16a d6c;
    D12b d60;
    D16b d50;
    D12b d44;
    D16a d34;
    D8 d2c;
    D8 d24;
    D8 d1c;
    D8 d14;
    D8 d0c;
    fn_8014CB5C(&sc8);
    fn_80148310(&sb4);
    if (F(0x33ac, u32)) a->v20();
    F(0x33fc, GG *) = p1;
    F(0x3400, u32 *) = p2;
    fn_801A3470(a);
    fn_8011B250();
    srand(fn_800FBB9C());
    fn_8011B250();
    fn_8011B250();
    F(0x36cc, u32) = 640;
    F(0x36d0, u32) = 480;
    fn_8011B250();
    fn_80148288(&sb4, 0x18, 0, 0, 0, 0, 0);
    fn_8011B250();
    fn_8014CB00(&sc8, F(0x36cc, u32), F(0x36d0, u32), &sb4, 0, 0);
    fn_8011B250();
    fn_8011B250();
    ((V2c34 *)((u8 *)a + 0x2c34))->v18(&sc8, 5, 0, 0, 0, 0, 10);
    F(0x36cc, u32) = F(0x2c4c, V2c4c *)->v5c();
    F(0x36d0, u32) = F(0x2c4c, V2c4c *)->v60();
    fn_8011B250();
    fn_8011B250();
    fn_80219888(lbl_80356DAC, F(0x2c4c, V2c4c *), 10, 0xff);
    F(0x34f0, void *) = F(0x2c44, V2c44 *)->v6c();
    fn_80129938(F(0x34f0, void *), F(0x2c4c, V2c4c *));
    fn_8012962C(F(0x34f0, void *), lbl_8035E6A0, lbl_8035E6A4, lbl_8035E6A8, lbl_8035E6AC);
    if (lbl_803592A0) {
        F(0x33e4, void *) = F(0x33dc, V33dc *)->v1c(6, 0);
        F(0x33f4, void *) = F(0x33e4, void *);
        fn_80216194(F(0x33e0, void *), F(0x33e4, void *));
        F(0x33e8, void *) = fn_80211298(F(0x33dc, V33dc *), s + 0x384, 4);
        fn_80216194(F(0x33e0, void *), F(0x33e8, void *));
        F(0x33e4, void *) = F(0x33e8, void *);
    } else {
        F(0x33e4, void *) = F(0x33dc, V33dc *)->v1c(6, 0);
        fn_80216194(F(0x33e0, void *), F(0x33e4, void *));
    }
    fn_80060BB4(a);
    fn_8006088C(a);
    {
        void *heap = F(0x34e0, void *);
        d6c.heap = heap;
        d34.heap = heap;
        d2c.heap = heap;
        d24.heap = heap;
        d1c.heap = heap;
        d60.heap = heap;
        d9c.heap = heap;
        d14.heap = heap;
        d7c.heap = heap;
        d50.heap = heap;
        d44.heap = heap;
        d0c.heap = heap;
        lbl_8035A1D8 = heap;
    }
    fn_8003B3A8(F(0x34e0, void *));
    fn_8003ACF8(F(0x34e0, void *));
    d6c.app = a;
    d6c.f = lbl_8035A1DC + 0x3040;
    d34.app = a;
    d34.f = F(0x33e0, void *);
    d7c.app = a;
    d7c.a = F(0x369c, u32);
    d7c.b = F(0x36a0, u32);
    d7c.c = F(0x36a4, u32);
    d7c.d = F(0x36b0, u32);
    d7c.e = F(0x36bc, u32);
    d9c.app = a;
    d50.f = (u8 *)a + 0x3e0;
    HNEW(0x3668, I2)
    d9c.p = F(0x3668, void *);
    d9c.a = 10;
    d9c.b = 0x11;
    HNEW(0x3504, C8023DC00)
    HNEW(0x352c, C80255B54)
    HNEW(0x3500, C8022E70C)
    HNEW(0x3508, C80244CC4)
    HNEW(0x350c, C8024A388)
    HNEW(0x3510, C80250E34)
    HNEW(0x3514, C80252D60)
    HNEW(0x3518, C802539B4)
    HNEW(0x351c, C80030270)
    HNEW(0x3520, C80262FA0)
    HNEW(0x3524, C8026A4F4)
    HNEW(0x3528, C8026F640)
    fn_8023D7F8(F(0x3504, void *), &d6c);
    fn_80255ADC(F(0x352c, void *), &d34);
    fn_8022E16C(F(0x3500, void *), &d2c);
    fn_80244A50(F(0x3508, void *), &d24);
    fn_8024A2EC(F(0x350c, void *), &d1c);
    if (F(0x36c0, int)) *(u32 *)(F(0x33e4, u8 *) + 0x6b0) = 1;
    fn_80252B0C(F(0x3514, void *), &d9c);
    {
#define g p1
#define x p2
        g = lbl_8035B5E4;
        g->f80 = lbl_802BCEE0;
        g->f8c = a;
        fn_802515D0(g, lbl_8035E628, s + 0x268);
        F(0x366c, u32) = 1;
        fn_802514F0(g, s + 0x274, lbl_8035E650);
        x = GetX(g);
        fn_800391E4(lbl_8035A00C, 0);
        fn_800391A8(lbl_8035A00C, 0);
        fn_80251A44(g, Name(x), lbl_8035E5A8, lbl_8035E620, lbl_8035E628, lbl_802AFC88, lbl_80359200);
        fn_80251A44(g, Name(x), lbl_8035E5C0, lbl_8035E630, lbl_8035E628, lbl_802AFC88, lbl_80359200);
        fn_80251A44(g, Name(x), lbl_8035E638, lbl_8035E640, lbl_8035E628, lbl_802F21C0, lbl_80359B88);
        if (x) x = (u32 *)*x;
        fn_80251A44(g, (u32)x, lbl_8035E5C8, s + 0x25c, lbl_8035E628, lbl_802F21C0, lbl_80359B88);
#undef g
    }
    fn_802516A4(lbl_8035B5E4, 1);
    F(0x33c4, V33c8 *) = F(0x2c44, V2c44 *)->v74();
    fn_80216044(F(0x33e0, void *), s + 0x390);
    fn_8012ACAC(F(0x33c4, void *), F(0x2c4c, void *), s + 0x3a4, 1, 0);
    fn_80215FDC(F(0x33e0, void *));
    fn_8003C3CC(F(0x34e4, void *));
    F(0x3584, void *) = F(0x34e0, void *);
    fn_8003C0D8((u8 *)a + 0x3550, a, F(0x33e0, void *), F(0x36cc, u32), F(0x36d0, u32), (u8 *)a + 0x3530);
    fn_8003BC2C((u8 *)a + 0x3550);
    fn_8003E814(lbl_8035A0A4);
    fn_8003B06C((u8 *)a + 0x3530, a, F(0x33e0, void *), F(0x36cc, u32), F(0x36d0, u32));
    fn_8003AF34((u8 *)a + 0x3530, 0, 3000);
    F(0x34f8, u32) = 0;
    d60.f = F(0x33e0, void *);
    d44.f = F(0x33e0, void *);
    HNEW(0x340c, C801AD710)
    fn_80216044(F(0x33e0, void *), lbl_8035E6B0);
    C801C3FD0 loc;
    {
        fn_801AB928(F(0x340c, void *), F(0x33b0, void *), lbl_8035E6B4, &loc, 1, 0);
        fn_80215FDC(F(0x33e0, void *));
        {
            V207 *r = (V207 *)fn_80207198((u8 *)a + 0x3e0, lbl_8035E6BC, 0);
            if (r) F(0x33bc, void *) = r->v1c(0);
        }
        {
            V207 *r = (V207 *)fn_80207198((u8 *)a + 0x3e0, lbl_8035E6C4, 0);
            if (r) F(0x33c0, void *) = r->v1c(0);
        }
        {
            u8 *t = F(0x33b0, u8 *);
            u32 v = F(0x2f50, u32);
            *(u32 *)(t + 0x18) = 0;
            *(u32 *)(t + 0x14) = v;
        }
        fn_80253938(F(0x3518, void *), &d14);
        F(0x351c, V351c *)->vc(&d7c);
        fn_802625FC(F(0x3520, void *), &d50);
        fn_8026A15C(F(0x3524, void *), &d44);
        HNEW(0x3708, C801C3FD0)
        fn_801C4044(lbl_8035A1D8);
        F(0x3708, C801C3FD0 *)->vc(F(0x33b0, void *), 0x10);
        HNEW(0x370c, C801AD710)
        {
            u8 *buf = (u8 *)a + 0x354;
            fn_80216044(buf, lbl_8035E6CC);
            fn_801AB928(F(0x370c, void *), F(0x33b0, void *), s + 0x3b0, F(0x3708, void *), 1, 0);
            fn_80215FDC(buf);
            fn_8026F508(F(0x3528, void *), &d0c);
            *(void **)(lbl_8035B7E4 + 4) = F(0x3708, void *);
            lbl_8035A0A4->v14();
            F(0x33c8, V33c8 *) = F(0x2c44, V2c44 *)->v74();
            p1 = (GG *)fn_800F8274(lbl_8035B5E4, lbl_8035E638);
            fn_802516A4(lbl_8035B5E4, 1);
            if (F(0x36c0, int)) {
                fn_80216044(buf, s + 0x3bc);
                fn_8012ACAC(F(0x33c8, void *), F(0x2c4c, void *), lbl_8035E6D0, 1, 0);
                F(0x33c8, V33c8 *)->v38();
                fn_80215FDC(buf);
                fn_80216044(buf, s + 0x3cc);
                fn_8012ACAC(F(0x33c8, void *), F(0x2c4c, void *), lbl_8035E6D0, 1, 0);
                F(0x33c8, V33c8 *)->v38();
                fn_80215FDC(buf);
                fn_80216044(buf, s + 0x3e0);
                fn_8012ACAC(F(0x33c8, void *), F(0x2c4c, void *), lbl_8035E6D0, 1, 0);
                F(0x33c8, V33c8 *)->v38();
                fn_80215FDC(buf);
            }
            p2 = fn_800F8274(lbl_8035B5E4, lbl_8035E5A8);
            if (p2 && ((u32 *)p1) && fn_80253664(p2, 0x6d) == 1 && fn_80253664(p2, 0x6a) == 1 &&
                fn_80253664(((u32 *)p1), 0x5b) == 1 && fn_80253664(((u32 *)p1), 0x5c) == 1)
                fn_80216044(buf, s + 0x3e0);
            else if (((u32 *)p1) && fn_80253664(((u32 *)p1), 0x59) == 1 && fn_80253664(((u32 *)p1), 0x5a) == 1 &&
                     fn_80253664(((u32 *)p1), 0x5b) == 1 && fn_80253664(((u32 *)p1), 0x5c) == 1)
                fn_80216044(buf, s + 0x3cc);
            else
                fn_80216044(buf, s + 0x3bc);
            fn_8012ACAC(F(0x33c8, void *), F(0x2c4c, void *), lbl_8035E6D0, 1, 0);
            fn_80215FDC(buf);
        }
        fn_801AAFAC(F(0x370c, void *), F(0x36d4, u32));
        fn_80250BA0(F(0x3510, void *), &d60);
        (*(V1c4 **)(lbl_8035B684 + 0x1c4))->v38();
        fn_8023E200(lbl_8035B478, F(0x340c, void *));
        lbl_8035A0A4->v10();
        {
            u32 *volatile out = 0;
            fn_8003C674(lbl_8035A0A4, s + 0x3f4, (u32 **)&out);
            *out = F(0x36c4, u32);
        }
        F(0x34f4, u32) = 1;
        fn_80039E40(F(0x34e0, void *));
        fn_80039A3C((u8 *)a + 0x35cc, a, fn_8021616C(F(0x33e0, void *)), F(0x36cc, u32), F(0x36d0, u32));
        fn_8003A4BC(F(0x34e0, void *));
        fn_8003A118((u8 *)a + 0x35ec, a, fn_8021616C(F(0x33e0, void *)), F(0x36cc, u32), F(0x36d0, u32));
        fn_8003A9A4(F(0x34e0, void *));
        fn_8003A600((u8 *)a + 0x3618, a, fn_8021616C(F(0x33e0, void *)), F(0x36cc, u32), F(0x36d0, u32));
        fn_80039680(F(0x34e0, void *));
        fn_80039330((u8 *)a + 0x364c, a, fn_8021616C(F(0x33e0, void *)), F(0x36cc, u32), F(0x36d0, u32));
        lbl_80306F44.On();
        lbl_80302BFC.On();
        lbl_80302C2C.On();
        lbl_80302B9C.On();
        lbl_80302BCC.On();
        lbl_80302D1C.On();
        lbl_80302D7C.On();
        lbl_80302C5C.On();
        lbl_80302C8C.On();
        lbl_80302CBC.On();
        lbl_80302CEC.On();
        lbl_80302B0C.On();
        lbl_80302D4C.On();
        lbl_80306884.On();
        lbl_80302B3C.On();
        lbl_80302B6C.On();
        lbl_80306AC4.On();
        lbl_80306A94.On();
        lbl_80306AF4.On();
        lbl_80306B24.On();
        lbl_80302DAC.On();
        lbl_80306A04.On();
        lbl_80307264.On();
        lbl_803074D4.On();
        lbl_80307354.On();
        lbl_803070E4.On();
        lbl_80302ADC.On();
        lbl_803071A4.On();
        lbl_8030265C.On();
        lbl_8030268C.On();
        lbl_80306D64.On();
        lbl_80306D34.On();
        lbl_803026BC.On();
        lbl_80306E24.On();
        lbl_80306974.On();
        lbl_803072F4.On();
        lbl_80307234.On();
        lbl_80306D04.On();
        lbl_803073E4.On();
        lbl_803026EC.On();
        lbl_8030271C.On();
        lbl_803074A4.On();
        lbl_80307294.On();
        lbl_8030274C.On();
        lbl_80307474.On();
        lbl_8030277C.On();
        lbl_803027AC.On();
        lbl_803027DC.On();
        lbl_80307114.On();
        lbl_80307144.On();
        lbl_80306EE4.On();
        lbl_80306E84.On();
        lbl_8030280C.On();
        lbl_80306DF4.On();
        lbl_80306EB4.On();
        lbl_803068E4.On();
        lbl_80307444.On();
        lbl_8030283C.On();
        lbl_8030286C.On();
        lbl_80306C44.On();
        lbl_80307324.On();
        lbl_803073B4.On();
        lbl_80306E54.On();
        lbl_80307174.On();
        lbl_80306CA4.On();
        lbl_80306C74.On();
        lbl_80306FD4.On();
        lbl_80307084.On();
        lbl_80306CD4.On();
        lbl_80306D94.On();
        lbl_8030289C.On();
        lbl_803067A4.On();
        lbl_803028CC.On();
        lbl_80306944.On();
        lbl_80306BE4.On();
        lbl_80306B84.On();
        lbl_80306BB4.On();
        lbl_80306B54.On();
        lbl_803070B4.On();
        lbl_803069D4.On();
        lbl_803028FC.On();
        lbl_803069A4.On();
        lbl_8030292C.On();
        lbl_8030295C.On();
        lbl_8030298C.On();
        lbl_803029BC.On();
        lbl_803029EC.On();
        lbl_80307054.On();
        lbl_80306F74.On();
        lbl_80302A1C.On();
        lbl_80306A34.On();
        lbl_80306DC4.On();
        lbl_80307204.On();
        lbl_80306FA4.On();
        lbl_803068B4.On();
        lbl_80306A64.On();
        lbl_80302A4C.On();
        lbl_80307024.On();
        lbl_80302A7C.On();
        lbl_80306914.On();
        lbl_80302AAC.On();
        lbl_80306C14.On();
        lbl_80306F14.On();
        lbl_803071D4.On();
        lbl_80307384.On();
        lbl_80307414.On();
        lbl_803072C4.On();
        lbl_80306774.On();
        lbl_8030261C.On();
        lbl_80306844.On();

        F(0x346c, V346c *) = (V346c *)F(0x2c4c, V2c4c *)->v3c()->f0->v54();
        fn_8014C8C8((u8 *)a + 0x3450, 0x8880, 0, 1);
        F(0x346c, V346c *)->v1c((u8 *)a + 0x3450, 0, (u8 *)a + 0x3470);
        F(0x346c, V346c *)->v20(0);
        if (!F(0x36c8, int)) {
            int ok;
            while (!fn_8003AEEC((u8 *)a + 0x3530)) fn_8011B250();
            fn_8003AF34((u8 *)a + 0x3530, 1, 3000);
            F(0x34f8, u32) = 1;
            ok = 0;
            p2 = fn_800F8274(lbl_8035B5E4, lbl_8035E5C8);
            while (!fn_8003AEEC((u8 *)a + 0x3530)) {
                fn_802516A4(lbl_8035B5E4, 1);
                if (p2 && !((f32)fn_80253664(p2, 0x4c) >= lbl_8035E6D8 && (f32)fn_80253664(p2, 0x4c) <= lbl_8035E6DC)) ok = 1;
                if (p2 && ok && (f32)fn_80253664(p2, 0x4c) >= lbl_8035E6D8 && (f32)fn_80253664(p2, 0x4c) <= lbl_8035E6DC) break;
                fn_8011B250();
            }
            fn_8003AD38((u8 *)a + 0x3530, lbl_8035E6E0, 1, lbl_8035E6E8, 1);
            fn_8003AD38((u8 *)a + 0x3530, lbl_8035E6F0, 1, s + 0x400, 1);
        }
        fn_8003B198((u8 *)a + 0x3530);
    }
    return 0;
}

} /* extern "C" */
