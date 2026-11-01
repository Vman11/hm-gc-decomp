// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void getPos(void *p, void *a, void *b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void w33(); virtual void w34(); virtual void send(void *msg, u32 to, int a, void *d, void *e); };
struct VE { virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9(); virtual void e10(); virtual void e11(); virtual void e12(); virtual void e13(); virtual void e14(); virtual void e15(); virtual void e16(); virtual void e17(); virtual void e18(); virtual void e19(); virtual void e20(); virtual void e21(); virtual void e22(); virtual void e23(); virtual void e24(); virtual void e25(); virtual void e26(); virtual void e27(); virtual void e28(); virtual void e29(); virtual void e30(); virtual void e31(); virtual void e32(); virtual void e33(); virtual void e34(); virtual void e35(); virtual void e36(); virtual void e37(); virtual void e38(); virtual void e39(); virtual void fire(u32 o, void *pos, char *grp, char *bone); virtual void ball(u32 o, f32 k, int a, char *grp, char *bone); };
struct VB8 { u8 pad_[8]; };
struct VR : VB8 { virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5(); virtual void r6(); virtual u32 get(int a); };
static u8 sPad[2568] = {1};
static s32 tA[56] = {1};
static s32 tB[205] = {1};
static s32 tC[205] = {1};
typedef struct { f32 x, y, z; } V3;
const char *wG_strpool_800AC4A0[] = { "MStation", "A_Dsapir", "A_Dsapi2", "FADELOOP", "A_Dsloop", "SUMMLOOP", "A_sumnLp", "A_chukle", "A_gematk", "CINEMA01", "CATVS01B", "CINEMA03", "CINEMA04", "CINEMA05", "CINEMA06", "CINEMA07", "CINEMA08", "CINEMA09", "OOTNS235", "OOTNS238", "OOTNS239", "OOTNS241", "OOTNS242", "OOTNS243", "OOTNS244", "OOTNS245", "OOTNS246", "ZEKEHURT", "PlrShot4", "PlrShot2", "PlrShot5", "PlrShot3", "PlrShot6", "LightTog", "SPATKOVR", "CFADEOVR", "INVISOVR", "ANIMOVER", "ACTIVATE", "STRT_COL", "PLYRDEAD", "PLYRLIVE", "PATHOVER", "CHGPTH10", "CHGPTH11", "CHGPTH12", "CHGPTH13", "CHGPTH14", "CHGPTH15", "CHGPTH16", "CHGPTH17", "CHGPTH18", "CHGPTH19", "CHGPTH20", "CHGPTH21", "CHGPTH22", "CHGPTH23", "CHGPTH24", "CHGANIMF", "LIGHTOFF" };
extern u32 lbl_8035B308;
extern u8 *lbl_8035A1DC;
extern int lbl_80359F2C;
extern int lbl_8035B79C;
extern void *lbl_8035B65C;
extern int lbl_8035B374;
extern int lbl_8035A0A4;
extern int lbl_8035A02C;
extern f32 lbl_80362874, lbl_80362878, lbl_8036287C, lbl_80362880, lbl_80362884, lbl_803628A0, lbl_803628A4, lbl_803628A8, lbl_803628AC;
extern f64 lbl_803628B0, lbl_803628B8;
extern char lbl_803626D0[4], lbl_80362864[4], lbl_8036286C[4], lbl_80362888[4], lbl_80362890[4], lbl_80362898[4], lbl_80362988[4];
extern char lbl_803628C0[4], lbl_803628C8[4], lbl_803628D0[4], lbl_803628D8[4], lbl_803628E0[4], lbl_803628E8[4], lbl_803628F0[4], lbl_803628F8[4], lbl_80362900[4], lbl_80362908[4], lbl_80362910[4], lbl_80362918[4], lbl_80362920[4], lbl_80362928[4], lbl_80362930[4], lbl_80362938[4], lbl_80362940[4], lbl_80362948[4], lbl_80362950[4], lbl_80362958[4], lbl_80362960[4], lbl_80362968[4], lbl_80362970[4], lbl_80362978[4], lbl_80362980[4];
u32 rand(void);
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, void *);
VR *fn_80207198(void *, const char *, int);
VO *fn_802288FC(u32, const char *);
VE *fn_80233550(int, const char *);
void fn_8002C414(int);
void fn_8002C4DC(int);
int fn_8003C778(int, u32, int);
void fn_80039E80(int, int, f32);
void fn_80101820(V3 *);
void fn_8022BCD8(u32, const char *, char *);
void fn_8022BF30(u32, int, int, f32);
int fn_8022D694(u32);
void fn_8022D6FC(u32);
void fn_802273F0(u32, char *, char *, char *, int, f32);
int fn_8023F5E8(int, int);
void fn_8023F9C8(int, int);
int fn_80240028(int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_80240A8C(int, int, int);
void fn_80240C2C(int, int);
void fn_80240DBC(int, f32);
void fn_80241088(int, int);
void fn_8024125C(int, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
int fn_80242144(int, int);
void fn_80242BC0(int, char *, int, int, int, int);
void fn_80245E58(int, u32, V3 *);
int fn_80248630(int, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);
void fn_80268178(int, int);
void fn_8026820C(int, int);

#define E0 (*(u32 *)(p + 0xe0))
#define EO (*(VO **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define F(o) (*(f32 *)(p + (o)))
#define PF(o) (**(f32 **)(p + (o)))
#define PI(o) (**(int **)(p + (o)))
#define VP(o) (*(VO **)(p + (o)))

static inline f32 Sq(f32 x) {
    if (x > lbl_80362878) {
        const f64 _half = lbl_803628B0;
        const f64 _three = lbl_803628B8;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline void anim(int p, int n, int lv) {
    if (fn_80248630(I(0x108), 0) == 0) {
        fn_8024125C(p, n);
        I(0x17c) = lv;
    } else if (I(0x17c) < lv) {
        fn_80240C2C(p, n);
        I(0x17c) = lv;
    }
}
static inline void once(int p, int off, int n) {
    if (I(off) == 0) {
        I(off) = 1;
        anim(p, n, 20);
    }
}
static inline void fade(int p, int a, int b, int c, int d) {
    fn_8024125C(p, 17);
    fn_8023F9C8(p, 0);
    fn_8023F9C8(p, 1);
    fn_8023F9C8(p, 2);
    fn_8023F9C8(p, 3);
    fn_8022BF30(E0, a, b, lbl_80362878);
    fn_8022BF30(E0, c, d, lbl_80362874);
}
static inline void purge(int p) {
    VO *o = fn_802288FC(lbl_8035B308, lbl_80362864);
    if (o != 0) {
        o->send(lbl_8036286C, E0, 0, 0, 0);
        fn_80249008(p, 2);
    }
}
static inline void choose(int p) {
    if (I(0x144) != 0) fn_802494A4(p, 4);
    else switch (PI(0x11c)) {
    case 0: fn_802494A4(p, 8); break;
    case 1: fn_802494A4(p, 2); break;
    case 2: fn_802494A4(p, 2); break;
    case 3: fn_802494A4(p, 2); break;
    }
}
static inline void choose2(int p) {
    if (I(0x144) != 0) fn_802494A4(p, 4);
    else switch (PI(0x11c)) {
    case 0: fn_802494A4(p, 8); break;
    case 1:
        if (rand() & 1) fn_802494A4(p, 8);
        else fn_802494A4(p, 9);
        break;
    case 2: fn_802494A4(p, 10); break;
    case 3: fn_802494A4(p, 10); break;
    }
}
static inline void spawn(int p, V3 *v) {
    VO *o = fn_802288FC(lbl_8035B308, lbl_80362864);
    if (o != 0) {
        EO->getPos(v, 0, 0, 0, 0);
        o->send(lbl_80362888, E0, 0, 0, v);
        fn_802490E0(p, 2, PF(0x120));
    }
}
static inline void hp(int p) {
    int g = lbl_80359F2C;
    *(int *)(g + 0x174) = 2;
    *(f32 *)(g + 0x170) = lbl_803628A4;
    **(f32 **)(p + 0x178) = *(f32 *)(E0 + 0x1ac);
}
static inline void hpb(int p) {
    **(f32 **)(p + 0x178) = *(f32 *)(E0 + 0x1ac);
    **(f32 **)(p + 0x174) = *(f32 *)(E0 + 0x1a8);
    fn_8002C4DC(lbl_80359F2C);
    once(p, 0x154, 9);
}
static inline void path(int p, char *s) {
    fn_802494A4(p, 7);
    fn_80240274(p, 0);
    fn_80240948(p, s, 0);
}

void fn_800AC4A0(int p, int st) {
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
    case 0: {
        VR *r;
        fn_80241628(p, 0, 0);
        fn_802402E0(p);
        fn_8002C414(lbl_80359F2C);
        purge(p);
        fn_80268178(lbl_8035B79C, 14);
        r = fn_80207198(lbl_8035A1DC + 0x3e0, "ATTMAXHP", 0);
        if (r != 0) I(0x174) = r->get(0);
        r = fn_80207198(lbl_8035A1DC + 0x3e0, "ATTCURHP", 0);
        if (r != 0) I(0x178) = r->get(0);
        I(0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        if (fn_8003C778(lbl_8035A0A4, E0, p + 0x180) == 0) PI(0x180) = 0;
        fn_80240A8C(p, 0, 0);
        break;
    }
    case 1:
        if (I(0x160) != 0) I(0x164) = 1;
        *(f32 *)(E0 + 0x110) = lbl_80362874;
        fn_80240274(p, 0);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_80362878);
        fn_8022BCD8(E0, "AtticusF", lbl_803626D0);
        fade(p, 0, 1, 0xff, 1);
        fn_802490E0(p, 0, lbl_8036287C);
        break;
    case 2:
        *(f32 *)(E0 + 0x110) = lbl_80362874;
        fn_80240274(p, 0);
        fn_802401A0(p);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, lbl_80362880);
        fn_8022BCD8(E0, "AtticusF", lbl_803626D0);
        fade(p, 0xff, 1, 0, 0);
        fn_802490E0(p, 0, lbl_8036287C);
        break;
    case 3:
        fn_802491DC(p, 6);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_80362880);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 8, 0, lbl_80362880);
        I(0x18c) = 0;
        once(p, 0x170, 15);
        break;
    case 5:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 9, 0, lbl_80362880);
        break;
    case 6:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 10, 0, lbl_80362880);
        fn_8022BCD8(E0, "AtticusF", lbl_803626D0);
        fade(p, 0xff, 1, 0, 0);
        fn_802490E0(p, 0, lbl_8036287C);
        purge(p);
        fn_80240DBC(p, lbl_80362884);
        fn_80241088(p, 16);
        fn_802490E0(p, 4, PF(0x130));
        fn_8002C414(lbl_80359F2C);
        PI(0x180) = 1;
        fn_80268178(lbl_8035B79C, 14);
        break;
    case 7:
        *(f32 *)(E0 + 0x110) = lbl_80362874;
        fn_80241628(p, 1, 0);
        fn_80241588(p, 1, 0, lbl_80362880);
        fn_802401D0(p);
        break;
    case 8:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_80362880);
        if (I(0x160) == 0) {
            I(0x160) = 1;
            anim(p, 12, 20);
        } else if (I(0x164) != 0 && I(0x168) == 0) {
            I(0x168) = 1;
            anim(p, 13, 20);
        }
        I(0x18c) = 0;
        break;
    case 9: {
        int k;
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 2, 0);
        fn_80241588(p, 4, 0, lbl_80362880);
        k = rand() % 3;
        anim(p, k, 5);
        break;
    }
    case 10: {
        int k;
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 2, 0);
        fn_80241588(p, 5, 0, lbl_80362880);
        k = rand() % 3;
        anim(p, k, 5);
        break;
    }
    case 11:
        return;
    case 12:
        fn_802401D0(p);
        break;
    case 13:
        I(0x18c) = 0;
        break;
    case 14:
        if (I(0xdc) == 1) fn_80241588(p, 3, 0, lbl_80362880);
        break;
    case 15:
        if (I(0xdc) == 2) fn_80241588(p, 3, 0, lbl_80362880);
        break;
    case 16:
        fn_802494A4(p, 2);
        break;
    case 17:
        if (I(0xdc) == 6) {
            V3 v;
            fn_80241588(p, 7, 0, lbl_80362880);
            spawn(p, &v);
            fn_802490E0(p, 3, PF(0x124));
        }
        break;
    case 18:
        choose(p);
        break;
    case 19:
        fn_802494A4(p, 9);
        break;
    case 20:
        PI(0x180) = 0;
        fn_802494A4(p, 3);
        break;
    case 21: {
        V3 v;
        spawn(p, &v);
        break;
    }
    case 22:
        choose(p);
        break;
    case 23: {
        VE *e;
        fn_8023F5E8(p, I(0x118));
        e = fn_80233550(lbl_8035B374, "AttFbll2");
        if (e != 0) {
            fn_8024125C(p, 18);
            e->ball(E0, lbl_80362878, 0, lbl_803626D0, lbl_80362890);
        }
        break;
    }
    case 24: {
        u32 o;
        fn_8023F5E8(p, I(0x118));
        o = E0;
        fn_8024125C(p, 19);
        fn_802273F0(o, lbl_80362898, lbl_803626D0, lbl_80362890, 3, lbl_803628A0);
        break;
    }
    case 25:
        if (I(0x158) == 0) {
            I(0x158) = 1;
            anim(p, 10, 20);
        } else {
            int k = rand() % 3 + 3;
            anim(p, k, 10);
        }
        fn_802405B8(p);
        break;
    case 26:
        if (I(0x15c) == 0) {
            I(0x15c) = 1;
            anim(p, 11, 20);
        } else {
            int k = rand() % 3 + 6;
            anim(p, k, 10);
        }
        fn_802405B8(p);
        break;
    case 27:
        hp(p);
        break;
    case 28:
        hp(p);
        F(0x150) = F(0x150) + *(f32 *)(I(0xe4) + 600);
        if (F(0x150) >= PF(0x128)) {
            F(0x150) = lbl_80362878;
            I(0x18c) = 0;
            fn_802494A4(p, 2);
        } else if (I(0x18c) == 1) {
            I(0x18c) = 0;
            fn_802494A4(p, 5);
        }
        break;
    case 29:
        fn_802494A4(p, 6);
        break;
    case 30:
        fn_80039E80(lbl_8035A02C, 1, lbl_80362884);
        fn_802490E0(p, 5, lbl_803628A8);
        break;
    case 31:
        __ct__9C80253F24Fiiii(lbl_8035B65C, (void *)I(0x12c), 0, 0, 0);
        fn_80039E80(lbl_8035A02C, 0, lbl_80362884);
        break;
    case 32: {
        V3 rt;
        V3 up;
        V3 dir;
        V3 tp;
        V3 fw;
        V3 a;
        V3 pos;
        V3 pt2;
        V3 pt;
        V3 me;
        f32 best;
        u32 i;
        int bi;
        best = lbl_803628AC;
        bi = 0;
        VP(0x118)->getPos(&me, 0, 0, 0, 0);
        for (i = 0; i < *(u32 *)(fn_80240028(p) + 0xc); i++) {
            f32 d;
            f32 dx, dy, dz;
            fn_80245E58(fn_80240028(p), i, &pt);
            dx = me.x - pt.x;
            dy = me.y - pt.y;
            dz = me.z - pt.z;
            d = Sq(dx * dx + dy * dy + dz * dz);
            if (d < best && d > PF(0x13c)) {
                best = d;
                bi = i;
            }
        }
        if (I(0x14c) == bi) {
            int c = fn_80240028(p);
            bi = (u32)(I(0x14c) + 1) % *(u32 *)(c + 0xc);
        }
        I(0x14c) = bi;
        EO->getPos(&pos, &a, &fw, 0, 0);
        VP(0x118)->getPos(&tp, 0, 0, 0, 0);
        fn_80245E58(fn_80240028(p), bi, &pt2);
        dir.x = lbl_80362878;
        dir.y = lbl_80362878;
        dir.z = lbl_80362878;
        up.x = lbl_80362878;
        up.y = lbl_80362878;
        up.z = lbl_80362878;
        dir.x = tp.x - pt2.x;
        dir.y = tp.y - pt2.y;
        dir.z = tp.z - pt2.z;
        fn_80101820(&dir);
        up = fw;
        rt.x = dir.y * up.z - dir.z * up.y;
        rt.y = dir.z * up.x - dir.x * up.z;
        rt.z = dir.x * up.y - dir.y * up.x;
        EO->setPos(&pt2, &dir, &up, &rt, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 33:
        *(f32 *)(E0 + 0x110) = lbl_80362874;
        break;
    case 34:
        I(0x144) = 1;
        break;
    case 35:
        I(0x144) = 1;
        fn_802494A4(p, 4);
        break;
    case 36:
        I(0x144) = 0;
        break;
    case 37:
        I(0x144) = 0;
        choose2(p);
        break;
    case 38:
        choose2(p);
        break;
    case 39:
        fn_802494A4(p, 3);
        break;
    case 40:
        fn_802402E0(p);
        break;
    case 41:
        once(p, 0x16c, 14);
        break;
    case 42:
        fn_802494A4(p, 7);
        fn_802402E0(p);
        break;
    case 43:
        hpb(p);
        choose2(p);
        break;
    case 44:
        hpb(p);
        fn_8022D6FC(E0);
        choose2(p);
        fn_8026820C(lbl_8035B79C, 14);
        break;
    case 45: path(p, lbl_803628C0); break;
    case 46: path(p, lbl_803628C8); break;
    case 47: path(p, lbl_803628D0); break;
    case 48: path(p, lbl_803628D8); break;
    case 49: path(p, lbl_803628E0); break;
    case 50: path(p, lbl_803628E8); break;
    case 51: path(p, lbl_803628F0); break;
    case 52: path(p, lbl_803628F8); break;
    case 53: path(p, lbl_80362900); break;
    case 54: path(p, lbl_80362908); break;
    case 55: path(p, lbl_80362910); break;
    case 56: path(p, lbl_80362918); break;
    case 57: path(p, lbl_80362920); break;
    case 58: path(p, lbl_80362928); break;
    case 59: path(p, lbl_80362930); break;
    case 60: path(p, lbl_80362938); break;
    case 61: path(p, lbl_80362940); break;
    case 62: path(p, lbl_80362948); break;
    case 63: path(p, lbl_80362950); break;
    case 64: path(p, lbl_80362958); break;
    case 65: path(p, lbl_80362960); break;
    case 66: path(p, lbl_80362968); break;
    case 67: path(p, lbl_80362970); break;
    case 68: path(p, lbl_80362978); break;
    case 69: path(p, lbl_80362980); break;
    case 70:
        if (*(void **)(p + 0xf0) != 0) {
            f32 *e = *(f32 **)(p + 0xec);
            if (e != 0 && lbl_80362878 != *e) {
                int k = (int)*e;
                fn_8022BCD8(E0, "AtticusF", lbl_803626D0);
                if (k == -1) fade(p, 0xff, 1, 0, 0);
                if (k == 1) fade(p, 0, 1, 0xff, 1);
                fn_802490E0(p, 0, lbl_8036287C);
            }
            fn_802413D8(p, I(0xf0), lbl_80362880, 0, 1, I(0xec));
        }
        break;
    case 71:
        if (*(void **)(p + 0xec) != 0 && *(void **)(p + 0xf0) != 0) {
            f32 v;
            fn_802413D8(p, I(0xf0), lbl_80362880, 0, 0, 0);
            v = PF(0xec);
            *(f32 *)(fn_8022D694(E0) + 4) = v;
        }
        break;
    case 72:
        I(0x188) = 1;
        break;
    case 73:
        I(0x188) = 0;
        break;
    case 74:
        if (PI(0x140) != 0) {
            PI(0x180) = 0;
            fn_80242BC0(fn_80242144(p, 4), lbl_80362988, 0, 0, 0, 0);
        }
        break;
    case 75:
        if (PI(0x140) != 0) {
            PI(0x180) = 0;
            fn_80242BC0(fn_80242144(p, 4), lbl_80362988, 0, 0, 0, 0);
            fn_802494A4(p, 0);
        }
        break;
    case 76:
        if (PI(0x140) != 0 && PI(0x180) == 0 && I(0x188) == 0) {
            *(u32 *)(E0 + 0xb4) |= 4;
            I(0x184) = 1;
        }
    case 77:
        break;
    }
}
}

} /* extern "C" */
