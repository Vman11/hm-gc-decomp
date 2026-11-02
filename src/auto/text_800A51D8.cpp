// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
/* The statics stand for lbl_802D0990 (0x350 bytes, in jt_802D098C; also used by text_800A585C): fn_800A51D8
   addresses it through the section base at offsets 736 (tabA), 760 (tabB) and 804 (tabC). d000 is filler;
   tabA/tabB/tabC hold the real values. */
extern "C" {
extern char lbl_8029ACF8[9];
extern const char lbl_80361DC0[4];
extern char lbl_80361DC4[8];
extern char lbl_8029AD04[9];
extern char lbl_80361DCC[8];
extern char lbl_8029AD10[9];
extern char lbl_80361DD4[8];
extern char lbl_80361DEC[5];
extern char lbl_80361DF4[8];
extern char lbl_80361DFC[8];
extern char lbl_80361E04[8];
extern char lbl_8029AD1C[156];
extern char lbl_80361E0C[5];
void fn_800A5A60(void);
void fn_80249AC4(void);
void fn_800A5924(void);
void fn_80242210(void);
void fn_800A57F0(void);
void fn_8023D198(void);
void fn_800A5B6C(void);
void fn_800A51D8(u8 *self, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8023FE08(void);
void fn_800A5384(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_800A540C(void);
}
/* lbl_802D0990: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802D0990[184];
void *lbl_802D0990[184] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_8029ACF8,
    (void *)lbl_80361DC0, (void *)lbl_80361DC0, (void *)lbl_80361DC4, (void *)lbl_80361DC0,
    (void *)lbl_80361DC0, (void *)lbl_8029AD04, (void *)lbl_80361DC0, (void *)lbl_80361DC0,
    (void *)lbl_80361DCC, (void *)lbl_80361DC0, (void *)lbl_80361DC0, (void *)lbl_8029AD10,
    (void *)lbl_80361DC0, (void *)lbl_80361DC0, (void *)lbl_80361DD4, (void *)lbl_80361DC0,
    (void *)lbl_80361DC0, (void *)lbl_80361DC0, (void *)lbl_80361DEC, (void *)lbl_80361DF4,
    (void *)lbl_80361DFC, (void *)lbl_80361E04, (void *)lbl_8029AD1C, (void *)lbl_80361E0C,
    (void *)lbl_80361DEC, (void *)0x00000000, (void *)0x00000001, (void *)lbl_80361DF4,
    (void *)0x00000001, (void *)0x00000001, (void *)lbl_80361DFC, (void *)0x00000002,
    (void *)0x00000001, (void *)lbl_80361E04, (void *)0x00000003, (void *)0x00000001,
    (void *)lbl_8029AD1C, (void *)0x00000004, (void *)0x00000001, (void *)lbl_80361E0C,
    (void *)0x00000005, (void *)0x00000001, (void *)0x00000000, (void *)0x00000001,
    (void *)0x00000002, (void *)0x00000003, (void *)0x00000004, (void *)0x00000005
};
static s32 tabA_800A51D8[6] = { 0, 2, 4, 6, 8, 10 };
static s32 tabB_800A51D8[11] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2 };
static s32 tabC_800A51D8[11] = { 0, 1, 1, 2, 3, 4, 1, 5, 6, 7, 1 };
/* lbl_802D0CE0: vtable (reached only through lbl_802D0990 + 0x350; force_active) */
extern "C" void *lbl_802D0CE0[20];
void *lbl_802D0CE0[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_800A5A60, (void *)fn_80249AC4,
    (void *)fn_800A5924, (void *)fn_80242210, (void *)fn_800A57F0, (void *)fn_8023D198,
    (void *)fn_800A5B6C, (void *)fn_800A51D8, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_8023FE08, (void *)fn_800A5384, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_800A540C
};
void fn_802494A4(void *, s32);
void fn_800A5494(void *);
s32 fn_800F6CD0(const char *, const char *);
void *fn_80242144(void *, s32);
void fn_80242BC0(void *, const char *, s32, s32, s32, s32);
extern const char lbl_80361E14[5];
extern const char lbl_80361DC0[4];

void fn_800A51D8(u8 *self, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    idx = tabA_800A51D8[n];
    t = M2C_FIELD(self, s32 *, 96);
    for (q = tabB_800A51D8 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_800A51D8[idx++];
    }
    switch (tabC_800A51D8[idx]) {
    case 0:
        M2C_FIELD(self, s32 *, 320) = 0;
        M2C_FIELD(self, s32 *, 328) = 0;
        M2C_FIELD(self, s32 *, 332) = 0;
        M2C_FIELD(self, s32 *, 336) = 0;
        fn_802494A4(self, 1);
        break;
    case 1:
        return;
    case 2:
        fn_800A5494(self);
        break;
    case 3:
        M2C_FIELD(self, s32 *, 340) = 1;
        break;
    case 4:
        M2C_FIELD(self, s32 *, 340) = 1;
        M2C_FIELD(self, s32 *, 328) = 1;
        M2C_FIELD(self, s32 *, 332) = 1;
        M2C_FIELD(self, s32 *, 320) = 0;
        if (M2C_FIELD(self, s32 *, 336) != 0) {
            if (fn_800F6CD0(lbl_80361E14, lbl_80361DC0) == 0) {
                fn_80242BC0(fn_80242144(self, 1), lbl_80361E14, 0, 0, 0, 0);
            }
        }
        break;
    case 5:
        M2C_FIELD(self, s32 *, 336) = 1;
        if (fn_800F6CD0(lbl_80361E14, lbl_80361DC0) == 0) {
            fn_80242BC0(fn_80242144(self, 1), lbl_80361E14, 0, 0, 0, 0);
        }
        break;
    case 6:
        M2C_FIELD(self, s32 *, 340) = 0;
        break;
    case 7:
        M2C_FIELD(self, s32 *, 340) = 0;
        fn_802494A4(self, 0);
        break;
    case 8:
        break;
    }
}

} /* extern "C" */
