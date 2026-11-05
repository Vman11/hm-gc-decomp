#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, int a, int b, int c, int d); virtual void w14(); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[0x5F0] = {1};
static s32 tA[29] = {1};
static s32 tB[66] = {1};
static s32 tC[66] = {1};
typedef struct { f32 x, y, z; } V3;
struct VG { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *a, void *b, void *c, void *d, int e); virtual void setPos(void *a, void *b, void *c, void *d, int e); };
extern u32 lbl_8035B308;
extern f32 lbl_8035D090, lbl_8035D094, lbl_8035D0A0;
extern f64 lbl_8035D0A8, lbl_8035D0B0;
extern u8 lbl_8035CF7C[4];
extern char lbl_8035D098[8], lbl_8035D0B8[7], lbl_8035D0C0[8], lbl_8035D0C8[7];
extern char lbl_8035D0D0[8], lbl_8035D0D8[8], lbl_8035D0E0[8], lbl_8035D0E8[8];
extern char lbl_8035D0F0[8], lbl_8035D0F8[8], lbl_8035D100[8], lbl_8035D108[8], lbl_8035D110[8], lbl_8035D118[8];
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void *fn_800F8274(int, char *);
void fn_80107244(void *, void *);
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
void fn_802413D8(f32, int, int, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

static inline V3 vsub(const V3 &a, const V3 &b) { V3 t; t.x = a.x - b.x; t.y = a.y - b.y; t.z = a.z - b.z; return t; }
static inline f32 Sq(f32 x) {
    if (x > lbl_8035D090) {
        const f64 _half = lbl_8035D0A8;
        const f64 _three = lbl_8035D0B0;
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

static inline f32 SqV(f32 x) {
    if (x > *(volatile f32 *)&lbl_8035D090) {
        const f64 _half = lbl_8035D0A8;
        const f64 _three = lbl_8035D0B0;
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
static inline void walkPlayer(int p, char *name) {
    fn_802494A4(p, 4);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
}

void fn_80046F4C(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    u8 d[16];
    u8 c[12];
    V3 b;
    V3 e;
    V3 a;
    V3 a3;
    V3 b3;
    volatile f32 dmg;
    VO *o;

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        break;
    case 1: {
        int g = *(int *)(p + 0xe0);
        *(f32 *)(g + 0x13c) = lbl_8035D090;
        *(f32 *)(g + 0x140) = lbl_8035D090;
        *(f32 *)(g + 0x144) = lbl_8035D094;
        if (*(VG **)(p + 0xe4) != 0) {
            void *bone;
            (*(VG **)(p + 0xe4))->getPos(&a, &b, c, d, 0);
            e = a;
            b.x = -b.x;
            b.y = -b.y;
            b.z = -b.z;
            bone = *(void **)(*(int *)(p + 0xe4) + 0xa0);
            if (bone != 0 && (bone = fn_800F8274(*(int *)((int)bone + 0xa8), lbl_8035D098)) != 0) {
                fn_80107244(bone, &e);
                e.z = a.z;
                (*(VG **)(p + 0xe0))->setPos(&e, &b, c, d, 0);
            }
        }
        fn_80241628(p, 4, 0);
        fn_80241588(p, 2, 0, lbl_8035D0A0);
        break;
    }
    case 2:
        if (*(int *)(p + 0x130) != 0) {
            fn_802494A4(p, 5);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035D0A0);
            fn_80242168(lbl_8035D094, p);
            fn_8023F9C8(p, 0);
            fn_802490E0(p, 0, **(f32 **)(p + 0x124));
        }
        break;
    case 3: {
        VO *tg;
        f32 len, r;
        fn_80241628(p, 0, 0);
        fn_802401A0(p);
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        fn_8023F9C8(p, 3);
        fn_8023F9C8(p, 4);
        fn_8023F9C8(p, 5);
        tg = *(VO **)(p + 0x118);
        (*(VO **)(p + 0xe0))->getPos(&a3, 0, 0, 0, 0);
        tg->getPos(&b3, 0, 0, 0, 0);
        { f32 dz, dy, dx;
        dx = b3.x - a3.x;
        dy = b3.y - a3.y;
        dz = b3.z - a3.z;
        { f32 xx = dx * dx, yy = dy * dy, zz = dz * dz;
        *(volatile f32 *)&b3.x = dx; *(volatile f32 *)&b3.y = dy; *(volatile f32 *)&b3.z = dz;
        len = SqV(xx + yy + zz); } }
        r = **(f32 **)(p + 0x120);
        {
            f32 dm = (len > r) ? lbl_8035D090 : **(f32 **)(p + 0x11c) * ((r - len) / r);
            dmg = dm;
            if (dm > *(volatile f32 *)&lbl_8035D090) {
                dmg = -dm;
                (*(VO **)(p + 0x118))->send(lbl_8035D0B8, 0, 0, (void *)&dmg, 0);
            }
        }
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_8035D0C0, lbl_8035CF7C);
        fn_80241588(p, 1, 0, lbl_8035D0A0);
        fn_8024125C(p, 0);
        fn_802491DC(p, 2);
        break;
    }
    case 4:
        fn_80241628(p, 5, 0);
        fn_80241588(p, 0, 0, lbl_8035D0A0);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 5:
        *(u32 *)(p + 0x134) = 1;
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035D0A0);
        fn_80242168(lbl_8035D094, p);
        break;
    case 6:
        return;
    case 7:
        *(u32 *)(p + 0x134) = 0;
        break;
    case 8:
        fn_802494A4(p, 2);
        break;
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        fn_802405B8(p);
        break;
    case 11:
        *(u32 *)(p + 0x128) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x12c) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 1);
        break;
    case 12:
        fn_802494A4(p, 1);
        break;
    case 13:
        *(u32 *)(p + 0x130) = 1;
        break;
    case 14:
        *(u32 *)(p + 0x130) = 1;
        fn_802494A4(p, 5);
        break;
    case 15:
        *(u32 *)(p + 0x130) = 0;
        break;
    case 16:
        *(u32 *)(p + 0x130) = 0;
        fn_802494A4(p, 2);
        break;
    case 17:
        fn_802494A4(p, 2);
        break;
    case 18:
        fn_802402E0(p);
        o = *(VO **)(p + 0x128);
        if (o) o->send(lbl_8035D0C8, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x12c), 0);
        break;
    case 19:
        fn_802494A4(p, 4);
        fn_802402E0(p);
        break;
    case 20:
        fn_802494A4(p, 2);
        fn_802401D0(p);
        break;
    case 21: walkPlayer(p, lbl_8035D0D0); break;
    case 22: walkPlayer(p, lbl_8035D0D8); break;
    case 23: walkPlayer(p, lbl_8035D0E0); break;
    case 24: walkPlayer(p, lbl_8035D0E8); break;
    case 25: walkPlayer(p, lbl_8035D0F0); break;
    case 26: walkPlayer(p, lbl_8035D0F8); break;
    case 27: walkPlayer(p, lbl_8035D100); break;
    case 28: walkPlayer(p, lbl_8035D108); break;
    case 29: walkPlayer(p, lbl_8035D110); break;
    case 30: walkPlayer(p, lbl_8035D118); break;
    case 31:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(lbl_8035D0A0, p, *(int *)(p + 0xf0), 0, 1, *(int *)(p + 0xec));
        break;
    case 32:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        fn_8023F864(p, 2);
        fn_8023F864(p, 3);
        fn_8023F864(p, 4);
        fn_8023F864(p, 5);
        break;
    case 33:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
    case 34:
        break;
    }
}
}
