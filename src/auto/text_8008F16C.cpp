// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct C8018E150 { C8018E150(); u8 pad_[0xa8]; };
extern "C" {
struct VO { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void getPos(void *p, int a, int b, int c, int d); virtual void setPos(void *p, int a, int b, int c, int d); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void send(void *msg, u32 to, int a, void *d, void *e); };
struct VE { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void fire(u32 o, void *pos, char *grp, char *bone); };
static u8 sPad[1904] = {1};
static s32 tA[39] = {1};
static s32 tB[143] = {1};
static s32 tC[143] = {1};
typedef struct { f32 x, y, z; } V3;
const char *wG_strpool_8008F16C[] = { "MStation","BR_idle2","PlrShot4","PlrShot2","PlrShot5","PlrShot3","PlrShot6","FADEOVER","IDLEOVER","PSTATOVR","SENDEVNT","ANIMOVER","ANIMLOOP","STRT_COL","ATTARGET","PLYRDEAD","PLYRLIVE","HITINVLN","PATHOVER" };
extern int lbl_8035B308;
extern int lbl_8035B460;
extern int lbl_8035B530;
extern int lbl_8035B65C;
extern int lbl_8035B374;
extern u32 lbl_803608E8;
extern f32 lbl_803608FC, lbl_80360900, lbl_80360904, lbl_80360908;
extern char lbl_80360740[4], lbl_803608EC[4], lbl_803608F4[4], lbl_8036090C[4];
extern char lbl_80360914[4], lbl_8036091C[4], lbl_80360924[4], lbl_8036092C[4], lbl_80360934[4], lbl_8036093C[4], lbl_80360944[4], lbl_8036094C[4], lbl_80360954[4], lbl_8036095C[4];
u32 rand(void);
int fn_800F6CD0(int, const char *);
u32 fn_800F8274(u32, const char *);
u32 fn_800F9398(int, const char *);
void fn_800F7EC0(int);
void fn_800F7E98(void);
void fn_800604C4(int, int, int, int);
void fn_8018DFAC(int, int, u32);
void fn_8019B7E8(int, int);
VE *fn_80233550(int, const char *);
void fn_8022BCD8(u32, const char *, char *);
void fn_8022BE28(u32, int);
void fn_8022BF30(u32, int, int, f32);
void fn_80236AC0(u32);
void fn_80236B14(u32);
int fn_8023F5E8(int, int);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_80240DBC(int, f32);
void fn_8024118C(int, int, int);
void fn_8024125C(int, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
int fn_80242144(int, int);
void fn_80242BC0(int, const char *, int, int, int, int);
void fn_80249008(int, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(u32 *)(p + 0xe0))
#define EO (*(VO **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define PF(o) (**(f32 **)(p + (o)))
#define PI(o) (**(int **)(p + (o)))
#define PU(o) (**(u32 **)(p + (o)))
#define VP(o) (*(VO **)(p + (o)))

static inline void skA(int p) {
    int *s = *(int **)(p + 0x144);
    if (s == 0) fn_8022BE28(E0, 0);
    else switch (*s) {
    case 2: fn_8022BCD8(E0, "Banshee2", lbl_80360740); break;
    case 1: default: fn_8022BE28(E0, 0); break;
    }
}
static inline void skB(int p) {
    int *s = *(int **)(p + 0x144);
    if (s == 0) fn_8022BCD8(E0, "BansheeF", lbl_80360740);
    else switch (*s) {
    case 2: fn_8022BCD8(E0, "Banshe2F", lbl_80360740); break;
    case 1: default: fn_8022BCD8(E0, "BansheeF", lbl_80360740); break;
    }
}
static inline void path(int p, char *s) {
    fn_802494A4(p, 0xb);
    fn_80240274(p, 0);
    fn_80240948(p, s, 0);
}
static inline void offs(int p) {
    fn_8023F864(p, 0);
    fn_8023F864(p, 1);
    fn_8023F864(p, 2);
    fn_8023F864(p, 3);
    fn_8023F864(p, 4);
    fn_8023F864(p, 5);
}

void fn_8008F16C(int p, int st) {
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
        skA(p);
        fn_80241628(p, 0, 0);
        I(0x118) = *(int *)(lbl_8035B308 + 0x48);
        I(0x170) = fn_800F8274(*(u32 *)(*(int *)(E0 + 0xa0) + 0xa8), lbl_803608EC);
        if (*(void **)(p + 0x16c) == 0) {
            u32 r = fn_800F9398(*(int *)(lbl_8035B460 + 8) + 0x90, lbl_803608F4);
            if ((void *)lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B530);
            *(C8018E150 **)(p + 0x16c) = new C8018E150;
            fn_800F7E98();
            if (*(void **)(p + 0x16c) == 0) fn_800604C4(-4, 0, 0, 0);
            if (*(void **)(p + 0x16c) != 0) {
                fn_8018DFAC(I(0x16c), *(int *)(lbl_8035B460 + 8), r);
                PU(0x16c) &= ~0x800;
                fn_8019B7E8(*(int *)(lbl_8035B65C + 0xc), I(0x16c));
            }
        }
        if (*(int *)(E0 + 0x114) == 0) {
            EO->getPos((void *)(p + 0x160), 0, 0, 0, 0);
            fn_802494A4(p, 2);
        }
        break;
    case 1:
        *(f32 *)(E0 + 0x110) = lbl_803608FC;
        fn_80241628(p, 1, 0);
        fn_80241588(p, 2, 0, lbl_80360900);
        break;
    case 2:
        skA(p);
        if (I(0x14c) != 0) fn_802494A4(p, 6);
        else if (*(void **)(p + 300) != 0 && PI(300) != 0) {
            fn_8023F5E8(p, I(0x118));
            fn_80241628(p, 3, 0);
            fn_80241588(p, 2, 0, lbl_80360900);
            fn_802491DC(p, 2);
        } else {
            fn_8023F5E8(p, I(0x118));
            fn_80241628(p, 2, 0);
            fn_80241588(p, 7, 0, lbl_80360900);
        }
        break;
    case 3:
        fn_8023F5E8(p, I(0x118));
        fn_80241628(p, 3, 0);
        fn_80241588(p, 1, 0, lbl_80360900);
        break;
    case 4:
        fn_80241628(p, 3, 0);
        I(0x148) = 1;
        fn_80241588(p, 0, 0, lbl_80360900);
        fn_802491DC(p, 0);
        fn_802490E0(p, 3, PF(0x138));
        PU(0x16c) |= lbl_803608E8;
        break;
    case 5:
        *(f32 *)(E0 + 0x110) = lbl_803608FC;
        fn_80249008(p, 1);
        fn_80241628(p, 0, 0);
        fn_802401A0(p);
        fn_802491DC(p, 6);
        fn_80241588(p, 4, 0, lbl_80360900);
        break;
    case 6:
        fn_802401A0(p);
        fn_80241628(p, 3, 0);
        fn_80241588(p, 3, 0, lbl_80360900);
        I(0x15c) = 0;
        skB(p);
        fn_8022BF30(E0, 0, 1, lbl_80360904);
        fn_8023F9C8(p, 2);
        fn_802490E0(p, 1, lbl_80360908);
        break;
    case 7:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_80360900);
        break;
    case 8:
        fn_802401A0(p);
        fn_80241628(p, 3, 0);
        fn_80241588(p, 2, 0, lbl_80360900);
        skB(p);
        fn_8022BF30(E0, 0, 1, lbl_80360904);
        fn_8023F9C8(p, 2);
        fn_802490E0(p, 1, lbl_80360908);
        fn_8024125C(p, 0);
        break;
    case 9:
        fn_802401A0(p);
        fn_8022BCD8(E0, "BansheeF", lbl_80360740);
        fn_8022BF30(E0, 0, 1, lbl_80360904);
        fn_80241628(p, 1, 0);
        fn_80241588(p, 2, 0, lbl_80360900);
        fn_802491DC(p, 2);
        fn_8024125C(p, 1);
        break;
    case 10:
        fn_802401D0(p);
        fn_80241628(p, 3, 0);
        fn_80241588(p, 3, 0, lbl_80360900);
        skB(p);
        skA(p);
        fn_8023F9C8(p, 5);
        fn_802490E0(p, 1, lbl_80360908);
        fn_8024125C(p, 0);
        break;
    case 11: {
        int i;
        *(f32 *)(E0 + 0x110) = lbl_803608FC;
        fn_80241628(p, 4, 0);
        fn_80241588(p, 2, 0, lbl_80360900);
        skB(p);
        skA(p);
        fn_8023F9C8(p, 5);
        fn_802490E0(p, 1, lbl_80360908);
        fn_802401D0(p);
        fn_80236AC0(E0);
        for (i = 0; i < I(0x5c); i++) fn_8024909C(p, i);
        offs(p);
        if (I(0x148) != 0) PU(0x16c) |= lbl_803608E8;
        break;
    }
    case 12:
        fn_80241628(p, 3, 0);
        fn_80241588(p, 2, 0, lbl_80360900);
        fn_802490E0(p, 4, PF(0x13c));
        break;
    case 13:
        return;
    case 14:
        fn_80249008(p, 0);
        fn_80249008(p, 3);
        I(0x148) = 0;
        PU(0x16c) &= ~0x800;
        break;
    case 15:
        fn_80249008(p, 6);
        break;
    case 16:
        I(0x15c) = 0;
        break;
    case 17:
        return;
    case 18:
        fn_802401D0(p);
        break;
    case 19:
        fn_802401D0(p);
        fn_80240DBC(p, lbl_80360908);
        break;
    case 20:
        fn_80249008(p, 4);
        break;
    case 21:
        fn_802494A4(p, 4);
        break;
    case 22:
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        fn_8023F9C8(p, 3);
        fn_8023F9C8(p, 4);
        fn_8023F9C8(p, 5);
        fn_8022BCD8(E0, "BansheeF", lbl_80360740);
        fn_8022BF30(E0, 0, 1, lbl_80360904);
        fn_802491DC(p, 1);
        fn_8024125C(p, 2);
        break;
    case 23:
        fn_802494A4(p, 2);
        break;
    case 24:
        if ((int)(rand() % 10) < 3) fn_802494A4(p, 6);
        break;
    case 25:
        I(0x150) = 0;
        fn_802405B8(p);
        break;
    case 26:
        fn_802405B8(p);
        break;
    case 27:
        I(0x150) = 1;
        fn_802405B8(p);
        break;
    case 28:
        *(f32 *)(E0 + 0x110) = lbl_803608FC;
        break;
    case 29:
        if (I(0x150) == 1) fn_802494A4(p, 7);
        break;
    case 30:
        fn_802494A4(p, 5);
        break;
    case 31:
        fn_802494A4(p, 3);
        break;
    case 32:
        I(0x14c) = 1;
        break;
    case 33:
        I(0x14c) = 1;
        fn_802494A4(p, 6);
        break;
    case 34:
        I(0x14c) = 0;
        break;
    case 35:
        I(0x14c) = 0;
        fn_802494A4(p, 2);
        break;
    case 36:
        fn_802401A0(p);
        I(0x14c) = 0;
        if (I(0x15c) == 1) {
            EO->setPos((void *)(p + 0x160), 0, 0, 0, 0);
            fn_802494A4(p, 10);
        }
        break;
    case 37:
        I(0x154) = I(0xe4);
        I(0x158) = I(0xec);
        EO->getPos((void *)(p + 0x160), 0, 0, 0, 0);
        fn_802494A4(p, 2);
        break;
    case 38: {
        V3 v;
        VE *e;
        VP(0x118)->getPos(&v, 0, 0, 0, 0);
        v.z = v.z + lbl_803608FC;
        { int *s = *(int **)(p + 0x144);
        if (s == 0) e = fn_80233550(lbl_8035B374, "BRingSht");
        else switch (*s) {
        case 2: e = fn_80233550(lbl_8035B374, "BRingSh2"); break;
        case 1: default: e = fn_80233550(lbl_8035B374, "BRingSht"); break;
        } }
        if (e != 0) e->fire(E0, &v, lbl_80360740, lbl_803608EC);
        fn_802491DC(p, 0);
        break;
    }
    case 39: {
        VO *o;
        fn_802402E0(p);
        o = VP(0x154);
        if (o != 0) o->send(lbl_8036090C, E0, 0, *(void **)(p + 0x158), 0);
        break;
    }
    case 40:
        fn_802401A0(p);
        I(0x15c) = 1;
        if (I(0x14c) == 0) {
            EO->setPos((void *)(p + 0x160), 0, 0, 0, 0);
            fn_802494A4(p, 10);
        }
        break;
    case 41:
        fn_802494A4(p, 9);
        break;
    case 42:
        fn_802494A4(p, 10);
        break;
    case 43:
        fn_80240274(p, 0);
        fn_802401D0(p);
        fn_8023F5E8(p, I(0x118));
        fn_802494A4(p, 2);
        break;
    case 44:
        fn_802494A4(p, 8);
        break;
    case 45:
        fn_802494A4(p, 0xb);
        fn_802402E0(p);
        break;
    case 46: path(p, lbl_80360914); break;
    case 47: path(p, lbl_8036091C); break;
    case 48: path(p, lbl_80360924); break;
    case 49: path(p, lbl_8036092C); break;
    case 50: path(p, lbl_80360934); break;
    case 51: path(p, lbl_8036093C); break;
    case 52: path(p, lbl_80360944); break;
    case 53: path(p, lbl_8036094C); break;
    case 54: path(p, lbl_80360954); break;
    case 55: path(p, lbl_8036095C); break;
    case 56:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, I(0xf0), lbl_80360900, 0, 1, I(0xec));
        break;
    case 57:
        fn_802494A4(p, 0xc);
        break;
    case 58:
        if (*(void **)(p + 300) != 0 && PI(300) != 0) fn_802494A4(p, 2);
        else fn_802494A4(p, 8);
        break;
    case 59:
        if (*(void **)(p + 0xf0) != 0 && *(int *)(*(int *)(*(int *)(lbl_8035B308 + 0x48) + 600) + 0x300) == 0)
            fn_8024118C(p, I(0xf0), 0);
        break;
    case 60:
        if (fn_800F6CD0(I(0x140), lbl_80360740) == 0) fn_80242BC0(fn_80242144(p, 3), *(const char **)(p + 0x140), 0, 0, 0, 0);
        break;
    case 61: {
        int i;
        fn_80236B14(E0);
        for (i = 0; i < I(0x5c); i++) fn_80249058(p, i);
        if (I(0x148) != 0) PU(0x16c) &= ~0x800;
        offs(p);
        break;
    }
    case 62: {
        int i;
        fn_80236AC0(E0);
        for (i = 0; i < I(0x5c); i++) fn_8024909C(p, i);
        offs(p);
        if (I(0x148) != 0) PU(0x16c) |= lbl_803608E8;
    }
    case 63:
        break;
    }
}
}

} /* extern "C" */
