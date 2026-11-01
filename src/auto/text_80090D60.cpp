// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

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
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_80090D60(u8 *p, s32 n);
void fn_8009111C();
void fn_8009115C();
void fn_800911F8();
void fn_800913B4();
void fn_8023D198();
void fn_8023F5F4();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80299790[];
extern char lbl_8029979C[];
extern char lbl_80360988[];
extern char lbl_80360990[];
extern char lbl_80360998[];
extern char lbl_803609A0[];
extern char lbl_803609A4[];
extern char lbl_803609A8[];
extern char lbl_803609B0[];
extern char lbl_803609B8[];
extern char lbl_803609C0[];
extern char lbl_803609D0[];
extern char lbl_803609D8[];
extern char lbl_803609E0[];
extern char lbl_803609E8[];
void *lbl_802C96A0[194] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80360988, (void *)&lbl_80360990, (void *)0x0, (void *)&lbl_80360998, (void *)&lbl_803609A0, (void *)&lbl_803609A0, (void *)&lbl_803609A4, (void *)&lbl_803609A0, (void *)&lbl_803609A0, (void *)&lbl_803609A8, (void *)&lbl_803609A0, (void *)&lbl_803609A0, (void *)&lbl_803609B0, (void *)&lbl_803609A0, (void *)&lbl_803609A0, (void *)&lbl_803609A0, (void *)0x3E800000, (void *)0x0, (void *)0x0, (void *)&lbl_803609B8, (void *)0x3DCCCCCD, (void *)0x0, (void *)0x0, (void *)&lbl_803609C0, (void *)&lbl_803609D0, (void *)&lbl_803609D8, (void *)&lbl_80299790, (void *)&lbl_803609E0, (void *)&lbl_803609E8, (void *)&lbl_8029979C, (void *)&lbl_80360988, (void *)&lbl_803609D0, (void *)0x0, (void *)0x1, (void *)&lbl_803609D8, (void *)0x1, (void *)0x1, (void *)&lbl_80299790, (void *)0x2, (void *)0x1, (void *)&lbl_803609E0, (void *)0x3, (void *)0x1, (void *)&lbl_803609E8, (void *)0x4, (void *)0x1, (void *)&lbl_8029979C, (void *)0x5, (void *)0x1, (void *)&lbl_80360988, (void *)0x6, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6 };
static s32 tA[7] = { 0, 2, 3, 5, 7, 9, 10 };
static s32 tB[12] = { 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1 };
static s32 tC[12] = { 0, 1, 2, 3, 2, 4, 5, 6, 7, 8, 9, 2 };
void *lbl_802C9A24[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800911F8, (void *)&fn_80249AC4, (void *)&fn_8009115C, (void *)&fn_80242210, (void *)&fn_8009111C, (void *)&fn_8023D198, (void *)&fn_800913B4, (void *)&fn_80090D60, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
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
