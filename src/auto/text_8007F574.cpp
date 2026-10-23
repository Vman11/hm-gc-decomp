// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[788] = {1};
static s32 tA[8] = {1};
static s32 tB[25] = {1};
static s32 tC[45] = {1};
struct VC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void s13(void *, int, int, int, int);
    virtual void s14(void *, int, int, int, int);
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void s23();
    virtual void s24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void s33(const char *, void *, int, f32 *, int);
};
extern u8 *lbl_8035B308;
extern VC *lbl_8035A248;
extern void *lbl_8035B65C;
extern f32 lbl_8035FAA8;
extern f32 lbl_8035FAAC;
extern f32 lbl_8035FAB0;
extern f32 lbl_8035FAB4;
extern const char lbl_8035FAB8[7];
extern char lbl_802989E8[];
void fn_80107F3C(u32, f32 *);
void fn_8023F5E8(u8 *, u32);
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
void fn_80242168(f32, u8 *);
void fn_802494A4(u8 *, int);
int rand(void);
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define VCP(o) (*(VC **)(p + (o)))
void fn_8007F574(u8 *p, s32 n) {
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
        f32 v[3];
        u32 o;
        U32(280) = *(u32 *)(lbl_8035B308 + 72);
        VCP(224)->s13(p + 284, 0, 0, 0, 0);
        VCP(224)->s24();
        v[0] = lbl_8035FAA8;
        v[1] = lbl_8035FAA8;
        v[2] = lbl_8035FAA8;
        o = *(u32 *)(*(u8 **)((u8 *)VCP(224) + 156) + 120);
        if (o) fn_80107F3C(o, v);
        fn_8023F5E8(p, 0);
        fn_80241628(p, 1, 0);
        break;
    }
    case 1:
        lbl_8035A248 = VCP(224);
        VCP(224)->s23();
        fn_8023F5E8(p, U32(280));
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8035FAAC);
        fn_80242168(lbl_8035FAB0, p);
        break;
    case 2:
        fn_80241588(p, 2, 0, lbl_8035FAAC);
        break;
    case 3:
        lbl_8035A248 = 0;
        VCP(224)->s24();
        VCP(224)->s14(p + 284, 0, 0, 0, 0);
        fn_8023F5E8(p, 0);
        fn_80241628(p, 1, 0);
        break;
    case 4: {
        f32 w[3];
        w[0] = lbl_8035FAB4;
        w[1] = lbl_8035FAB4;
        w[2] = lbl_8035FAB4;
        VCP(280)->s13(w, 0, 0, 0, 0);
        VCP(224)->s14(w, 0, 0, 0, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 5:
        return;
    case 6:
        fn_802494A4(p, 2);
        break;
    case 7: {
        u32 r;
        u32 m;
        r = 0;
        m = U32(124) - 1;
        if (m) r = rand() % m;
        fn_80241588(p, r, 0, lbl_8035FAAC);
        if (r == 1) fn_80242168(lbl_8035FAB0, p);
        break;
    }
    case 8: {
        f32 x;
        x = -**(f32 **)(p + 296);
        VCP(280)->s33(lbl_8035FAB8, VCP(224), 0, &x, 0);
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802989E8, 0, 0, 0);
        fn_802494A4(p, 3);
        break;
    }
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        fn_802494A4(p, 1);
        break;
    case 11:
        fn_802494A4(p, 4);
        break;
    case 12:
        break;
    }
}

} /* extern "C" */
