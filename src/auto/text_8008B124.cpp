// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct C802449C4 {
    u8 pad[56];
    C802449C4();
    ~C802449C4();
};
extern "C" {
extern "C" {
extern char lbl_803600D8[8];
extern char lbl_803600E0[4];
extern char lbl_8029908C[9];
extern char lbl_803600E4[7];
extern char lbl_803600EC[6];
extern char lbl_80299098[9];
extern char lbl_803600F4[7];
extern char lbl_802990A4[9];
extern char lbl_803600FC[5];
extern char lbl_80360104[5];
extern char lbl_802990B0[9];
extern char lbl_802990BC[144];
extern char lbl_8036010C[7];
extern char lbl_80360114[8];
extern char lbl_8036011C[6];
void fn_8008B980(void);
void fn_80249AC4(void);
void fn_8008B804(void);
void fn_80242210(void);
void fn_8008B6E0(void);
void fn_8023D198(void);
void fn_8008BA8C(void);
void fn_8008B124(struct P8008B124 *p, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8008B394(void);
void fn_8008B2DC(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_8008B338(void);
}
/* lbl_802C6990: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802C6990[184];
void *lbl_802C6990[184] = {
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
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_803600D8,
    (void *)lbl_803600E0, (void *)lbl_803600E0, (void *)lbl_8029908C, (void *)lbl_803600E0,
    (void *)lbl_803600E0, (void *)lbl_803600E4, (void *)lbl_803600E0, (void *)lbl_803600E0,
    (void *)lbl_803600E0, (void *)lbl_803600EC, (void *)lbl_80299098, (void *)lbl_803600F4,
    (void *)lbl_802990A4, (void *)lbl_803600FC, (void *)lbl_80360104, (void *)lbl_802990B0,
    (void *)lbl_802990BC, (void *)lbl_8036010C, (void *)lbl_80360114, (void *)lbl_8036011C,
    (void *)lbl_803600FC, (void *)0x00000000, (void *)0x00000001, (void *)lbl_80360104,
    (void *)0x00000001, (void *)0x00000001, (void *)lbl_802990B0, (void *)0x00000002,
    (void *)0x00000001, (void *)lbl_802990BC, (void *)0x00000003, (void *)0x00000001,
    (void *)lbl_8036010C, (void *)0x00000004, (void *)0x00000001, (void *)lbl_80360114,
    (void *)0x00000005, (void *)0x00000001, (void *)lbl_8036011C, (void *)0x00000006,
    (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002,
    (void *)0x00000003, (void *)0x00000004, (void *)0x00000005, (void *)0x00000006
};
static s32 data_2E0[7] = { 0, 2, 3, 5, 7, 9, 12 };
static s32 data_2FC[14] = { 1, 3, 4, 1, 3, 1, 3, 3, 1, 1, 2, 1, 1, 3 };
static s32 data_334[14] = { 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 1, 6 };
/* lbl_802C6CFC: vtable (reached only through lbl_802C6990 + 0x36C; force_active) */
extern "C" void *lbl_802C6CFC[20];
void *lbl_802C6CFC[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_8008B980, (void *)fn_80249AC4,
    (void *)fn_8008B804, (void *)fn_80242210, (void *)fn_8008B6E0, (void *)fn_8023D198,
    (void *)fn_8008BA8C, (void *)fn_8008B124, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_8008B394, (void *)fn_8008B2DC, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8008B338
};
extern u8 *lbl_8035B308;
struct P8008B124 {
    u8 pad[96];
    s32 f96;
    u8 pad2[208];
    s32 *f308;
    s32 *f312;
    u8 pad3[4];
    s32 f320;
    s32 f324;
    s32 f328;
    s32 f332;
};
void fn_80241628(P8008B124 *, s32, s32);
void *fn_80242144(void *self, s32 n);
void fn_802448C8(C802449C4 *it, void *list);
void fn_80244750(C802449C4 *it, s32 n);
s32 fn_8024457C(C802449C4 *it);
s32 fn_80244584(C802449C4 *it);
void fn_802494A4(void *self, s32 n);

void fn_8008B124(P8008B124 *p, s32 n) {
    s32 *q;
    s32 j = data_2E0[n];
    s32 t = p->f96;
    for (q = &data_2FC[j]; t > 0; q++) {
        if (*q > t) break;
        t -= data_2FC[j++];
    }
    switch (data_334[j]) {
    case 0:
        fn_80241628(p, 0, 0);
        if (*p->f312 != 0) {
            p->f320 = *(s32 *)(lbl_8035B308 + 72);
        } else {
            C802449C4 it;
            fn_802448C8(&it, fn_80242144(p, 0));
            fn_80244750(&it, 0);
            if (fn_80244584(&it) == 0) p->f320 = fn_8024457C(&it);
        }
        p->f332 = 1;
        if (*p->f308 == 0) fn_802494A4(p, 3);
        break;
    case 1:
        return;
    case 2:
        p->f324 = 0;
        break;
    case 3:
        p->f324 = 1;
        break;
    case 4:
        if (p->f328 != 0) fn_802494A4(p, 1);
        else fn_802494A4(p, 2);
        break;
    case 5:
        fn_802494A4(p, 3);
        break;
    case 6:
        fn_802494A4(p, 0);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
