// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

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
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8009F7DC(u8 *p, s32 n);
void fn_8009FB20();
void fn_8009FB74();
void fn_8009FE20();
void fn_8009FE98();
void fn_800A08B4();
void fn_800A0A30();
void fn_800A0B04();
void fn_800A0C1C();
void fn_800A0C24();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_8029A704[];
extern char lbl_8029A710[];
extern char lbl_8029A71C[];
extern char lbl_8029A728[];
extern char lbl_8029A734[];
extern char lbl_8029A740[];
extern char lbl_8029A74C[];
extern char lbl_8029A758[];
extern char lbl_8029A764[];
extern char lbl_8029A770[];
extern char lbl_8029A77C[];
extern char lbl_8029A788[];
extern char lbl_8029A794[];
extern char lbl_8029A7A0[];
extern char lbl_8029A7AC[];
extern char lbl_8029A7B8[];
extern char lbl_8029A7C4[];
extern char lbl_8029A7D0[];
extern char lbl_8029A7DC[];
extern char lbl_8029A7E8[];
extern char lbl_8029A7F4[];
extern char lbl_8029A800[];
extern char lbl_8029A80C[];
extern char lbl_8029A818[];
extern char lbl_8029A824[];
extern char lbl_8029A830[];
extern char lbl_8029A83C[];
extern char lbl_803619C8[];
extern char lbl_803619D0[];
extern char lbl_803619D8[];
extern char lbl_803619E0[];
extern char lbl_803619E8[];
extern char lbl_803619F0[];
extern char lbl_803619F8[];
extern char lbl_80361A00[];
extern char lbl_80361A08[];
extern char lbl_80361A10[];
extern char lbl_80361A18[];
extern char lbl_80361A20[];
extern char lbl_80361A28[];
extern char lbl_80361A30[];
extern char lbl_80361A38[];
extern char lbl_80361A40[];
extern char lbl_80361A48[];
extern char lbl_80361A50[];
extern char lbl_80361A58[4];
extern char lbl_80361A5C[];
extern char lbl_80361A64[];
extern char lbl_80361A6C[];
extern char lbl_80361A74[];
extern char lbl_80361A7C[];
extern char lbl_80361A84[];
extern char lbl_80361A8C[];
extern char lbl_80361A94[];
extern char lbl_80361A9C[];
extern char lbl_80361AAC[];
extern char lbl_80361AB4[];
extern char lbl_80361ABC[];
extern char lbl_80361AC4[];
extern char lbl_80361ACC[];
extern char lbl_80361AD4[];
extern char lbl_80361ADC[];
extern char lbl_80361AE4[];
extern char lbl_80361AEC[];
extern char lbl_80361AF4[8];
extern char lbl_80361AFC[];
extern char lbl_80361B04[];
extern char lbl_80361B0C[];
extern char lbl_80361B14[];
void *lbl_802CF438[334] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_803619C8, (void *)&lbl_803619D0, (void *)&lbl_803619D8, (void *)&lbl_803619E0, (void *)&lbl_803619D0, (void *)&lbl_803619E8, (void *)&lbl_803619F0, (void *)&lbl_803619D0, (void *)&lbl_803619F8, (void *)&lbl_80361A00, (void *)&lbl_803619D0, (void *)&lbl_80361A08, (void *)&lbl_80361A10, (void *)&lbl_80361A18, (void *)0x0, (void *)&lbl_80361A20, (void *)&lbl_80361A28, (void *)0x0, (void *)&lbl_80361A30, (void *)&lbl_80361A38, (void *)0x0, (void *)&lbl_80361A40, (void *)&lbl_80361A48, (void *)0x0, (void *)&lbl_80361A50, (void *)&lbl_80361A50, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A5C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A64, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A6C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A74, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A7C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A84, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A8C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A94, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A9C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A704, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A710, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A71C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A728, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A734, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A740, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A74C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A758, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A764, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A770, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A77C, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A788, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A794, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7A0, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7AC, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7B8, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7C4, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7D0, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7DC, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7E8, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_8029A7F4, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361A58, (void *)&lbl_80361AAC, (void *)&lbl_8029A800, (void *)&lbl_80361AB4, (void *)&lbl_80361ABC, (void *)&lbl_80361AC4, (void *)&lbl_80361ACC, (void *)&lbl_80361AD4, (void *)&lbl_8029A80C, (void *)&lbl_80361ADC, (void *)&lbl_80361AE4, (void *)&lbl_80361AEC, (void *)&lbl_80361AF4, (void *)&lbl_8029A818, (void *)&lbl_80361AFC, (void *)&lbl_8029A824, (void *)&lbl_80361B04, (void *)&lbl_80361B0C, (void *)&lbl_8029A830, (void *)&lbl_8029A83C, (void *)&lbl_80361B14, (void *)&lbl_80361ACC, (void *)0x0, (void *)0x1, (void *)&lbl_80361AD4, (void *)0x1, (void *)0x1, (void *)&lbl_8029A80C, (void *)0x2, (void *)0x1, (void *)&lbl_80361ADC, (void *)0x3, (void *)0x1, (void *)&lbl_80361AE4, (void *)0x4, (void *)0x1, (void *)&lbl_80361AEC, (void *)0x5, (void *)0x1, (void *)&lbl_80361AF4, (void *)0x6, (void *)0x1, (void *)&lbl_8029A818, (void *)0x7, (void *)0x1, (void *)&lbl_80361AFC, (void *)0x8, (void *)0x1, (void *)&lbl_8029A824, (void *)0x9, (void *)0x1, (void *)&lbl_80361B04, (void *)0xA, (void *)0x1, (void *)&lbl_80361B0C, (void *)0xB, (void *)0x1, (void *)&lbl_8029A830, (void *)0xC, (void *)0x1, (void *)&lbl_8029A83C, (void *)0xD, (void *)0x1, (void *)&lbl_80361B14, (void *)0xE, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE };
static s32 tA[15] = { 0, 5, 8, 11, 13, 16, 18, 20, 22, 24, 25, 26, 27, 29, 30 };
static s32 tB[31] = { 1, 1, 1, 1, 1, 2, 1, 2, 3, 1, 1, 4, 1, 2, 1, 2, 2, 3, 3, 2, 3, 2, 3, 2, 5, 5, 5, 1, 4, 5, 5 };
static s32 tC[31] = { 0, 1, 2, 3, 4, 4, 5, 4, 4, 6, 4, 4, 7, 4, 8, 4, 4, 9, 4, 10, 4, 11, 4, 12, 13, 14, 15, 16, 4, 15, 17 };
void *lbl_802CFAA4[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800A0B04, (void *)&fn_80249AC4, (void *)&fn_800A0A30, (void *)&fn_8009FE20, (void *)&fn_800A08B4, (void *)&fn_8023D198, (void *)&fn_800A0C1C, (void *)&fn_8009F7DC, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8009FE98, (void *)&fn_8009FB20, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800A0C24, (void *)&fn_8009FB74 };
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
