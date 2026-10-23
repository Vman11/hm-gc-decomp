// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[852] = {1};
static s32 tA[12] = {1};
static s32 tB[38] = {1};
static s32 tC[58] = {1};
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void s33(const char *, u32, int, u32, int);
};
extern u8 *lbl_8035B460;
extern void *lbl_8035B65C;
extern f32 lbl_80361D9C;
extern const char lbl_80361D08[4];
extern char lbl_80361DA0[8];
extern const char lbl_80361DA8[7];
extern char lbl_8029AC90[];
extern char lbl_8029AC9C[];
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
int fn_800F6CD0(u32, const char *);
u32 fn_800F9398(u8 *, u32);
void fn_8022BE28(u32, u32);
void fn_80240B50(u8 *, u32, int);
void fn_802494A4(u8 *, int);
void __ct__9C80253F24Fiiii(void *, char *, u32, s32, u32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
static inline u32 Look(u32 s) {
    u32 r = 0;
    if (fn_800F6CD0(s, lbl_80361D08) == 0) r = fn_800F9398(*(u8 **)(*(u8 **)(lbl_8035B460 + 8) + 4) + 360, s);
    return r;
}
void fn_800A49A8(u8 *p, s32 n) {
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
        U32(296) = 0;
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_80241588(p, 0, 0, lbl_80361D9C);
        fn_8022BE28(U32(224), Look(U32(288)));
        break;
    case 2: {
        u32 s;
        fn_80241588(p, 1, 0, lbl_80361D9C);
        fn_8022BE28(U32(224), Look(U32(292)));
        s = U32(284);
        if (fn_800F6CD0(s, lbl_80361D08) == 0) fn_80240B50(p, s, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8029AC90, U32(224), 0, U32(280));
        break;
    }
    case 3:
        fn_80241588(p, 2, 0, lbl_80361D9C);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8029AC9C, U32(224), 0, U32(280));
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80361DA0, U32(224), 0, U32(280));
        break;
    case 4:
        fn_80241588(p, 3, 0, lbl_80361D9C);
        break;
    case 5:
        fn_80241588(p, 0, 0, lbl_80361D9C);
        fn_8022BE28(U32(224), Look(U32(292)));
        break;
    case 6:
        return;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        fn_802494A4(p, 5);
        break;
    case 9:
        if (S32(296) == 0) (*(VC **)(p + 228))->s33(lbl_80361DA8, U32(224), 0, U32(236), 0);
        break;
    case 10:
        fn_802494A4(p, 2);
        break;
    case 11:
        U32(296) = 1;
        break;
    case 12:
        U32(296) = 0;
        break;
    case 13:
        fn_802494A4(p, 1);
        break;
    case 14:
        fn_802494A4(p, 4);
        break;
    case 15:
        if (**(s32 **)(p + 280) != 0) fn_802494A4(p, 5);
        break;
    case 16:
        if (**(s32 **)(p + 280) != 0) {
            U32(296) = 0;
            fn_802494A4(p, 1);
        }
        break;
    case 17:
        break;
    }
}

} /* extern "C" */
