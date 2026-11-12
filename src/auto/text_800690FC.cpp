// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12f(f32 k); virtual void getPos(void *p, void *a, void *b, int c, int d); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void send(void *msg, u32 to, int a, void *d, void *e); virtual void s34(); virtual void s35(); virtual void s36(); };
struct VE { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void shot(u32 o, int a, char *grp, char *bone, int b, f32 k, f32 m); };
struct VB80 { u8 pad_[0x80]; };
struct VQ : VB80 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void tog(int a); };
struct VB2F0 { u8 pad_[0x2f0]; };
struct VG : VB2F0 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void go0(); virtual void go(void *s); virtual void s14(); };
static u8 sPad[5744] = {1};
static s32 tA[139] = {1};
static s32 tB[1585] = {1};
static s32 tC[1585] = {1};
const char *wG_strpool_800690FC[] = { "MContact","MAirborn","MStation","MFalling","SNEAKLFT","SNEAKRGT","SNEAKBCK","JUMPLAND","JUMPSHOT","sprtfwd2","Cnothnks","activate","BALLROLL","DmFrShot","HmFrShot","WlgnShot","BRingSht","BRingSh2","AttFbll2","hazshots","BNS_OVER","IDLEBOR1","JMPSLACK","GAMEOVER","SUCKSHRV","BRAKBEAM","SolClcta","SolClctb","SolClctc","SolClctd","STANDCOM","BNS_SHRV","ACTV8ING","SPRT2HIT","ANIMOVER","ANIMLOOP","JUMP_PRS","FJMP_PRS","BEAM_PRS","BEAM_REL","STRT_COL","GDAMAGED","KDAMAGED","OBJKILLD","TRANSOVR","STRT_COM","CHRG_PRS","CHRG_REL","LIGHTOFF","TELEPORT","NSHRINKP","WATEROFF","STRTPATH","CHGPTH10","CHGPTH11","CHGPTH12","CHGPTH13","CHGPTH14","CHGPTH15","CHGPTH16","CHGPTH17","CHGPTH18","CHGPTH19","CHGPTH20","CHGPTH21","CHGPTH22","CHGPTH23","CHGPTH24","CHGPTH25","CINFUEGO","CINFUEG1","BACK2WRK","RAINOFFE","PRERESET","GGGLNTRN","NGGLNTRN","GIVEGEM2","GIVEGEM3","GIVEGEM4","GIVEGEM5","GIVEGEM6","GIVEGEML","BODYNODE","BODYANIM" };

