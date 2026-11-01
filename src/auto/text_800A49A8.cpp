// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

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
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_800A49A8(u8 *p, s32 n);
void fn_800A4D2C();
void fn_800A4DC0();
void fn_800A4E54();
void fn_800A4E8C();
void fn_800A4F48();
void fn_800A50F0();
void fn_800A50F8();
void fn_8023D198();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029AC6C[];
extern char lbl_8029AC78[];
extern char lbl_8029AC84[];
extern char lbl_8029AC90[];
extern char lbl_8029AC9C[];
extern char lbl_8029ACA8[];
extern char lbl_80361D00[];
extern const char lbl_80361D08[4];
extern char lbl_80361D0C[];
extern char lbl_80361D14[];
extern char lbl_80361D1C[];
extern char lbl_80361D24[];
extern char lbl_80361D2C[];
extern char lbl_80361D34[];
extern char lbl_80361D3C[];
extern char lbl_80361D44[];
extern char lbl_80361D4C[];
extern char lbl_80361D54[];
extern char lbl_80361D5C[];
extern char lbl_80361D64[];
extern char lbl_80361D6C[];
extern char lbl_80361D74[];
extern char lbl_80361D7C[];
extern char lbl_80361D84[];
extern char lbl_80361D8C[];
extern char lbl_80361D94[];
void *lbl_802D0440[213] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80361D00, (void *)&lbl_80361D08, (void *)&lbl_80361D0C, (void *)&lbl_80361D14, (void *)&lbl_80361D08, (void *)&lbl_80361D1C, (void *)&lbl_80361D24, (void *)&lbl_80361D08, (void *)&lbl_80361D2C, (void *)&lbl_80361D34, (void *)&lbl_80361D08, (void *)&lbl_80361D3C, (void *)&lbl_80361D44, (void *)&lbl_80361D4C, (void *)&lbl_80361D54, (void *)&lbl_8029AC6C, (void *)&lbl_80361D5C, (void *)&lbl_80361D64, (void *)&lbl_80361D6C, (void *)&lbl_8029AC78, (void *)&lbl_8029AC84, (void *)&lbl_80361D74, (void *)&lbl_8029AC90, (void *)&lbl_8029AC9C, (void *)&lbl_80361D7C, (void *)&lbl_80361D84, (void *)&lbl_80361D8C, (void *)&lbl_8029ACA8, (void *)&lbl_80361D64, (void *)&lbl_80361D94, (void *)&lbl_80361D6C, (void *)0x0, (void *)0x1, (void *)&lbl_8029AC78, (void *)0x1, (void *)0x1, (void *)&lbl_8029AC84, (void *)0x2, (void *)0x1, (void *)&lbl_80361D74, (void *)0x3, (void *)0x1, (void *)&lbl_8029AC90, (void *)0x4, (void *)0x1, (void *)&lbl_8029AC9C, (void *)0x5, (void *)0x1, (void *)&lbl_80361D7C, (void *)0x6, (void *)0x1, (void *)&lbl_80361D84, (void *)0x7, (void *)0x1, (void *)&lbl_80361D8C, (void *)0x8, (void *)0x1, (void *)&lbl_8029ACA8, (void *)0x9, (void *)0x1, (void *)&lbl_80361D64, (void *)0xA, (void *)0x1, (void *)&lbl_80361D94, (void *)0xB, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB };
static s32 tA[12] = { 0, 6, 11, 14, 17, 20, 23, 26, 29, 32, 34, 37 };
static s32 tB[38] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 4, 1, 1, 4, 1, 3, 2, 1, 3, 2, 3, 1, 2, 3, 1, 2, 1, 3, 2, 2, 4, 1, 3, 2, 6 };
static s32 tC[38] = { 0, 1, 2, 3, 4, 5, 6, 7, 6, 8, 6, 6, 9, 6, 6, 10, 6, 6, 11, 6, 6, 12, 6, 6, 13, 6, 6, 14, 6, 6, 15, 6, 6, 16, 6, 8, 6, 6 };
void *lbl_802D08F4[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800A4F48, (void *)&fn_80249AC4, (void *)&fn_800A4E8C, (void *)&fn_80242210, (void *)&fn_800A4E54, (void *)&fn_8023D198, (void *)&fn_800A50F0, (void *)&fn_800A49A8, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_800A4D2C, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800A50F8, (void *)&fn_800A4DC0 };
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
