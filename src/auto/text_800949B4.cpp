// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern "C" {
extern char lbl_80299BB8[9];
extern char lbl_80360F40[8];
extern char lbl_80299BC4[9];
extern char lbl_80360F48[8];
extern char lbl_80360F50[8];
extern char lbl_80360F60[5];
extern char lbl_80360F68[5];
extern char lbl_80360F70[8];
extern char lbl_80299BD0[9];
extern char lbl_80360F78[8];
extern char lbl_80299BDC[9];
void fn_800952CC(void);
void fn_80249AC4(void);
void fn_8009525C(void);
void fn_80094C04(void);
void fn_80095134(void);
void fn_8023D198(void);
void fn_800953D8(void);
void fn_800949B4(struct S800949B4 *self, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_80094C94(void);
void fn_80094B54(void);
void fn_80094E24(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_80094BAC(void);
}
/* lbl_802CB720: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802CB720[190];
void *lbl_802CB720[190] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_80299BB8,
    (void *)lbl_80360F40, (void *)0x00000000, (void *)lbl_80299BC4, (void *)lbl_80360F48,
    (void *)0x00000000, (void *)0x3E4CCCCD, (void *)0x00000000, (void *)0x00000000,
    (void *)lbl_80360F50, (void *)lbl_80360F60, (void *)lbl_80360F68, (void *)lbl_80299BB8,
    (void *)lbl_80299BC4, (void *)lbl_80360F70, (void *)lbl_80299BD0, (void *)lbl_80360F78,
    (void *)lbl_80299BDC, (void *)lbl_80360F50, (void *)lbl_80360F60, (void *)0x00000000,
    (void *)0x00000001, (void *)lbl_80360F68, (void *)0x00000001, (void *)0x00000001,
    (void *)lbl_80299BB8, (void *)0x00000002, (void *)0x00000001, (void *)lbl_80299BC4,
    (void *)0x00000003, (void *)0x00000001, (void *)lbl_80360F70, (void *)0x00000004,
    (void *)0x00000001, (void *)lbl_80299BD0, (void *)0x00000005, (void *)0x00000001,
    (void *)lbl_80360F78, (void *)0x00000006, (void *)0x00000001, (void *)lbl_80299BDC,
    (void *)0x00000007, (void *)0x00000001, (void *)lbl_80360F50, (void *)0x00000008,
    (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002,
    (void *)0x00000003, (void *)0x00000004, (void *)0x00000005, (void *)0x00000006,
    (void *)0x00000007, (void *)0x00000008
};
static s32 tabA_800949B4[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static s32 tabB_800949B4[9] = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tabC_800949B4[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
/* lbl_802CBA84: vtable (reached only through lbl_802CB720 + 0x364; force_active) */
extern "C" void *lbl_802CBA84[20];
void *lbl_802CBA84[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_800952CC, (void *)fn_80249AC4,
    (void *)fn_8009525C, (void *)fn_80094C04, (void *)fn_80095134, (void *)fn_8023D198,
    (void *)fn_800953D8, (void *)fn_800949B4, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_80094C94, (void *)fn_80094B54, (void *)fn_80094E24,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_80094BAC
};
typedef struct S800949B4 {
    u8 pad0[96];
    s32 f96;
    u8 pad100[188];
    s32 f288;
    u8 pad292[4];
    f32 f296;
    u8 pad300[16];
    s32 *f316;
    u8 pad320[12];
    s32 f332;
    s32 f336;
} S800949B4;
extern f32 lbl_80360F80;
extern f32 lbl_80360F84;
void fn_802491DC(S800949B4 *, s32);
void fn_8024125C(S800949B4 *, s32);

void fn_800949B4(S800949B4 *self, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    idx = tabA_800949B4[n];
    t = self->f96;
    for (q = tabB_800949B4 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_800949B4[idx++];
    }
    switch (tabC_800949B4[idx]) {
    case 0:
        self->f288 = 1;
        if (self->f316 != 0) {
            self->f288 = *self->f316;
        }
        if (self->f288 != 0) {
            self->f296 = lbl_80360F80;
        } else {
            self->f296 = lbl_80360F84;
        }
        fn_802491DC(self, 0);
        break;
    case 1:
        return;
    case 2:
        if (self->f288 == 0 && self->f336 != 0) {
            fn_8024125C(self, 0);
        }
        self->f288 = 1;
        break;
    case 3:
        if (self->f288 != 0 && self->f336 != 0) {
            fn_8024125C(self, 1);
        }
        self->f288 = 0;
        break;
    case 4:
        self->f288 = 1;
        self->f296 = lbl_80360F80;
        break;
    case 5:
        self->f288 = 0;
        self->f296 = lbl_80360F84;
        break;
    case 6:
        self->f332 = 1;
        break;
    case 7:
        self->f332 = 0;
        break;
    case 8:
        self->f336 = 1;
        break;
    case 9:
        break;
    }
}

} /* extern "C" */
