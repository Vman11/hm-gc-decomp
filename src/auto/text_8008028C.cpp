// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, void *b, void *c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void show(); virtual void hide(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
static u8 sPad[1100] = {1};
static s32 tA[23] = {1};
static s32 tB[76] = {1};
static s32 tC[76] = {1};
const char *wG_strpool_8008028C[] = { "MStation", "BACKWARD", "ANIMOVER", "PLYRNACT", "CHANNACT", "ACTIVATE", "DEACTIV8", "WAITONME", "SENDDIST", "PLYRDEAD", "SETGRATE" };
extern f32 lbl_8035FC14;
extern char lbl_8035FB50[4], lbl_8035FB74[4], lbl_8035FBC4[4], lbl_8035FBCC[4], lbl_8035FBF4[4], lbl_8035FBFC[4], lbl_8035FC18[4];
void fn_800819F0(int, const char *);
void fn_800820C4(int);
void fn_80083120(int, int);
void fn_8022A7A8(VO *);
void fn_8022AD0C(VO *);
void fn_80240DBC(int, f32);
void fn_80241628(int, int, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, int, int, int, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define PV(o) (*(void **)(p + (o)))
#define PI(o) (**(int **)(p + (o)))
#define FLG (**(u32 **)(p + 0x1b8))

#define isOn(p) ((FLG & I(0x1bc)) != 0 && (FLG & I(0x1c0)) == 0)
static inline void grab(int p) {
    if (PV(0xe4) != 0 && I(0x198) == 0) {
        PV(0x180) = PV(0xe4);
        (*(VO **)(p + 0x180))->send((void *)"WAITONME", 0, 0, 0, 0);
        I(0x198) = 1;
        I(0x19c) = 0;
    }
}
static inline void release(int p) {
    if (PV(0x180) != 0 && PV(0x180) != PV(0xe0) && I(0x19c) == 0) (*(VO **)(p + 0x180))->send(lbl_8035FBFC, 0, 0, 0, 0);
    I(0x198) = 0;
    I(0x19c) = 1;
    PV(0x180) = 0;
}
static inline void say(int p, char *s) { fn_80242BC0(fn_80242144(p, 1), s, 0, 0, 0, 0); }
static inline void unact(int p) {
    I(0x1a0) = 0;
    if (I(0x1a4) != 0) {
        fn_80240DBC(p, lbl_8035FC14);
        I(0x1a4) = 0;
    }
}
static inline void go4(int p) {
    I(0x1a0) = 1;
    I(0x18c) = 0;
    grab(p);
    fn_802494A4(p, 4);
}
static inline void go2(int p) {
    I(0x1a0) = 1;
    grab(p);
    fn_802494A4(p, 2);
}
static inline void tryA(int p) {
    if (PI(0x128) == 0) {
        if (isOn(p) && PI(0x124) == 0 && (PI(0x128) != 0 || I(0x188) == 0 || I(0x18c) == 0)) go4(p);
    } else {
        unact(p);
    }
}
static inline void tryB(int p) {
    if (isOn(p) && PI(0x124) == 0 && (PI(0x128) != 0 || I(0x188) == 0)) go4(p);
}

void fn_8008028C(int p, int st) {
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
        fn_80241628(p, 0, 0);
        fn_800820C4(p);
        break;
    case 1:
        fn_80083120(p, 0);
        fn_80241628(p, 0, 0);
        break;
    case 2:
        fn_80083120(p, 1);
        break;
    case 3:
        fn_80083120(p, 2);
        break;
    case 4:
        fn_80083120(p, 3);
        break;
    case 5:
        return;
    case 6:
        fn_802494A4(p, 3);
        release(p);
        say(p, lbl_8035FB74);
        break;
    case 7:
        fn_802494A4(p, 1);
        release(p);
        say(p, lbl_8035FB50);
        break;
    case 8:
        FLG &= ~I(0x1c0);
        say(p, lbl_8035FBC4);
        break;
    case 9:
        FLG &= ~I(0x1c0);
        say(p, lbl_8035FBC4);
        if (I(0x188) != 0 && isOn(p)) go2(p);
        break;
    case 10:
        FLG |= I(0x1c0);
        unact(p);
        say(p, lbl_8035FBCC);
        break;
    case 11:
        if (PI(0x128) == 0 && I(0x188) != 0 && isOn(p) && PI(0x124) == 0 && (PI(0x128) != 0 || I(0x188) == 0 || I(0x18c) == 0)) go4(p);
        FLG |= I(0x1c0);
        unact(p);
        say(p, lbl_8035FBCC);
        break;
    case 12:
        FLG |= I(0x1c0);
        say(p, lbl_8035FBCC);
        break;
    case 13: {
        if ((FLG & I(0x1c0)) == 0) {
            FLG |= I(0x1bc);
            E0->show();
            fn_8022AD0C(E0);
        }
        break;
    }
    case 14: {
        if ((FLG & I(0x1c0)) == 0) {
            FLG &= ~I(0x1bc);
            E0->hide();
            fn_8022A7A8(E0);
        }
        break;
    }
    case 15:
        I(0x1a8) = 0;
        I(0x188) = 1;
        if (PI(0x138) != 0) {
            if (isOn(p)) go2(p);
            fn_800819F0(p, lbl_8035FBF4);
        }
        break;
    case 16:
        I(0x1a8) = 0;
        if (PI(0x128) != 0 && PI(0x13c) != 0) tryB(p);
        I(0x188) = 1;
        fn_800819F0(p, lbl_8035FBF4);
        break;
    case 17:
        I(0x1a8) = 0;
        if (PI(0x128) != 0 && PI(0x13c) != 0) {
            tryB(p);
            I(0x188) = 1;
            fn_800819F0(p, lbl_8035FBF4);
        } else if (PI(0x13c) != 0) {
            tryB(p);
            fn_800819F0(p, lbl_8035FBF4);
        }
        break;
    case 18:
        I(0x1a8) = 0;
        I(0x188) = 1;
        if (PI(0x138) != 0) {
            if (isOn(p)) go2(p);
            fn_800819F0(p, lbl_8035FBF4);
        }
        break;
    case 19:
        I(0x1a8) = 1;
        if (isOn(p)) go2(p);
        fn_800819F0(p, lbl_8035FBF4);
        break;
    case 20:
        I(0x1a8) = 1;
        if (PI(0x128) != 0) tryB(p);
        fn_800819F0(p, lbl_8035FBF4);
        break;
    case 21:
        I(0x1a8) = 1;
        tryB(p);
        fn_800819F0(p, lbl_8035FBF4);
        break;
    case 22:
        I(0x1a8) = 1;
        if (isOn(p)) go2(p);
        fn_800819F0(p, lbl_8035FBF4);
        break;
    case 23:
        I(0x188) = 0;
        fn_800819F0(p, "CHANNACT");
        break;
    case 24:
        tryA(p);
        I(0x188) = 0;
        fn_800819F0(p, "CHANNACT");
        break;
    case 25:
        I(0x188) = 0;
        if (PI(0x130) != 0 && PI(0x128) == 0) fn_802490E0(p, 0, **(f32 **)(p + 0x134));
        fn_800819F0(p, "CHANNACT");
        break;
    case 26:
        tryA(p);
        I(0x188) = 0;
        fn_800819F0(p, "CHANNACT");
        break;
    case 27:
        fn_800819F0(p, "CHANNACT");
        break;
    case 28:
        tryA(p);
        fn_800819F0(p, "CHANNACT");
        break;
    case 29:
        if (PI(0x130) != 0 && PI(0x128) == 0) fn_802490E0(p, 0, **(f32 **)(p + 0x134));
        fn_800819F0(p, "CHANNACT");
        break;
    case 30:
        tryA(p);
        fn_800819F0(p, "CHANNACT");
        break;
    case 31:
        I(0x1a8) = 0;
        if (isOn(p)) go2(p);
        I(0x18c) = 1;
        break;
    case 32:
        I(0x1a8) = 0;
        if (isOn(p)) go2(p);
        I(0x18c) = 1;
        break;
    case 33:
        I(0x1a8) = 0;
        tryB(p);
        break;
    case 34:
        I(0x1a8) = 0;
        tryB(p);
        break;
    case 35:
        I(0x17c) = 1;
        break;
    case 36:
        I(0x184)++;
        break;
    case 37:
        I(0x184)--;
        break;
    case 38:
        if (isOn(p)) {
            s32 s = *(s32 *)(p + 0x60);
            if ((PI(0x138) != 0 && (s == 1 || s == 4)) || (PI(0x13c) != 0 && (s == 2 || s == 3)))
                (*(VO **)(p + 0xe4))->send(lbl_8035FC18, E0, 0, PV(0xec), I(0x160));
        }
        break;
    case 39:
        I(0x188) = 0;
        break;
    case 40:
        if (I(0x188) != 0 && isOn(p) && PI(0x124) == 0 && (PI(0x128) != 0 || I(0x188) == 0 || I(0x18c) == 0)) go4(p);
        break;
    case 41:
        if (I(0x188) != 0 && PI(0x130) != 0 && PI(0x128) == 0) {
            I(0x188) = 0;
            fn_802490E0(p, 0, **(f32 **)(p + 0x134));
        } else {
            I(0x188) = 0;
        }
        break;
    case 42:
        fn_802494A4(p, 1);
        break;
    case 43:
        fn_802494A4(p, 3);
        break;
    case 44:
        fn_802494A4(p, 0);
        break;
    case 45:
        fn_80249008(p, 0);
        I(0x17c) = 0;
        break;
    case 46:
        if (PV(0xec) != 0) {
            *(f32 *)(p + 0x1d0) = *(f32 *)PV(0xec);
            if (PV(0x1ac) != 0) (*(VO **)(p + 0x1ac))->send((void *)"SETGRATE", 0, 0, PV(0xec), 0);
        }
        break;
    case 47:
        break;
    }
}
}

} /* extern "C" */
