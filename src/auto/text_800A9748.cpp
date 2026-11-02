// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
/* The statics stand for lbl_802D1F48 (0x2D8 bytes, in jt_802D1F48; also used by text_800A99DC): fn_800A9748
   addresses it through the section base at offsets 632 (tabA), 648 (tabB) and 688 (tabC). d000 is filler (the
   real bytes 0..631 hold pointers); tabA/tabB/tabC hold the real values. */
extern "C" {
extern char lbl_80362110[5];
extern char lbl_80362118[3];
extern char lbl_8036211C[4];
extern char lbl_80362120[5];
extern char lbl_80362128[8];
extern char lbl_8029B118[9];
void fn_800A9968(void);
void fn_80249AC4(void);
void fn_800A9948(void);
void fn_800A98C0(void);
void fn_800A9920(void);
void fn_8023D198(void);
void fn_800A9AF0(void);
void fn_800A9748(struct S800A9748 *self, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8023FE08(void);
void fn_8003FB68(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_8003FB6C(void);
}
/* lbl_802D1F48: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802D1F48[158];
void *lbl_802D1F48[158] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_80362110,
    (void *)lbl_80362118, (void *)lbl_8036211C, (void *)lbl_80362110, (void *)lbl_80362120,
    (void *)lbl_80362128, (void *)lbl_8029B118, (void *)lbl_80362110, (void *)0x00000000,
    (void *)0x00000001, (void *)lbl_80362120, (void *)0x00000001, (void *)0x00000001,
    (void *)lbl_80362128, (void *)0x00000002, (void *)0x00000001, (void *)lbl_8029B118,
    (void *)0x00000003, (void *)0x00000001, (void *)0x00000000, (void *)0x00000001,
    (void *)0x00000002, (void *)0x00000003
};
static s32 tabA_800A9748[4] = { 0, 3, 5, 8 };
static s32 tabB_800A9748[10] = { 1, 1, 1, 1, 2, 1, 1, 1, 2, 1 };
static s32 tabC_800A9748[10] = { 0, 1, 2, 3, 2, 4, 3, 4, 5, 3 };
/* lbl_802D2220: vtable (reached only through lbl_802D1F48 + 0x2D8; force_active) */
extern "C" void *lbl_802D2220[20];
void *lbl_802D2220[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_800A9968, (void *)fn_80249AC4,
    (void *)fn_800A9948, (void *)fn_800A98C0, (void *)fn_800A9920, (void *)fn_8023D198,
    (void *)fn_800A9AF0, (void *)fn_800A9748, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_8023FE08, (void *)fn_8003FB68, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8003FB6C
};
typedef struct O800A9748 {
    u32 flags;
    u8 pad4[60];
    void *f64;
} O800A9748;
typedef struct H800A9748 {
    u8 pad0[4];
    u16 f4;
} H800A9748;
typedef struct C800A9748 {
    u8 pad0[156];
    H800A9748 *f156;
} C800A9748;
typedef struct G800A9748 {
    u8 pad0[484];
    void *f484;
} G800A9748;
typedef struct M800A9748 {
    u8 pad0[12];
    void *f12;
    u8 pad16[100];
    G800A9748 *f116;
} M800A9748;
typedef struct S800A9748 {
    u8 pad0[96];
    s32 f96;
    u8 pad100[124];
    C800A9748 *f224;
    u8 pad228[52];
    O800A9748 *f280;
} S800A9748;
extern M800A9748 *lbl_8035B65C;
extern u32 lbl_80362130;
void fn_8019AE40(void *, O800A9748 *);
void fn_802494A4(S800A9748 *, s32);

void fn_800A9748(S800A9748 *self, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    H800A9748 *h;
    idx = tabA_800A9748[n];
    t = self->f96;
    for (q = tabB_800A9748 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_800A9748[idx++];
    }
    switch (tabC_800A9748[idx]) {
    case 0:
        h = self->f224->f156;
        if (h != 0 && h->f4 == 15) {
            self->f280 = (O800A9748 *)h;
        }
        if (self->f280 != 0 && self->f280->f64 == 0) {
            fn_8019AE40(lbl_8035B65C->f12, self->f280);
            fn_8019AE40(lbl_8035B65C->f116->f484, self->f280);
        }
        if (self->f280 != 0) {
            self->f280->flags &= ~0x800;
        }
        break;
    case 1:
        if (self->f280 != 0) {
            self->f280->flags |= lbl_80362130;
        }
        break;
    case 2:
        if (self->f280 != 0) {
            self->f280->flags &= ~0x800;
        }
        break;
    case 3:
        return;
    case 4:
        fn_802494A4(self, 1);
        break;
    case 5:
        fn_802494A4(self, 2);
        break;
    case 6:
        break;
    }
}

} /* extern "C" */
