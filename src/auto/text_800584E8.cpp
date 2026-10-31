// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
static u8 sPad[0x3B4] = {1};
static s32 tA[15] = {1};
static s32 tB[39] = {1};
static s32 tC[39] = {1};
extern u32 lbl_8035B308;
extern void *lbl_8035B65C;
extern void *lbl_8035A0A4;
extern void *lbl_8035B79C;
extern u8 lbl_8035E1F8[4];
extern f32 lbl_8035E260;
extern char lbl_8035E264[7];
void __ct__9C80253F24Fiiii(void *, void *, u32, s32, u32);
int fn_800F6CD0(void *, void *);
int fn_8003C930(void *);
void fn_800596D8(int);
void fn_80059338(int, int, int);
void fn_8022B618(int);
void fn_8022BBF4(int);
void fn_8024118C(int, int, int);
void fn_8026820C(void *, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, u32, int, u32, int);
int fn_80241628(int, int, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802494A4(int, int);

#define F (**(u32 **)(p + 0x1a4))
#define PI(o) (**(int **)(p + (o)))

static inline void off(int p) {
    fn_8022B618(*(int *)(p + 0xe0));
    F |= *(u32 *)(p + 0x1ac);
    F |= *(u32 *)(p + 0x1b0);
    F &= ~*(u32 *)(p + 0x1a8);
}
static inline void on(int p) {
    u32 m;
    fn_8022BBF4(*(int *)(p + 0xe0));
    m = *(u32 *)(p + 0x1ac);
    if (PI(0x130) == 0) F |= m;
    else F &= ~m;
    m = *(u32 *)(p + 0x1b0);
    if (PI(0x134) == 0) F |= m;
    else F &= ~m;
    F |= *(u32 *)(p + 0x1a8);
}
static inline bool inRange(int p) {
    int v = fn_8003C930(lbl_8035A0A4);
    bool b = false;
    if (v >= PI(0x17c) && v <= PI(0x180)) b = true;
    return b;
}
#define SON(o) (fn_800F6CD0(*(void **)(p + (o)), lbl_8035E1F8) == 0 ? *(u32 *)(p + (o)) : 0)
static inline void reward(int p) {
    if (PI(0x140) != 0) {
        __ct__9C80253F24Fiiii(lbl_8035B65C, *(void **)(p + 0x11c), 0, 0, SON(0x124));
    } else {
        fn_80242BC0(fn_80242144(p, 1), *(void **)(p + 0x11c), 0, 0, *(u32 *)(p + 0x124), 0);
        if (PI(0x158) != 0) fn_80242BC0(fn_80242144(p, 2), *(void **)(p + 0x11c), 0, 0, *(u32 *)(p + 0x124), 0);
        if ((F & *(u32 *)(p + 0x1ac)) && (F & *(u32 *)(p + 0x1b0))) off(p);
    }
}
static inline void give(int p) {
    u32 f = F;
    if ((f & *(u32 *)(p + 0x1b0)) == 0) {
        if (PI(0x13c) != 0) F = f | *(u32 *)(p + 0x1b0);
        fn_8024118C(p, *(int *)(p + 0x12c), 0);
        if (PI(0x170) != 0) fn_8026820C(lbl_8035B79C, 3);
        if (fn_800F6CD0(*(void **)(p + 0x168), lbl_8035E1F8) == 0)
            (*(VO **)(lbl_8035B308 + 0x48))->send(lbl_8035E264, *(u32 *)(p + 0xe0), 0, 0, *(int *)(p + 0x168));
    }
}

void fn_800584E8(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_800596D8(p);
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2:
        if (PI(0x148) != 0) fn_802490E0(p, 0, **(f32 **)(p + 0x14c));
        break;
    case 3:
        off(p);
        break;
    case 4:
        fn_80249008(p, 0);
        break;
    case 5:
        fn_80059338(p, 0, **(f32 **)(p + 0x188) <= lbl_8035E260);
        (*(int *)(p + 0x190))++;
        fn_802494A4(p, 2);
        break;
    case 6:
        fn_80059338(p, 1, **(f32 **)(p + 0x188) <= lbl_8035E260);
        (*(int *)(p + 0x190))++;
        break;
    case 7:
        (*(int *)(p + 0x190))--;
        if (*(int *)(p + 0x190) < 0) *(int *)(p + 0x190) = 0;
        if (*(void **)(p + 0xe4) != 0 && *(u32 *)(p + 0xe4) == *(u32 *)(lbl_8035B308 + 0x48)) {
            *(u32 *)(p + 0x19c) = 0;
            *(u32 *)(p + 0x1a0) = 1;
            if (PI(0x15c) == 0) goto check;
            if (*(int *)(p + 0x194) != 0) goto check;
            if (*(int *)(p + 0x198) != 0) goto check;
            goto skip;
        } else {
            *(u32 *)(p + 0x1a0) = 0;
        }
    check:
        if ((F & *(u32 *)(p + 0x1a8)) && PI(0x134) != 0 && PI(0x144) != 0 && *(u32 *)(p + 0xe4) != *(u32 *)(p + 0xe0)) {
            if (inRange(p)) (*(VO **)(p + 0xe4))->send(*(void **)(p + 0x11c), 0, 0, (void *)SON(0x124), 0);
        }
    skip:
        if (*(int *)(p + 0x190) == 0) {
            int le = **(f32 **)(p + 0x188) <= lbl_8035E260;
            if ((PI(0x15c) == 0 || *(int *)(p + 0x1a0) == 0 || *(int *)(p + 0x19c) != 0 || *(int *)(p + 0x194) != 0 || *(int *)(p + 0x198) != 0) && (F & *(u32 *)(p + 0x1a8))) {
                if (inRange(p)) {
                    u32 f;
                    u32 m;
                    u32 *fp;
                    fp = *(u32 **)(p + 0x1a4); m = *(u32 *)(p + 0x1b0); f = *fp;
                    if ((f & m) == 0) {
                        if (PI(0x13c) != 0) *fp = f | m;
                        fn_8024118C(p, *(int *)(p + 0x12c), 0);
                        if (PI(0x170) != 0) fn_8026820C(lbl_8035B79C, 3);
                        if (fn_800F6CD0(*(void **)(p + 0x168), lbl_8035E1F8) == 0)
                            (*(VO **)(lbl_8035B308 + 0x48))->send(lbl_8035E264, *(u32 *)(p + 0xe0), 0, 0, *(int *)(p + 0x168));
                        if (le) reward(p);
                        else fn_802490E0(p, 2, **(f32 **)(p + 0x188));
                    }
                }
            }
            fn_802494A4(p, 1);
        }
        break;
    case 8:
        fn_80059338(p, 0, 1);
        break;
    case 9:
        if (F & *(u32 *)(p + 0x1a8)) {
            if (inRange(p)) {
                u32 f;
                u32 m;
                u32 *fp;
                fp = *(u32 **)(p + 0x1a4); m = *(u32 *)(p + 0x1b0); f = *fp;
                if ((f & m) == 0) {
                    if (PI(0x13c) != 0) *fp = f | m;
                    fn_8024118C(p, *(int *)(p + 0x12c), 0);
                    if (PI(0x170) != 0) fn_8026820C(lbl_8035B79C, 3);
                    if (fn_800F6CD0(*(void **)(p + 0x168), lbl_8035E1F8) == 0)
                        (*(VO **)(lbl_8035B308 + 0x48))->send(lbl_8035E264, *(u32 *)(p + 0xe0), 0, 0, *(int *)(p + 0x168));
                    reward(p);
                }
            }
        }
        break;
    case 10:
        *(u32 *)(p + 0x194) = 0;
        break;
    case 11:
        *(u32 *)(p + 0x194) = 1;
        break;
    case 12:
        on(p);
        break;
    case 13:
        fn_802494A4(p, 3);
        break;
    case 14:
        if (PI(0x174) != 0) {
            if (PI(0x178) != 0) on(p);
            else off(p);
        }
        break;
    case 15:
        if (PI(0x174) != 0) {
            if (PI(0x178) != 0) off(p);
            else on(p);
        }
        break;
    case 16:
        if (PI(0x140) != 0) {
            __ct__9C80253F24Fiiii(lbl_8035B65C, *(void **)(p + 0x118), *(u32 *)(p + 0xe0), 0, SON(0x120));
        } else {
            fn_80242BC0(fn_80242144(p, 1), *(void **)(p + 0x118), *(u32 *)(p + 0xe0), 0, *(u32 *)(p + 0x120), 0);
            if (PI(0x158) != 0) fn_80242BC0(fn_80242144(p, 2), *(void **)(p + 0x118), *(u32 *)(p + 0xe0), 0, *(u32 *)(p + 0x120), 0);
        }
        break;
    case 17:
        reward(p);
    case 18:
        break;
    }
}
}

} /* extern "C" */
