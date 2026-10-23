// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

static u8 sPad[908] = {1};
static s32 tA[5] = {1};
static s32 tB[11] = {1};
static s32 tC[31] = {1};
extern const char lbl_803601E8[4];
extern f32 lbl_80360318;
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
void fn_802494A4(u8 *, int);
void fn_800F6E88(char *, u32);
int fn_800F6CD0(u32, const char *);
void fn_802410CC(u8 *, u32, int);
void fn_80240B50(u8 *, u32, int);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, u32, u32, int, u32, int);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
void fn_8008C3B8(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = S32(96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        S32(304) = **(s32 **)(p + 280);
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2: {
        char buf[8];
        fn_800F6E88(buf, U32(236));
        S32(308) = buf[0] - '0';
        fn_80241588(p, S32(308) + (S32(312) - 1) * S32(304) - (S32(304) < S32(308)), 0, lbl_80360318);
        if (fn_800F6CD0(U32(296), lbl_803601E8) == 0) {
            if (**(s32 **)(p + 300) == 1) fn_802410CC(p, U32(296), 0);
            else fn_80240B50(p, U32(296), 0);
        }
        fn_802494A4(p, 2);
        break;
    }
    case 3: {
        char buf[8];
        fn_800F6E88(buf, U32(236));
        S32(304) = buf[0] - '0';
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        if (fn_800F6CD0(U32(292), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, S32(304)), U32(292), U32(224), 0, 0, 0);
        break;
    }
    case 4: {
        char buf[8];
        fn_802494A4(p, 1);
        fn_800F6E88(buf, U32(236));
        S32(304) = buf[0] - '0';
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        if (fn_800F6CD0(U32(292), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, S32(304)), U32(292), U32(224), 0, 0, 0);
        break;
    }
    case 5:
        S32(304) = S32(308);
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        if (fn_800F6CD0(U32(284), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, 0), U32(284), U32(224), 0, U32(288), 0);
        if (fn_800F6CD0(U32(292), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, S32(304)), U32(292), U32(224), 0, 0, 0);
        fn_802494A4(p, 1);
        break;
    case 6:
        break;
    }
}
