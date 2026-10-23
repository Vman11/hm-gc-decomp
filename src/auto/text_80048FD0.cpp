// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[692] = {1};
static s32 tA[6] = {1};
static s32 tB[11] = {1};
static s32 tC[31] = {1};
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void s23();
};
struct FT { void *a, *b, *c; void (*f12)(u32, f32 *); };
extern FT lbl_803286D0;
extern u8 *lbl_8035B308;
extern char lbl_8035D1F8[0x4];
extern f32 lbl_8035D234;
extern const u32 lbl_8035D22C;
extern const u32 lbl_8035D230;
extern f32 lbl_8035D238;
int fn_800F6CD0(u32, char *);
u32 fn_802288FC(u8 *, u32);
void fn_80190C98(u8 *);
void fn_80190940(u32, u32);
void fn_80107F3C(u32, f32 *);
void fn_80240DBC(u8 *, f32);
void fn_8024118C(u8 *, u32, int);
void fn_802494A4(u8 *, int);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define OBJ (*(u8 **)(U32(224) + 156))
static inline void Off(u8 *p) {
    *(u32 *)(OBJ + 152) |= lbl_8035D230;
    fn_80240DBC(p, lbl_8035D238);
}
static inline void On(u8 *p) {
    *(u32 *)(OBJ + 152) &= ~8;
    if (U32(284) && fn_800F6CD0(U32(284), lbl_8035D1F8) == 0) fn_8024118C(p, U32(284), 0);
    if (U32(288) && fn_800F6CD0(U32(288), lbl_8035D1F8) == 0) fn_8024118C(p, U32(288), 1);
}
void fn_80048FD0(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    f32 w[3];
    f32 v[3];
    t = S32(96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        if (U32(280) && fn_800F6CD0(U32(280), lbl_8035D1F8) == 0) {
            u8 *o;
            u8 *tt;
            U32(300) = fn_802288FC(lbl_8035B308, U32(280));
            v[0] = lbl_8035D234;
            v[1] = lbl_8035D234;
            v[2] = lbl_8035D234;
            o = OBJ;
            tt = *(u8 **)(o + 48);
            if (tt) {
                lbl_803286D0.f12(*(u32 *)(tt + 16), v);
                *(u32 *)(tt + 32) |= lbl_8035D22C;
                fn_80190C98(o);
            }
            fn_80190940(*(u32 *)(U32(224) + 156), *(u32 *)(U32(300) + 156));
        }
        if (U32(296)) {
            u32 s;
            w[0] = **(f32 **)(p + 296);
            w[1] = **(f32 **)(p + 296);
            w[2] = **(f32 **)(p + 296);
            s = *(u32 *)(OBJ + 120);
            if (s) fn_80107F3C(s, w);
        }
        (*(VC **)(p + 224))->s23();
        Off(p);
        break;
    case 1: {
        bool b = *(s32 **)(p + 292) == 0;
        if (!b) b = **(s32 **)(p + 292) == 0;
        if (b) On(p);
        else Off(p);
        break;
    }
    case 2: {
        bool b = *(s32 **)(p + 292) == 0;
        if (!b) b = **(s32 **)(p + 292) == 0;
        if (b) Off(p);
        else On(p);
        break;
    }
    case 3:
        return;
    case 4:
        fn_802494A4(p, 1);
        break;
    case 5:
        fn_802494A4(p, 2);
        break;
    case 6:
        break;
    }
}

} /* extern "C" */
