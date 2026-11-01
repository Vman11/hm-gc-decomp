// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B308;
#pragma explicit_zero_data on
__declspec(section ".sdata2") char lbl_803622F8[4] = "";
#pragma explicit_zero_data reset
extern char lbl_80362308[8];
extern char lbl_80362310[8];
extern char lbl_80362318[8];
extern char lbl_80362320[8];
extern char lbl_80362328[8];
extern char lbl_80362330[8];
extern char lbl_80362338[8];
extern char lbl_80362340[8];
extern char lbl_80362348[8];
extern char lbl_80362350[8];
extern char lbl_80362358[8];
extern char lbl_80362360[8];
extern char lbl_80362368[8];
extern char lbl_80362370[8];
extern char lbl_80362378[8];
extern char lbl_80362380[8];
extern char lbl_80362388[8];
extern char lbl_80362390[8];
extern char lbl_80362398[8];
extern char lbl_803623A0[8];
extern char lbl_803623A8[8];
extern char lbl_803623B0[8];
extern char lbl_803623B8[8];
extern char lbl_803623C0[8];
extern char lbl_803623C8[8];
extern char lbl_803623C8[8];
void fn_80241628(void *p, s32 a, s32 b);
void fn_8022BCD8(void *a, void *b, void *c);
void fn_802494A4(void *p, s32 a);
void fn_802402E0(void *p);
void fn_80240274(void *p, s32 a);
void fn_8022BF30(void *a, s32 b, s32 c, f32 f);
void fn_802490E0(void *p, s32 a, f32 f);
void fn_802413D8(f32 f, void *p, void *a, s32 b, s32 c, void *d);
void fn_802410CC(void *p, void *a, s32 b);
void fn_80240948(void *p, char *s, s32 a);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_800AB09C(u8 *p, s32 n);
void fn_800AB5BC();
void fn_800AB5E4();
void fn_800AB634();
void fn_800AB7CC();
void fn_8023D198();
void fn_8023F5F4();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029B214[];
extern char lbl_8029B220[];
extern char lbl_8029B22C[];
extern char lbl_8029B238[];
extern char lbl_8029B244[];
extern char lbl_8029B250[];
extern char lbl_8029B25C[];
extern char lbl_8029B268[];
extern char lbl_8029B274[];
extern char lbl_8029B280[];
extern char lbl_8029B28C[];
extern char lbl_8029B298[];
extern char lbl_8029B2A4[];
extern char lbl_8029B2B0[];
extern char lbl_8029B2BC[];
extern char lbl_8029B2C8[];
extern char lbl_80362258[];
extern char lbl_80362260[];
extern char lbl_80362268[];
extern char lbl_80362270[];
extern char lbl_80362278[];
extern char lbl_80362280[];
extern char lbl_80362288[];
extern char lbl_80362290[];
extern char lbl_80362298[];
extern char lbl_803622A0[];
extern char lbl_803622A8[];
extern char lbl_803622B0[];
extern char lbl_803622B8[];
extern char lbl_803622C0[];
extern char lbl_803622C8[];
extern char lbl_803622D0[];
extern char lbl_803622D8[];
extern char lbl_803622E0[];
extern char lbl_803622E8[];
extern char lbl_803622F0[];
void *lbl_802D2A78[312] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_80362258, (void *)&lbl_80362260, (void *)&lbl_8029B214, (void *)&lbl_80362268, (void *)&lbl_80362260, (void *)&lbl_80362270, (void *)&lbl_80362258, (void *)&lbl_80362278, (void *)&lbl_80362280, (void *)&lbl_80362288, (void *)&lbl_80362290, (void *)&lbl_80362298, (void *)&lbl_803622A0, (void *)&lbl_803622A8, (void *)&lbl_803622B0, (void *)&lbl_803622B8, (void *)&lbl_803622C0, (void *)&lbl_803622C8, (void *)&lbl_803622D0, (void *)&lbl_803622D8, (void *)&lbl_803622E0, (void *)&lbl_803622E8, (void *)&lbl_803622F0, (void *)&lbl_8029B220, (void *)&lbl_8029B22C, (void *)&lbl_8029B238, (void *)&lbl_8029B244, (void *)&lbl_8029B250, (void *)&lbl_8029B25C, (void *)&lbl_8029B268, (void *)&lbl_8029B274, (void *)&lbl_8029B280, (void *)&lbl_8029B28C, (void *)&lbl_8029B298, (void *)&lbl_8029B2A4, (void *)&lbl_8029B2B0, (void *)&lbl_8029B2BC, (void *)&lbl_8029B2C8, (void *)&lbl_80362260, (void *)0x0, (void *)0x1, (void *)&lbl_80362270, (void *)0x1, (void *)0x1, (void *)&lbl_80362258, (void *)0x2, (void *)0x1, (void *)&lbl_80362278, (void *)0x3, (void *)0x1, (void *)&lbl_80362280, (void *)0x4, (void *)0x1, (void *)&lbl_80362288, (void *)0x5, (void *)0x1, (void *)&lbl_80362290, (void *)0x6, (void *)0x1, (void *)&lbl_80362298, (void *)0x7, (void *)0x1, (void *)&lbl_803622A0, (void *)0x8, (void *)0x1, (void *)&lbl_803622A8, (void *)0x9, (void *)0x1, (void *)&lbl_803622B0, (void *)0xA, (void *)0x1, (void *)&lbl_803622B8, (void *)0xB, (void *)0x1, (void *)&lbl_803622C0, (void *)0xC, (void *)0x1, (void *)&lbl_803622C8, (void *)0xD, (void *)0x1, (void *)&lbl_803622D0, (void *)0xE, (void *)0x1, (void *)&lbl_803622D8, (void *)0xF, (void *)0x1, (void *)&lbl_803622E0, (void *)0x10, (void *)0x1, (void *)&lbl_803622E8, (void *)0x11, (void *)0x1, (void *)&lbl_803622F0, (void *)0x12, (void *)0x1, (void *)&lbl_8029B220, (void *)0x13, (void *)0x1, (void *)&lbl_8029B22C, (void *)0x14, (void *)0x1, (void *)&lbl_8029B238, (void *)0x15, (void *)0x1, (void *)&lbl_8029B244, (void *)0x16, (void *)0x1, (void *)&lbl_8029B250, (void *)0x17, (void *)0x1, (void *)&lbl_8029B25C, (void *)0x18, (void *)0x1, (void *)&lbl_8029B268, (void *)0x19, (void *)0x1, (void *)&lbl_8029B274, (void *)0x1A, (void *)0x1, (void *)&lbl_8029B280, (void *)0x1B, (void *)0x1, (void *)&lbl_8029B28C, (void *)0x1C, (void *)0x1, (void *)&lbl_8029B298, (void *)0x1D, (void *)0x1, (void *)&lbl_8029B2A4, (void *)0x1E, (void *)0x1, (void *)&lbl_8029B2B0, (void *)0x1F, (void *)0x1, (void *)&lbl_8029B2BC, (void *)0x20, (void *)0x1, (void *)&lbl_8029B2C8, (void *)0x21, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21 };
static s32 sAB0a[34] = { 0, 3, 4, 5, 7, 9, 11, 13, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 };
static s32 sAB0b[41] = { 1, 1, 1, 3, 3, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
static s32 sAB0c[34] = { 0, 1, 2, 3, 3, 3, 4, 3, 5, 3, 6, 3, 7, 3, 8, 3, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 };
u32 wAX_802D310C[7] = { 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21 };
void *lbl_802D3128[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800AB634, (void *)&fn_80249AC4, (void *)&fn_800AB5E4, (void *)&fn_80242210, (void *)&fn_800AB5BC, (void *)&fn_8023D198, (void *)&fn_800AB7CC, (void *)&fn_800AB09C, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
void fn_800AB09C(u8 *p, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;

    idx = sAB0a[n];
    t = *(s32 *)(p + 0x60);
    for (q = sAB0b + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sAB0b[idx++];
    }
    switch (sAB0c[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        if (*(void **)(p + 0x118) != 0) {
            fn_8022BCD8(*(void **)(p + 0xE0), *(void **)(p + 0x118), lbl_803622F8);
        }
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_802402E0(p);
        fn_80241628(p, 0, 0);
        break;
    case 2:
        fn_80241628(p, 1, 0);
        fn_80240274(p, 0);
        break;
    case 3:
        return;
    case 4:
        fn_8022BF30(*(void **)(p + 0xE0), 0xFF, 1, 0.0f);
        fn_8022BF30(*(void **)(p + 0xE0), 0, 1, 1.0f);
        fn_802490E0(p, 1, 1.0f);
        break;
    case 5:
        fn_8022BF30(*(void **)(p + 0xE0), 0, 1, 0.0f);
        fn_8022BF30(*(void **)(p + 0xE0), 0xFF, 1, 1.0f);
        fn_802490E0(p, 1, 1.0f);
        break;
    case 6:
        if (*(void **)(p + 0xF0) != 0) {
            fn_802413D8(0.2f, p, *(void **)(p + 0xF0), 0, 1, *(void **)(p + 0xEC));
        }
        break;
    case 7:
        if (*(void **)(p + 0xF0) != 0 && *(s32 *)(*(u8 **)(*(u8 **)(lbl_8035B308 + 0x48) + 600) + 0x300) == 0) {
            fn_802410CC(p, *(void **)(p + 0xF0), 0);
        }
        break;
    case 8:
        fn_802494A4(p, 1);
        break;
    case 9:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362308, 0);
        break;
    case 10:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362310, 0);
        break;
    case 11:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362318, 0);
        break;
    case 12:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362320, 0);
        break;
    case 13:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362328, 0);
        break;
    case 14:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362330, 0);
        break;
    case 15:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362338, 0);
        break;
    case 16:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362340, 0);
        break;
    case 17:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362348, 0);
        break;
    case 18:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362350, 0);
        break;
    case 19:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362358, 0);
        break;
    case 20:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362360, 0);
        break;
    case 21:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362368, 0);
        break;
    case 22:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362370, 0);
        break;
    case 23:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362378, 0);
        break;
    case 24:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362380, 0);
        break;
    case 25:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362388, 0);
        break;
    case 26:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362390, 0);
        break;
    case 27:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362398, 0);
        break;
    case 28:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623A0, 0);
        break;
    case 29:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623A8, 0);
        break;
    case 30:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623B0, 0);
        break;
    case 31:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623B8, 0);
        break;
    case 32:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623C0, 0);
        break;
    case 33:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623C8, 0);
        break;
    case 34:
        break;
    }
}

}
