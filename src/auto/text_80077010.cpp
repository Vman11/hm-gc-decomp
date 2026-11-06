// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
extern "C" {
}
struct Var { u32 a, b; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *get(int); };
struct VP { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void play(char *, int, int, int, int); };
struct B { u32 a, b; };
struct K { u8 pad[192]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void get(B *, int); };
struct V3 { f32 x, y, z; };
struct N { u8 pad[0x98]; u32 f98; };
struct Z { u8 pad[0x10]; void *f10; u8 pad14[0xc]; u32 f20; };
struct FT { u8 pad[0xc]; void (*fc)(void *, V3 *); u8 pad10[0x130 - 0x10]; void (*f130)(void *, V3 *); };
struct R { u8 pad[0x168]; u8 f168[0x18]; u8 f180[1]; };
struct M { u8 pad[0x2c50]; R **f2c50; };
struct T {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(int, int, int, int, V3 *);
    u8 pad4[8]; void *fc; void *f10; u8 pad14[0x1a8 - 0x14]; f32 f1a8; f32 f1ac; u8 pad1b0[0x434 - 0x1b0]; VP *f434; u8 pad438[8]; N *f440; N *f444; u8 pad448[0x458 - 0x448]; Z *f458;
    u8 pad45c[0x4cc - 0x45c]; int f4cc; u8 pad4d0[0x50c - 0x4d0]; u32 *f50c; u8 pad510[8]; void *f518; void *f51c; void *f520; void *f524; void *f528; void *f52c; void *f530; void *f534;
    void *f538; int *f53c; int *f540; int *f544; int *f548; void *f54c; f32 f550; f32 f554; f32 *f558; void *f55c; u8 pad560[0x61c - 0x560]; void *f61c; u8 pad620[0x62c - 0x620]; u32 *f62c;
    u8 pad630[0x674 - 0x630]; void *f674; u8 pad678[4]; void *f67c; void *f680; int f684; void *f688; u8 pad68c[4]; void *f690; u8 pad694[4]; void *f698; void *f69c; f32 f6a0; void *f6a4; void *f6a8;
    u8 pad6ac[0x6b8 - 0x6ac]; void *f6b8; void *f6bc; f32 f6c0; u8 pad6c4[0x6d4 - 0x6c4]; void *f6d4; };