extern int lbl_8035B308;
extern int lbl_8035B65C;
#define GV ((VG *)lbl_8035B65C)
extern int lbl_80359F2C;
extern int lbl_8035B5E4;
extern int lbl_8035B374;
extern int lbl_8035A0A4;
extern int lbl_8035B684;
extern int lbl_8035B6E4;
extern f32 lbl_8035F0B4, lbl_8035F0B8, lbl_8035F0BC, lbl_8035F0C0, lbl_8035F0C4, lbl_8035F0C8, lbl_8035F0CC, lbl_8035F0E0, lbl_8035F0EC, lbl_8035F0F0, lbl_8035F1BC, lbl_8035F1C8;
extern char lbl_8035F09C[4], lbl_8035F0A4[4], lbl_8035F0AC[4], lbl_8035EE70[4], lbl_8035F0D0[4], lbl_8035F0D8[4], lbl_8035ED68[4], lbl_8035F0E4[4], lbl_8035EE18[4], lbl_8035ECE0[4], lbl_8035F1C0[8], lbl_8035F1CC[4], lbl_8035F1D4[4], lbl_8035EEA8[4];
extern char lbl_8035F0F4[4], lbl_8035F0FC[4], lbl_8035F104[4], lbl_8035F10C[4], lbl_8035F114[4], lbl_8035F11C[4], lbl_8035F124[4], lbl_8035F12C[4], lbl_8035F134[4], lbl_8035F13C[4], lbl_8035F144[4], lbl_8035F14C[4], lbl_8035F154[4], lbl_8035F15C[4], lbl_8035F164[4], lbl_8035F16C[4], lbl_8035F174[4], lbl_8035F17C[4], lbl_8035F184[4], lbl_8035F18C[4], lbl_8035F194[4], lbl_8035F19C[4], lbl_8035F1A4[4], lbl_8035F1AC[4], lbl_8035F1B4[4];
void __ct__9C80253F24Fiiii(void *, const char *, int, int, int);
int fn_800F6CD0(int, const char *);
void fn_800F6E88(int, int);
int fn_802288FC(int, const char *);
VE *fn_80233550(int, const char *);
int fn_8003C674(int, const char *, int **);
void fn_8002FD10(int, void *);
void fn_8019B6B8(int, int);
void fn_80253304(int, int, f32);
void fn_80253250(int);
void fn_8023F864(int, int);
void fn_802405B8(int);
void fn_80240384(int);
void fn_80240948(int, char *, int);
void fn_80240F24(int, int, int);
void fn_80241028(int, int, int);
void fn_802410CC(int, int, int);
void fn_8024125C(int, int);
void fn_802413D8(int, int, f32, int, int, int);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
void fn_80242174(f32, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
void fn_802493D0(int, int);
int fn_802494A4(int, int);
void fn_8006B5A4(int);
void fn_8006B6F4(int);
void fn_8006B908(int);
void fn_8006BA1C(int);
void fn_8006BE6C(int);
void fn_8006BFE4(int);
int fn_8006C128(int);
void fn_8006C418(int);
void fn_8006C748(int, int, f32);
void fn_8006CD00(int, int, int, int);
void fn_8006DB6C(int);
void fn_8006DC14(int);
void fn_8006DD74(int);
void fn_8006E2F8(int);
void fn_8006E994(int, int, int);
void fn_8006EAD0(int, int, int, f32);
void fn_8006EB9C(int, int, f32);
void fn_8006EC5C(int, int);
void fn_8006ED08(int);
void fn_8006F1DC(int);
void fn_8006F26C(int);
void fn_8006F2FC(int);
void fn_8006F3CC(int);
void fn_8006F808(int);
void fn_8006FC88(int);
void fn_8006FD64(int);
void fn_80070054(int);
void fn_8007115C(int);
void fn_800716F0(int, int);
void fn_80071E68(int);
void fn_80071EE0(int);
void fn_80071F54(int, int, f32);
void fn_80072040(int, int);
void fn_8007225C(int, f32);
int fn_8007239C(int);
void fn_80072438(int, int);
void fn_8007249C(int, int);
void fn_80072BA8(int);
void fn_80072C54(int);
void fn_80072D94(int, int, f32);
void fn_800739F8(int, f32);
void fn_80076D50(int, int);
void fn_80076DFC(int, int);

#define I(o) (*(int *)(p + (o)))
#define F(o) (*(f32 *)(p + (o)))
#define PF(o) (**(f32 **)(p + (o)))
#define PI(o) (**(int **)(p + (o)))
#define VP(o) (*(VO **)(p + (o)))
#define T(o) (*(int *)(I(0x118) + (o)))
#define CT(s) __ct__9C80253F24Fiiii((void *)lbl_8035B65C, s, 0, 0, 0)
#define LIGHT (*(int *)(*(int *)(I(0x118) + 0x20c) + 0xd8))

#define walk(p, n, k) do { fn_8006EC5C(p, n); fn_80242168(k, p); fn_80241628(p, 0, 0); CT(lbl_8035F0A4); } while (0)
static inline void dead(int p) {
    int e = I(0xe0);
    *(int *)(e + 0x118) = I(0x1ac);
    *(int *)(e + 0x11c) = I(0x1b0);
    *(int *)(e + 0x120) = I(0x1b4);
    *(int *)(e + 0x154) = 0;
}
static inline void cam(int p) {
    int g = lbl_80359F2C;
    *(int *)(g + 0x16c) = 5;
    *(f32 *)(g + 0x168) = lbl_8035F0CC;
}
static inline void tog(int v) {
    VQ *q = *(VQ **)(lbl_80359F2C + 0x1c4);
    if (q != 0) q->tog(v);
}
static inline void gems(int p) {
    int n = I(0x268);
    int *volatile r = 0;
    if (fn_8003C674(*(volatile int *)&lbl_8035A0A4, "LvSprFnd", (int **)&r) == 0) { int *t = r; *t = 0; }
    { int *t = r; *t = *t + n; }
    I(0x268) = I(0x268) - n;
}
#define ld(p, a, b, k, st) do { fn_8006E994(p, a, b); fn_80242168(k, p); fn_80249008(p, 2); if (st) fn_802494A4(p, 2); } while (0)
#define lc(p, a, k, st) do { fn_8006EC5C(p, a); fn_80242168(k, p); fn_80249008(p, 2); if (st) fn_802494A4(p, 2); } while (0)
static inline int chk(int p) {
    if (T(0x4cc) == 1) {
        fn_8006ED08(p);
        return 0;
    }
    return 1;
}
static inline void notify(int p) {
    int o;
    u32 i;
    for (i = 0, o = 0; i < (u32)I(0x200); i++) {
        (*(VO **)(I(0x228) + o))->send(lbl_8035ECE0, 0, 0, 0, 0);
        o += 4;
    }
}
static inline void path(int p, char *s) {
    fn_802494A4(p, 0x1c);
    fn_80241628(p, 5, 0);
    fn_80240948(p, s, 0);
}
static inline void shot(int p, const char *n) {
    VE *e = fn_80233550(lbl_8035B374, n);
    if (e != 0) e->shot(I(0x118), 1, lbl_8035ED68, lbl_8035F1C0, 0, lbl_8035F0C0, lbl_8035F1C8);
}

void fn_800690FC(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;

    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        T(0x4c0) = 1;
        fn_80241628(p, 0, 0);
        CT(lbl_8035F09C);
        CT(lbl_8035F0A4);
        I(0x1f0) = fn_802288FC(lbl_8035B308, lbl_8035F0AC);
        fn_80070054(p);
        I(0x298) = 0;
        break;
    case 1:
        fn_80241628(p, 0, 0);
        CT(lbl_8035F0A4);
        break;
    case 2:
        if (I(0x1ec) == 1) T(0x5e8) = 0;
        break;
    case 3:
        walk(p, 0x23, lbl_8035F0B4);
        break;
    case 4:
        walk(p, 0xe, lbl_8035F0B8);
        break;
    case 5:
        return;
    case 6:
        fn_80241628(p, 2, 0);
        fn_8006EC5C(p, 0x5e);
        break;
    case 7:
        if (I(0x1ec) == 1) T(0x5e8) = 1;
        fn_80241628(p, 1, 0);
        T(0x4c4) = 1;
        fn_8006EB9C(p, 0x26, lbl_8035F0BC);
        I(0x14c) = 0;
        fn_802491DC(p, 3);
        break;
    case 8:
        fn_8006EC5C(p, 0);
        fn_80240F24(p, 3, 6);
        fn_80241628(p, 1, 0);
        fn_800716F0(p, -1);
        break;
    case 9:
        fn_8006DB6C(p);
        fn_80241628(p, 1, 0);
        fn_800716F0(p, -1);
        break;
    case 10:
        fn_80241628(p, 2, 0);
        lbl_8035B6E4 = 1;
        break;
    case 11:
        fn_8006FD64(p);
        fn_80241628(p, 0, 0);
        CT(lbl_8035F0A4);
        I(0x14c) = 0;
        break;
    case 12:
        fn_80241628(p, 3, 0);
        *(volatile int *)&lbl_8035B6E4 = 1;
        (*(VG *volatile *)&lbl_8035B65C)->go0();
        break;
    case 13:
        T(0x33c) = 1;
        fn_80241628(p, 2, 0);
        fn_80242174(lbl_8035F0C0, p);
        break;
    case 14:
        fn_8006BA1C(p);
        break;
    case 15:
        fn_8006EC5C(p, 0x48);
        break;
    case 16:
        fn_80241628(p, 3, 0);
        T(0x68c) = 0;
        { int e = I(0xe0);
        *(f32 *)(e + 0x118) = F(0x1ac);
        *(f32 *)(e + 0x11c) = F(0x1b0);
        *(f32 *)(e + 0x120) = F(0x1b4);
        *(f32 *)(e + 0x154) = lbl_8035F0C0; }
        CT("PLYRDEAD");
        break;
    case 17:
        if (LIGHT != 1) fn_80241628(p, 2, 0);
        fn_8006EC5C(p, 0xd);
        break;
    case 18:
        fn_8006EC5C(p, 0x2d);
        fn_80242174(lbl_8035F0C4, p);
        T(0x68c) = 0;
        break;
    case 19:
        fn_8024125C(p, 8);
        fn_80241628(p, 3, 0);
        fn_8006EC5C(p, 0x74);
        fn_8006B908(p);
        I(0x274) = 1;
        T(0x68c) = 0;
        CT("PLYRDEAD");
        fn_80253304(*(int *)(lbl_8035B5E4 + 0x70) + *(int *)(lbl_8035B5E4 + 0x68) * 0x34, 2000, lbl_8035F0C8);
        break;
    case 20:
        fn_8006EC5C(p, 4);
        T(0x68c) = 0;
        fn_80076D50(I(0x118), 0);
        break;
    case 21:
        I(0xec) = (int)lbl_8035EE70;
        fn_8006C418(p);
        fn_8006EC5C(p, 0x55);
        fn_80241628(p, 2, 0);
        cam(p);
        break;
    case 22:
        T(0x68c) = 0;
        break;
    case 23:
        fn_8006EC5C(p, 0x5f);
        fn_80241628(p, 2, 0);
        tog(1);
        cam(p);
        CT("PLYRDEAD");
        break;
    case 24:
        fn_80241628(p, 2, 0);
        I(0x184) = 1;
        fn_80076D50(I(0x118), 0);
        break;
    case 25:
        fn_8006EC5C(p, 0x45);
        fn_80241628(p, 1, 0);
        fn_800716F0(p, -1);
        fn_80076D50(I(0x118), 0);
        break;
    case 26:
        fn_80240948(p, lbl_8035F0D0, 0);
        fn_80241628(p, 5, 0);
        fn_8006EC5C(p, 0x66);
        I(0x1fc) = 1;
        fn_80072C54(I(0x118));
        fn_80076D50(I(0x118), 0);
        break;
    case 27:
        I(0x1fc) = 1;
        break;
    case 28: {
        int k;
        I(0x200) = 0;
        I(0x234) = 0;
        I(0x230) = 1;
        fn_802490E0(p, 0xd, PF(0x204));
        k = fn_8007239C(I(0x118));
        fn_802490E0(p, 0xf, PF(0x208) * (f32)*(u32 *)(*(int *)(I(0x20c) + 0xc) + (k - 1) * 4));
        if (fn_8006C128(p) == 0) fn_802494A4(p, 0);
        fn_80076D50(I(0x118), 0);
        break;
    }
    case 29:
        fn_802494A4(p, 0);
        break;
    case 30:
        return;
    case 31:
        fn_80241628(p, 2, 0);
        T(0x68c) = 0;
        break;
    case 32:
        fn_8006EC5C(p, 99);
        fn_80241628(p, 0, 0);
        break;
    case 33:
        fn_80249008(p, 2);
        I(0x298) = 0;
        break;
    case 34:
        fn_80249008(p, 2);
        break;
    case 35: {
        u8 *o;
        T(0x4c4) = 0;
        I(0x154) = 0;
        o = *(u8 **)(I(0x118) + 0x234);
        if (o != 0) {
            *(int *)(o + 0x234) = 0;
            T(0x234) = 0;
        }
        fn_80249008(p, 3);
        break;
    }
    case 36:
        CT("C_NOSHKE");
        break;
    case 37:
        return;
    case 38:
        CT("C_NOSHKE");
        VP(0x118)->s36();
        break;
    case 39:
        T(0x33c) = 0;
        break;
    case 40:
        CT("PLYRLIVE");
        VP(0x118)->s36();
        CT(lbl_8035F0A4);
        I(0x15c) = 1;
        T(0x68c) = 1;
        T(0x73c) = 0;
        break;
    case 41:
        fn_8006C748(p, 1, lbl_8035F0C0);
        VP(0x118)->s12f(lbl_8035F0C0);
        CT("PLYRLIVE");
        CT("C_NSCARY");
        T(0x68c) = 1;
        break;
    case 42:
        T(0x68c) = 1;
        break;
    case 43:
        I(0x274) = 0;
        gems(p);
        T(0x68c) = 1;
        CT("PLYRLIVE");
        CT(lbl_8035F0D8);
        fn_8023F864(p, 6);
        fn_8023F864(p, 7);
        fn_8023F864(p, 8);
        fn_8023F864(p, 9);
        break;
    case 44:
        fn_80241628(p, 2, 0);
        fn_8006EC5C(p, 4);
        T(0x68c) = 1;
        T(0x240) = 0;
        break;
    case 45:
        tog(0);
        CT("PLYRLIVE");
        break;
    case 46: {
        VO *o;
        fn_80241628(p, 0, 0);
        I(0x184) = 0;
        o = VP(0x180);
        if (o != 0) {
            o->send((void *)"PLYRNACT", I(0x118), 0, 0, 0);
            I(0x180) = 0;
        }
        CT("PLYRLIVE");
        break;
    }
    case 47:
        I(0x1fc) = 0;
        break;
    case 48:
        if (I(0x234) == 0) fn_8006BE6C(p);
        break;
    case 49:
        fn_8006BE6C(p);
        break;
    case 50:
        T(0x4c0) = 1;
        break;
    case 51:
        T(0x4c0) = 1;
        fn_80249008(p, 2);
        fn_802491DC(p, 2);
        break;
    case 52:
        fn_8006EB9C(p, 0x29, lbl_8035F0E0);
        break;
    case 53:
        VP(0x118)->s36();
        GV->go0();
        T(0x5e8) = 1;
        break;
    case 54:
        fn_8006FC88(p);
        break;
    case 55:
        fn_802494A4(p, 0);
        if (*(void **)(p + 0x240) != 0 && fn_800F6CD0(I(0x240), lbl_8035ED68) == 0) {
            CT("PREMNGST");
            CT((const char *)I(0x240));
        }
        break;
    case 56:
        if (fn_800F6CD0(p + 0x178, lbl_8035F0E4) == 0) fn_802494A4(p, 0);
        break;
    case 57:
        fn_8006EC5C(p, 0x66);
        break;
    case 58:
        fn_802493D0(p, 0x22);
        fn_8006EC5C(p, 0x66);
        break;
    case 59:
        fn_8006B6F4(p);
        break;
    case 60:
        VP(0x118)->s36();
        GV->go0();
        break;
    case 61:
        if (fn_800F6CD0(p + 0x178, lbl_8035EE18) != 0) fn_802494A4(p, 0);
        break;
    case 62:
        fn_800739F8(I(0x118), lbl_8035F0C0);
        fn_802494A4(p, 7);
        I(0x164) = 0;
        break;
    case 63:
        if (I(0x164) != 0) {
            fn_800739F8(I(0x118), lbl_8035F0C0);
            I(0x164) = 0;
        }
        break;
    case 64:
        fn_800739F8(I(0x118), lbl_8035F0C0);
        fn_802494A4(p, 7);
        I(0x164) = 0;
        fn_8006EC5C(p, 1);
        break;
    case 65:
        fn_802494A4(p, 7);
        I(0x164) = 1;
        break;
    case 66:
        fn_802494A4(p, 7);
        I(0x164) = 0;
        break;
    case 67:
        fn_802494A4(p, 7);
        break;
    case 68:
        fn_802494A4(p, 7);
        I(0x164) = 0;
        break;
    case 69:
        fn_8006FD64(p);
        I(0x14c) = 1;
        break;
    case 70:
        fn_800716F0(p, -1);
        fn_80241628(p, 0, 0);
        fn_802494A4(p, 0x10);
        break;
    case 71:
        CT("RUMBLE_M");
        fn_80241628(p, 0, 0);
        break;
    case 72:
        fn_80241628(p, 0, 0);
        break;
    case 73:
        I(0x164) = 0;
        break;
    case 74:
        if (LIGHT != 1) fn_8006F3CC(p);
        fn_80249008(p, 2);
        break;
    case 75:
        if (LIGHT != 1) fn_8006F3CC(p);
        break;
    case 76:
        if (LIGHT != 1) fn_8006F3CC(p);
        fn_80242168(lbl_8035F0B8, p);
        break;
    case 77:
        if (fn_800F6CD0(p + 0x178, lbl_8035F0E4) != 0) fn_802494A4(p, 0);
        break;
    case 78:
        if (LIGHT != 1) fn_802494A4(p, 0x24);
        break;
    case 79:
        if (LIGHT != 1) fn_802494A4(p, 0x24);
        fn_80242168(lbl_8035F0B8, p);
        break;
    case 80:
        fn_8006C128(p);
        fn_80249008(p, 0xe);
        fn_802490E0(p, 0xd, PF(0x204));
        break;
    case 81:
        fn_80249008(p, 0xd);
        fn_802490E0(p, 0xe, PF(0x208));
        break;
    case 82:
        fn_8006BFE4(p);
        break;
    case 83:
        fn_802494A4(p, 0x25);
        break;
    case 84: {
        I(0x234) = 1;
        notify(p);
        fn_802494A4(p, 0x26);
        break;
    }
    case 85:
        PI(0x22c) &= ~0x800;
        fn_80249008(p, 0x10);
        if (*(void **)(I(0x22c) + 0x88) == 0) fn_8019B6B8(*(int *)(lbl_8035B65C + 0xc), I(0x22c));
        break;
    case 86:
        fn_802405B8(p);
        fn_80072D94(I(0x118), 1, PF(0x158));
        break;
    case 87:
        fn_802405B8(p);
        break;
    case 88:
        if (chk(p)) {
            fn_8006EB9C(p, 4, lbl_8035F0EC);
            fn_80249008(p, 2);
            fn_802491DC(p, 2);
        }
        break;
    case 89:
        if (chk(p)) fn_8006EB9C(p, 4, lbl_8035F0EC);
        break;
    case 90:
        if (chk(p)) {
            fn_8006EB9C(p, 4, lbl_8035F0EC);
            fn_80249008(p, 2);
            fn_802491DC(p, 2);
            fn_802494A4(p, 0);
        }
        break;
    case 91:
        if (chk(p)) fn_802494A4(p, 0);
        break;
    case 92:
        return;
    case 93: ld(p, 0x2a, 0x3c, lbl_8035F0F0, 1); break;
    case 94:
        fn_802494A4(p, 0);
        fn_80249008(p, 2);
        break;
    case 95: ld(p, 0x2a, 0x3c, lbl_8035F0F0, 0); break;
    case 96: ld(p, 0x2b, 0x3b, lbl_8035F0F0, 1); break;
    case 97: ld(p, 0x2b, 0x3b, lbl_8035F0F0, 0); break;
    case 98: ld(p, 0x2b, 0x3b, lbl_8035F0F0, 1); break;
    case 99: ld(p, 0x2b, 0x3b, lbl_8035F0F0, 0); break;
    case 100: ld(p, 0x23, 0x39, lbl_8035F0B4, 1); break;
    case 101: ld(p, 0x23, 0x39, lbl_8035F0B4, 0); break;
    case 102:
        fn_802494A4(p, 3);
        break;
    case 103: ld(p, 0x23, 0x39, lbl_8035F0B4, 0); break;
    case 104:
        return;
    case 105: ld(p, 0x2c, 0x3a, lbl_8035F0B4, 1); break;
    case 106: ld(p, 0x2c, 0x3a, lbl_8035F0B4, 0); break;
    case 107: ld(p, 0x2c, 0x3a, lbl_8035F0B4, 0); break;
    case 108: ld(p, 0x19, 0x38, lbl_8035F0B8, 1); break;
    case 109: ld(p, 0x19, 0x38, lbl_8035F0B8, 0); break;
    case 110:
        fn_802494A4(p, 4);
        break;
    case 111: ld(p, 0x19, 0x38, lbl_8035F0B8, 0); break;
    case 112: ld(p, 0x1a, 0x37, lbl_8035F0B8, 1); break;
    case 113:
        fn_802494A4(p, 0);
        fn_80249008(p, 2);
        break;
    case 114: ld(p, 0x1a, 0x37, lbl_8035F0B8, 0); break;
    case 115: ld(p, 0x1a, 0x37, lbl_8035F0B8, 0); break;
    case 116: ld(p, 0xe, 0x35, lbl_8035F0B8, 1); break;
    case 117: ld(p, 0xe, 0x35, lbl_8035F0B8, 0); break;
    case 118: ld(p, 0xe, 0x35, lbl_8035F0B8, 0); break;
    case 119: ld(p, 0xf, 0x36, lbl_8035F0B8, 1); break;
    case 120: ld(p, 0xf, 0x36, lbl_8035F0B8, 0); break;
    case 121: ld(p, 0xf, 0x36, lbl_8035F0B8, 0); break;
    case 122: lc(p, 0x32, lbl_8035F0B8, 1); break;
    case 123: lc(p, 0x32, lbl_8035F0B8, 0); break;
    case 124: lc(p, 0x33, lbl_8035F0B8, 1); break;
    case 125: lc(p, 0x33, lbl_8035F0B8, 0); break;
    case 126: lc(p, 0x31, lbl_8035F0B8, 1); break;
    case 127: lc(p, 0x31, lbl_8035F0B8, 0); break;
    case 128: lc(p, 0x34, lbl_8035F0B8, 1); break;
    case 129: lc(p, 0x34, lbl_8035F0B8, 0); break;
    case 130:
        fn_80240384(p);
        break;
    case 131:
        fn_8006F26C(p);
        break;
    case 132:
        if (fn_800F6CD0(p + 0x178, lbl_8035F0E4) != 0) fn_8006F26C(p);
        break;
    case 133:
        fn_8006F1DC(p);
        break;
    case 134:
        if (fn_800F6CD0(p + 0x178, lbl_8035F0E4) != 0) fn_8006F1DC(p);
        break;
    case 135:
        fn_8006F2FC(p);
        break;
    case 136:
        if (fn_800F6CD0(p + 0x178, lbl_8035F0E4) != 0) fn_8006F2FC(p);
        break;
    case 137:
        fn_8007225C(I(0x118), PF(0x1e8));
        fn_802494A4(p, 10);
        break;
    case 138:
        fn_802494A4(p, 0x21);
        break;
    case 139:
        fn_8006EC5C(p, 0x45);
        break;
    case 140:
        fn_802494A4(p, 0x28);
        break;
    case 141:
        fn_8006EC5C(p, 99);
        break;
    case 142:
        fn_802494A4(p, 0xb);
        break;
    case 143:
        fn_8006DB6C(p);
        break;
    case 144:
        fn_8006EC5C(p, 0x67);
        fn_802494A4(p, 0x23);
        break;
    case 145:
        fn_802494A4(p, 0x13);
        break;
    case 146:
        return;
    case 147:
        fn_802494A4(p, 0xc);
        fn_8006DC14(p);
        break;
    case 148:
        I(0x150) = 1;
        break;
    case 149:
        fn_8007225C(I(0x118), *(f32 *)(I(0xe4) + 0x1a8) * PF(500));
        break;
    case 150:
        fn_80253250(*(int *)(lbl_8035B5E4 + 0x70) + *(int *)(lbl_8035B5E4 + 0x68) * 0x34);
        break;
    case 151:
        fn_8006B5A4(I(0x118));
        fn_8006EAD0(p, 0x17, 1, lbl_8035F0C0);
        fn_802494A4(p, 0);
        break;
    case 152:
        I(0x15c) = 1;
        break;
    case 153:
        fn_802494A4(p, 0x12);
        break;
    case 154:
        fn_8006EC5C(p, 4);
        break;
    case 155:
        fn_802494A4(p, 0x11);
        break;
    case 156:
        if (PF(0xec) < F(0x174)) {
            I(0x180) = I(0xe4);
            F(0x174) = PF(0xec);
            fn_800F6E88(p + 0x178, I(0xf0));
        }
        break;
    case 157:
        fn_802490E0(p, 0xb, PF(0x144));
        break;
    case 158:
        fn_8006ED08(p);
        break;
    case 159:
        fn_8006E2F8(p);
        break;
    case 160:
        fn_802494A4(p, 0);
        fn_8006E2F8(p);
        break;
    case 161:
        if (T(0x4cc) != 0) fn_8006ED08(p);
        break;
    case 162:
        fn_8006DD74(p);
        break;
    case 163: {
        int o = I(0x118);
        *(int *)(o + 0x6c4) = 1;
        if (*(int *)(o + 0x6cc) != 0) *(int *)(o + 0x6c8) = 1;
        break;
    }
    case 164:
        T(0x6c4) = 0;
        break;
    case 165:
        fn_8006C418(p);
        break;
    case 166:
        fn_8006F808(p);
        break;
    case 167:
        return;
    case 168: fn_8006CD00(p, 0, 0, 0); break;
    case 169: fn_8006CD00(p, 0, 0, 1); break;
    case 170: fn_8006CD00(p, 1, 1, 0); break;
    case 171: fn_8006CD00(p, 1, 1, 1); break;
    case 172: fn_8006CD00(p, 1, 2, 0); break;
    case 173: fn_8006CD00(p, 1, 2, 1); break;
    case 174: fn_8006CD00(p, 0, 1, 0); break;
    case 175: fn_8006CD00(p, 0, 1, 1); break;
    case 176:
        I(0x1ec) = 1;
        T(0x5e8) = 0;
        break;
    case 177:
        I(0x1ec) = 1;
        T(0x5e8) = 0;
        break;
    case 178:
        if (I(0x1ec) == 0) {
            I(0x1ec) = 1;
            T(0x5e8) = 0;
        } else {
            I(0x1ec) = 0;
            T(0x5e8) = 1;
        }
        break;
    case 179:
        if (*(void **)(p + 0xec) != 0 && PI(0xec) == 0) {
            I(0x1ec) = 0;
            T(0x5e8) = 1;
        }
        break;
    case 180:
        fn_8006EC5C(p, 4);
        fn_802494A4(p, 0);
        break;
    case 181: path(p, lbl_8035F0D0); break;
    case 182: path(p, lbl_8035F0F4); break;
    case 183: path(p, lbl_8035F0FC); break;
    case 184: path(p, lbl_8035F104); break;
    case 185: path(p, lbl_8035F10C); break;
    case 186: path(p, lbl_8035F114); break;
    case 187: path(p, lbl_8035F11C); break;
    case 188: path(p, lbl_8035F124); break;
    case 189: path(p, lbl_8035F12C); break;
    case 190: path(p, lbl_8035F134); break;
    case 191: path(p, lbl_8035F13C); break;
    case 192: path(p, lbl_8035F144); break;
    case 193: path(p, lbl_8035F14C); break;
    case 194: path(p, lbl_8035F154); break;
    case 195: path(p, lbl_8035F15C); break;
    case 196: path(p, lbl_8035F164); break;
    case 197: path(p, lbl_8035F16C); break;
    case 198: path(p, lbl_8035F174); break;
    case 199: path(p, lbl_8035F17C); break;
    case 200: path(p, lbl_8035F184); break;
    case 201: path(p, lbl_8035F18C); break;
    case 202: path(p, lbl_8035F194); break;
    case 203: path(p, lbl_8035F19C); break;
    case 204: path(p, lbl_8035F1A4); break;
    case 205: path(p, lbl_8035F1AC); break;
    case 206: path(p, lbl_8035F1B4); break;
    case 207:
        if (*(void **)(p + 0xf0) != 0 && *(int *)(T(600) + 0x300) == 0) fn_802410CC(p, I(0xf0), 0);
        break;
    case 208:
        if (*(void **)(p + 0xf0) != 0 && *(int *)(T(600) + 0x300) == 0) fn_80241028(p, I(0xf0), 0);
        break;
    case 209:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, I(0xf0), lbl_8035F1BC, 0, 1, I(0xec));
        break;
    case 210:
        fn_800716F0(p, 0);
        break;
    case 211:
        fn_800716F0(p, 1);
        break;
    case 212:
        fn_8007249C(I(0x118), 1);
        break;
    case 213:
        fn_8007249C(I(0x118), 0);
        fn_8007115C(p);
        break;
    case 214:
        fn_80076DFC(I(0x118), I(0xe4));
        break;
    case 215:
        fn_802494A4(p, 0x22);
        break;
    case 216:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, I(0xf0), lbl_8035F1BC, 0, 1, I(0xec));
        { int e = I(0xe0);
        *(f32 *)(e + 0x118) = F(0x1ac);
        *(f32 *)(e + 0x11c) = F(0x1b0);
        *(f32 *)(e + 0x120) = F(0x1b4);
        *(f32 *)(e + 0x154) = lbl_8035F0C0; }
        fn_802494A4(p, 0x1e);
        break;
    case 217:
        fn_802494A4(p, 0x1d);
        break;
    case 218:
        fn_802494A4(p, 0x1f);
        break;
    case 219:
        shot(p, "PlrShot2");
        break;
    case 220:
        shot(p, lbl_8035F1CC);
        break;
    case 221: {
        u8 buf[8];
        fn_8002FD10(lbl_8035B684, buf);
        GV->go(buf);
        fn_80072BA8(I(0x118));
        fn_802494A4(p, 0);
        break;
    }
    case 222:
        fn_802494A4(p, 0x27);
        break;
    case 223:
        VP(0x180)->send(lbl_8035F1D4, I(0x118), 0, 0, 0);
        break;
    case 224:
        I(600) = 1;
        break;
    case 225:
        I(600) = 0;
        break;
    case 226:
        I(0x25c) = 1;
        break;
    case 227:
        I(0x25c) = 0;
        break;
    case 228:
        fn_802494A4(p, 0x1b);
        break;
    case 229:
        gems(p);
        break;
    case 230:
        fn_80071EE0(I(0x118));
        break;
    case 231:
        fn_80071E68(I(0x118));
        break;
    case 232: fn_80072438(I(0x118), 2); break;
    case 233: fn_80072438(I(0x118), 4); break;
    case 234: fn_80072438(I(0x118), 8); break;
    case 235: fn_80072438(I(0x118), 0x10); break;
    case 236: fn_80072438(I(0x118), 0x20); break;
    case 237: fn_80072438(I(0x118), 0x40); break;
    case 238:
        fn_80072040(I(0x118), I(0xf0));
        break;
    case 239:
        fn_80071F54(I(0x118), I(0xf0), PF(0xec));
        break;
    case 240:
        GV->go(lbl_8035EEA8);
    case 241:
        break;
    }
}
}

} /* extern "C" */
