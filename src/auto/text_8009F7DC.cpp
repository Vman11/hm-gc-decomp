// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[1336] = {1};
static s32 tA[15] = {1};
static s32 tB[31] = {1};
static s32 tC[51] = {1};
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void s23();
};
extern char lbl_80361A58[4];
extern f32 lbl_80361B1C;
extern char lbl_80361AF4[8];
void fn_800A0654(u8 *, u32);
void fn_80241628(u8 *, int, int);
void fn_802402E0(u8 *);
void fn_8023F5E8(u8 *, u32);
void fn_8022ADD4(u32);
void fn_8022AE50(u32);
void fn_80241588(u8 *, s32, int, f32);
void fn_80240F24(u8 *, int, int);
int fn_80244D40(u32, u32, char *);
void fn_802635C0(u32, u32);
void fn_80263528(u32, u32);
int rand(void);
void fn_802494A4(u8 *, int);
void fn_8009FBC8(u8 *, u32);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, u32, int, int, int, int);
void fn_80240274(u8 *, int);
void fn_80240338(u8 *);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
static inline void Name(u8 *p) {
    if (U32(340)) fn_800A0654(p, U32(340));
    else fn_800A0654(p, (u32)lbl_80361A58);
}
void fn_8009F7DC(u8 *p, s32 n) {
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
        Name(p);
        fn_80241628(p, 0, 0);
        fn_802402E0(p);
        break;
    case 1:
        fn_8023F5E8(p, 0);
        break;
    case 2:
        U32(344) = 1;
        fn_8022ADD4(U32(224));
        fn_80241588(p, 3, 0, lbl_80361B1C);
        fn_80240F24(p, 0, 1);
        fn_80241628(p, 0, 0);
        break;
    case 3:
        U32(344) = 0;
        if (fn_80244D40(U32(336), U32(364), lbl_80361AF4)) fn_80241628(p, 1, 0);
        fn_802635C0(U32(368), U32(336));
        fn_80263528(U32(368), U32(364));
        fn_80241588(p, (rand() & 1) + 1, 0, lbl_80361B1C);
        break;
    case 4:
        return;
    case 5:
        fn_8022AE50(U32(224));
        fn_80240F24(p, 2, 3);
        break;
    case 6:
        fn_802494A4(p, 4);
        break;
    case 7:
        return;
    case 8:
        fn_802494A4(p, 3);
        break;
    case 9:
        fn_8009FBC8(p, U32(236));
        break;
    case 10:
        *(u32 *)(U32(368) + 192) = 1;
        break;
    case 11:
        *(u32 *)(U32(368) + 192) = 0;
        break;
    case 12:
        fn_80263528(U32(368), U32(364));
        break;
    case 13: {
        f32 *f = *(f32 **)(p + 236);
        u32 s;
        if (f && (s = U32(240)) != 0) fn_80242BC0(fn_80242144(p, (s32)*f), s, 0, 0, 0, 0);
        break;
    }
    case 14:
        Name(p);
        fn_80240274(p, 0);
        (*(VC **)(p + 224))->s23();
        break;
    case 15:
        fn_80240338(p);
        fn_802494A4(p, 0);
        break;
    case 16:
        Name(p);
        fn_80240274(p, 0);
        fn_8009FBC8(p, 10000);
        break;
    case 17:
        fn_800A0654(p, U32(236));
        fn_80240274(p, 0);
        fn_8009FBC8(p, 10000);
        break;
    case 18:
        break;
    }
}

} /* extern "C" */
