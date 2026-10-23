// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[772] = {1};
static s32 tA[6] = {1};
static s32 tB[14] = {1};
static s32 tC[34] = {1};
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void s19(); virtual void s20();
};
void fn_80241628(u8 *, int, int);
void fn_8022BBF4(VC *);
void fn_8022AD0C(VC *);
void fn_8022B618(VC *);
void fn_8022A7A8(VC *);
void fn_800A8DBC(u8 *);
void fn_80249008(u8 *, int);
void fn_802494A4(u8 *, int);
void fn_802491DC(u8 *, int);
void fn_8024125C(u8 *, int);
void fn_80072D48(u32, f32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define VCP(o) (*(VC **)(p + (o)))
static inline f32 Lerp(f32 a, f32 b, f32 t) { return a * (1.0 - t) + b * t; }
void fn_800A882C(u8 *p, s32 n) {
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
        U32(496) = 1;
        VCP(224)->s19();
        fn_8022BBF4(VCP(224));
        fn_8022AD0C(VCP(224));
        break;
    case 1:
        fn_80241628(p, 0, 0);
        VCP(224)->s20();
        fn_8022B618(VCP(224));
        fn_8022A7A8(VCP(224));
        break;
    case 2:
        fn_800A8DBC(p);
        break;
    case 3:
        return;
    case 4:
        fn_80249008(p, 0);
        break;
    case 5:
        fn_802494A4(p, 2);
        break;
    case 6:
        if (S32(356) > 0) {
            fn_802494A4(p, 1);
            fn_802491DC(p, 1);
            S32(356)--;
        }
        if (*(s32 **)(p + 292) && *(s32 **)(p + 296)) {
            s32 v = (s32)Lerp(**(s32 **)(p + 292), **(s32 **)(p + 296), *(f32 *)(p + 500));
            if (v >= 1) {
                u8 *o;
                fn_8024125C(p, 1);
                o = *(u8 **)(p + 492);
                **(s32 **)(o + 1344) += v;
                if (**(s32 **)(o + 1344) < 0) **(s32 **)(o + 1344) = 0;
            }
        }
        if (*(s32 **)(p + 308) && *(s32 **)(p + 312)) {
            s32 v = (s32)Lerp(**(s32 **)(p + 308), **(s32 **)(p + 312), *(f32 *)(p + 500));
            if (v != 0) {
                **(s32 **)(p + 504) += v;
                if (**(s32 **)(p + 504) >= 10) fn_8024125C(p, 1);
                else fn_8024125C(p, 0);
            }
        }
        if (*(s32 **)(p + 284) && *(s32 **)(p + 288)) {
            s32 v = (s32)Lerp(**(s32 **)(p + 284), **(s32 **)(p + 288), *(f32 *)(p + 500));
            if (v != 0) fn_80072D48(U32(492), v);
        }
        break;
    case 7:
        fn_802494A4(p, 1);
        fn_802491DC(p, 1);
        break;
    case 8:
        break;
    }
}

} /* extern "C" */
