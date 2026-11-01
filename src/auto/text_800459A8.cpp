// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[1732] = {1};
static s32 tA[39] = {1};
static s32 tB[122] = {1};
static s32 tC[122] = {1};
typedef struct { f32 x, y, z; } V3;
typedef struct { u32 a[5]; } S5;
extern int rand(void);
extern u32 lbl_8035B308;
extern f32 lbl_8035CE24, lbl_8035CE28, lbl_8035CE40, lbl_8035CE44, lbl_8035CE48, lbl_8035CE54, lbl_8035CE58, lbl_8035CE5C;
extern f64 lbl_8035CE30, lbl_8035CE38;
extern char lbl_8035CD1C[4], lbl_8035CE60[4], lbl_8035CE4C[4], lbl_8035CE68[4], lbl_8035CE70[4], lbl_8035CE78[4], lbl_8035CE80[4], lbl_8035CE88[4], lbl_8035CE90[4], lbl_8035CE98[4], lbl_8035CEA0[4], lbl_8035CEA8[4], lbl_8035CEB0[4], lbl_8035CEB8[4], lbl_8035CEC0[4], lbl_8035CEC8[4], lbl_8035CED0[4], lbl_8035CED8[4], lbl_8035CEE0[4], lbl_8035CEE8[4], lbl_8035CEF0[4], lbl_8035CEF8[4];
int fn_800F6CD0(void *, void *);
void fn_80101820(V3 *);
void fn_8022BCD8(int, void *, void *);
void fn_8022BF30(int, int, int, f32);
int fn_8022C558(int);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F764(int, int, S5);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80257A4C(int, V3 *);
int fn_80249058(int, int);
int fn_8024909C(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define F110 (*(f32 *)((int)E0 + 0x110))
#define I(o) (*(int *)(p + (o)))
#define F(o) (*(f32 *)(p + (o)))
#define PV(o) (*(void **)(p + (o)))
#define SK (*(u8 **)(I(0xc0) + 0xc))

static inline f32 Sq(f32 x) {
    if (x > lbl_8035CE28) {
        const f64 _half = lbl_8035CE30;
        const f64 _three = lbl_8035CE38;
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
static inline f32 gsp(u8 *s) { if (*(f32 **)(s + 0xf8) != 0) return **(f32 **)(s + 0xf8); return **(f32 **)(s + 0xb4); }
static inline void restore(int p) {
    u8 *s = SK;
    *(f32 *)(s + 0xbc) = F(0x140);
    *(u32 *)(s + 0xf8) = 0;
}
static inline void hold(int p) {
    u8 *s = SK;
    *(f32 *)(s + 0xbc) = **(f32 **)(p + 0x11c);
    *(u32 *)(s + 0xf8) = I(0x120);
}
static inline void walk(int p, char *name) {
    fn_8023F9C8(p, 0);
    fn_802494A4(p, 6);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
}
static inline u32 rmod(u32 n) { u32 r = 0; if (n != 0) r = rand() % n; return r; }
static inline void spd(int p) {
    s32 n;
    f32 v;
    int id;
    int *t;
    int q;
    q = *(int *)(I(0xc0) + 0x10);
    t = *(int **)(q + 0xf4);
    id = t[3] - 1;
    n = (s32)(lbl_8035CE54 * ((f32 *)t[15])[id]);
    if (n < 0) {
        n = -n;
        v = lbl_8035CE58 * (f32)(s32)-rmod(n);
    } else {
        v = lbl_8035CE58 * (f32)(s32)rmod(n);
    }
    *(f32 *)(q + 0xe0) = v;
    *(u32 *)(q + 0xc4) = 0;
    *(u32 *)(q + 0xc0) = 0;
}

void fn_800459A8(int p, int st) {
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
    case 0: {
        u8 *s;
        F110 = lbl_8035CE24;
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_8022BF30(I(0xe0), 128, 1, lbl_8035CE28);
        s = SK;
        F(0x140) = *(f32 *)(s + 0xbc);
        { f32 *f8 = *(f32 **)(s + 0xf8); F(0x144) = f8 != 0 ? *f8 : **(f32 **)(s + 0xb4); }
        I(0x138) = *(u32 *)(lbl_8035B308 + 0x48);
        if (PV(0x124) != 0 && fn_800F6CD0(PV(0x124), lbl_8035CD1C) == 0) fn_8022BCD8(I(0xe0), PV(0x124), lbl_8035CD1C);
        if (PV(0x12c) != 0 && **(int **)(p + 0x12c) != 0) fn_802494A4(p, 7);
        fn_802402E0(p);
        break;
    }
    case 1:
        F110 = lbl_8035CE24;
        fn_802401D0(p);
        fn_8023F5E8(p, I(0x138));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035CE28);
        fn_8023F9C8(p, 0);
        break;
    case 2:
        if (I(0x14c) != 0) {
            fn_802494A4(p, 8);
        } else {
            V3 b;
            V3 a;
            f32 dx, dy, dz;
            fn_8023F5E8(p, I(0x138));
            fn_80241628(p, 3, 0);
            (*(VO **)(p + 0x138))->getPos(&a, 0, 0, 0, 0);
            E0->getPos(&b, 0, 0, 0, 0);
            dx = a.x - b.x;
            dy = a.y - b.y;
            dz = a.z - b.z;
            if (Sq(dx * dx + dy * dy + dz * dz) > **(f32 **)(p + 0x128)) {
                restore(p);
                fn_80241588(p, 3, 0, lbl_8035CE40);
            } else {
                hold(p);
                fn_80241588(p, 8, 0, lbl_8035CE40);
            }
        }
        break;
    case 3: {
        V3 d;
        V3 b;
        V3 a;
        restore(p);
        fn_8023F5E8(p, 0);
        (*(VO **)(p + 0x138))->getPos(&a, 0, 0, 0, 0);
        E0->getPos(&b, 0, 0, 0, 0);
        d.x = a.x - b.x;
        d.y = a.y - b.y;
        d.z = a.z - b.z;
        fn_80101820(&d);
        d.x *= lbl_8035CE44;
        d.y *= lbl_8035CE44;
        d.z *= lbl_8035CE44;
        a.x += d.x;
        a.y += d.y;
        a.z += d.z;
        fn_80257A4C(*(int *)(I(0xc0) + 0xc), &a);
        fn_80241628(p, 3, 0);
        fn_80241588(p, 2, 0, lbl_8035CE40);
        break;
    }
    case 4:
        restore(p);
        F110 = lbl_8035CE24;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8035CE40);
        fn_802401A0(p);
        break;
    case 5:
        restore(p);
        F110 = lbl_8035CE24;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 7, 0, lbl_8035CE40);
        fn_802401A0(p);
        break;
    case 6:
        F110 = lbl_8035CE24;
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8035CE48);
        break;
    case 7:
        F110 = lbl_8035CE24;
        fn_80240948(p, lbl_8035CE4C, 0);
        fn_80241628(p, 4, 0);
        fn_80241588(p, 3, 0, lbl_8035CE48);
        fn_80240274(p, 0);
        spd(p);
        break;
    case 8:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8035CE48);
        fn_8023F864(p, 0);
        break;
    case 9:
        fn_8023F764(p, I(0x110), **(S5 **)(p + 0x10c));
        fn_802402E0(p);
        break;
    case 10:
        return;
    case 11:
        fn_802401D0(p);
        break;
    case 12:
        F110 = lbl_8035CE24;
        fn_8023F5E8(p, I(0x138));
        break;
    case 13:
        fn_8023F9C8(p, 0);
        break;
    case 14:
        fn_802494A4(p, 2);
        break;
    case 15:
        if (I(0xdc) == 4 || I(0xdc) == 5) {
            u8 *s = SK;
            f32 a = F(0x140);
            if (a == *(f32 *)(s + 0xbc)) { f32 d = **(f32 **)(p + 0x11c) - a; *(f32 *)(s + 0xbc) = d * lbl_8035CE5C + a; }
            fn_80241588(p, 8, 0, lbl_8035CE40);
        }
        break;
    case 16:
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_802402E0(p);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802494A4(p, 9);
        break;
    case 17:
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_802402E0(p);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802494A4(p, 9);
        break;
    case 18: {
        f32 v = -**(f32 **)(p + 0x118);
        (*(VO **)(p + 0x138))->send(lbl_8035CE60, I(0xe0), 0, &v, 0);
        fn_802494A4(p, 3);
        break;
    }
    case 19:
        fn_802405B8(p);
        break;
    case 20:
        fn_80241588(p, 4, 0, lbl_8035CE40);
        break;
    case 21:
        fn_802494A4(p, 4);
        break;
    case 22:
        F110 = lbl_8035CE24;
        break;
    case 23:
        if (I(0xdc) == 3) {
            hold(p);
            fn_80241588(p, 8, 0, lbl_8035CE40);
        }
        break;
    case 24:
        fn_802494A4(p, 5);
        break;
    case 25:
        if (PV(0x12c) != 0 && **(int **)(p + 0x12c) != 0) fn_802494A4(p, 7);
        else if (*(int *)(I(0x138) + 0x6c4) == 0) fn_802494A4(p, 1);
        else fn_802402E0(p);
        break;
    case 26:
        I(0x14c) = 1;
        break;
    case 27:
        I(0x14c) = 1;
        fn_802494A4(p, 8);
        break;
    case 28:
        I(0x14c) = 0;
        break;
    case 29:
        I(0x14c) = 0;
        fn_802494A4(p, 2);
        break;
    case 30:
        fn_80236B14(I(0xe0));
        for (i = 0; i < I(0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        break;
    case 31:
        fn_80236AC0(I(0xe0));
        for (i = 0; i < I(0x5c); i++) fn_8024909C(p, i);
        if (fn_8022C558(I(0xe0)) != 0) fn_8023F9C8(p, 0);
        break;
    case 32:
        fn_80236AC0(I(0xe0));
        for (i = 0; i < I(0x5c); i++) fn_8024909C(p, i);
        break;
    case 33:
        if (PV(0xf0) != 0) fn_802413D8(p, I(0xf0), lbl_8035CE48, 0, 0, 0);
        break;
    case 34:
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_802402E0(p);
        break;
    case 35:
        fn_802494A4(p, 9);
        break;
    case 36:
        fn_802401D0(p);
        fn_802494A4(p, 2);
        break;
    case 37:
        walk(p, lbl_8035CE4C);
        break;
    case 38:
        walk(p, lbl_8035CE68);
        break;
    case 39:
        walk(p, lbl_8035CE70);
        break;
    case 40:
        walk(p, lbl_8035CE78);
        break;
    case 41:
        walk(p, lbl_8035CE80);
        break;
    case 42:
        walk(p, lbl_8035CE88);
        break;
    case 43:
        walk(p, lbl_8035CE90);
        break;
    case 44:
        walk(p, lbl_8035CE98);
        break;
    case 45:
        walk(p, lbl_8035CEA0);
        break;
    case 46:
        walk(p, lbl_8035CEA8);
        break;
    case 47:
        walk(p, lbl_8035CEB0);
        break;
    case 48:
        walk(p, lbl_8035CEB8);
        break;
    case 49:
        walk(p, lbl_8035CEC0);
        break;
    case 50:
        walk(p, lbl_8035CEC8);
        break;
    case 51:
        walk(p, lbl_8035CED0);
        break;
    case 52:
        walk(p, lbl_8035CED8);
        break;
    case 53:
        walk(p, lbl_8035CEE0);
        break;
    case 54:
        walk(p, lbl_8035CEE8);
        break;
    case 55:
        walk(p, lbl_8035CEF0);
        break;
    case 56:
        walk(p, lbl_8035CEF8);
        break;
    case 57:
        break;
    }
}
}

} /* extern "C" */
