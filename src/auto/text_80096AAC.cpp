// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void getPos(void *p, int a, int b, int c, int d); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void hide(); virtual void w21(); virtual void show(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void w33(); virtual void w34(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
struct VE { virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9(); virtual void e10(); virtual void e11(); virtual void e12(); virtual void e13(); virtual void e14(); virtual void e15(); virtual void e16(); virtual void e17(); virtual void e18(); virtual void e19(); virtual void e20(); virtual void e21(); virtual void e22(); virtual void e23(); virtual void e24(); virtual void e25(); virtual void e26(); virtual void e27(); virtual void e28(); virtual void e29(); virtual void e30(); virtual void e31(); virtual void e32(); virtual void e33(); virtual void e34(); virtual void e35(); virtual void e36(); virtual void e37(); virtual void e38(); virtual void e39(); virtual void fire(u32 o, void *pos, char *grp, char *bone); virtual void ball(u32 o, f32 k, int a, char *grp, char *bone); };
struct VB8 { u8 pad_[8]; };
struct VR : VB8 { virtual void r2(); virtual void r3(); virtual void r4(); virtual void r5(); virtual void r6(); virtual u32 get(int a); };
struct VB2F0 { u8 pad_[0x2f0]; };
struct VG : VB2F0 { virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9(); virtual void g10(); virtual void g11(); virtual void g12(); virtual void g13(); virtual void g14(); virtual void go(char *s); };
static u8 sPad[2308] = {1};
static s32 tA[54] = {1};
static s32 tB[269] = {1};
static s32 tC[269] = {1};
typedef struct { f32 x, y, z; } V3;
const char *wG_strpool_80096AAC[] = { "MStation", "MFalling", "W_crumbl", "W_tenatt", "W_hitGLp", "CATVS010", "CATVS011", "CATVS012", "CATVS013", "EnemShot", "PlrShot2", "PlrShot3", "PlrShot4", "PlrShot5", "PlrShot6", "CamTrgt0", "CamTrgt1", "FallRset", "IDLEOVR1", "IDLEOVR2", "SPINSTOP", "FlmThrw1", "FlmThrw2", "ANIMOVER", "ANIMLOOP", "STRT_COL", "gemstart", "BEATGAME", "PLYRLIVE", "PLYRDEAD", "PATHOVER", "CHGPTH10", "CHGPTH11", "CHGPTH12", "CHGPTH13", "CHGPTH14", "CHGPTH15", "CHGPTH16", "CHGPTH17", "CHGPTH18", "CHGPTH19", "CHGPTH20", "CHGPTH21", "CHGPTH22", "CHGPTH23", "CHGPTH24" };
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern u8 *lbl_8035A1DC;
extern int lbl_80359F2C;
extern int lbl_8035B79C;
extern VG *lbl_8035B65C;
extern int lbl_8035B374;
extern volatile int lbl_8035A0A4;
extern int lbl_8035B684;
extern f32 lbl_8036139C, lbl_80361384, lbl_80361388, lbl_803613B0, lbl_803613B4, lbl_803613B8, lbl_803613C4, lbl_803613C8, lbl_803613CC, lbl_803613D0, lbl_803613E4;
extern char lbl_803611F4[4], lbl_80361358[4], lbl_80361360[4], lbl_80361368[4], lbl_8036136C[4], lbl_80361374[4], lbl_8036137C[4], lbl_8036138C[4], lbl_80361394[4], lbl_803613A0[4], lbl_803613A8[4], lbl_803613BC[4], lbl_803613D4[4], lbl_803613DC[4], lbl_803613E8[4], lbl_80361258[4];
extern char lbl_803613F0[4], lbl_803613F8[4], lbl_80361400[4], lbl_80361408[4], lbl_80361410[4], lbl_80361418[4], lbl_80361420[4], lbl_80361428[4], lbl_80361430[4], lbl_80361438[4], lbl_80361440[4], lbl_80361448[4], lbl_80361450[4], lbl_80361458[4], lbl_80361460[4], lbl_80361468[4], lbl_80361470[4], lbl_80361478[4], lbl_80361480[4], lbl_80361488[4], lbl_80361490[4], lbl_80361498[4], lbl_803614A0[4], lbl_803614A8[4], lbl_803614B0[4];
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
u32 fn_800F8274(u32, char *);
int fn_800F6CD0(int, void *);
void fn_800F6E88(void *, void *);
VR *fn_80207198(void *, const char *, int);
VO *fn_802288FC(u32, const char *);
VE *fn_80233550(int, char *);
void fn_8002C414(int);
void fn_8002C4DC(int);
void fn_8002FD3C(int);
void fn_8003C674(int, const char *, int **);
void fn_80098470(int);
void fn_80101414(V3 *, V3 *, f32);
void fn_80107244(u32, V3 *);
void fn_80107420(u32, V3 *);
void fn_801072C0(u32, V3 *);
int fn_8023F5E8(int, int);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_80240D70(int, int);
void fn_8024125C(int, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
int fn_80242144(int, int);
void fn_80242BC0(int, char *, int, int, int, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);
void fn_80268178(int, int);
void fn_8026820C(int, int);

#define E0 (*(u8 **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define F(o) (*(f32 *)(p + (o)))
#define PF(o) (**(f32 **)(p + (o)))
#define VP(o) (*(VO **)(p + (o)))

static inline void *FindRes(u8 *mgr, char *grp, char *name) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(mgr + 0x180, name);
    return fn_800F9788(mgr + 0x198, grp, name);
}
static inline int hit(int p, u32 part) {
    u32 *q = *(u32 **)(*(int *)(p + 0xec) + 0xc);
    int r;
    if (q[0] == part || q[1] == part) r = 1;
    else r = 0;
    return r;
}
static inline int hit0(int p, u32 part) {
    u32 *q = *(u32 **)(*(int *)(p + 0xec) + 0xc);
    return q[0] == part || q[1] == part;
}
static inline int hz(int e, u32 part, int r) {
    u32 *q = (u32 *)*(int *)(e + 0xc);
    if (q[0] == part || q[1] == part) r = 1;
    return r;
}
static inline int hitF(int e, int p) {
    u32 *q = *(u32 **)(e + 0xc);
    u32 a = I(0x1a8);
    int r;
    if (q[0] == a || q[1] == a) r = 1;
    else r = 0;
    return r;
}
static inline int hitE(int e, u32 part) {
    u32 *q = *(u32 **)(e + 0xc);
    int r;
    if (q[0] == part || q[1] == part) r = 1;
    else r = 0;
    return r;
}
static inline void scl(int p, f32 k) {
    u8 *o = *(u8 **)(p + 0xe4);
    f32 s = *(f32 *)(o + 600);
    *(f32 *)(o + 600) = s * k;
    fn_802405B8(p);
    *(f32 *)(o + 600) = s;
}
static inline void stopBeams(int p) {
    I(0x190) = 0;
    VP(0x1b0)->send(lbl_803613A0, 0, 0, 0, 0);
    I(0x18c) = 0;
    VP(0x1b4)->send(lbl_803613A0, 0, 0, 0, 0);
}
static inline void hp(int p) {
    int g = lbl_80359F2C;
    *(int *)(g + 0x174) = 2;
    *(f32 *)(g + 0x170) = lbl_803613C8;
}
static inline void lvl(int p) {
    f32 a = *(f32 *)(E0 + 0x1a8);
    f32 b = *(f32 *)(E0 + 0x1ac);
    if (b > a * PF(0x124)) I(0x17c) = 0;
    else if (b > a * PF(0x128)) I(0x17c) = 1;
    else if (b > a * PF(0x12c)) I(0x17c) = 2;
    else I(0x17c) = 3;
}
static inline void flame(int p, V3 *a, V3 *b, V3 *c) {
    VE *e;
    fn_80107244(I(0x19c), a);
    fn_80107420(I(0x19c), b);
    fn_801072C0(I(0x19c), c);
    fn_80101414(b, c, lbl_803613CC);
    b->x = b->x * lbl_803613D0;
    b->y = b->y * lbl_803613D0;
    b->z = b->z * lbl_803613D0;
    b->x = b->x + a->x;
    b->y = b->y + a->y;
    b->z = b->z + a->z;
    fn_8023F5E8(p, I(0x118));
    e = fn_80233550(lbl_8035B374, lbl_803613D4);
    if (e != 0) e->fire((u32)E0, b, lbl_803611F4, lbl_80361358);
}
static inline void path(int p, char *s) {
    fn_802494A4(p, 15);
    fn_80240274(p, 0);
    fn_80240948(p, s, 0);
}

