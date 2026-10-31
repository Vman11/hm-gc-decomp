// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VE { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *a, void *b, void *c, void *d, int e); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void appear(); virtual void vanish(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
typedef struct { f32 x, y, z; } V3;
typedef struct { char *name; u32 a, b, c, d; } S5;
struct VB { u8 pad[0x68]; };
struct VS : VB { virtual void a0(); virtual void a1(); virtual void upd(); };
static u8 sPad[0x4C0] = {1};
static s32 tA[26] = {1};
static s32 tB[77] = {1};
static s32 tC[77] = {1};
extern u32 lbl_8035B308;
extern void *lbl_8035B65C;
extern const S5 lbl_80295C9C;
extern char lbl_80295CB0[];
extern char lbl_8035D280[7], lbl_8035D288[4], lbl_8035D304[8], lbl_8035D334[7], lbl_8035D33C[7], lbl_8035D344[7];
extern f32 lbl_8035D34C;
void __ct__9C80253F24Fiiii(void *, void *, u32, s32, u32);
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
void fn_8004B6B8(int);
void fn_8004B388(int);
void fn_8004A7C8(f32, int);
int fn_8022C558(VE *);
void fn_8022B618(VE *);
void fn_8022A7A8(VE *);
void fn_8022BBF4(VE *);
void fn_8022AD0C(VE *);
void fn_8023FA2C(int, int, S5);
void fn_80241140(int, int);
void fn_8024125C(int, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, u32, int, u32, int);
int fn_80241628(int, int, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802494A4(int, int);

#define E0 (*(VE **)(p + 0xe0))
#define FLG (**(u32 **)(p + 0x1c4))

static inline void setp(int p) {
    if (*(int *)(p + 0x1b4) == 0 && *(int *)((int)E0 + 0x114) == 0) E0->setPos((void *)(p + 0x194), 0, 0, 0, 0);
}
static inline void showIn(int p) {
    if (fn_8022C558(E0) == 0) E0->appear();
    if (*(int *)(p + 0x1e8) == 0) setp(p);
}
static inline void hide(int p) {
    if (fn_8022C558(E0) != 0) E0->vanish();
    fn_8022B618(E0);
    fn_8022A7A8(E0);
}
static inline void die(int p) {
    if (*(int **)(p + 0x128) != 0 && **(int **)(p + 0x128) == 1) fn_80241140(p, 1);
    else fn_8024125C(p, 1);
    if (fn_800F6CD0(*(void **)(p + 0x130), lbl_8035D288) == 0) {
        int b = !fn_800F6CD0(*(void **)(p + 0x134), lbl_8035D288);
        if (**(int **)(p + 0x138) != 0) {
            __ct__9C80253F24Fiiii(lbl_8035B65C, *(void **)(p + 0x130), *(u32 *)(p + 0xe0), 0, b ? *(u32 *)(p + 0x134) : 0);
        } else {
            fn_80242BC0(fn_80242144(p, 1), *(void **)(p + 0x130), *(u32 *)(p + 0xe0), 0, b ? *(u32 *)(p + 0x134) : 0, 0);
        }
    }
    if (*(VE **)(p + 0x1a8) != 0) (*(VE **)(p + 0x1a8))->send(lbl_8035D33C, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x1ac), 0);
    if (**(int **)(p + 0x120) == 0) FLG |= *(u32 *)(p + 0x1cc);
}
static inline void dieEnd(int p) {
    if (**(int **)(p + 0x1c0) == 0 && fn_800F6CD0(*(void **)(p + 0x118), lbl_80295CB0) == 0) *(u32 *)(p + 0x1d0) = 1;
    else *(u32 *)(p + 0x1d0) = 0;
    if (**(int **)(p + 0x148) != 0) fn_802494A4(p, 4);
    else if (**(int **)(p + 0x120) != 0) fn_802494A4(p, 6);
    else fn_802494A4(p, 1);
}

