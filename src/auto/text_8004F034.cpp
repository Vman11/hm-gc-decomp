// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[1788] = {1};
static s32 tA[35] = {1};
static s32 tB[126] = {1};
static s32 tC[126] = {1};
typedef struct { f32 x, y, z; } V3;
extern int rand(void);
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern void *lbl_803286D0[];
extern u32 lbl_8035DA7C;
extern f32 lbl_8035DA80, lbl_8035DA8C, lbl_8035DA90, lbl_8035DA94, lbl_8035DAA8, lbl_8035DAAC, lbl_8035DAB0, lbl_8035DAB4, lbl_8035DAB8;
extern char lbl_8035D964[4], lbl_8035DA84[4], lbl_8035DA98[4], lbl_8035DAA0[4], lbl_8035DABC[4], lbl_8035DAC4[4], lbl_8035DACC[4], lbl_8035DAD4[4], lbl_8035DADC[4];
extern char lbl_802962E0[];
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_80190C98(void *);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
void fn_802273F0(int, char *, char *, char *, int, f32);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_80240DEC(int, int, int, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
void fn_80257A4C(int, V3 *);
void fn_80255B9C(int, V3 *);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define F110 (*(f32 *)((int)E0 + 0x110))

static inline void *FindRes(u8 *mgr, char *grp, char *name) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(mgr + 0x180, name);
    return fn_800F9788(mgr + 0x198, grp, name);
}
static inline void att(int p) {
    V3 v;
    u8 *b;
    u8 *a;
    (*(VO **)(p + 0xe4))->getPos(&v, 0, 0, 0, 0);
    fn_8023F9C8(p, 0);
    a = **(u8 ***)(p + 0x110);
    if (a != 0) {
        b = *(u8 **)(a + 0x30);
        if (b != 0) {
            ((void (*)(void *, V3 *))lbl_803286D0[3])(*(void **)(b + 0x10), &v);
            *(u32 *)(b + 0x20) |= lbl_8035DA7C;
            fn_80190C98(a);
        }
    }
}
static inline void att2(int p) {
    V3 v;
    u8 *a;
    u8 *b;
    (*(VO **)(p + 0xe4))->getPos(&v, 0, 0, 0, 0);
    fn_8023F9C8(p, 0);
    a = **(u8 ***)(p + 0x110);
    if (a != 0) {
        b = *(u8 **)(a + 0x30);
        if (b != 0) {
            ((void (*)(void *, V3 *))lbl_803286D0[3])(*(void **)(b + 0x10), &v);
            *(u32 *)(b + 0x20) |= lbl_8035DA7C;
            fn_80190C98(a);
        }
    }
}
static inline void nop() {}
static inline void lerp(V3 *r, V3 *a, V3 *b, f32 t) { f32 dx = b->x - a->x, dy = b->y - a->y, dz = b->z - a->z; dx *= t; dy *= t; dz *= t; r->x = a->x + dx; r->y = a->y + dy; r->z = a->z + dz; }
static inline int busy(int p) {
    u32 *s = *(u32 **)(*(int *)(p + 0xec) + 0xc);
    if (s[0] == *(u32 *)(p + 0x154) || s[1] == *(u32 *)(p + 0x154)) return 0;
    return 1;
}

