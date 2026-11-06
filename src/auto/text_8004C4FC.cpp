#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void vanish(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[0x6D4] = {1};
static s32 tA[39] = {1};
static s32 tB[176] = {1};
static s32 tC[176] = {1};
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern s8 lbl_8035D48C[1];
extern f32 lbl_8035D5C8, lbl_8035D5D8, lbl_8035D5E4, lbl_8035D5E8, lbl_8035D5EC, lbl_8035D5F0;
extern char lbl_8035D5CC[4], lbl_8035D5D0[7], lbl_8035D5DC[8], lbl_8035D5F4[7], lbl_8035D5FC[7];
extern char lbl_8035D604[8], lbl_8035D60C[8], lbl_8035D614[8], lbl_8035D61C[8];
extern char lbl_8035D624[5], lbl_8035D62C[5], lbl_8035D634[5], lbl_8035D63C[5], lbl_8035D644[5], lbl_8035D64C[5];
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
int fn_800F6CD0(void *, void *);
int fn_80237934(int, V3 *, int, int, void *);
void fn_80257A84(int, f32);
void fn_80240DBC(int, f32);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_8024125C(int, int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, u32, int, u32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))

static inline void *FindRes(u8 *mgr, s8 *grp, void *name) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(mgr + 0x180, name);
    return fn_800F9788(mgr + 0x198, grp, name);
}
static inline void reaper(int p) {
    fn_8022BCD8(*(int *)(p + 0xe0), lbl_8035D5DC, lbl_8035D48C);
    fn_8024125C(p, 2);
    fn_8022BF30(*(int *)(p + 0xe0), 0, 1, lbl_8035D5E4);
    fn_8022BF30(*(int *)(p + 0xe0), 0x7f, 1, lbl_8035D5E8);
    fn_802490E0(p, 2, lbl_8035D5EC);
    fn_8023F9C8(p, 0);
}
static inline void hit(int p, int a) {
    fn_802401D0(p);
    E0->setPos((void *)(p + 0x11c), 0, 0, 0, 0);
    fn_8023F5E8(p, *(int *)(p + 0x118));
    fn_80241628(p, 2, 0);
    fn_80241588(p, a, 0, lbl_8035D5D8);
    reaper(p);
}
static inline void walkPlayer(int p, char *name) {
    fn_802494A4(p, 10);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
    reaper(p);
}

