// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[1028] = {1};
static s32 tA[14] = {1};
static s32 tB[30] = {1};
static s32 tC[51] = {1};
struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void s18();
};
extern f32 lbl_8035D7AC;
extern f32 lbl_8035D7B0;
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
u8 *fn_8022D694(u32);
int rand(void);
void fn_802494A4(u8 *, int);
int fn_800A210C(u8 *);
void fn_800A1AA8(u8 *);
void fn_800A27B0(u8 *);
void fn_800A15BC(u8 *);
void fn_800A2870(u8 *);
void fn_800A1710(u8 *);
void fn_800A14F0(u8 *);
void fn_800A2204(u8 *);
void fn_800A2198(u8 *);
void fn_800A217C(u8 *);
void fn_800A1608(u8 *);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
void fn_8004E1C8(u8 *p, s32 n) {
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
        ((VC *)p)->s18();
        if (**(u32 **)(p + 208)) {
            u8 *o;
            fn_80241588(p, 0, 0, lbl_8035D7AC);
            o = fn_8022D694(U32(224));
            if (o) {
                u16 m = *(u16 *)(*(u8 **)(o + 16) + 52);
                s32 ri = rand() % 10000u; f32 r = lbl_8035D7B0 * (f32)ri; r = (f32)(s32)m * r; *(f32 *)(o + 4) = r;
            }
        }
        if (*(s32 *)(U32(224) + 276) == 0) fn_802494A4(p, 1);
        break;
    case 1:
        U32(452) = 1;
        if (fn_800A210C(p) && **(s32 **)(p + 316)) fn_802494A4(p, 2);
        else fn_800A1AA8(p);
        break;
    case 2:
        fn_80241628(p, 0, 0);
        fn_800A27B0(p);
        fn_800A15BC(p);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        fn_800A27B0(p);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_800A2870(p);
        fn_800A1710(p);
        break;
    case 5:
        if (S32(444) == 0) fn_800A2870(p);
        break;
    case 6:
        if (S32(444) == 0) {
            ((VC *)p)->s18();
            fn_800A2870(p);
        }
        break;
    case 7:
        if (S32(444) == 0) {
            ((VC *)p)->s18();
            fn_800A2870(p);
            fn_802494A4(p, 1);
        }
        break;
    case 8:
        fn_800A27B0(p);
        break;
    case 9:
        fn_800A2870(p);
        fn_802494A4(p, 1);
        break;
    case 10:
        return;
    case 11:
        U32(444) = 1;
        break;
    case 12:
        U32(444) = 0;
        break;
    case 13:
        fn_800A14F0(p);
        if (S32(440) != 0 && S32(444) == 0) {
            if (fn_800A210C(p) && **(s32 **)(p + 316)) fn_802494A4(p, 2);
            else fn_800A1AA8(p);
        }
        break;
    case 14:
        U32(436) = 1;
        break;
    case 15:
        U32(436) = 0;
        break;
    case 16:
        fn_800A2204(p);
        break;
    case 17:
        fn_800A2198(p);
        break;
    case 18:
        fn_800A217C(p);
        break;
    case 19:
        fn_802494A4(p, 4);
        break;
    case 20:
        U32(452) = 0;
        break;
    case 21:
        fn_800A1608(p);
        break;
    case 22:
        break;
    }
}

} /* extern "C" */
