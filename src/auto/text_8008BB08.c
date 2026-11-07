// NonMatching draft (wIF, wQE): code is byte-identical (DIFF 0 ignoring relocs). Blocker is linking only:
// the tables must be TU-owned statics (lbl_802C6D70+760/784/840 off one base; extern struct/array folds offsets),
// so the unit has to own .data lbl_802C6D70 (now in asm jt_802C6D6C, also used by fn_8008C094), and the unit has extab -> .cpp.
#include "common.h"
static u8 sPad[760] = {1};
static s32 tA[6] = {1};
static s32 tB[14] = {1};
static s32 tC[34] = {1};
extern char lbl_80360178[0x4];
extern char lbl_803601CC[0x3];
extern char lbl_80299180[];
extern char lbl_80299194[];
extern void *lbl_8035B65C;
void fn_80241628(u8 *, int, int);
u32 fn_8023F4A0(u8 *, char *, char *, char *, int);
void fn_802494A4(u8 *, int);
void fn_800F6E88(char *, u32);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, void *, u32, int, void *, int);
void fn_80241140(u8 *, int);
void fn_80240C2C(u8 *, int);
int fn_800F6CD0(u32, char *);
void __ct__9C80253F24Fiiii(void *, u32, u32, s32, u32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define ARR(o) (*(s32 **)(p + (o)))
static inline void cp0(u8 *p, u32 j) { for (; j < U32(312); j++) ARR(304)[j] = (*(s32 **)(U32(296) + 12))[j]; }
static inline s32 match(u8 *p) {
    u32 m;
    u32 k = 0;
    s32 ok;
    u32 a;
    s32 v;
    u32 a2;
    u32 b2;
    if (**(s32 **)(p + 280) == 0) {
        m = U32(312);
        for (a = 0; a < m; a++) {
            v = ARR(304)[a];
            for (b2 = 0; b2 < m; b2++) {
                if (v == (*(s32 **)(U32(300) + 12))[b2]) {
                    k = b2;
                    a = m;
                    b2 = m;
                }
            }
        }
    }
    ok = 1;
    m = U32(312);
    for (a2 = 0; a2 < m; a2++) {
        s32 w = (*(s32 **)(U32(300) + 12))[(a2 + k) % m];
        if (w != -1 && w != ARR(304)[a2]) ok = 0;
    }
    return ok;
}
void fn_8008BB08(u8 *p, s32 n) {
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
    case 0: {
        U32(316) = 1;
        U32(308) = 0;
        U32(296) = fn_8023F4A0(p, lbl_80360178, lbl_80360178, lbl_80299180, 1);
        U32(300) = fn_8023F4A0(p, lbl_80360178, lbl_80360178, lbl_80299194, 1);
        cp0(p, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 1:
        fn_80241628(p, 0, 0);
        break;
    case 2:
        return;
    case 3: {
        char buf[8];
        char s2[8];
        char s1[8];
        s32 x, y, ia, ib;
        fn_800F6E88(buf, U32(236));
        s1[0] = buf[0];
        s1[1] = '\0';
        s2[0] = buf[2];
        s2[1] = '\0';
        ia = s1[0] - '1';
        ib = s2[0] - '1';
        x = ARR(304)[ia];
        y = ARR(304)[ib];
        ARR(304)[ia] = y;
        ARR(304)[ib] = x;
        U32(308) = 0;
        fn_80242BC0(fn_80242144(p, x), lbl_803601CC, U32(224), 0, s2, 0);
        fn_80242BC0(fn_80242144(p, y), lbl_803601CC, U32(224), 0, s1, 0);
        fn_80241140(p, 1);
        break;
    }
    case 4: {
        u32 k;
        u32 b2;
        u32 m;
        u32 a;
        s32 ok;
        if (++U32(308) != 2) break;
        ok = match(p);
        if (ok) {
            fn_80240C2C(p, 0);
            if (fn_800F6CD0(U32(284), lbl_80360178) == 0) {
                if (**(s32 **)(p + 292) != 0)
                    __ct__9C80253F24Fiiii(lbl_8035B65C, U32(284), U32(224), 0, U32(288));
                else
                    fn_80242BC0(fn_80242144(p, 0), *(void **)(p + 284), U32(224), 0, *(void **)(p + 288), 0);
            }
            fn_802494A4(p, 2);
        }
        break;
    }
    case 5:
        fn_802494A4(p, 0);
        break;
    case 6:
        fn_802494A4(p, 2);
        break;
    case 7:
        break;
    }
}
