// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern "C" {
extern char lbl_80360C58[7];
extern char lbl_80360C60[6];
extern char lbl_80360C68[7];
extern char lbl_802999AC[9];
extern char lbl_80360C70[7];
extern char lbl_80360C78[8];
extern char lbl_80360C80[7];
extern char lbl_80360C88[7];
extern char lbl_80360C90[7];
extern char lbl_80360C98[7];
extern char lbl_80360CA0[7];
extern char lbl_80360CA8[7];
extern char lbl_80360CB0[7];
extern char lbl_80360CB8[7];
extern char lbl_80360CC0[8];
extern char lbl_80360CC8[8];
extern char lbl_80360CD0[8];
extern char lbl_80360CD8[8];
extern char lbl_80360CE0[7];
extern char lbl_80360CE8[7];
extern char lbl_80360CF0[8];
extern char lbl_80360CF8[8];
extern char lbl_80360D00[8];
extern char lbl_80360D08[8];
extern char lbl_80360D10[7];
extern char lbl_80360D18[8];
extern char lbl_80360D28[5];
extern char lbl_802999B8[9];
extern char lbl_80360D30[8];
extern char lbl_802999C4[9];
extern char lbl_802999D0[9];
extern char lbl_802999DC[9];
extern char lbl_802999E8[48];
extern char lbl_80360D38[8];
extern char lbl_80360D40[7];
void fn_80093264(void);
void fn_80249AC4(void);
void fn_80093244(void);
void fn_80242210(void);
void fn_8009321C(void);
void fn_8023D198(void);
void fn_800933F8(void);
void fn_80093000(struct S80093000 *self, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8023FE08(void);
void fn_800931B4(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_800931E8(void);
}
/* lbl_802CA620: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802CA620[262];
void *lbl_802CA620[262] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_80360C58,
    (void *)lbl_80360C60, (void *)0x00000000, (void *)lbl_80360C68, (void *)lbl_802999AC,
    (void *)0x00000000, (void *)lbl_80360C70, (void *)lbl_80360C78, (void *)0x00000000,
    (void *)lbl_80360C80, (void *)lbl_80360C88, (void *)0x00000000, (void *)lbl_80360C90,
    (void *)lbl_80360C98, (void *)0x00000000, (void *)lbl_80360CA0, (void *)lbl_80360CA8,
    (void *)0x00000000, (void *)lbl_80360CB0, (void *)lbl_80360CB8, (void *)0x00000001,
    (void *)lbl_80360CC0, (void *)lbl_80360CC8, (void *)0x00000001, (void *)lbl_80360CD0,
    (void *)lbl_80360CB8, (void *)0x00000001, (void *)lbl_80360CD8, (void *)lbl_80360CC8,
    (void *)0x00000001, (void *)lbl_80360CE0, (void *)lbl_80360CE8, (void *)0x00000000,
    (void *)lbl_80360CF0, (void *)lbl_80360CF8, (void *)0x00000000, (void *)lbl_80360D00,
    (void *)lbl_80360D08, (void *)0x00000000, (void *)lbl_80360D10, (void *)lbl_80360D18,
    (void *)0x00000000, (void *)lbl_80360D28, (void *)lbl_802999B8, (void *)lbl_80360D30,
    (void *)lbl_802999C4, (void *)lbl_802999D0, (void *)lbl_802999DC, (void *)lbl_802999E8,
    (void *)lbl_80360D38, (void *)lbl_80360C58, (void *)lbl_80360C68, (void *)lbl_80360C70,
    (void *)lbl_80360C80, (void *)lbl_80360C90, (void *)lbl_80360CA0, (void *)lbl_80360CE0,
    (void *)lbl_80360CF0, (void *)lbl_80360D40, (void *)lbl_80360D28, (void *)0x00000000,
    (void *)0x00000001, (void *)lbl_802999B8, (void *)0x00000001, (void *)0x00000001,
    (void *)lbl_80360D30, (void *)0x00000002, (void *)0x00000001, (void *)lbl_802999C4,
    (void *)0x00000003, (void *)0x00000001, (void *)lbl_802999D0, (void *)0x00000004,
    (void *)0x00000001, (void *)lbl_802999DC, (void *)0x00000005, (void *)0x00000001,
    (void *)lbl_802999E8, (void *)0x00000006, (void *)0x00000001, (void *)lbl_80360D38,
    (void *)0x00000007, (void *)0x00000001, (void *)lbl_80360C58, (void *)0x00000008,
    (void *)0x00000001, (void *)lbl_80360C68, (void *)0x00000009, (void *)0x00000001,
    (void *)lbl_80360C70, (void *)0x0000000A, (void *)0x00000001, (void *)lbl_80360C80,
    (void *)0x0000000B, (void *)0x00000001, (void *)lbl_80360C90, (void *)0x0000000C,
    (void *)0x00000001, (void *)lbl_80360CA0, (void *)0x0000000D, (void *)0x00000001,
    (void *)lbl_80360CE0, (void *)0x0000000E, (void *)0x00000001, (void *)lbl_80360CF0,
    (void *)0x0000000F, (void *)0x00000001, (void *)lbl_80360D40, (void *)0x00000010,
    (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002,
    (void *)0x00000003, (void *)0x00000004, (void *)0x00000005, (void *)0x00000006,
    (void *)0x00000007, (void *)0x00000008, (void *)0x00000009, (void *)0x0000000A,
    (void *)0x0000000B, (void *)0x0000000C, (void *)0x0000000D, (void *)0x0000000E,
    (void *)0x0000000F, (void *)0x00000010
};
static s32 tabA_80093000[17] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static s32 tabB_80093000[17] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tabC_80093000[17] = { 0, 1, 2, 3, 4, 5, 6, 1, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
/* lbl_802CAB04: vtable (reached only through lbl_802CA620 + 0x4E4; force_active) */
extern "C" void *lbl_802CAB04[20];
void *lbl_802CAB04[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_80093264, (void *)fn_80249AC4,
    (void *)fn_80093244, (void *)fn_80242210, (void *)fn_8009321C, (void *)fn_8023D198,
    (void *)fn_800933F8, (void *)fn_80093000, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_8023FE08, (void *)fn_800931B4, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_800931E8
};
extern char lbl_802999A0[];
extern void *lbl_8035B65C;
extern f32 lbl_80360D48;
typedef struct S80093000 { u8 pad[96]; s32 f96; } S80093000;
void fn_80241628(S80093000 *, s32, s32);
void fn_80240DBC(S80093000 *, f32);
void fn_8024125C(S80093000 *, s32);
void fn_80240C2C(S80093000 *, s32);
void __ct__9C80253F24Fiiii(void *, char *, s32, s32, s32);

void fn_80093000(S80093000 *self, s32 n) {
    char *str = lbl_802999A0;
    s32 *q;
    s32 idx;
    s32 t;
    idx = tabA_80093000[n];
    t = self->f96;
    for (q = tabB_80093000 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_80093000[idx++];
    }
    switch (tabC_80093000[idx]) {
    case 0: fn_80241628(self, 0, 0); break;
    case 1: fn_80240DBC(self, lbl_80360D48); break;
    case 2: fn_8024125C(self, 6); break;
    case 3: fn_80240C2C(self, 7); break;
    case 4: fn_8024125C(self, 8); break;
    case 5: fn_80240C2C(self, 9); break;
    case 6: fn_80240C2C(self, 12); break;
    case 7: fn_8024125C(self, 0); break;
    case 8: fn_80240C2C(self, 1); break;
    case 9: fn_80240C2C(self, 2); __ct__9C80253F24Fiiii(lbl_8035B65C, str + 84, 0, 0, 0); break;
    case 10: fn_80240C2C(self, 3); break;
    case 11: fn_80240C2C(self, 4); break;
    case 12: fn_80240C2C(self, 5); __ct__9C80253F24Fiiii(lbl_8035B65C, str + 96, 0, 0, 0); break;
    case 13: fn_80240C2C(self, 10); break;
    case 14: fn_80240C2C(self, 11); __ct__9C80253F24Fiiii(lbl_8035B65C, str + 108, 0, 0, 0); break;
    case 15: fn_8024125C(self, 13); break;
    case 16: break;
    }
}

} /* extern "C" */
