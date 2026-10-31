// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, int a, int b, int c, int d); virtual void w14(); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[0x614] = {1};
static s32 tA[33] = {1};
static s32 tB[117] = {1};
static s32 tC[117] = {1};
extern u32 lbl_8035B308;
extern f32 lbl_8035CA40, lbl_8035CA1C, lbl_8035CA20;
extern void *lbl_8035B65C;
extern u8 lbl_8035C914[4];
extern char lbl_8035CA24[8], lbl_8035CA30[6], lbl_8035CA44[8], lbl_80295604[], lbl_8035CA4C[8], lbl_8035C9AC[6], lbl_8035CA54[7];
extern char lbl_8035CA5C[8], lbl_8035CA64[8], lbl_8035CA6C[8], lbl_8035CA74[8];
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, void *);
int fn_800F6CD0(int, void *);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
VO *fn_802288FC(u32, char *);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
int fn_802401A0(int);
int fn_802402E0(int);
int fn_802405B8(int);
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

void fn_8004397C(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    f32 v;
    f32 k;
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
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        fn_802402E0(p);
        break;
    case 1:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 1, 0.0f);
        (*(VO **)(p + 0xe0))->getPos((void *)(p + 0x148), 0, 0, 0, 0);
        break;
    case 2:
        return;
    case 3:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, 0.2f);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_802401A0(p);
        fn_80241588(p, 5, 0, 0.2f);
        if (*(void **)(p + 0x130) != 0 && fn_800F6CD0(*(int *)(p + 0x130), lbl_8035C914) == 0) {
            __ct__9C80253F24Fiiii(lbl_8035B65C, *(void **)(p + 0x130), 0, 0, 0);
        }
        break;
    case 5:
        if (*(int *)(p + 0x144) != 0) {
            fn_802494A4(p, 6);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 2, 0);
            fn_80241588(p, 6, 0, 0.2f);
            *(u32 *)(p + 0x138) = 1;
            *(f32 *)(p + 0x158) = lbl_8035CA1C;
            v = -**(f32 **)(p + 0x120);
            (*(VO **)(p + 0x118))->send(lbl_8035CA24, *(u32 *)(p + 0xe0), 0, &v, 0);
        }
        break;
    case 6:
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 2, 0);
        fn_80241588(p, 7, 0, 0.2f);
        break;
    case 7:
        fn_80241628(p, 3, 0);
        fn_80241588(p, 7, 0, 0.2f);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 8:
        if (*(int *)(p + 0x144) != 0) {
            fn_802494A4(p, 6);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 2, 0);
            fn_80241588(p, 7, 0, 0.2f);
        }
        break;
    case 9:
        if (*(int *)(p + 0x144) != 0) {
            fn_802494A4(p, 6);
        } else {
            if (*(int **)(p + 0x124) != 0 && **(int **)(p + 0x124) != 0) {
                fn_8023F5E8(p, *(int *)(p + 0x118));
                fn_80241628(p, 2, 0);
                fn_80241588(p, 7, 0, 0.2f);
            } else {
                fn_8023F5E8(p, *(int *)(p + 0x118));
                fn_80241628(p, 4, 0);
                fn_80241588(p, 1, 0, 0.2f);
                fn_80242168(8.0f, p);
            }
        }
        break;
    case 10:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 3, 0, 0.2f);
        break;
    case 11:
        *(u32 *)(p + 0x138) = 0;
        break;
    case 12:
        *(u32 *)(*(int *)(p + 0xe0) + 0x23c) = 1;
        break;
    case 13:
        fn_802494A4(p, 9);
        break;
    case 14:
        fn_802491DC(p, 3);
        break;
    case 15:
        if (*(int *)(p + 0xdc) == 6) {
            *(u32 *)(p + 0x138) = 0;
            fn_80241588(p, 7, 0, lbl_8035CA20);
        } else {
            fn_802494A4(p, 3);
        }
        break;
    case 16:
        fn_802494A4(p, 3);
        break;
    case 17:
        fn_802494A4(p, 5);
        break;
    case 18:
        *(u32 *)(p + 0x15c) = 0;
        fn_802405B8(p);
        break;
    case 19:
        *(u32 *)(p + 0x15c) = 1;
        fn_802405B8(p);
        *(u32 *)(p + 0x15c) = 0;
        break;
    case 20:
        if (*(int *)(p + 0x15c) != 0) fn_802494A4(p, 10);
        break;
    case 21:
        fn_802494A4(p, 4);
        break;
    case 22:
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_8035CA30, lbl_8035C914);
        fn_8022BF30(*(int *)(p + 0xe0), 0xff, 1, 0.0f);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 1, 2.0f);
        fn_802490E0(p, 0, 1.8f);
        break;
    case 23:
        return;
    case 24:
        *(u32 *)(p + 0x13c) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x140) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 1);
        break;
    case 25:
        fn_802494A4(p, 1);
        break;
    case 26:
        fn_80240274(p, 0);
        fn_802494A4(p, 1);
        break;
    case 27:
        *(u32 *)(p + 0x144) = 1;
        break;
    case 28:
        *(u32 *)(p + 0x144) = 1;
        fn_802494A4(p, 6);
        break;
    case 29:
        *(u32 *)(p + 0x144) = 0;
        break;
    case 30:
        *(u32 *)(p + 0x144) = 0;
        fn_802494A4(p, 9);
        break;
    case 31:
        { volatile f32 kk = lbl_8035CA40;
        __ct__9C80253F24Fiiii(*(void *volatile *)&lbl_8035B65C, lbl_8035CA44, *(u32 *)(p + 0xe0), 0, (void *)&kk); }
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80295604, 0, 0, 0);
        break;
    case 32:
        if (*(int *)(p + 0x144) == 0) {
            o = fn_802288FC(lbl_8035B308, lbl_8035CA4C);
            if (o) o->send(lbl_8035C9AC, *(u32 *)(p + 0xe0), 0, 0, 0);
        }
        break;
    case 33:
        fn_802402E0(p);
        o = *(VO **)(p + 0x13c);
        if (o) o->send(lbl_8035CA54, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x140), 0);
        break;
    case 34:
        fn_802494A4(p, 7);
        fn_802402E0(p);
        break;
    case 35:
        (*(VO **)(p + 0xe0))->getPos((void *)(p + 0x148), 0, 0, 0, 0);
        fn_802494A4(p, 8);
        break;
    case 36:
        fn_802494A4(p, 7);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035CA5C, 0);
        break;
    case 37:
        fn_802494A4(p, 7);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035CA64, 0);
        break;
    case 38:
        fn_802494A4(p, 7);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035CA6C, 0);
        break;
    case 39:
        fn_802494A4(p, 7);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035CA74, 0);
        break;
    case 40:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(0.2f, p, *(int *)(p + 0xf0), 0, 1, *(int *)(p + 0xec));
        break;
    case 41:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        break;
    case 42:
        *(u32 *)(*(int *)(p + 0xe0) + 0x23c) = 0;
        break;
    case 43:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
    case 44:
        break;
    }
}
}

} /* extern "C" */
