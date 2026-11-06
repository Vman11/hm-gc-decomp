#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, void *b, void *c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void show(); virtual void hide(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
static u8 sPad[928] = {1};
static s32 tA[15] = {1};
static s32 tB[36] = {1};
static s32 tC[36] = {1};
typedef struct { f32 x, y, z; } V3;
typedef struct { u32 a[5]; } S5;
const char *wG_strpool_8009DD24[] = { "MStation", "ATTARGET", "STRT_COL", "MUSMATTK", "MUSMSAFE", "MUSMNSAF", "PLYRDEAD", "PLYRLIVE" };
extern u32 lbl_8035B308;
extern void *lbl_8035B530;
extern void *lbl_8035B65C;
extern void *lbl_8035A244;
extern f32 lbl_80361948;
extern char lbl_803618E0[4];
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
f32 fn_80101590(V3 *, V3 *);
VO *fn_802288FC(u32, void *);
void __ct__9C80253F24Fiiii(void *, const char *, void *, int, void *);
int fn_8023F4A0(int, char *, char *, const char *, int);
void fn_8023F764(int, u32 *, S5);
void fn_8023FA2C(int, u32 *, S5);
void fn_80240A8C(int, int, int);
void fn_80240C2C(int, int);
void fn_80240D70(int, int);
void fn_8024125C(int, int);
void fn_80241628(int, int, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802494A4(int, int);
void fn_80257A4C(int, V3 *);

#define E0 (*(VO **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define PV(o) (*(void **)(p + (o)))
#define ARR (*(u32 **)(p + 0x144))
#define LST (*(int **)(p + 0x140))

void fn_8023F764_(int, u32 *, S5);
static inline void i0(int p, char *b) { S5 s = {(u32)b, 1, 0, 0, 0}; fn_8023F764_(p, 0, s); }
static inline void loadA(int p, char *buf) {
    u32 i;
    for (i = 0; i < *(u32 *)(LST[0] + 0x10); i++) {
        fn_800F6E88(buf, (void *)(LST[3] + i * 8));
        {
            S5 s = {(u32)buf, 1, 0, 0, 0};
            if (ARR[i] != 0) fn_8023F764(p, &ARR[i], s);
            ARR[i] = 0;
            if (fn_800F6CD0(buf, lbl_803618E0) == 0) fn_8023FA2C(p, &ARR[i], s);
        }
    }
}
static inline void loadC(int p, char *buf) {
    u32 i;
    for (i = 0; i < *(u32 *)(LST[0] + 0x10); i++) {
        fn_800F6E88(buf, (void *)(LST[3] + i * 8));
        {
            S5 s = {(u32)buf, 1, 0, 0, 0};
            if (ARR[i] != 0) fn_8023F764(p, &ARR[i], s);
            ARR[i] = 0;
        }
    }
}

static inline void init(int p) {
        u32 n;
        u32 i;
        fn_80241628(p, 0, 0);
        if (I(0x194) != 0) E0->getPos((void *)(p + 0x168), (void *)(p + 0x174), 0, (void *)(p + 0x180), 0);
        else I(0x1a0) = 1;
        I(0x140) = fn_8023F4A0(p, lbl_803618E0, lbl_803618E0, "aaMovingEffects", 1);
        n = *(u32 *)(LST[0] + 0x10);
        if (ARR == 0) {
            if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B530);
            ARR = new u32[n];
            fn_800F7E98();
            if (ARR == 0) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < n; i++) ARR[i] = 0;
        }
        I(0x148) = 0;
        I(0x190) = 0;
        I(0x194) = 0;
        I(0x198) = 0;
        *(u32 *)((int)E0 + 0xb4) &= ~4;
        fn_802494A4(p, 2);
}
void fn_8009DD24(int p, int st) {
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
        init(p);
        break;
    case 1:
        fn_80241628(p, 0, 0);
        fn_80240D70(p, -1);
        break;
    case 2:
        if (**(int **)(p + 0x12c) != 0) {
            fn_80241628(p, 1, 0);
            fn_80240A8C(p, 0, 0);
            char buf[8];
            loadA(p, buf);
            I(0x1a4) = 1;
        }
        if (**(int **)(p + 0x130) != 0) fn_802490E0(p, 0, **(f32 **)(p + 0x13c));
        break;
    case 3: {
        char act[8];
        char nm[8];
        char buf[8];
        V3 r;
        V3 c;
        V3 b;
        V3 a;
        VO *o;
        f32 f;
        fn_80241628(p, 2, 0);
        fn_800F6E88(act, (void *)"ACTIVATE");
        o = fn_802288FC(lbl_8035B308, PV(0x11c));
        if (o != 0) o->send(act, E0, 0, 0, 0);
        E0->getPos(&a, &b, 0, 0, 0);
        (*(VO **)(lbl_8035B308 + 0x48))->getPos(&c, 0, 0, 0, 0);
        f = -fn_80101590(&a, &c);
        b.x *= f;
        b.y *= f;
        b.z *= f;
        r.x = a.x + b.x;
        r.y = a.y + b.y;
        r.z = a.z + b.z;
        fn_80257A4C(*(int *)(I(0xc0) + 8), &r);
        { int e = (int)E0;
        *(f32 *)(e + 0x118) = b.x;
        *(f32 *)(e + 0x11c) = b.y;
        *(f32 *)(e + 0x120) = b.z;
        *(f32 *)(e + 0x154) = lbl_80361948; }
        __ct__9C80253F24Fiiii(lbl_8035B65C, "MUSMATTK", 0, 0, 0);
        fn_800F6E88(nm, (void *)((int)E0 + 0x8c));
        __ct__9C80253F24Fiiii(lbl_8035B65C, "C_TARGET", E0, 0, nm);
        loadA(p, buf);
        fn_8024125C(p, 0);
        break;
    }
    case 4:
        return;
    case 5: {
        char buf[8];
        fn_80249008(p, 0);
        if (PV(0x140) != 0) loadC(p, buf);
        I(0x1a4) = 0;
        fn_80240D70(p, -1);
        break;
    }
    case 6: {
        char buf[8];
        if (lbl_8035A244 == E0) __ct__9C80253F24Fiiii(lbl_8035B65C, "C_TARGET", E0, 0, 0);
        if (PV(0x140) != 0) loadC(p, buf);
        fn_80240D70(p, -1);
        break;
    }
    case 7:
        fn_802494A4(p, 2);
        break;
    case 8:
        fn_802494A4(p, 1);
        break;
    case 9: {
        char da[8];
        VO *o;
        fn_800F6E88(da, (void *)"DEACTIV8");
        o = fn_802288FC(lbl_8035B308, PV(0x11c));
        if (o != 0) o->send(da, E0, 0, 0, 0);
        o = fn_802288FC(lbl_8035B308, PV(0x120));
        if (o != 0) o->send(PV(0x124), E0, 0, PV(0x128), 0);
        break;
    }
    case 10:
        I(0x198) = 1;
        break;
    case 11:
        fn_80249008(p, 0);
        I(0x148) = 1;
        E0->getPos(0, (void *)(p + 0x150), 0, (void *)(p + 0x15c), 0);
        *(f32 *)(p + 0x14c) = lbl_80361948;
        fn_80240C2C(p, 1);
        break;
    case 12:
        I(0x190) = 1;
        break;
    case 13:
        I(0x190) = 0;
        break;
    case 14:
        fn_802494A4(p, 0);
        break;
    case 15:
        I(0x19c) = 0;
        break;
    case 16:
        I(0x19c) = 1;
        break;
    case 17:
        I(0x18c) = 0;
        break;
    case 18:
        I(0x18c) = 1;
        break;
    case 19:
        break;
    }
}
}
