// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern char lbl_803594F0[4];
extern char lbl_803594F4[4];
extern char lbl_803594F8[4];
extern char lbl_80359500[4];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
extern char fn_8003F140[];
extern char fn_8003F18C[];
extern char fn_8003F1DC[];
extern char fn_800B2AE8[];
extern char fn_800B2BB4[];
extern char fn_800B2BE8[];
extern char fn_800B2C1C[];
extern char fn_800B2C44[];
extern char fn_800B2C64[];
extern char fn_800B2DF8[];
extern char fn_8023D198[];
extern char fn_8023F5F4[];
extern char fn_8023FE08[];
extern char fn_80240054[];
extern char fn_802416D4[];
extern char fn_80241D80[];
extern char fn_80242210[];
extern char fn_80249AC4[];
extern char lbl_8029BDA4[];
extern char lbl_80362FC8[];
extern char lbl_80362FD0[];
extern char lbl_80362FD4[];
void *lbl_802D72E0[146] = {
    (void *)0x00000000,
    (void *)0x000000FA,
    (void *)0x000001F4,
    (void *)0x000002EE,
    (void *)0x55495C4D,
    (void *)0x454D4341,
    (void *)0x52445C00,
    (void *)0x41545449,
    (void *)0x43000000,
    (void *)0x42414C4C,
    (void *)0x524F4F4D,
    (void *)0x4348494C,
    (void *)0x4452454E,
    (void *)0x434F4E53,
    (void *)0x45525600,
    (void *)0x44494E52,
    (void *)0x4F4F4D00,
    (void *)0x464F5945,
    (void *)0x52000000,
    (void *)0x47414C4C,
    (void *)0x45525900,
    (void *)0x47524156,
    (void *)0x45594400,
    (void *)0x47524F4F,
    (void *)0x4D000000,
    (void *)0x47525448,
    (void *)0x414C4C00,
    (void *)0x47554553,
    (void *)0x54000000,
    (void *)0x48414C4C,
    (void *)0x41420000,
    (void *)0x48414C4C,
    (void *)0x43440000,
    (void *)0x4B495443,
    (void *)0x48454E00,
    (void *)0x4C414200,
    (void *)0x00000000,
    (void *)0x4D555345,
    (void *)0x554D0000,
    (void *)0x4D414944,
    (void *)0x00000000,
    (void *)0x4D415354,
    (void *)0x52424544,
    (void *)0x4D415553,
    (void *)0x4F4C4D00,
    (void *)0x4D454153,
    (void *)0x55524500,
    (void *)0x544F5952,
    (void *)0x4F4F4D00,
    (void *)0x4F425345,
    (void *)0x52560000,
    (void *)0x50414E54,
    (void *)0x52590000,
    (void *)0x5041524C,
    (void *)0x4F520000,
    (void *)0x53495454,
    (void *)0x494E4700,
    (void *)0x53545245,
    (void *)0x54434800,
    (void *)0x53554E52,
    (void *)0x4F4F4D00,
    (void *)0x57494E54,
    (void *)0x45520000,
    (void *)0x5449544C,
    (void *)0x45000000,
    (void *)0x53504952,
    (void *)0x49540000,
    (void *)0x474C4F42,
    (void *)0x414C0000,
    (void *)0x00000000,
    (void *)0x00000028,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x00000028,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x00000028,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x3F800000,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x40000000,
    (void *)0x00000000,
    (void *)0x3F800000,
    (void *)0x3F800000,
    (void *)0x00000000,
    (void *)0xBF800000,
    (void *)0x3F800000,
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)0x3F800000,
    (void *)0x3F800000,
    (void *)0x00000000,
    (void *)0x3F800000,
    (void *)0xBF800000,
    (void *)0x00000000,
    (void *)0x00000006,
    (void *)0x00000009,
    (void *)0x0000000C,
    (void *)0x0000000F,
    (void *)0x00000012,
    (void *)0x00000015,
    (void *)0x00000018,
    (void *)0x0000001B,
    (void *)0x00000000,
    (void *)0x00000006,
    (void *)0x00000009,
    (void *)0x0000000C,
    (void *)0x0000000F,
    (void *)0x00000012,
    (void *)0x00000015,
    (void *)0x00000018,
    (void *)0x0000001B,
    (void *)0x00000000,
    (void *)0x00000006,
    (void *)0x00000040,
    (void *)0x00000043,
    (void *)0x00000046,
    (void *)0x00000049,
    (void *)0x0000004C,
    (void *)0x0000004F,
    (void *)0x00000052,
    (void *)0x00000055,
    (void *)0x0000001E,
    (void *)0x00000021,
    (void *)0x00000024,
    (void *)0x00000027,
    (void *)0x0000002A,
    (void *)0x0000002D,
    (void *)0x00000030,
    (void *)0x00000033,
    (void *)(lbl_80362FC8),
    (void *)(lbl_80362FC8),
    (void *)(lbl_80362FD0),
    (void *)(lbl_80362FD0),
    (void *)(lbl_80362FD0),
    (void *)(lbl_80362FD4),
    (void *)0x00000000,
    (void *)0x00000001,
    (void *)(lbl_8029BDA4),
    (void *)0x00000001,
    (void *)0x00000001
};
void *lbl_802D7528[20] = {
    (void *)0x00000000,
    (void *)0x00000000,
    (void *)(fn_800B2C64),
    (void *)(fn_80249AC4),
    (void *)(fn_800B2C44),
    (void *)(fn_80242210),
    (void *)(fn_800B2C1C),
    (void *)(fn_8023D198),
    (void *)(fn_800B2DF8),
    (void *)(fn_800B2AE8),
    (void *)(fn_80241D80),
    (void *)(fn_8003F140),
    (void *)(fn_8003F18C),
    (void *)(fn_8023FE08),
    (void *)(fn_800B2BB4),
    (void *)(fn_802416D4),
    (void *)(fn_8003F1DC),
    (void *)(fn_80240054),
    (void *)(fn_8023F5F4),
    (void *)(fn_800B2BE8)
};
}
struct C8024262C { u32 w[71]; C8024262C(); ~C8024262C(); };
struct D800B2CD8 : C8024262C {
    D800B2CD8(u8 *b) {
        w[0] = (u32)(b + 0x248);
        w[21] = 2;
        w[11] = 2;
        w[26] = 1;
        w[23] = 0;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 1;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)lbl_803594F8;
        w[10] = (u32)(b + 0x230);
        w[12] = (u32)lbl_80359500;
        w[27] = (u32)lbl_803594F4;
        w[30] = 0;
        w[49] = (u32)lbl_803594F0;
        w[50] = 0;
        w[51] = 0;
        w[61] = (u32)(b + 0x21c);
        w[63] = 0;
        w[67] = 0;
        w[70] = 3;
    }
};
extern "C" D800B2CD8 *fn_800B2CD8(void) {
    u8 *b = (u8 *)lbl_802D72E0;
    D800B2CD8 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D800B2CD8(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
