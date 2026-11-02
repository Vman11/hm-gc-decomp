// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern "C" {
extern char lbl_8035F9D0[5];
extern char lbl_80298918[9];
extern char lbl_80298924[9];
extern char lbl_8035F9D8[6];
extern char lbl_80298930[9];
extern char lbl_8029893C[9];
extern char lbl_8035F9E0[7];
extern char lbl_80298948[9];
extern char lbl_8035F9E8[7];
extern char lbl_8035F9F0[4];
extern char lbl_80298954[9];
extern char lbl_8035F9F4[7];
extern char lbl_8035F9FC[5];
extern char lbl_8035FA04[7];
extern char lbl_8035FA0C[8];
extern char lbl_80298960[9];
extern char lbl_8029896C[9];
void fn_8007F348(void);
void fn_80249AC4(void);
void fn_8007F328(void);
void fn_80242210(void);
void fn_8007F2F0(void);
void fn_8023D198(void);
void fn_8007F4F8(void);
void fn_8007F03C(u8 *p, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8023FE08(void);
void fn_8007F1D8(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_8007F264(void);
}
/* lbl_802C3780: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802C3780[198];
void *lbl_802C3780[198] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_8035F9D0,
    (void *)lbl_80298918, (void *)0x00000000, (void *)lbl_8035F9D0, (void *)lbl_80298924,
    (void *)0x00000000, (void *)lbl_8035F9D8, (void *)lbl_80298930, (void *)0x00000000,
    (void *)lbl_8035F9D8, (void *)lbl_8029893C, (void *)0x00000000, (void *)lbl_8035F9E0,
    (void *)lbl_80298948, (void *)0x00000000, (void *)lbl_8035F9E8, (void *)lbl_8035F9E8,
    (void *)lbl_8035F9F0, (void *)lbl_8035F9F0, (void *)lbl_8035F9F0, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)lbl_80298954, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)lbl_8035F9F4, (void *)lbl_8035F9FC,
    (void *)lbl_8035FA04, (void *)lbl_8035FA0C, (void *)lbl_80298960, (void *)lbl_8029896C,
    (void *)lbl_80298954, (void *)lbl_8035F9F4, (void *)lbl_8035F9FC, (void *)0x00000000,
    (void *)0x00000001, (void *)lbl_8035FA04, (void *)0x00000001, (void *)0x00000001,
    (void *)lbl_8035FA0C, (void *)0x00000002, (void *)0x00000001, (void *)lbl_80298960,
    (void *)0x00000003, (void *)0x00000001, (void *)lbl_8029896C, (void *)0x00000004,
    (void *)0x00000001, (void *)lbl_80298954, (void *)0x00000005, (void *)0x00000001,
    (void *)lbl_8035F9F4, (void *)0x00000006, (void *)0x00000001, (void *)0x00000000,
    (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004,
    (void *)0x00000005, (void *)0x00000006
};
static s32 tabA_802C3A98[7] = { 0, 1, 2, 3, 4, 5, 6 };
static s32 tabB_802C3AB4[7] = { 1, 1, 1, 1, 1, 1, 1 };
static s32 tabC_802C3AD0[7] = { 0, 1, 2, 3, 4, 5, 6 };
/* lbl_802C3AEC: vtable (reached only through lbl_802C3780 + 0x36C; force_active) */
extern "C" void *lbl_802C3AEC[20];
void *lbl_802C3AEC[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_8007F348, (void *)fn_80249AC4,
    (void *)fn_8007F328, (void *)fn_80242210, (void *)fn_8007F2F0, (void *)fn_8023D198,
    (void *)fn_8007F4F8, (void *)fn_8007F03C, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_8023FE08, (void *)fn_8007F1D8, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8007F264
};
extern void *lbl_8035A02C;
extern void *lbl_8035B79C;
extern const f64 lbl_8035FA18;
extern const f32 lbl_8035FA20;
extern char lbl_80298954[9];
extern char lbl_80298978[9];
int rand(void);
void fn_80240D18(u8 *);
void fn_80241088(u8 *, s32);
void fn_80039E80(void *, s32, f32);
void fn_802490E0(u8 *, s32, f32);
void fn_80268178(void *, s32);
void *fn_80242144(u8 *, s32);
void fn_80242BC0(void *, char *, s32, s32, char *, s32);

void fn_8007F03C(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    i = tabA_802C3A98[n];
    t = *(s32 *)(p + 96);
    for (q = tabB_802C3AB4 + i; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_802C3AB4[i++];
    }
    switch (tabC_802C3AD0[i]) {
    case 0:
        return;
    case 1:
        fn_80240D18(p);
        fn_80241088(p, rand() & 1);
        break;
    case 2:
        fn_80240D18(p);
        fn_80241088(p, (rand() & 1) + 2);
        break;
    case 3:
        fn_80240D18(p);
        fn_80241088(p, 4);
        break;
    case 4:
        fn_80039E80(lbl_8035A02C, 1, *(f32 *)(p + 280));
        fn_802490E0(p, 0, lbl_8035FA18 * *(f32 *)(p + 280));
        fn_80268178(lbl_8035B79C, 10);
        break;
    case 5:
        fn_80242BC0(fn_80242144(p, 0), lbl_80298954, 0, 0, lbl_80298978, 0);
        fn_802490E0(p, 1, *(f32 *)(p + 284));
        fn_80039E80(lbl_8035A02C, 0, lbl_8035FA20);
        break;
    case 6:
        fn_80039E80(lbl_8035A02C, 0, *(f32 *)(p + 288));
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
