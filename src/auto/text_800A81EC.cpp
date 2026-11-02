// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern "C" {
extern char lbl_80361F90[5];
extern char lbl_80361F98[5];
extern char lbl_80361FA0[5];
extern char lbl_80361FA8[3];
extern char lbl_80361FAC[5];
extern char lbl_80361FB4[5];
extern char lbl_80361FBC[6];
extern char lbl_80361FC4[6];
extern char lbl_80361FCC[6];
extern char lbl_80361FD4[7];
extern char lbl_80361FDC[4];
extern char lbl_80361FE0[7];
extern char lbl_80361FE8[5];
extern char lbl_80361FF0[4];
extern char lbl_80361FF4[5];
extern char lbl_8029AF9C[9];
extern char lbl_80361FFC[5];
extern char lbl_80362004[5];
extern char lbl_8029AFA8[9];
extern char lbl_8036200C[8];
void fn_800A855C(void);
void fn_80249AC4(void);
void fn_800A850C(void);
void fn_80242210(void);
void fn_800A84D8(void);
void fn_8023D198(void);
void fn_800A8708(void);
void fn_800A81EC(u8 *p, s32 idx);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_800A8428(void);
void fn_800A83C0(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_800A8758(void);
void fn_800A83F4(void);
}
/* lbl_802D16D8: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802D16D8[194];
void *lbl_802D16D8[194] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_80361F90,
    (void *)lbl_80361F98, (void *)lbl_80361FA0, (void *)lbl_80361FA8, (void *)lbl_80361FAC,
    (void *)lbl_80361FB4, (void *)lbl_80361FBC, (void *)lbl_80361FC4, (void *)lbl_80361FCC,
    (void *)lbl_80361FD4, (void *)lbl_80361FD4, (void *)lbl_80361FDC, (void *)lbl_80361FDC,
    (void *)lbl_80361FDC, (void *)lbl_80361FE0, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000000, (void *)lbl_80361FE8, (void *)lbl_80361FF0,
    (void *)lbl_80361F90, (void *)lbl_80361FA8, (void *)lbl_80361FBC, (void *)lbl_80361FE8,
    (void *)lbl_80361FF4, (void *)lbl_8029AF9C, (void *)lbl_80361FFC, (void *)lbl_80362004,
    (void *)lbl_8029AFA8, (void *)lbl_8036200C, (void *)lbl_80361FE8, (void *)0x00000000,
    (void *)0x00000001, (void *)lbl_80361FF4, (void *)0x00000001, (void *)0x00000001,
    (void *)lbl_8029AF9C, (void *)0x00000002, (void *)0x00000001, (void *)lbl_80361FFC,
    (void *)0x00000003, (void *)0x00000001, (void *)lbl_80362004, (void *)0x00000004,
    (void *)0x00000001, (void *)lbl_8029AFA8, (void *)0x00000005, (void *)0x00000001,
    (void *)lbl_8036200C, (void *)0x00000006, (void *)0x00000001, (void *)0x00000000,
    (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004,
    (void *)0x00000005, (void *)0x00000006
};
static s32 tabA[7] = { 0, 5, 8, 12, 15, 18, 21 };
static s32 tabB[24] = { 1, 1, 1, 1, 1, 3, 1, 1, 2, 1, 1, 1, 1, 1, 3, 3, 1, 1, 3, 1, 1, 3, 1, 1 };
static s32 tabC[24] = { 0, 1, 2, 3, 4, 5, 6, 5, 5, 7, 5, 8, 5, 9, 5, 5, 10, 5, 5, 11, 5, 5, 12, 5 };
/* lbl_802D1ABC: vtable (reached only through lbl_802D16D8 + 0x3E4; force_active) */
extern "C" void *lbl_802D1ABC[20];
void *lbl_802D1ABC[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_800A855C, (void *)fn_80249AC4,
    (void *)fn_800A850C, (void *)fn_80242210, (void *)fn_800A84D8, (void *)fn_8023D198,
    (void *)fn_800A8708, (void *)fn_800A81EC, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_800A8428, (void *)fn_800A83C0, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_800A8758, (void *)fn_800A83F4
};
extern u8 *lbl_8035B308;
extern f32 lbl_80362014;
void fn_80241628(void *, s32, s32);
void fn_802494A4(void *, s32);
void fn_802402E0(void *);
void fn_80240274(void *, s32);
void fn_802401A0(void *);
void fn_802401D0(void *);
void fn_80241588(void *, s32, s32, f32);
void fn_8023F9C8(void *, s32);

void fn_800A81EC(u8 *p, s32 idx) {
    s32 *q;
    s32 j;
    s32 t;

    j = tabA[idx];
    t = *(s32 *)(p + 96);

    for (q = tabB + j; t > 0; q++) {
        if (*q > t) break;
        t -= tabB[j++];
    }
    switch (tabC[j]) {
    case 0:
        fn_80241628(p, 0, 0);
        *(s32 *)(p + 280) = *(s32 *)(lbl_8035B308 + 72);
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_802402E0(p);
        break;
    case 2:
        fn_80240274(p, 0);
        fn_802401A0(p);
        fn_80241588(p, 0, 0, lbl_80362014);
        fn_8023F9C8(p, 0);
        break;
    case 3:
        fn_802401D0(p);
        fn_80241588(p, 1, 0, lbl_80362014);
        *(s32 *)(p + 284) = 0;
        break;
    case 4:
        fn_802401A0(p);
        fn_80241588(p, 2, 0, lbl_80362014);
        break;
    case 5:
        return;
    case 6:
        fn_802401A0(p);
        *(s32 *)(p + 284) = 0;
        break;
    case 7:
        fn_802494A4(p, 3);
        break;
    case 8:
        fn_802494A4(p, 1);
        break;
    case 9:
        fn_802494A4(p, 2);
        break;
    case 10:
        fn_802494A4(p, 4);
        break;
    case 11:
        *(s32 *)(p + 284) = 1;
        *(s32 *)(p + 288) = 1;
        break;
    case 12:
        *(s32 *)(p + 284) = 0;
        *(s32 *)(p + 288) = 0;
        break;
    case 13:
        break;
    }
}

} /* extern "C" */
