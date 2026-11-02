// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct VB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24();
};
extern "C" {
typedef struct Tabs {
    u8 pad[744];
    s32 a[7];
    s32 b[18];
    s32 c[18];
} Tabs;
typedef struct Self {
    u8 pad[96];
    s32 f96;
    u8 pad2[224 - 100];
    VB *f224;
    u8 pad3[8];
    s32 *f236;
    f32 *f240;
} Self;
extern "C" {
extern char lbl_80362180[8];
extern char lbl_80362188[8];
extern char lbl_80362190[7];
extern char lbl_80362198[8];
extern char lbl_8029B174[9];
extern char lbl_803621A0[8];
extern char lbl_8029B180[60];
extern char lbl_803621A8[5];
extern char lbl_803621B0[7];
extern char lbl_803621B8[8];
extern char lbl_803621C0[8];
extern char lbl_803621C8[7];
extern char lbl_803621D0[8];
extern char lbl_803621D8[5];
void fn_800AA548(void);
void fn_80249AC4(void);
void fn_800AA48C(void);
void fn_800AA310(void);
void fn_800AA36C(void);
void fn_8023D198(void);
void fn_800AA6F4(void);
void fn_800A9F04(struct Self *self, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_800AA274(void);
void fn_8003FB68(void);
void fn_800AA3A0(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_8003FB6C(void);
}
/* lbl_802D2310: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802D2310[186];
void *lbl_802D2310[186] = {
    (void *)0x00000000, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE,
    (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449,
    (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C,
    (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52,
    (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C,
    (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F,
    (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553,
    (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C,
    (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200,
    (void *)0x00000000, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944,
    (void *)0x00000000, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553,
    (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952,
    (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54,
    (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454,
    (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52,
    (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C,
    (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42,
    (void *)0x414C0000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000000, (void *)0x40000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x3F800000, (void *)0x00000000, (void *)0xBF800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x3F800000, (void *)0xBF800000, (void *)0x00000000,
    (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F,
    (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B,
    (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C,
    (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018,
    (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000040,
    (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C,
    (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E,
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A,
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_80362180,
    (void *)lbl_80362188, (void *)0x00000000, (void *)lbl_80362190, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)lbl_80362198,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000,
    (void *)lbl_8029B174, (void *)lbl_803621A0, (void *)lbl_8029B180, (void *)lbl_803621A8,
    (void *)lbl_803621B0, (void *)lbl_803621B8, (void *)lbl_803621C0, (void *)lbl_803621C8,
    (void *)lbl_803621D0, (void *)lbl_803621D8, (void *)lbl_803621A8, (void *)0x00000000,
    (void *)0x00000001, (void *)lbl_803621B0, (void *)0x00000001, (void *)0x00000001,
    (void *)lbl_803621B8, (void *)0x00000002, (void *)0x00000001, (void *)lbl_803621C0,
    (void *)0x00000003, (void *)0x00000001, (void *)lbl_803621C8, (void *)0x00000004,
    (void *)0x00000001, (void *)lbl_803621D0, (void *)0x00000005, (void *)0x00000001,
    (void *)lbl_803621D8, (void *)0x00000006, (void *)0x00000001, (void *)0x00000000,
    (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004,
    (void *)0x00000005, (void *)0x00000006
};
static s32 tabA[7] = { 0, 3, 5, 8, 11, 14, 17 };
static s32 tabB[18] = { 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3 };
static s32 tabC[18] = { 0, 1, 2, 3, 4, 4, 5, 4, 4, 6, 4, 4, 7, 4, 4, 8, 4, 4 };
/* lbl_802D26A4: vtable (reached only through lbl_802D2310 + 0x394; force_active) */
extern "C" void *lbl_802D26A4[20];
void *lbl_802D26A4[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_800AA548, (void *)fn_80249AC4,
    (void *)fn_800AA48C, (void *)fn_800AA310, (void *)fn_800AA36C, (void *)fn_8023D198,
    (void *)fn_800AA6F4, (void *)fn_800A9F04, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_800AA274, (void *)fn_8003FB68, (void *)fn_800AA3A0,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8003FB6C
};
extern f32 lbl_803621E0;
void fn_80241628(Self *self, s32 a, s32 b);
void fn_8022C128(VB *o, s32 a, s32 b, s32 c, s32 d, f32 f);
void fn_8024017C(Self *self);
void fn_8024125C(Self *self, s32 a);
void fn_802494A4(Self *self, s32 a);

void fn_800A9F04(Self *self, s32 n) {
    s32 *q;
    s32 j;
    s32 t;
    j = tabA[n];
    t = self->f96;
    for (q = tabB + j; t > 0; q++) {
        if (*q > t) break;
        t -= tabB[j++];
    }
    switch (tabC[j]) {
    case 0:
        fn_80241628(self, 0, 0);
        self->f224->v24();
        fn_8022C128(self->f224, 0, 0, 0, 0, lbl_803621E0);
        break;
    case 1:
        self->f224->v23();
        break;
    case 2:
        self->f224->v24();
        fn_8024017C(self);
        fn_8024125C(self, 0);
        break;
    case 3:
        fn_802494A4(self, 1);
        break;
    case 4:
        return;
    case 5:
        fn_802494A4(self, 0);
        break;
    case 6:
        fn_802494A4(self, 2);
        break;
    case 7: {
        s32 v = *self->f236;
        fn_8022C128(self->f224, v, v, v, 0, *self->f240);
        break;
    }
    case 8:
        fn_8022C128(self->f224, 0, 0, 0, 0, *self->f240);
        break;
    case 9:
        break;
    }
}

} /* extern "C" */