static inline void spawnAll(int p, char *buf4) {
    u32 i;
    for (i = 0; i < *(u32 *)(**(int **)(p + 0x18c) + 0x10); i++) {
        fn_800F6E88(buf4, (void *)((*(int **)(p + 0x18c))[3] + i * 8));
        if (fn_800F6CD0(buf4, lbl_8035D288) == 0) {
            S5 s = lbl_80295C9C;
            s.name = buf4;
            fn_8023FA2C(p, *(int *)(p + 0x190) + i * 4, s);
        }
    }
}

static inline void warp(int p, V3 *v) {
    VS *o = *(VS **)(*(int *)(lbl_8035B308 + 0x48) + 0x9c);
    if (*(u32 *)o & 4) o->upd();
    v->x = *(f32 *)((int)o + 24);
    v->y = *(f32 *)((int)o + 28);
    v->z = *(f32 *)((int)o + 32);
    E0->setPos(v, 0, 0, 0, 0);
}

void fn_80049718(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    V3 v15;
    V3 v20;
    V3 v22;
    char buf4[8];
    char buf[8];

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_8004B6B8(p);
        break;
    case 1:
        fn_80241628(p, 0, 0);
        hide(p);
        FLG &= ~*(u32 *)(p + 0x1c8);
        break;
    case 2:
        fn_80241628(p, 0, 0);
        if (*(volatile s32 *)(p + 0x1dc) == 0) showIn(p);
        FLG |= *(u32 *)(p + 0x1c8);
        fn_8004B388(p);
        fn_80241628(p, 2, 0);
        fn_8024125C(p, 0);
        break;
    case 3:
        if (**(int **)(p + 0x14c) != 0) fn_80241628(p, 1, 0);
        else fn_80241628(p, 0, 0);
        if (*(volatile s32 *)(p + 0x1dc) == 0) {
            showIn(p);
            fn_8022BBF4(E0);
            fn_8022AD0C(E0);
        }
        FLG |= *(u32 *)(p + 0x1c8);
        fn_802490E0(p, 0, **(f32 **)(p + 0x12c));
        break;
    case 4:
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x1b8) = 1;
        fn_8022B618(E0);
        fn_8022A7A8(E0);
        if (*(void **)(p + 0x18c) != 0 && *(void **)(p + 0x190) != 0) {
            spawnAll(p, buf4);
        }
        break;
    case 5:
        fn_80241628(p, 1, 0);
        fn_802490E0(p, 1, *(int *)(p + 0x1d0) != 0 ? **(f32 **)(p + 0x174) : **(f32 **)(p + 0x164));
        *(u32 *)(p + 0x1bc) = 1;
        break;
    case 6:
        fn_80241628(p, 0, 0);
        hide(p);
        FLG &= ~*(u32 *)(p + 0x1c8);
        fn_802490E0(p, 2, **(f32 **)(p + 0x124));
        break;
    case 7:
        return;
    case 8:
        fn_80249008(p, 0);
        break;
    case 9:
        *(u32 *)(p + 0x1b8) = 0;
        break;
    case 10:
        fn_80249008(p, 1);
        *(u32 *)(p + 0x1bc) = 0;
        break;
    case 11:
        fn_80249008(p, 2);
        break;
    case 12:
        setp(p);
        fn_802494A4(p, 3);
        break;
    case 13:
        fn_802494A4(p, 1);
        break;
    case 14:
        fn_802494A4(p, 2);
        break;
    case 15:
        *(u32 *)(p + 0x1e8) = 1;
        fn_802494A4(p, 2);
        break;
    case 16:
        *(u32 *)(p + 0xe4) = *(u32 *)(p + 0xe0);
        fn_802494A4(p, 2);
        break;
    case 17:
        fn_802494A4(p, 3);
        break;
    case 18:
        if (**(int **)(p + 0x180) != 0 && *(int *)(p + 0x1d8) != 0 && *(int *)(p + 0x1dc) == 0)
            fn_80242BC0(fn_80242144(p, 0), lbl_8035D280, *(u32 *)(p + 0xe0), 0, *(u32 *)(p + 0x118), 0);
        break;
    case 19:
        fn_80242BC0(fn_80242144(p, 0), lbl_8035D334, *(u32 *)(p + 0xe0), 0, *(u32 *)(p + 0x11c), 0);
        break;
    case 20:
        die(p);
        dieEnd(p);
        break;
    case 21: {
        die(p);
        warp(p, &v15);
        dieEnd(p);
        break;
    }
    case 22:
        return;
    case 23:
        if (**(int **)(p + 0x120) != 0) fn_802494A4(p, 6);
        else fn_802494A4(p, 1);
        break;
    case 24:
        (*(VE **)(p + 0xe4))->send(lbl_8035D344, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x118), 0);
        break;
    case 25:
        fn_8004A7C8(lbl_8035D34C, p);
        break;
    case 26:
        if (fn_800F6CD0(*(void **)(p + 0x118), lbl_80295CB0) != 0) {
            if (FLG & *(u32 *)(p + 0x1cc)) {
                if (*(volatile s32 *)(p + 0x1dc) == 0) showIn(p);
                FLG |= *(u32 *)(p + 0x1c8);
                fn_802494A4(p, 5);
                fn_8004A7C8(lbl_8035D34C, p);
            }
            if (fn_800F6CD0(*(void **)(p + 0x118), lbl_80295CB0) != 0) {
                int n;
                *(u32 *)(p + 0x1e4) = 0;
                __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035D304, 0, 0, 0);
                fn_800F6E88(buf, (void *)(*(int *)(p + 0xe0) + 0x8c));
                n = *(int *)(p + 0x1e4);
                buf[7] = n + '0';
                switch (n) {
                case 0: break;
                case 1: __ct__9C80253F24Fiiii(lbl_8035B65C, buf, 0, 0, 0); break;
                case 2: __ct__9C80253F24Fiiii(lbl_8035B65C, buf, 0, 0, 0); break;
                case 3: __ct__9C80253F24Fiiii(lbl_8035B65C, buf, 0, 0, 0); break;
                }
            }
        }
        break;
    case 27:
        if (fn_800F6CD0(*(void **)(p + 0x118), lbl_80295CB0) != 0 && (FLG & *(u32 *)(p + 0x1cc)))
            (*(int *)(p + 0x1e4))++;
        break;
    case 28:
        (*(int *)(p + 0x1e4))++;
        break;
    case 29:
        *(u32 *)(p + 0x1d8) = 0;
        break;
    case 30:
        *(u32 *)(p + 0x1d8) = 1;
        break;
    case 31:
        *(u32 *)(p + 0x1dc) = 1;
        break;
    case 32:
        *(u32 *)(p + 0x1dc) = 1;
        if (fn_8022C558(E0) != 0 && *(int *)((int)E0 + 0x114) == 0) E0->vanish();
        if (*(int *)((int)E0 + 0x114) != 0) {
            E0->getPos(&v20, 0, 0, 0, 0);
            v20.z += *(f32 *)(p + 0x1e0);
            E0->setPos(&v20, 0, 0, 0, 0);
        }
        fn_8022B618(E0);
        fn_8022A7A8(E0);
        break;
    case 33:
        *(u32 *)(p + 0x1dc) = 0;
        break;
    case 34:
        *(u32 *)(p + 0x1dc) = 0;
        if (*(volatile s32 *)(p + 0x1dc) == 0) {
            showIn(p);
            if (*(int *)((int)E0 + 0x114) != 0) {
                E0->getPos(&v22, 0, 0, 0, 0);
                v22.z -= *(f32 *)(p + 0x1e0);
                E0->setPos(&v22, 0, 0, 0, 0);
            }
            fn_8022BBF4(E0);
            fn_8022AD0C(E0);
        }
    case 35:
        break;
    }
}
}

} /* extern "C" */
