// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void s18();
};
extern f32 lbl_8035D7AC;
extern f32 lbl_8035D7B0;
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
u8 *fn_8022D694(u32);
int rand(void);
void fn_802494A4(u8 *, int);
int fn_800A210C(u8 *);
void fn_800A1AA8(u8 *);
void fn_800A27B0(u8 *);
void fn_800A15BC(u8 *);
void fn_800A2870(u8 *);
void fn_800A1710(u8 *);
void fn_800A14F0(u8 *);
void fn_800A2204(u8 *);
void fn_800A2198(u8 *);
void fn_800A217C(u8 *);
void fn_800A1608(u8 *);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_8004E1C8(u8 *p, s32 n);
void fn_8004E57C();
void fn_8004E70C();
void fn_8004E72C();
void fn_8004E74C();
void fn_8004E8F0();
void fn_8004E8F8();
void fn_800A1074();
void fn_800A226C();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_80296104[];
extern char lbl_80296110[];
extern char lbl_80296128[];
extern char lbl_80296134[];
extern char lbl_80296140[];
extern char lbl_8029614C[];
extern char lbl_80296158[];
extern char lbl_80296164[];
extern char lbl_8035D6D8[];
extern char lbl_8035D6E0[];
extern char lbl_8035D6E4[];
extern char lbl_8035D6EC[];
extern char lbl_8035D6F4[];
extern char lbl_8035D6FC[];
extern char lbl_8035D704[];
extern char lbl_8035D70C[];
extern char lbl_8035D714[];
extern char lbl_8035D71C[];
extern char lbl_8035D724[];
extern char lbl_8035D72C[];
extern char lbl_8035D734[];
extern char lbl_8035D73C[];
extern char lbl_8035D744[];
extern char lbl_8035D74C[];
extern char lbl_8035D754[];
extern char lbl_8035D75C[];
extern char lbl_8035D764[];
extern char lbl_8035D76C[];
extern char lbl_8035D774[];
extern char lbl_8035D77C[];
extern char lbl_8035D784[];
extern char lbl_8035D78C[];
extern char lbl_8035D794[];
extern char lbl_8035D79C[];
extern char lbl_8035D7A4[];
void *lbl_802B8100[257] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035D6D8, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6D8, (void *)&lbl_8035D6E4, (void *)&lbl_8035D6E4, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6EC, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_80296104, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_80296110, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6F4, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6FC, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D704, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D70C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D714, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D71C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D724, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D72C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D734, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D73C, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D6E0, (void *)&lbl_8035D744, (void *)&lbl_8035D74C, (void *)&lbl_8035D754, (void *)&lbl_80296128, (void *)&lbl_80296134, (void *)&lbl_8035D75C, (void *)&lbl_8035D764, (void *)&lbl_8035D76C, (void *)&lbl_8035D774, (void *)&lbl_8035D77C, (void *)&lbl_8035D784, (void *)&lbl_80296140, (void *)&lbl_8035D78C, (void *)&lbl_8029614C, (void *)&lbl_80296158, (void *)&lbl_80296164, (void *)&lbl_8035D794, (void *)&lbl_8035D79C, (void *)&lbl_8035D7A4, (void *)&lbl_8035D75C, (void *)0x0, (void *)0x1, (void *)&lbl_8035D764, (void *)0x1, (void *)0x1, (void *)&lbl_8035D76C, (void *)0x2, (void *)0x1, (void *)&lbl_8035D774, (void *)0x3, (void *)0x1, (void *)&lbl_8035D77C, (void *)0x4, (void *)0x1, (void *)&lbl_8035D784, (void *)0x5, (void *)0x1, (void *)&lbl_80296140, (void *)0x6, (void *)0x1, (void *)&lbl_8035D78C, (void *)0x7, (void *)0x1, (void *)&lbl_8029614C, (void *)0x8, (void *)0x1, (void *)&lbl_80296158, (void *)0x9, (void *)0x1, (void *)&lbl_80296164, (void *)0xA, (void *)0x1, (void *)&lbl_8035D794, (void *)0xB, (void *)0x1, (void *)&lbl_8035D79C, (void *)0xC, (void *)0x1, (void *)&lbl_8035D7A4, (void *)0xD, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD };
static s32 tA[14] = { 0, 5, 8, 9, 11, 12, 13, 16, 17, 18, 20, 22, 24, 26 };
static s32 tB[30] = { 1, 1, 1, 1, 1, 1, 1, 3, 5, 1, 4, 5, 5, 1, 1, 3, 5, 5, 3, 2, 3, 2, 3, 2, 4, 1, 1, 1, 2, 1 };
static s32 tC[30] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 10, 13, 10, 14, 15, 16, 10, 17, 10, 18, 10, 19, 10, 10, 20, 10, 21 };
void *lbl_802B862C[21] = { (void *)0x0, (void *)0x0, (void *)&fn_8004E74C, (void *)&fn_80249AC4, (void *)&fn_8004E72C, (void *)&fn_800A1074, (void *)&fn_8004E70C, (void *)&fn_8023D198, (void *)&fn_8004E8F0, (void *)&fn_8004E1C8, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8004E57C, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8004E8F8, (void *)&fn_8003FB6C, (void *)&fn_800A226C };
void fn_8004E1C8(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = S32(96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        ((VC *)p)->s18();
        if (**(u32 **)(p + 208)) {
            u8 *o;
            fn_80241588(p, 0, 0, lbl_8035D7AC);
            o = fn_8022D694(U32(224));
            if (o) {
                u16 m = *(u16 *)(*(u8 **)(o + 16) + 52);
                s32 ri = rand() % 10000u; f32 r = lbl_8035D7B0 * (f32)ri; r = (f32)(s32)m * r; *(f32 *)(o + 4) = r;
            }
        }
        if (*(s32 *)(U32(224) + 276) == 0) fn_802494A4(p, 1);
        break;
    case 1:
        U32(452) = 1;
        if (fn_800A210C(p) && **(s32 **)(p + 316)) fn_802494A4(p, 2);
        else fn_800A1AA8(p);
        break;
    case 2:
        fn_80241628(p, 0, 0);
        fn_800A27B0(p);
        fn_800A15BC(p);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        fn_800A27B0(p);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_800A2870(p);
        fn_800A1710(p);
        break;
    case 5:
        if (S32(444) == 0) fn_800A2870(p);
        break;
    case 6:
        if (S32(444) == 0) {
            ((VC *)p)->s18();
            fn_800A2870(p);
        }
        break;
    case 7:
        if (S32(444) == 0) {
            ((VC *)p)->s18();
            fn_800A2870(p);
            fn_802494A4(p, 1);
        }
        break;
    case 8:
        fn_800A27B0(p);
        break;
    case 9:
        fn_800A2870(p);
        fn_802494A4(p, 1);
        break;
    case 10:
        return;
    case 11:
        U32(444) = 1;
        break;
    case 12:
        U32(444) = 0;
        break;
    case 13:
        fn_800A14F0(p);
        if (S32(440) != 0 && S32(444) == 0) {
            if (fn_800A210C(p) && **(s32 **)(p + 316)) fn_802494A4(p, 2);
            else fn_800A1AA8(p);
        }
        break;
    case 14:
        U32(436) = 1;
        break;
    case 15:
        U32(436) = 0;
        break;
    case 16:
        fn_800A2204(p);
        break;
    case 17:
        fn_800A2198(p);
        break;
    case 18:
        fn_800A217C(p);
        break;
    case 19:
        fn_802494A4(p, 4);
        break;
    case 20:
        U32(452) = 0;
        break;
    case 21:
        fn_800A1608(p);
        break;
    case 22:
        break;
    }
}

} /* extern "C" */
