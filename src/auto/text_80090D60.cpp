// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[776] = {1};
static s32 tA[7] = {1};
static s32 tB[12] = {1};
static s32 tC[32] = {1};
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void s23(); virtual void s24();
};
extern u8 *lbl_8035B460;
extern void *lbl_8035B65C;
extern const u32 lbl_803609F0;
extern char lbl_803609F4[8];
extern char lbl_8029979C[];
extern char lbl_802997A8[];
u8 *fn_800F9398(u8 *, u32);
u8 *fn_8019565C(u8 *);
void fn_80241628(u8 *, int, int);
void fn_802401D0(u8 *);
void fn_8024125C(u8 *, int);
void fn_8024017C(u8 *);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, char *, int, int, int, int);
void fn_802494A4(u8 *, int);
void __ct__9C80253F24Fiiii(void *, char *, s32, s32, s32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define VCP(o) (*(VC **)(p + (o)))
#define FIND(MOD) { u8 *bs = *(u8 **)(lbl_8035B460 + 8); if (U32(296)) { u8 *r = fn_800F9398(bs + 144, U32(296)); r = r ? fn_8019565C(r) : r; if (r) { MOD; } } }
static inline void Show(u8 *p) {
    U32(288) = 1;
    if (S32(292)) {
        fn_80242BC0(fn_80242144(p, 1), lbl_803609F4, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 2), lbl_8029979C, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 3), lbl_802997A8, 0, 0, 0, 0);
    }
}
void fn_80090D60(u8 *p, s32 n) {
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
        FIND(*(u32 *)r &= ~0x800)
        fn_80241628(p, 0, 0);
        VCP(224)->s23();
        fn_802401D0(p);
        U32(288) = **(u32 **)(p + 284);
        break;
    }
    case 1: {
        char *s;
        FIND(*(u32 *)r |= lbl_803609F0)
        fn_8024125C(p, 0);
        fn_8024017C(p);
        U32(292) = 1;
        if (S32(288)) Show(p);
        s = *(char **)(p + 300);
        if (s && *s) __ct__9C80253F24Fiiii(lbl_8035B65C, s, 0, 0, 0);
        VCP(224)->s24();
        break;
    }
    case 2:
        return;
    case 3:
        if (S32(280)) fn_802494A4(p, 1);
        break;
    case 4:
        U32(280) = 0;
        VCP(224)->s24();
        break;
    case 5: {
        U32(280) = 0;
        VCP(224)->s24();
        FIND(*(u32 *)r &= ~0x800)
        break;
    }
    case 6:
        U32(280) = 1;
        VCP(224)->s23();
        break;
    case 7:
        U32(280) = 1;
        fn_802494A4(p, 0);
        break;
    case 8:
        Show(p);
        break;
    case 9:
        fn_802494A4(p, 1);
        break;
    case 10:
        break;
    }
}

} /* extern "C" */