void fn_8004F034(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;

    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        F110 = lbl_8035DA80;
        fn_80241628(p, 0, 0);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        E0->getPos((void *)(p + 0x11c), 0, 0, 0, 0);
        *(void **)(p + 0x154) = FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_8035D964, lbl_8035DA84);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802491DC(p, 7);
        else fn_802402E0(p);
        break;
    case 1:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else {
            s32 ri;
            f32 r;
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 4, 0, lbl_8035DA8C);
            ri = rand() % 2500u;
            r = lbl_8035DA90 * (f32)ri;
            r = lbl_8035DA94 + r;
            fn_802490E0(p, 0, r);
        }
        break;
    case 2:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 3, 0, lbl_8035DA8C);
        }
        break;
    case 3:
        fn_80241628(p, 1, 0);
        fn_80241588(p, 5, 0, lbl_8035DA8C);
        fn_802273F0(*(int *)(p + 0xe0), lbl_8035DA98, lbl_8035D964, lbl_8035DAA0, **(int **)(p + 0x128), **(f32 **)(p + 0x12c));
        break;
    case 4:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else {
            if (*(int **)(p + 0x150) != 0 && **(int **)(p + 0x150) != 0) {
                fn_8023F5E8(p, *(int *)(p + 0x118));
                fn_80241628(p, 1, 0);
                fn_80241588(p, 0, 0, lbl_8035DA8C);
                fn_802490E0(p, 3, lbl_8035DA80);
            } else {
                fn_8023F5E8(p, *(int *)(p + 0x118));
                fn_80241628(p, 3, 0);
                fn_80241588(p, 1, 0, lbl_8035DA8C);
                fn_80242168(lbl_8035DAA8, p);
                fn_802491DC(p, 3);
            }
            fn_80240DEC(p, 25, 0, 4);
        }
        break;
    case 5:
        F110 = lbl_8035DA80;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, lbl_8035DA8C);
        fn_802401A0(p);
        break;
    case 6:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else if (*(int **)(p + 0x150) != 0 && **(int **)(p + 0x150) != 0) {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035DA8C);
            fn_802491DC(p, 3);
        } else {
            V3 r;
            V3 b;
            V3 a;
            V3 c;
            f32 dx, dy, dz;
            fn_8023F5E8(p, 0);
            fn_80241628(p, 0, 0);
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035DA8C);
            E0->getPos(&a, &b, 0, 0, 0);
            (*(VO **)(p + 0x118))->getPos(&c, 0, 0, 0, 0);
            {V3 d;
            d.x = c.x - a.x;
            d.y = c.y - a.y;
            d.z = c.z - a.z;
            d.x *= *(f32 *)&lbl_8035DAAC;
            d.y *= lbl_8035DAAC;
            d.z *= lbl_8035DAAC;
            r.x = a.x + d.x;
            r.y = a.y + d.y;
            r.z = a.z + d.z;}
            fn_80257A4C(*(int *)(*(int *)(p + 0xc0) + 0xc), &r);
            fn_80255B9C(*(int *)(*(int *)(p + 0xc0) + 0x4), &r);
        }
        break;
    case 7:
        F110 = lbl_8035DA80;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 8, 0, lbl_8035DAB0);
        fn_802401A0(p);
        break;
    case 8:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8035DA8C);
        break;
    case 9:
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035DA8C);
        break;
    case 10:
        F110 = lbl_8035DA80;
        fn_80241628(p, 4, 0);
        fn_80241588(p, 0, 0, lbl_8035DA8C);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 11:
        F110 = lbl_8035DA80;
        fn_802402E0(p);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035DA8C);
        break;
    case 12:
        return;
    case 13:
        fn_802401D0(p);
        break;
    case 14:
        return;
    case 15:
        fn_802494A4(p, 3);
        break;
    case 16:
        fn_802494A4(p, 4);
        break;
    case 17:
        fn_802491DC(p, 8);
        break;
    case 18:
        fn_802494A4(p, 1);
        break;
    case 19:
        fn_802494A4(p, 2);
        break;
    case 20:
        att2(p);
        break;
    case 21:
        if (busy(p) == 0) att(p);
        else fn_802405B8(p);
        break;
    case 22:
        if (busy(p) == 0) att(p);
        else {
            *(u32 *)(p + 0x168) = 1;
            fn_802405B8(p);
        }
        break;
    case 23:
        *(u32 *)(p + 0x168) = 1;
        fn_802405B8(p);
        break;
    case 24:
        if (*(int *)(p + 0x168) != 0) {
            *(u32 *)(p + 0x168) = 0;
            fn_802494A4(p, 8);
        }
        break;
    case 25:
        fn_802494A4(p, 5);
        break;
    case 26:
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_802962E0, lbl_8035D964);
        fn_8022BF30(*(int *)(p + 0xe0), 255, 1, lbl_8035DAB0);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 1, lbl_8035DAB4);
        fn_802490E0(p, 4, lbl_8035DAB8);
        break;
    case 27:
        F110 = lbl_8035DA80;
        break;
    case 28:
        fn_80240274(p, 0);
        fn_802494A4(p, 7);
        break;
    case 29:
        fn_802494A4(p, 11);
        break;
    case 30:
        fn_802402E0(p);
        if (*(VO **)(p + 0x158) != 0) (*(VO **)(p + 0x158))->send(lbl_8035DABC, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x15c), 0);
        break;
    case 31:
        *(u32 *)(p + 0x160) = 1;
        break;
    case 32:
        *(u32 *)(p + 0x160) = 1;
        fn_802494A4(p, 9);
        break;
    case 33:
        *(u32 *)(p + 0x160) = 0;
        break;
    case 34:
        *(u32 *)(p + 0x160) = 0;
        fn_802494A4(p, 1);
        break;
    case 35:
        *(u32 *)(p + 0x158) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x15c) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 7);
        break;
    case 36:
        fn_802491DC(p, 5);
        break;
    case 37:
        if (*(void **)(p + 0x150) == 0 || *(void **)(p + 0x150) == 0) {
            fn_80241628(p, 3, 0);
            fn_80241588(p, 1, 0, lbl_8035DA8C);
            fn_80242168(lbl_8035DAA8, p);
        }
        break;
    case 38:
        fn_802494A4(p, 0);
        fn_802402E0(p);
        break;
    case 39:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DAC4, 0);
        break;
    case 40:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DACC, 0);
        break;
    case 41:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DAD4, 0);
        break;
    case 42:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DADC, 0);
        break;
    case 43:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, *(int *)(p + 0xf0), lbl_8035DA8C, 0, 1, *(int *)(p + 0xec));
        break;
    case 44:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        break;
    case 45:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 46:
        break;
    }
}
}

} /* extern "C" */