void fn_8004C4FC(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    V3 f;
    char buf[12];
    V3 b;
    V3 a;
    f32 dmg;

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0: {
        VO *e;
        *(f32 *)((int)E0 + 0x110) = lbl_8035D5C8;
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        E0->getPos((void *)(p + 0x11c), 0, 0, 0, 0);
        *(void **)(p + 0x15c) = FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_8035D48C, lbl_8035D5CC);
        *(void **)(p + 0x160) = FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_8035D48C, lbl_8035D5D0);
        fn_80241628(p, 0, 0);
        *(f32 *)(p + 0x17c) = *(f32 *)((int)E0 + 0x1ac);
        e = E0;
        if (*(int *)((int)e + 0x114) == 0 && **(int **)(p + 0x150) != 0) e->vanish();
        else e->vanish();
        break;
    }
    case 1:
        if (*(int *)(p + 0x16c) != 0) {
            fn_802494A4(p, 7);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 2, 0);
            fn_80241588(p, 0, 0, lbl_8035D5D8);
            fn_8024125C(p, 0);
            fn_802490E0(p, 0, **(f32 **)(p + 0x13c));
        }
        break;
    case 2:
        if (*(int *)(p + 0x16c) != 0) {
            fn_802494A4(p, 7);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 1, 0, lbl_8035D5D8);
            fn_80257A84(*(int *)(*(int *)(p + 0xc0) + 4), **(f32 **)(p + 0x12c));
            fn_802490E0(p, 3, **(f32 **)(p + 0x144));
        }
        break;
    case 3:
        fn_802401A0(p);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035D5D8);
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_8035D5DC, lbl_8035D48C);
        fn_8024125C(p, 1);
        fn_8022BF30(*(int *)(p + 0xe0), 0x7f, 1, lbl_8035D5E4);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 0, lbl_8035D5E8);
        fn_802490E0(p, 2, lbl_8035D5EC);
        fn_8023F9C8(p, 0);
        break;
    case 4:
        fn_802401D0(p);
        (*(VO **)(p + 0x118))->getPos(&a, &f, 0, 0, 0);
        *(volatile f32 *)&f.x = -f.x;
        *(volatile f32 *)&f.y = -f.y;
        *(volatile f32 *)&f.z = -f.z;
        { f32 k = *(volatile f32 *)&lbl_8035D5F0;
        f.x *= k;
        f.y *= k;
        f.z *= k; }
        b.x = a.x + f.x;
        b.y = a.y + f.y;
        b.z = a.z + f.z;
        if (fn_80237934(*(int *)(p + 0x118), &b, 0, 0, buf) != 0) E0->setPos(&b, 0, 0, 0, 0);
        else E0->setPos((void *)(p + 0x11c), 0, 0, 0, 0);
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 2, 0);
        fn_80241588(p, 0, 0, lbl_8035D5D8);
        reaper(p);
        break;
    case 5:
        return;
    case 6:
        *(f32 *)((int)E0 + 0x110) = lbl_8035D5C8;
        fn_802401A0(p);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 5, 0, lbl_8035D5D8);
        fn_8023F9C8(p, 0);
        break;
    case 7:
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 2, 0);
        fn_80241588(p, 2, 0, lbl_8035D5D8);
        *(u32 *)(p + 0x170) = 0;
        break;
    case 8:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 4, 0, lbl_8035D5D8);
        break;
    case 9:
        *(f32 *)((int)E0 + 0x110) = lbl_8035D5C8;
        fn_80241628(p, 3, 0);
        fn_80241588(p, 0, 0, lbl_8035D5D8);
        break;
    case 10:
        hit(p, 0);
        break;
    case 11:
        *(f32 *)((int)E0 + 0x110) = lbl_8035D5C8;
        hit(p, 6);
        *(u32 *)(p + 0x174) = 0;
        break;
    case 12:
        fn_80240DBC(p, lbl_8035D5E8);
        break;
    case 13:
        fn_802401D0(p);
        fn_8023F864(p, 0);
        break;
    case 14:
        fn_802401D0(p);
        break;
    case 15:
        fn_8023F864(p, 0);
        break;
    case 16:
        if (*(int *)(p + 0xdc) != 0) fn_80241588(p, 0, 0, lbl_8035D5D8);
        break;
    case 17:
        if (*(int *)(p + 0xdc) != 1) fn_80241588(p, 1, 0, lbl_8035D5D8);
        break;
    case 18: {
        VO *o;
        fn_8023F864(p, 0);
        fn_802402E0(p);
        o = *(VO **)(p + 0x164);
        if (o) o->send(lbl_8035D5F4, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x168), 0);
        if (fn_800F6CD0(*(void **)(p + 0x14c), lbl_8035D48C) == 0)
            fn_80242BC0(fn_80242144(p, 4), *(void **)(p + 0x14c), 0, 0, 0, 0);
        break;
    }
    case 19:
        if (*(int *)(p + 0x170) == 1) fn_802494A4(p, 1);
        else fn_802494A4(p, 3);
        break;
    case 20:
        fn_802494A4(p, 3);
        break;
    case 21:
        if (*(int *)(p + 0xdc) == 6) fn_80241588(p, 0, 0, lbl_8035D5D8);
        else if (*(int *)(p + 0x174) == 1) fn_802494A4(p, 1);
        break;
    case 22:
        fn_802494A4(p, 2);
        break;
    case 23:
        *(u32 *)(p + 0x170) = 1;
        dmg = -**(f32 **)(p + 0x128);
        (*(VO **)(p + 0x118))->send(lbl_8035D5FC, *(u32 *)(p + 0xe0), 0, &dmg, 0);
        break;
    case 24:
        *(u32 *)(p + 0x138) = 1;
        fn_802405B8(p);
        break;
    case 25:
        fn_802405B8(p);
        break;
    case 26:
        *(u32 *)(p + 0x138) = 2;
        fn_802405B8(p);
        break;
    case 27:
        *(u32 *)(p + 0x138) = 3;
        fn_802405B8(p);
        break;
    case 28: {
        f32 c;
        if (lbl_8035D5E4 == *(f32 *)(p + 0x17c)) *(f32 *)(p + 0x17c) = *(f32 *)((int)E0 + 0x1a8);
        c = *(f32 *)((int)E0 + 0x1ac);
        if (*(f32 *)(p + 0x17c) - c > **(f32 **)(p + 0x134)) {
            *(f32 *)(p + 0x17c) = c;
            fn_802494A4(p, 3);
        } else if (*(int *)(p + 0x60) == 1 || *(int *)(p + 0x60) == 2) {
            if (*(int *)(p + 0x138) == 2) fn_80241588(p, 3, 0, lbl_8035D5D8);
            else if (*(int *)(p + 0x138) == 3) fn_80241588(p, 3, 0, lbl_8035D5D8);
        }
        break;
    }
    case 29:
        fn_802494A4(p, 6);
        break;
    case 30:
        *(f32 *)((int)E0 + 0x110) = lbl_8035D5C8;
        break;
    case 31:
        fn_802494A4(p, 8);
        break;
    case 32:
        fn_802494A4(p, 4);
        break;
    case 33:
        fn_8023F864(p, 0);
        fn_802490E0(p, 1, **(f32 **)(p + 0x140));
        break;
    case 34:
        *(u32 *)(p + 0x174) = 1;
        if (*(int *)(p + 0xdc) == 0) fn_802494A4(p, 1);
        break;
    case 35:
        fn_802494A4(p, 7);
        break;
    case 36:
        fn_802494A4(p, 12);
        break;
    case 37:
        *(u32 *)(p + 0x16c) = 1;
        break;
    case 38:
        *(u32 *)(p + 0x16c) = 1;
        fn_802494A4(p, 7);
        break;
    case 39:
        *(u32 *)(p + 0x16c) = 0;
        break;
    case 40:
        *(u32 *)(p + 0x16c) = 0;
        fn_802494A4(p, 11);
        break;
    case 41:
        fn_802494A4(p, 10);
        fn_802402E0(p);
        fn_8023F864(p, 0);
        break;
    case 42:
        fn_802494A4(p, 1);
        break;
    case 43: walkPlayer(p, lbl_8035D604); break;
    case 44: walkPlayer(p, lbl_8035D60C); break;
    case 45: walkPlayer(p, lbl_8035D614); break;
    case 46: walkPlayer(p, lbl_8035D61C); break;
    case 47: walkPlayer(p, lbl_8035D624); break;
    case 48: walkPlayer(p, lbl_8035D62C); break;
    case 49: walkPlayer(p, lbl_8035D634); break;
    case 50: walkPlayer(p, lbl_8035D63C); break;
    case 51: walkPlayer(p, lbl_8035D644); break;
    case 52: walkPlayer(p, lbl_8035D64C); break;
    case 53:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, *(int *)(p + 0xf0), lbl_8035D5D8, 0, 1, *(int *)(p + 0xec));
        break;
    case 54:
        *(u32 *)(p + 0x164) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x168) = *(u32 *)(p + 0xec);
        E0->getPos((void *)(p + 0x11c), 0, 0, 0, 0);
        E0->showA();
        E0->hideA();
        fn_802494A4(p, 12);
        break;
    case 55:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        break;
    case 56:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
    case 57:
        break;
    }
}
}