void fn_80096AAC(int p, int st) {
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
        r = fn_80207198(lbl_8035A1DC + 0x3e0, "ATTMAXHP", 0);
        if (r != 0) I(0x1d0) = r->get(0);
        r = fn_80207198(lbl_8035A1DC + 0x3e0, "ATTCURHP", 0);
        if (r != 0) I(0x1cc) = r->get(0);
        *(u32 *)(E0 + 0x228) |= 1;
        I(0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        I(0x19c) = fn_800F8274(*(u32 *)(*(int *)(E0 + 0xa0) + 0xa8), lbl_80361358);
        I(0x1a0) = fn_800F8274(*(u32 *)(*(int *)(E0 + 0xa0) + 0xa8), lbl_80361360);
        I(0x1a4) = (int)FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_803611F4, lbl_80361368);
        I(0x1a8) = (int)FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_803611F4, lbl_8036136C);
        I(0x1ac) = (int)FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_803611F4, lbl_80361374);
        VP(0x1b0) = fn_802288FC(lbl_8035B308, lbl_8036137C);
        VP(0x1b4) = fn_802288FC(lbl_8035B308, "CrclDum0");
        VP(0x1b0)->show();
        VP(0x1b0)->hide();
        F(0x1c4) = lbl_80361384;
        F(0x1c8) = lbl_80361388;
        F(0x1b8) = PF(0x178);
        F(0x1bc) = lbl_80361388;
        fn_80242BC0(fn_80242144(p, 4), lbl_8036138C, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 3), lbl_80361394, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 6), lbl_80361394, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 7), lbl_8036138C, 0, 0, 0, 0);
        fn_802402E0(p);
        break;
    }
    case 1:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 8, 0, lbl_8036139C);
        fn_802401A0(p);
        break;
    case 2:
        I(0x18c) = 0;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, lbl_8036139C);
        fn_802401A0(p);
        fn_8002C414(lbl_80359F2C);
        I(0x190) = 0;
        VP(0x1b0)->send(lbl_803613A0, 0, 0, 0, 0);
        I(0x198) = 0;
        fn_80249008(p, 5);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        I(0x18c) = 0;
        VP(0x1b4)->send(lbl_803613A0, 0, 0, 0, 0);
        fn_80268178(lbl_8035B79C, 14);
        if (*(void **)(p + 0x170) != 0 && fn_800F6CD0(I(0x170), lbl_803611F4) == 0)
            __ct__9C80253F24Fiiii(lbl_8035B65C, (void *)I(0x170), 0, 0, 0);
        break;
    case 3:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 4, 0, lbl_8036139C);
        break;
    case 4:
        return;
    case 5:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8036139C);
        break;
    case 6:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 8, 0, lbl_8036139C);
        break;
    case 7:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 3, 0, lbl_8036139C);
        break;
    case 8:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 5, 0, lbl_8036139C);
        I(0x190) = 0;
        I(0x18c) = 1;
        VP(0x1b4)->send(lbl_803613A8, 0, 0, 0, 0);
        break;
    case 9: {
        V3 v;
        char nm[8];
        fn_80240274(p, 0);
        fn_8026820C(lbl_8035B79C, 14);
        I(0x1d8) = 1;
        I(0x17c) = 0;
        *(u32 *)(E0 + 0x228) &= ~1;
        ((VO *)E0)->getPos(&v, 0, 0, 0, 0);
        v.z = lbl_803613B0;
        *(f32 *)(E0 + 0x1a8) = PF(0x11c);
        *(f32 *)(E0 + 0x1ac) = *(f32 *)(E0 + 0x1a8);
        **(f32 **)(p + 0x1d0) = *(f32 *)(E0 + 0x1a8);
        **(f32 **)(p + 0x1cc) = *(f32 *)(E0 + 0x1ac);
        F(0x1bc) = lbl_803613B4;
        F(0x1c4) = lbl_80361384;
        F(0x1c8) = lbl_803613B8;
        fn_800F6E88(nm, (void *)"LavaStrt");
        VP(0x118)->send((void *)"TELEPORT", 0, 0, nm, 0);
        fn_80242BC0(fn_80242144(p, 3), lbl_8036138C, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 4), lbl_80361394, 0, 0, 0, 0);
        fn_80241628(p, 0, 0);
        fn_80098470(p);
        break;
    }
    case 10:
        I(0x18c) = 0;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 13, 0, lbl_8036139C);
        fn_802401A0(p);
        fn_8002C414(lbl_80359F2C);
        I(0x190) = 0;
        VP(0x1b0)->send(lbl_803613A0, 0, 0, 0, 0);
        I(0x198) = 0;
        fn_80249008(p, 5);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        I(0x18c) = 0;
        VP(0x1b4)->send(lbl_803613A0, 0, 0, 0, 0);
        fn_80268178(lbl_8035B79C, 14);
        if (*(void **)(p + 0x174) != 0 && fn_800F6CD0(I(0x174), lbl_803611F4) == 0)
            __ct__9C80253F24Fiiii(lbl_8035B65C, (void *)I(0x174), 0, 0, 0);
        break;
    case 11:
        return;
    case 12:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 10, 0, lbl_8036139C);
        fn_802490E0(p, 4, PF(0x168));
        break;
    case 13:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 0, 0);
        fn_80241628(p, 1, 0);
        fn_80241588(p, 8, 0, lbl_8036139C);
        I(0x198) = 0;
        break;
    case 14:
        fn_80241628(p, 2, 0);
        fn_80241588(p, 8, 0, lbl_8036139C);
        break;
    case 15:
        fn_802401D0(p);
        **(f32 **)(p + 0x1d0) = *(f32 *)(E0 + 0x1a8);
        fn_8002C4DC(lbl_80359F2C);
        fn_8026820C(lbl_8035B79C, 14);
        break;
    case 16:
        stopBeams(p);
        I(0x184) = 0;
        break;
    case 17:
        **(f32 **)(p + 0x1d0) = *(f32 *)(E0 + 0x1a8);
        fn_8002C4DC(lbl_80359F2C);
        break;
    case 18:
        I(0x198) = 0;
        fn_80249008(p, 5);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        break;
    case 19:
        fn_802401D0(p);
        **(f32 **)(p + 0x1d0) = *(f32 *)(E0 + 0x1a8);
        **(f32 **)(p + 0x1cc) = *(f32 *)(E0 + 0x1ac);
        fn_8002C4DC(lbl_80359F2C);
        fn_8026820C(lbl_8035B79C, 14);
        break;
    case 20:
        fn_80098470(p);
        break;
    case 21:
        if (I(0xdc) == 5) fn_80098470(p);
        break;
    case 22:
        if (I(0xdc) == 12) fn_80098470(p);
        break;
    case 23:
        fn_802494A4(p, 5);
        break;
    case 24:
        if (hit(p, (u32)I(0x1a8)) == 1) {
            f32 d = -PF(0x164);
            VP(0x118)->send(lbl_803613BC, (u32)E0, 0, &d, 0);
        }
        break;
    case 25: {
        f32 d = -PF(0x164);
        VP(0x118)->send(lbl_803613BC, (u32)E0, 0, &d, 0);
        break;
    }
    case 26: {
        f32 d = -PF(0x16c);
        VP(0x118)->send(lbl_803613BC, (u32)E0, 0, &d, 0);
        break;
    }
    case 27: {
        int r;
        u32 av;
        u32 *h;
        int e;
        I(0x1d4) = r = 0;
        e = I(0xec);
        av = I(0x1a4);
        h = (u32 *)*(int *)(e + 0xc);
        if (h[0] == av || h[1] == av) r = 1;
        if (r == 1) {
            if (I(0x18c) == 1) {
                I(0x1d4) = 1;
                fn_80240D70(p, -1);
                scl(p, PF(0x15c));
            }
        } else if (hitF(e, p) == 1) {
            scl(p, lbl_803613C4);
        } else {
            scl(p, PF(0x158));
        }
        **(f32 **)(p + 0x1cc) = *(f32 *)(E0 + 0x1ac);
        break;
    }
    case 28:
        fn_80241588(p, 12, 0, lbl_8036139C);
        break;
    case 29:
        hp(p);
        lvl(p);
        break;
    case 30:
        hp(p);
        if (I(0x1d4) == 1 && I(0xdc) != 14) {
            fn_80241588(p, 14, 0, lbl_8036139C);
            I(0x190) = 0;
            VP(0x1b0)->send(lbl_803613A0, 0, 0, 0, 0);
            fn_802490E0(p, 2, PF(0x160));
        }
        lvl(p);
        break;
    case 31:
        fn_802494A4(p, 2);
        break;
    case 32:
        stopBeams(p);
        fn_802494A4(p, 2);
        break;
    case 33:
        fn_802494A4(p, 10);
        break;
    case 34:
        stopBeams(p);
        fn_802494A4(p, 10);
        break;
    case 35: {
        V3 a;
        V3 c;
        V3 b;
        fn_802491DC(p, 5);
        flame(p, &a, &b, &c);
        break;
    }
    case 36: {
        VE *e;
        fn_8023F5E8(p, I(0x118));
        e = fn_80233550(lbl_8035B374, lbl_803613DC);
        if (e != 0) {
            fn_8024125C(p, 0);
            e->ball((u32)E0, lbl_803613E4, 1, lbl_803611F4, lbl_80361358);
        }
        break;
    }
    case 37:
        I(0x190) = 1;
        VP(0x1b0)->send(lbl_80361258, 0, 0, 0, 0);
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 1, 0);
        fn_8024125C(p, 1);
        I(0x18c) = 0;
        VP(0x1b4)->send(lbl_803613A0, 0, 0, 0, 0);
        break;
    case 38:
        I(0x190) = 0;
        VP(0x1b0)->send(lbl_803613A0, 0, 0, 0, 0);
        break;
    case 39: {
        V3 a;
        V3 c;
        V3 b;
        fn_80241628(p, 0, 0);
        I(0x198) = 1;
        flame(p, &a, &b, &c);
        fn_802491DC(p, 5);
        fn_8023F9C8(p, 0);
        fn_8023F9C8(p, 1);
        fn_8024125C(p, 2);
        break;
    }
    case 40:
        fn_80241628(p, 0, 0);
        break;
    case 41:
        fn_802494A4(p, 9);
        break;
    case 42: {
        int *volatile r = 0;
        fn_8003C674(*(volatile int *)&lbl_8035A0A4, "BeatGame", (int **)&r);
        { int *t = r; if (t != 0) *t = 2; }
        fn_8002FD3C(lbl_8035B684);
        lbl_8035B65C->go(lbl_803613E8);
        break;
    }
    case 43:
        I(0x1dc) = 0;
        break;
    case 44:
        I(0x1dc) = 0;
        fn_80098470(p);
        break;
    case 45:
        I(0x1dc) = 1;
        break;
    case 46:
        fn_802494A4(p, 15);
        fn_802402E0(p);
        break;
    case 47:
        fn_802401D0(p);
        fn_80098470(p);
        break;
    case 48: path(p, lbl_803613F0); break;
    case 49: path(p, lbl_803613F8); break;
    case 50: path(p, lbl_80361400); break;
    case 51: path(p, lbl_80361408); break;
    case 52: path(p, lbl_80361410); break;
    case 53: path(p, lbl_80361418); break;
    case 54: path(p, lbl_80361420); break;
    case 55: path(p, lbl_80361428); break;
    case 56: path(p, lbl_80361430); break;
    case 57: path(p, lbl_80361438); break;
    case 58: path(p, lbl_80361440); break;
    case 59: path(p, lbl_80361448); break;
    case 60: path(p, lbl_80361450); break;
    case 61: path(p, lbl_80361458); break;
    case 62: path(p, lbl_80361460); break;
    case 63: path(p, lbl_80361468); break;
    case 64: path(p, lbl_80361470); break;
    case 65: path(p, lbl_80361478); break;
    case 66: path(p, lbl_80361480); break;
    case 67: path(p, lbl_80361488); break;
    case 68: path(p, lbl_80361490); break;
    case 69: path(p, lbl_80361498); break;
    case 70: path(p, lbl_803614A0); break;
    case 71: path(p, lbl_803614A8); break;
    case 72: path(p, lbl_803614B0); break;
    case 73:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, I(0xf0), lbl_8036139C, 0, 1, I(0xec));
    case 74:
        break;
    }
}
}

} /* extern "C" */
