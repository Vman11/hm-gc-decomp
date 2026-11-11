#include "common.h"

extern "C" {

// sStart/sDur/sState stand in for lbl_802D1180+0x36c/+0x394/+0x424 (TU-owned .data blob; addressed off one base).
struct V3 { f32 x, y, z; };
struct X { u8 pad[12]; u32 fc; };
struct Y { u8 pad[0x34]; u16 f34; };
struct Z { u8 pad[4]; f32 f4; u8 pad8[8]; Y *f10; };
struct E {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(V3 *, int, int, int, int);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(); virtual void v24();
    u8 pad[0x110]; u32 f114;
};
struct G { u8 pad[0x14]; s32 f14; };
struct T {
    u8 pad0[0x60]; s32 f60; u8 pad64[0xe0 - 0x64]; E *e0; u8 pade4[0x118 - 0xe4];
    s32 *f118; char *f11c; char *f120; char *f124; u8 pad128[0x138 - 0x128];
    u32 *f138; u32 *f13c; u32 *f140; u32 *f144; u8 pad148[0x154 - 0x148];
    f32 *f154; X *f158; X *f15c; X *f160; X *f164; s32 f168; s32 f16c; s32 f170; f32 f174; V3 f178;
};
static s32 sPad[0xdb] = {1};
static s32 sStart[10] = {1};
static s32 sDur[36] = {1};
static u32 sState[36] = {1};
extern G lbl_803575DC;
extern char lbl_80361F50[4];
extern f32 lbl_80361F54, lbl_80361F58, lbl_80361F5C, lbl_80361F60;
int rand(void);
void fn_80241628(T *, int, int);
void fn_80241588(T *, int, int, f32);
X *fn_80247AE4(G *, char *);
X *fn_80240004(T *, int);
int fn_800F6CD0(char *, char *);
Z *fn_8022D694(E *);
void fn_802490E0(T *, int, f32);
void fn_802494A4(T *, int);
void fn_80240DEC(T *, int, int, int);
void fn_80249008(T *, int);
void fn_800A77D0(T *, u8);
void fn_800A7A1C(T *, u8);
void fn_800A75B8(T *);
void fn_80101820(V3 *);

static inline s32 rnd(u32 *p) { u32 n = *p; s32 v = 0; if (n) v = rand() % n; return v; }
static inline f32 frand() { s32 r = rand() % 10000u; return lbl_80361F58 * (f32)r; }
static inline void scl(T *t) {
    Z *z = fn_8022D694(t->e0);
    s32 h = z->f10->f34;
    z->f4 = (f32)h * (lbl_80361F58 * (f32)(s32)(rand() % 10000u));
}
static inline void cross(V3 *d, f32 ax, f32 ay, f32 az, V3 *b) {
    d->x = ay * b->z - az * b->y;
    d->y = az * b->x - ax * b->z;
    d->z = ax * b->y - ay * b->x;
}
static inline void cross2(V3 *d, V3 *a, f32 bx, f32 by, f32 bz) {
    d->x = a->y * bz - a->z * by;
    d->y = a->z * bx - a->x * bz;
    d->z = a->x * by - a->y * bx;
}

void fn_800A6BFC(T *t, int mode) {
    s32 i = sStart[mode];
    s32 rem = t->f60;
    while (rem > 0) {
        if (sDur[i] > rem) break;
        rem -= sDur[i++];
    }
    switch (sState[i]) {
    case 0: {
        fn_80241628(t, 0, 0);
        G *g = &lbl_803575DC;
        if (g->f14) {
            if (fn_800F6CD0(t->f11c, lbl_80361F50) == 0) t->f158 = fn_80247AE4(g, t->f11c);
            else t->f158 = fn_80240004(t, 0);
            if (fn_800F6CD0(t->f120, lbl_80361F50) == 0) t->f15c = fn_80247AE4(g, t->f120);
            else t->f15c = fn_80240004(t, 1);
            if (fn_800F6CD0(t->f124, lbl_80361F50) == 0) t->f160 = fn_80247AE4(g, t->f124);
            else t->f160 = fn_80240004(t, 2);
        }
        if (t->f170) t->f174 = *t->f154;
        t->f164 = *t->f118 ? t->f158 : t->f15c;
        t->f168 = -1;
        t->f170 = 1;
        break;
    }
    case 1:
        fn_80241628(t, 1, 0);
        t->e0->v23();
        fn_80241588(t, 0, 0, lbl_80361F54);
        scl(t);
        fn_802490E0(t, 0, (f32)rnd(t->f140));
        fn_802490E0(t, 1, (f32)rnd(t->f13c));
        fn_802490E0(t, 2, (f32)rnd(t->f144));
        fn_800A75B8(t);
        break;
    case 2:
        fn_80241628(t, 1, 0);
        t->e0->v23();
        fn_800A77D0(t, 0);
        break;
    case 3: {
        fn_80241628(t, 0, 0);
        t->e0->v23();
        fn_80241588(t, 1, 0, lbl_80361F54);
        scl(t);
        V3 r, a;
        a.x = lbl_80361F5C; a.y = lbl_80361F5C; a.z = lbl_80361F60;
        cross(&r, lbl_80361F60, (*(f32 *)&lbl_80361F5C), lbl_80361F5C, &a);
        fn_80101820(&r);
        cross2(&a, &r, lbl_80361F60, lbl_80361F5C, lbl_80361F5C);
        fn_80101820(&a);
        t->e0->v14(&t->f178, 0, 0, 0, 0);
        fn_802490E0(t, 3, (f32)rnd(t->f138));
        break;
    }
    case 4:
        fn_80241628(t, 1, 0);
        t->e0->v23();
        break;
    case 5:
        fn_80241628(t, 0, 0);
        t->e0->v24();
        break;
    case 6:
        if (t->f164 && t->f164->fc) {
            fn_800A7A1C(t, t->e0->f114 == 0);
            fn_802494A4(t, 1);
        } else if (t->f160 && t->f160->fc) {
            fn_800A77D0(t, t->e0->f114 == 0);
            fn_802494A4(t, 3);
        } else {
            fn_802494A4(t, 5);
        }
        t->f170 = 0;
        fn_802494A4(t, 5);
        break;
    case 7:
        fn_802494A4(t, 5);
        break;
    case 8:
        return;
    case 9:
        t->e0->v23();
        fn_802494A4(t, 0);
        break;
    case 10:
        if (t->f164 && t->f164->fc) {
            fn_800A7A1C(t, t->e0->f114 == 0);
            fn_802494A4(t, 1);
        } else if (t->f160 && t->f160->fc) {
            fn_800A77D0(t, t->e0->f114 == 0);
            fn_802494A4(t, 3);
        } else {
            fn_802494A4(t, 5);
        }
        t->f170 = 0;
        fn_80240DEC(t, 0x19, 0, 0);
        break;
    case 11:
        fn_800A75B8(t);
        break;
    case 12:
        fn_802494A4(t, 3);
        break;
    case 13:
        fn_802494A4(t, 1);
        break;
    case 14:
        fn_800A7A1C(t, 0);
        break;
    case 15:
        fn_802494A4(t, 2);
        break;
    case 16:
        if (t->f16c && *t->f118) fn_802494A4(t, 4);
        break;
    case 17:
        fn_80249008(t, 0);
        fn_80249008(t, 1);
        fn_80249008(t, 2);
        break;
    case 18:
        fn_80249008(t, 3);
        break;
    case 19:
        break;
    }
}


}
