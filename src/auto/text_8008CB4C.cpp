// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[0x6A0] = {1};
static s32 tA[35] = {1};
static s32 tB[125] = {1};
static s32 tC[125] = {1};
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern s8 lbl_803603F8[1];
extern char lbl_803604AC[6], lbl_8036051C[3], lbl_80360520[4], lbl_80360524[8], lbl_80360538[8], lbl_80360558[8], lbl_80360560[7], lbl_80360568[7];
extern char lbl_80360570[8], lbl_80360578[8], lbl_80360580[8], lbl_80360588[8];
extern f32 lbl_8036052C, lbl_80360530, lbl_80360534, lbl_80360540, lbl_80360550, lbl_80360554;
extern f64 lbl_80360548;
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_80257A4C(int, int);
void fn_801907D8(int);
void fn_80190940(int, int);
void fn_80101820(V3 *);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
VO *fn_802288FC(u32, char *);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_8024125C(int, int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(f32, int, int, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define KN (*(VO **)(p + 0x134))

static inline void *FindRes(u8 *mgr, s8 *grp, void *name) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(mgr + 0x180, name);
    return fn_800F9788(mgr + 0x198, grp, name);
}
static inline void detach(int p) {
    if (KN != 0) {
        *(u32 *)((int)KN + 0x234) = 0;
        *(u32 *)((int)E0 + 0x234) = 0;
        fn_801907D8(*(int *)((int)KN + 0x9c));
        KN->send(lbl_80360520, 0, 0, 0, 0);
    }
}
static inline void anim(int p, int off) {
    if (KN != 0) KN->send(*(void **)(*(int *)(p + 0xc8) + off), 0, 0, 0, 0);
}
static inline void walkPlayer(int p, char *name) {
    fn_802494A4(p, 11);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
}

void fn_8008CB4C(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    V3 d;
    V3 f;
    V3 a;
    V3 b;
    V3 m4;
    V3 m3;
    V3 m2;
    V3 m1;
    f32 dmg;
    VO *o;

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0: {
        int g;
        fn_80241628(p, 0, 0);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        *(void **)(p + 0x174) = FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_803603F8, lbl_8036051C);
        g = *(int *)(*(int *)(p + 0xc0) + 8);
        *(u32 *)(g + 0xf4) = 0;
        *(u32 *)(g + 0xf8) = 0;
        fn_80257A4C(g, 0);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802491DC(p, 0);
        break;
    }
    case 1:
        if (KN != 0) {
            detach(p);
            KN = 0;
        }
        o = fn_802288FC(lbl_8035B308, lbl_80360524);
        if (o) o->send(lbl_803604AC, *(u32 *)(p + 0xe0), 0, 0, 0);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8036052C);
        anim(p, 0);
        *(s32 *)((int)E0 + 0x220) = -1;
        *(u32 *)((int)E0 + 0x228) |= 0x100;
        break;
    case 2:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, lbl_8036052C);
        anim(p, 0x18);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8036052C);
        anim(p, 0xc);
        break;
    case 4:
        if (*(int *)(p + 0x16c) != 0) {
            fn_802494A4(p, 10);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 2, 0);
            fn_80241588(p, 3, 0, lbl_8036052C);
            anim(p, 0x24);
            fn_80242168(lbl_80360530, p);
        }
        break;
    case 5:
        if (*(int *)(p + 0x180) != 0) fn_80241628(p, 4, 0);
        else fn_80241628(p, 2, 0);
        *(u32 *)(p + 0x180) = 0;
        fn_80241588(p, 4, 0, lbl_8036052C);
        anim(p, 0x30);
        *(u32 *)(p + 0x170) = 0;
        *(u32 *)(p + 0x178) = 0;
        break;
    case 6:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8036052C);
        anim(p, 0x48);
        fn_802490E0(p, 1, **(f32 **)(p + 0x11c));
        break;
    case 7:
        fn_80241628(p, 0, 0);
        fn_802401A0(p);
        fn_80241588(p, 7, 0, lbl_8036052C);
        anim(p, 0x54);
        break;
    case 8:
        fn_80241628(p, 3, 0);
        fn_80241588(p, 5, 0, lbl_8036052C);
        anim(p, 0x3c);
        *(u32 *)(p + 0x158) = 0;
        fn_802490E0(p, 2, *(f32 **)(p + 0x120) != 0 ? **(f32 **)(p + 0x120) : lbl_80360534);
        break;
    case 9:
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8036052C);
        anim(p, 0xc);
        break;
    case 10:
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8036052C);
        anim(p, 0xc);
        break;
    case 11:
        fn_80241628(p, 5, 0);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 12:
        return;
    case 13:
        *(u32 *)((int)E0 + 0x220) = 0;
        *(u32 *)((int)E0 + 0x228) &= ~0x100;
        break;
    case 14:
        *(u32 *)(p + 0x170) = 0;
        *(u32 *)(p + 0x178) = 0;
        break;
    case 15:
        *(u32 *)(p + 0x158) = 0;
        break;
    case 16:
        fn_80241628(p, 0, 0);
        break;
    case 17:
        fn_802494A4(p, 4);
        break;
    case 18:
        fn_802494A4(p, 6);
        break;
    case 19:
        fn_8023F9C8(p, 0);
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        fn_8023F9C8(p, 3);
        fn_8023F9C8(p, 4);
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_80360538, lbl_803603F8);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 1, lbl_80360540);
        fn_802491DC(p, 3);
        fn_8024125C(p, 0);
        break;
    case 20:
        fn_802405B8(p);
        break;
    case 21:
        if (*(int *)(p + 0x158) == 0) fn_802405B8(p);
        break;
    case 22:
        return;
    case 23:
        if (*(int **)(p + 0x128) != 0 && **(int **)(p + 0x128) == 1) fn_802494A4(p, 4);
        else fn_802494A4(p, 2);
        break;
    case 24:
        fn_802494A4(p, 8);
        break;
    case 25:
        fn_802494A4(p, 7);
        break;
    case 26:
        (*(VO **)(p + 0x118))->getPos(&a, 0, 0, 0, 0);
        E0->getPos(&b, &f, 0, 0, 0);
        d.x = a.x - b.x;
        d.y = a.y - b.y;
        d.z = a.z - b.z;
        fn_80101820(&d);
        if (d.x * f.x + d.y * f.y + d.z * f.z > lbl_80360548) {
            *(u32 *)(p + 0x180) = 0;
            fn_802494A4(p, 5);
        } else {
            *(u32 *)(p + 0x180) = 1;
            fn_802494A4(p, 5);
        }
        break;
    case 27:
        return;
    case 28:
        *(u32 *)(p + 0x16c) = 1;
        break;
    case 29:
        *(u32 *)(p + 0x16c) = 1;
        fn_802494A4(p, 10);
        break;
    case 30:
        *(u32 *)(p + 0x16c) = 0;
        break;
    case 31:
        *(u32 *)(p + 0x16c) = 0;
        fn_802494A4(p, 4);
        break;
    case 32:
        *(u32 *)(p + 0x164) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x168) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 1);
        break;
    case 33:
        KN = *(VO **)(p + 0xec);
        { VO *k = KN;
        if (k != 0) {
            f32 z = lbl_80360540;
            m1.x = z; m1.y = z; ((f32 *)&dmg)[3] = z;
            { f32 o = lbl_80360550;
            ((f32 *)&dmg)[4] = o; m2.y = z; m2.z = z;
            m3.x = z; m3.y = z; m3.z = o; }
            ((f32 *)&dmg)[10] = z; m4.y = lbl_80360554; ((f32 *)&dmg)[12] = z;
            k->send(lbl_80360558, 0, 0, 0, 0);
            KN->setPos(&m1, &m2, &m3, &m4, 0);
            fn_80190940(*(int *)((int)KN + 0x9c), *(int *)((int)E0 + 0x9c));
            *(VO **)((int)KN + 0x234) = E0;
            *(VO **)((int)E0 + 0x234) = KN;
        } }
        break;
    case 34:
        fn_802494A4(p, 1);
        break;
    case 35:
        *(u32 *)(p + 0x158) = 0;
        break;
    case 36:
        *(u32 *)(p + 0x178) = 1;
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x170) = 1;
        break;
    case 37:
        *(u32 *)(p + 0x178) = 0;
        fn_8023F9C8(p, 5);
        break;
    case 38:
        if (*(int *)(p + 0x178) != 0) {
            u32 *h = *(u32 **)(*(int *)(p + 0xec) + 0xc);
            if (h[0] == *(u32 *)(p + 0x174) || h[1] == *(u32 *)(p + 0x174)) {
                dmg = -**(f32 **)(p + 0x124);
                (*(VO **)(p + 0x118))->send(lbl_80360560, *(u32 *)(p + 0xe0), 0, &dmg, 0);
            }
        }
        fn_80241628(p, 0, 0);
        break;
    case 39:
        if (*(int *)(p + 0x170) == 0) fn_80241628(p, 2, 0);
        break;
    case 40:
        detach(p);
        fn_802402E0(p);
        o = *(VO **)(p + 0x164);
        if (o) o->send(lbl_80360568, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x168), 0);
        break;
    case 41:
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x170) = 1;
        break;
    case 42:
        fn_802494A4(p, 11);
        fn_802402E0(p);
        break;
    case 43: walkPlayer(p, lbl_80360570); break;
    case 44: walkPlayer(p, lbl_80360578); break;
    case 45: walkPlayer(p, lbl_80360580); break;
    case 46: walkPlayer(p, lbl_80360588); break;
    case 47:
        if (*(void **)(p + 0xf0) != 0) {
            fn_802413D8(lbl_8036052C, p, *(int *)(p + 0xf0), 0, 1, *(int *)(p + 0xec));
            if (KN != 0) KN->send(*(void **)(p + 0xf0), 0, 0, 0, 0);
        }
        break;
    case 48:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        fn_8023F864(p, 2);
        fn_8023F864(p, 3);
        fn_8023F864(p, 4);
        fn_8023F864(p, 5);
        break;
    case 49:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
    case 50:
        break;
    }
}
}

} /* extern "C" */
