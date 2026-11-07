// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void show(); virtual void hide(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
extern u8 lbl_802D0D58[];
typedef struct { f32 x, y, z; } V3;
extern int rand(void);
extern u32 lbl_8035B308;
extern u8 lbl_803575DC[];
extern f32 lbl_80361E94;
extern f64 lbl_80361E98;
extern char lbl_80361E48[4];
int fn_800F6CD0(void *, void *);
void fn_80101820(V3 *);
void fn_80072AC8(u32, V3 *);
int fn_80240004(int, int);
int fn_80247AE4(void *, void *);
V3 *fn_80245F8C(int, int);
void fn_80241628(int, int, int);
void fn_80257A4C(int, V3 *);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define PV(o) (*(void **)(p + (o)))

static inline f32 crand() {
    s32 ri = rand() % 10000u;
    f32 r = lbl_80361E94 * (f32)ri;
    r = lbl_80361E98 - r;
    return r;
}
static inline void vset(V3 *d, f32 x, f32 y, f32 z) { d->x = x; d->y = y; d->z = z; }
static inline void rvec(V3 *d) { vset(d, crand(), crand(), crand()); }
static inline void pick(int p) {
    u32 n;
    I(0x13c) = *(int *)(p + 0x138) != 0 ? I(0x134) : I(0x130);
    n = 0;
    if (PV(0x13c) != 0) n = *(u32 *)(I(0x13c) + 0xc);
    if (n == 0) {
        I(0x140) = -1;
        fn_802494A4(p, 3);
    } else {
        { u32 r = 0; if (n != 0) r = rand() % n; I(0x140) = r; }
        E0->setPos(fn_80245F8C(I(0x13c), I(0x140)), 0, 0, 0, 0);
    }
}
static inline void pick2(int p) {
    u32 n;
    I(0x13c) = *(int *)(p + 0x138) != 0 ? I(0x134) : I(0x130);
    n = 0;
    if (PV(0x13c) != 0) n = *(u32 *)(I(0x13c) + 0xc);
    if (n == 0) {
        I(0x140) = -1;
        fn_802494A4(p, 3);
    } else {
        { u32 r = 0; if (n != 0) r = rand() % n; I(0x140) = r; }
    }
}

static inline void jit(int p, V3 *b, f32 s) {
    V3 d;
    V3 w;
    rvec(&d);
    fn_80101820(&d);
    d.x *= s;
    d.y *= s;
    d.z *= s;
    w.x = b->x + d.x;
    w.y = b->y + d.y;
    w.z = b->z + d.z;
    fn_80257A4C(*(int *)(I(0xc0) + 4), &w);
}
static inline void init(int p, u8 *g) {
        if (*(int *)(g + 0x14) != 0) {
            if (fn_800F6CD0(PV(0x118), lbl_80361E48) == 0) I(0x130) = fn_80247AE4(g, PV(0x118));
            else I(0x130) = fn_80240004(p, 0);
            if (fn_800F6CD0(PV(0x11c), lbl_80361E48) == 0) I(0x134) = fn_80247AE4(g, PV(0x11c));
            else I(0x134) = fn_80240004(p, 1);
        }
}
typedef struct { u8 pad[0x14]; int f14; } GS;
#define lbl_G (*(GS *)lbl_803575DC)
#pragma opt_propagation off
void fn_800A5BE8(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    s32 *tC;

    u8 *base = lbl_802D0D58;
    s32 *tA = (s32 *)(base + 0x2dc);
    s32 *tB;
    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    q = (s32 *)(base + 0x2f8);
    tB = q;
    for (q += idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    idx *= 4;
    tC = (s32 *)(base + 0x348);
    switch (*(s32 *)((u8 *)tC + idx)) {
    case 0: {
        u8 *g;
        fn_80241628(p, 0, 0);
        g = lbl_803575DC;
        if (*(int *)(g + 0x14) != 0) {
            if (fn_800F6CD0(PV(0x118), lbl_80361E48) == 0) I(0x130) = fn_80247AE4(g, PV(0x118));
            else I(0x130) = fn_80240004(p, 0);
            if (fn_800F6CD0(PV(0x11c), lbl_80361E48) == 0) I(0x134) = fn_80247AE4(g, PV(0x11c));
            else I(0x134) = fn_80240004(p, 1);
        }
        break;
    }
    case 1: {
        V3 *b;
        f32 s;
        fn_80241628(p, 1, 0);
        E0->show();
        b = fn_80245F8C(I(0x13c), I(0x140));
        s = **(f32 **)(p + 0x128);
        jit(p, b, s);
        break;
    }
    case 2: {
        V3 v;
        f32 s;
        fn_80241628(p, 1, 0);
        E0->show();
        fn_80072AC8(*(u32 *)(lbl_8035B308 + 0x48), &v);
        s = **(f32 **)(p + 0x12c);
        jit(p, &v, s);
        break;
    }
    case 3:
        fn_80241628(p, 0, 0);
        E0->hide();
        break;
    case 4:
        fn_802494A4(p, 3);
        break;
    case 5:
        return;
    case 6:
        fn_802494A4(p, 0);
        break;
    case 7: {
        V3 *b;
        f32 s;
        b = fn_80245F8C(I(0x13c), I(0x140));
        s = **(f32 **)(p + 0x128);
        jit(p, b, s);
        break;
    }
    case 8: {
        V3 v;
        f32 s;
        fn_80072AC8(*(u32 *)(lbl_8035B308 + 0x48), &v);
        s = **(f32 **)(p + 0x12c);
        jit(p, &v, s);
        break;
    }
    case 9:
        *(u32 *)(p + 0x138) = 1;
        pick(p);
        fn_802494A4(p, 2);
        break;
    case 10:
        *(u32 *)(p + 0x138) = 1;
        pick2(p);
        fn_802494A4(p, 2);
        break;
    case 11:
        *(u32 *)(p + 0x138) = 1;
        break;
    case 12:
        *(u32 *)(p + 0x138) = 0;
        pick(p);
        fn_802494A4(p, 1);
        break;
    case 13:
        *(u32 *)(p + 0x138) = 0;
        break;
    case 14:
        *(u32 *)(p + 0x138) = 0;
        pick2(p);
        fn_802494A4(p, 1);
        break;
    case 15:
        break;
    }
}
}