struct G { u8 pad[0x24]; u8 *f24; u8 pad28[0x90 - 0x28]; u8 f90[1]; };
struct W { u8 pad[0xc]; void *fc; };
extern "C" {
extern char lbl_80298060[];
extern FT lbl_803286D0;
extern void *lbl_80359F2C;
extern void *lbl_8035A0A4;
extern u8 *lbl_8035A1DC;
extern int lbl_8035A238, lbl_8035A24C, lbl_8035A250, lbl_8035A254, lbl_8035A258, lbl_8035A25C;
extern void *lbl_8035B478;
extern G *lbl_8035B65C;
extern K *lbl_8035B684;
extern int lbl_8035B6E8, lbl_8035B6EC;
extern W *lbl_8035B754;
extern u32 lbl_8035F3E8, lbl_8035F3F0, lbl_8035F400;
extern f32 lbl_8035F3EC, lbl_8035F548, lbl_8035F60C;
extern char lbl_8035F3F4[1], lbl_8035F470[6], lbl_8035F578[8], lbl_8035F5CC[8], lbl_8035F5F4[8], lbl_8035F5FC[8], lbl_8035F604[8], lbl_8035F610[8], lbl_8035F618[8], lbl_8035F620[8], lbl_8035F628[7];
Var *fn_80207198(void *, char *, int);
void *fn_8023D13C(T *, char *, int);
void fn_8002FD10(K *, B *);
int fn_800F6CD0(const void *, const void *);
void fn_8003D130(void *, int);
void *fn_800F8274(void *, char *);
Var *fn_80110AA4(void *, char *);
Var **fn_8010FFD0(void *, char *, int);
void *fn_80110030(void *, char *, int);
Var *fn_8010FFFC(void *, void *, char *, int);
void *fn_80110444(void *, char *, int);
Var **fn_8010FEDC(void *, void *, char *, int);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
int fn_80239024(T *);
void fn_8002C5A4(void *, f32);
void fn_PadUse(const char *);
static void pad_strs() {
    fn_PadUse("RUMBLE_H");
    fn_PadUse("RUMBLE_M");
    fn_PadUse("RUMBLE_L");
    fn_PadUse("PLAYCHG4");
    fn_PadUse("PEChrgLb");
    fn_PadUse("PEChrg6b");
    fn_PadUse("PLAYCHG3");
    fn_PadUse("PEChrg5b");
    fn_PadUse("PLAYCHG2");
    fn_PadUse("PEChrg3b");
    fn_PadUse("PEChrg2b");
    fn_PadUse("LIGHTOFF");
    fn_PadUse("SHCOLECT");
    fn_PadUse("C_LNFALL");
    fn_PadUse("PlrShot6");
    fn_PadUse("PlrShot5");
    fn_PadUse("PlrShot4");
    fn_PadUse("PlrShot3");
    fn_PadUse("PlrShot2");
    fn_PadUse("BEAM_PRS");
    fn_PadUse("BEAM_REL");
    fn_PadUse("CHRG_PRS");
    fn_PadUse("PLAYCHGL");
    fn_PadUse("CHRG_REL");
    fn_PadUse("C_UNREAL");
    fn_PadUse("C_HUNTER");
    fn_PadUse("FJMP_PRS");
    fn_PadUse("JUMP_PRS");
    fn_PadUse("JUMP_REL");
    fn_PadUse("FAKESINK");
    fn_PadUse("ANIMOVER");
    fn_PadUse("TELEPORT");
    fn_PadUse("Behavior");
}
void *keep_pad = (void *)pad_strs;
static inline void *Look(R *r, char *grp, char *name) {
    if (!grp || !*grp) return fn_800F9398(r->f168, name);
    return fn_800F9788(r->f180, grp, name);
}
static inline int IsA(B *b8, B *b10) { return fn_800F6CD0(b8, lbl_8035F3F4) || (fn_800F6CD0(b8, lbl_8035F470) && fn_800F6CD0(b10, lbl_8035F578)); }
static inline bool IsB(B *b8) { return fn_800F6CD0(b8, lbl_8035F3F4) || fn_800F6CD0(b8, lbl_8035F470); }
int fn_80077010(T *t) {
    B b10, b8;
    void *x;
    void *g;
    int res;
    void *o;
    int f;
    bool h;
    V3 m;
    V3 v;
    t->f690 = fn_80207198(lbl_8035B65C->f24 + 0x3e0, lbl_8035F5F4, 0)->get(0);
    t->f688 = fn_8023D13C(t, lbl_8035F5FC, 1);
    t->f538 = fn_8023D13C(t, "ResetHPMax", 1);
    t->f53c = (int *)fn_8023D13C(t, "NumLives", 1);
    lbl_8035B684->get(&b10, -1);
    fn_8002FD10(lbl_8035B684, &b8);
    if (fn_800F6CD0(&b10, lbl_8035F470)) fn_8003D130(lbl_8035A0A4, 0);
    o = fn_800F8274(lbl_8035B478, lbl_8035F604);
    t->f540 = (int *)fn_80110AA4(o, "ZEKELIVE")->get(0);
    f = (u8)IsA(&b8, &b10);
    if (f) {
        if (t->f53c) *t->f540 = *t->f53c;
        else *t->f540 = 1;
    }
    t->f558 = (f32 *)fn_8023D13C(t, "DefaultSpirit", 1);
    t->f55c = fn_8023D13C(t, "aSpiritSpawnPoint", 1);
    if (t->f558) t->f554 = *t->f558;
    else t->f554 = lbl_8035F3EC;
    t->f550 = t->f554;
    t->f50c = (u32 *)fn_80207198(lbl_8035A1DC + 0x3e0, "mGemFlag", 0)->get(0);
    if (t->f62c) {
        if (*t->f50c == 0x40) *t->f62c |= lbl_8035F3E8;
        else *t->f62c &= ~0x800;
    }
    if (*(int *)(lbl_8035A1DC + 0x36ac)) {
        Var **q = fn_8010FFD0(lbl_8035B65C->f90, "Level\\mDebugLevelGemFlag", 0);
        if (q) *t->f50c = *(u32 *)((u8 *)*q + 0xc);
        q = fn_8010FFD0(lbl_8035B65C->f90, "Level\\dHP", 0);
        if (q) {
            t->f1a8 = t->f1a8 + ((f32)*(int *)((u8 *)*q + 0xc) - t->f1a8);
            *t->f548 = (int)t->f1a8;
        }
    }
    t->f698 = fn_8023D13C(t, "ChargeRate", 1);
    t->f6a8 = fn_8023D13C(t, "ChargeDelay", 1);
    t->f69c = fn_8023D13C(t, "ChargeMax", 1);
    t->f6d4 = fn_80110030(lbl_8035B65C->f90, "ShotLit\\LightStartColor", 0);
    t->f6b8 = fn_8010FFFC(t->fc, t->f10, "arShotTimers", 1);
    t->f6bc = fn_8010FFFC(t->fc, t->f10, "LeotaShotRefire", 1)->get(0);
    t->f524 = fn_8010FFFC(t->fc, t->f10, "LockOnAngle", 1)->get(0);
    t->f6a4 = fn_8023D13C(t, "ShotPowerIncrement", 1);
    t->f6a0 = *(f32 *)fn_8023D13C(t, "InitialShotPower", 1);
    {
        f32 *p = (f32 *)fn_8023D13C(t, "LanternBeamAngle", 0);
        if (p) t->f6c0 = *p;
        else t->f6c0 = lbl_8035F60C;
    }
    x = lbl_8035B754->fc;
    g = fn_80110444(x, lbl_8035F610, 0);
    t->f518 = (*fn_8010FEDC(x, g, "StandingJumpHeight", 1))->get(0);
    t->f51c = (*fn_8010FEDC(x, g, "WalkingJumpHeight", 1))->get(0);
    t->f520 = (*fn_8010FEDC(x, g, "RunningJumpHeight", 1))->get(0);
    t->f528 = (*fn_8010FEDC(x, g, "JVerticalAngle", 1))->get(0);
    t->f61c = (*fn_8010FEDC(x, g, "rRotateCameraAngle", 1))->get(0);
    t->f530 = (*fn_8010FEDC(x, g, "rHorizontalLookAngle", 1))->get(0);
    t->f534 = (*fn_8010FEDC(x, g, "rVerticalLookAngle", 1))->get(0);
    x = lbl_8035B754->fc;
    t->f52c = (*fn_8010FEDC(x, fn_80110444(x, lbl_8035F618, 0), "DefaultGravity", 1))->get(0);
    {
        char *a = (char *)fn_8023D13C(t, "InvulnerabilityMaterial", 0);
        char *b = (char *)fn_8023D13C(t, "InvulnerabilityMaterialNamespace", 0);
        if (a && b) {
            R **rr = (*(M **)lbl_8035B684)->f2c50;
            t->f674 = Look(*rr, b, a);
            t->f67c = Look(*rr, lbl_8035F620, "Stitch_b");
        }
    }
    t->f680 = fn_8023D13C(t, "InvulWarningTime", 1);
    t->f54c = fn_8010FFFC(t->fc, t->f10, "arLanternCenterOffset", 1);
    res = fn_80239024(t);
    t->f544 = (int *)fn_80110AA4(o, lbl_8035F628)->get(0);
    if (*t->f544 <= 0) *t->f544 = 1;
    t->f548 = (int *)fn_80110AA4(o, "ZEKERSHP")->get(0);
    if (f) *t->f548 = (int)t->f1a8;
    t->f1a8 = (f32)*t->f548;
    h = IsB(&b8);
    if (h) *t->f544 = (int)t->f1a8;
    t->f1ac = (f32)*t->f544;
    lbl_8035A238 = 0;
    t->f4cc = 0;
    if (t->f4cc == 0) {
        if (t->f440) {
            t->f434->play(lbl_8035F5CC, 0, 0, 0, 0);
            t->f440->f98 |= lbl_8035F400;
            t->f440 = 0;
        }
        if (t->f444) {
            t->f444->f98 |= lbl_8035F400;
            t->f444 = 0;
        }
    }
    v.x = lbl_8035F548;
    v.y = lbl_8035F548;
    v.z = lbl_8035F548;
    t->v14(0, 0, 0, 0, &v);
    lbl_803286D0.f130(t->f458->f10, &m);
    m.z = lbl_8035F3EC;
    {
        Z *z = t->f458;
        lbl_803286D0.fc(z->f10, &m);
        z->f20 |= lbl_8035F3F0;
    }
    fn_8002C5A4(lbl_80359F2C, lbl_8035F3EC);
    lbl_8035B6EC = 0;
    lbl_8035B6E8 = 0;
    if (h) {
        lbl_8035A24C = 0;
        lbl_8035A250 = 0;
        lbl_8035A254 = 0;
        lbl_8035A258 = 0;
        lbl_8035A25C = 0;
    }
    t->f684 = lbl_8035A254 == 0;
    return res;
}
}
