// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct S80095454 {
    u8 pad0[96];
    s32 f96;
    u8 pad100[124];
    void *f224;
    u8 pad228[64];
    s32 f292;
} S80095454;
extern f32 lbl_80360FFC;
void fn_8022C128(void *o, s32 a, s32 b, s32 c, s32 d, f32 f);

extern "C" {
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8009555C();
void fn_800955B4();
void fn_8009560C();
void fn_8009565C();
void fn_80095B80();
void fn_80095CD4();
void fn_80095DD4();
void fn_80095E20();
void fn_80095F2C();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_80299C10[];
extern char lbl_80299C1C[];
extern char lbl_80299C28[];
extern char lbl_80360FC8[];
extern char lbl_80360FD0[];
extern char lbl_80360FD4[];
extern char lbl_80360FE4[];
extern char lbl_80360FEC[];
extern char lbl_80360FF4[];
}
void fn_80095454(S80095454 *self, s32 n);
void *lbl_802CBB00[172] = {
    (void *)0x00000000, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449,
    (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52,
    (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F,
    (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C,
    (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x00000000, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944,
    (void *)0x00000000, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952,
    (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454,
    (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C,
    (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x40000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x3F800000, (void *)0x00000000, (void *)0xBF800000, (void *)0x3F800000, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x3F800000, (void *)0xBF800000, (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F,
    (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C,
    (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000040,
    (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C, (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E,
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)(char *)lbl_80360FC8,
    (void *)(char *)lbl_80360FD0, (void *)(char *)lbl_80360FD0, (void *)(char *)lbl_80360FD4, (void *)(char *)lbl_80360FD0, (void *)(char *)lbl_80360FD0, (void *)(char *)lbl_80360FD0, (void *)(char *)lbl_80360FE4, (void *)(char *)lbl_80360FEC,
    (void *)(char *)lbl_80299C10, (void *)(char *)lbl_80299C1C, (void *)(char *)lbl_80360FF4, (void *)(char *)lbl_80299C28, (void *)(char *)lbl_80360FE4, (void *)0x00000000, (void *)0x00000001, (void *)(char *)lbl_80360FEC,
    (void *)0x00000001, (void *)0x00000001, (void *)(char *)lbl_80299C10, (void *)0x00000002, (void *)0x00000001, (void *)(char *)lbl_80299C1C, (void *)0x00000003, (void *)0x00000001,
    (void *)(char *)lbl_80360FF4, (void *)0x00000004, (void *)0x00000001, (void *)(char *)lbl_80299C28, (void *)0x00000005, (void *)0x00000001, (void *)0x00000000, (void *)0x00000001,
    (void *)0x00000002, (void *)0x00000003, (void *)0x00000004, (void *)0x00000005
};
static s32 tabA_80095454[6] = {
    (s32)0x00000000, (s32)0x00000001, (s32)0x00000002, (s32)0x00000003, (s32)0x00000004, (s32)0x00000005
};
static s32 tabB_80095454[6] = {
    (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001
};
static s32 tabC_80095454[6] = {
    (s32)0x00000000, (s32)0x00000000, (s32)0x00000001, (s32)0x00000002, (s32)0x00000003, (s32)0x00000004
};
void *lbl_802CBDF8[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_80095E20, (void *)fn_80249AC4, (void *)fn_80095DD4, (void *)fn_8009560C, (void *)fn_80095CD4, (void *)fn_8023D198,
    (void *)fn_80095F2C, (void *)fn_80095454, (void *)fn_80241D80, (void *)fn_8003F140, (void *)fn_8003F18C, (void *)fn_8009565C, (void *)fn_8009555C, (void *)fn_80095B80,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_800955B4
};

void fn_80095454(S80095454 *self, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    idx = tabA_80095454[n];
    t = self->f96;
    for (q = tabB_80095454 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_80095454[idx++];
    }
    switch (tabC_80095454[idx]) {
    case 0: return;
    case 1: self->f292 = 1; break;
    case 2: self->f292 = 0; break;
    case 3: fn_8022C128(self->f224, 64, 64, 64, 1, lbl_80360FFC); break;
    case 4: fn_8022C128(self->f224, 255, 255, 255, 1, lbl_80360FFC); break;
    case 5: break;
    }
}

} /* extern "C" */
