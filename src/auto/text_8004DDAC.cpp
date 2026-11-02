#include "common.h"
namespace m8004DDAC { struct P_DDAC; }
extern "C" {
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8003F1DC(void);
void fn_8004DDAC(m8004DDAC::P_DDAC *, int);
void fn_8004DF70(void);
void fn_8004DF90(void);
s32 *fn_8004DFB0(s32 *, s16);
s32 fn_8004E150(void);
void fn_8007C8A8(void);
void fn_8007C93C(void);
void fn_8007DFE0(void);
void fn_8007E630(void);
void fn_8007EA38(void);
void fn_8023D198(void);
void fn_8023F5F4(void);
void fn_80240054(void);
void fn_80241D80(void);
void fn_80249AC4(void);
extern char lbl_80296004[];
extern char lbl_80296010[];
extern char lbl_8029601C[];
extern char lbl_80296028[];
extern char lbl_80296034[];
extern char lbl_80296040[];
extern char lbl_8029604C[];
extern char lbl_80296058[];
extern char lbl_80296064[];
extern char lbl_80296070[];
extern char lbl_8029607C[];
extern char lbl_80296088[];
extern char lbl_80296094[];
extern char lbl_802960A0[];
extern char lbl_802960AC[];
extern char lbl_802960B8[];
extern char lbl_802960C4[];
extern char lbl_802960D0[];
extern char lbl_802960DC[];
extern char lbl_8035D670[];
extern char lbl_8035D674[];
extern char lbl_8035D67C[];
extern char lbl_8035D684[];
extern char lbl_8035D68C[];
extern char lbl_8035D694[];
extern char lbl_8035D69C[];
extern char lbl_8035D6A4[];
extern char lbl_8035D6AC[];
extern char lbl_8035D6B4[];
u32 lbl_802B7B90[232] = {
0x00000000, 0x000000FA, 0x000001F4, 0x000002EE,
0x55495C4D, 0x454D4341, 0x52445C00, 0x41545449,
0x43000000, 0x42414C4C, 0x524F4F4D, 0x4348494C,
0x4452454E, 0x434F4E53, 0x45525600, 0x44494E52,
0x4F4F4D00, 0x464F5945, 0x52000000, 0x47414C4C,
0x45525900, 0x47524156, 0x45594400, 0x47524F4F,
0x4D000000, 0x47525448, 0x414C4C00, 0x47554553,
0x54000000, 0x48414C4C, 0x41420000, 0x48414C4C,
0x43440000, 0x4B495443, 0x48454E00, 0x4C414200,
0x00000000, 0x4D555345, 0x554D0000, 0x4D414944,
0x00000000, 0x4D415354, 0x52424544, 0x4D415553,
0x4F4C4D00, 0x4D454153, 0x55524500, 0x544F5952,
0x4F4F4D00, 0x4F425345, 0x52560000, 0x50414E54,
0x52590000, 0x5041524C, 0x4F520000, 0x53495454,
0x494E4700, 0x53545245, 0x54434800, 0x53554E52,
0x4F4F4D00, 0x57494E54, 0x45520000, 0x5449544C,
0x45000000, 0x53504952, 0x49540000, 0x474C4F42,
0x414C0000, 0x00000000, 0x00000028, 0x00000000,
0x00000000, 0x00000028, 0x00000000, 0x00000000,
0x00000028, 0x00000000, 0x00000000, 0x3F800000,
0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x40000000, 0x00000000, 0x3F800000,
0x3F800000, 0x00000000, 0xBF800000, 0x3F800000,
0x00000000, 0x00000000, 0x3F800000, 0x3F800000,
0x00000000, 0x3F800000, 0xBF800000, 0x00000000,
0x00000006, 0x00000009, 0x0000000C, 0x0000000F,
0x00000012, 0x00000015, 0x00000018, 0x0000001B,
0x00000000, 0x00000006, 0x00000009, 0x0000000C,
0x0000000F, 0x00000012, 0x00000015, 0x00000018,
0x0000001B, 0x00000000, 0x00000006, 0x00000040,
0x00000043, 0x00000046, 0x00000049, 0x0000004C,
0x0000004F, 0x00000052, 0x00000055, 0x0000001E,
0x00000021, 0x00000024, 0x00000027, 0x0000002A,
0x0000002D, 0x00000030, 0x00000033, (u32)&lbl_80296004,
(u32)&lbl_8035D670, (u32)&lbl_8035D670, (u32)&lbl_8035D670, (u32)&lbl_80296010,
(u32)&lbl_8029601C, (u32)&lbl_80296028, (u32)&lbl_80296034, (u32)&lbl_80296040,
(u32)&lbl_8029604C, (u32)&lbl_80296058, (u32)&lbl_80296064, (u32)&lbl_80296070,
(u32)&lbl_8029607C, (u32)&lbl_80296088, 0x3F800000, 0x00000000,
0x00000000, (u32)&lbl_8035D674, 0x3F800000, 0x00000000,
0x00000000, (u32)&lbl_80296094, (u32)&lbl_8035D67C, (u32)&lbl_802960A0,
(u32)&lbl_8035D684, (u32)&lbl_802960AC, (u32)&lbl_8035D68C, (u32)&lbl_8035D684,
(u32)&lbl_802960A0, (u32)&lbl_8035D694, (u32)&lbl_802960B8, (u32)&lbl_802960C4,
(u32)&lbl_8035D69C, (u32)&lbl_802960D0, (u32)&lbl_8035D674, (u32)&lbl_80296094,
(u32)&lbl_8035D6A4, (u32)&lbl_8035D6AC, (u32)&lbl_802960DC, (u32)&lbl_8035D6B4,
(u32)&lbl_8035D68C, 0x00000000, 0x00000001, (u32)&lbl_8035D684,
0x00000001, 0x00000001, (u32)&lbl_802960A0, 0x00000002,
0x00000001, (u32)&lbl_8035D694, 0x00000003, 0x00000001,
(u32)&lbl_802960B8, 0x00000004, 0x00000001, (u32)&lbl_802960C4,
0x00000005, 0x00000001, (u32)&lbl_8035D69C, 0x00000006,
0x00000001, (u32)&lbl_802960D0, 0x00000007, 0x00000001,
(u32)&lbl_8035D674, 0x00000008, 0x00000001, (u32)&lbl_80296094,
0x00000009, 0x00000001, (u32)&lbl_8035D6A4, 0x0000000A,
0x00000001, (u32)&lbl_8035D6AC, 0x0000000B, 0x00000001,
(u32)&lbl_802960DC, 0x0000000C, 0x00000001, (u32)&lbl_8035D6B4,
0x0000000D, 0x00000001, 0x00000000, 0x00000001,
0x00000002, 0x00000003, 0x00000004, 0x00000005,
0x00000006, 0x00000007, 0x00000008, 0x00000009,
0x0000000A, 0x0000000B, 0x0000000C, 0x0000000D
};
u32 tA_DDAC[14] = {
0x00000000, 0x00000003, 0x00000006, 0x00000009,
0x0000000C, 0x0000000F, 0x00000011, 0x00000013,
0x00000015, 0x00000017, 0x00000019, 0x0000001A,
0x0000001B, 0x0000001E
};
u32 tB_DDAC[32] = {
0x00000001, 0x00000002, 0x00000001, 0x00000001,
0x00000001, 0x00000002, 0x00000002, 0x00000001,
0x00000001, 0x00000002, 0x00000001, 0x00000001,
0x00000002, 0x00000001, 0x00000001, 0x00000003,
0x00000001, 0x00000002, 0x00000002, 0x00000002,
0x00000002, 0x00000003, 0x00000001, 0x00000002,
0x00000002, 0x00000004, 0x00000004, 0x00000001,
0x00000002, 0x00000001, 0x00000003, 0x00000001
};
u32 tC_DDAC[32] = {
0x00000000, 0x00000001, 0x00000002, 0x00000001,
0x00000003, 0x00000001, 0x00000001, 0x00000004,
0x00000001, 0x00000001, 0x00000005, 0x00000001,
0x00000001, 0x00000006, 0x00000001, 0x00000001,
0x00000007, 0x00000001, 0x00000008, 0x00000001,
0x00000009, 0x00000001, 0x0000000A, 0x00000001,
0x0000000B, 0x0000000C, 0x0000000D, 0x00000001,
0x0000000E, 0x0000000F, 0x00000001, 0x00000010
};
u32 lbl_802B8068[20] = {
0x00000000, 0x00000000, (u32)&fn_8004DFB0, (u32)&fn_80249AC4,
(u32)&fn_8004DF90, (u32)&fn_8007E630, (u32)&fn_8004DF70, (u32)&fn_8023D198,
(u32)&fn_8004E150, (u32)&fn_8004DDAC, (u32)&fn_80241D80, (u32)&fn_8003F140,
(u32)&fn_8003F18C, (u32)&fn_8007DFE0, (u32)&fn_8007C8A8, (u32)&fn_8007EA38,
(u32)&fn_8003F1DC, (u32)&fn_80240054, (u32)&fn_8023F5F4, (u32)&fn_8007C93C
};
}
#define lbl_802B7B90 ((u8 *)lbl_802B7B90)
#define lbl_802B8068 ((u8 *)lbl_802B8068)

namespace m8004DDAC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct P_DDAC { u8 pad[96]; int f96; u8 pad2[316 - 100]; f32 *f316; } P_DDAC;
extern f32 lbl_8035D6BC;
#define tA_DDAC ((int *)tA_DDAC)
#define tB_DDAC ((int *)tB_DDAC)
#define tC_DDAC ((int *)tC_DDAC)
void fn_80241628(P_DDAC *, int, int);
void fn_8007E104(P_DDAC *);
void fn_8007DD70(P_DDAC *);
void fn_802490E0(P_DDAC *, int);
void fn_802494A4(P_DDAC *, int);
void fn_8007D9F8(P_DDAC *);
void fn_8007DC38(P_DDAC *);
void fn_8007C9DC(P_DDAC *);
void fn_8007CE4C(P_DDAC *);
void fn_8007D04C(P_DDAC *);
void fn_8007D9C0(P_DDAC *);
void fn_8007C9D0(P_DDAC *);
void fn_8007DD04(P_DDAC *);
void fn_8007DC98(P_DDAC *);
void fn_8007CA80(P_DDAC *);
void fn_80249008(P_DDAC *, int);
void fn_8004DDAC(P_DDAC *p, int st) {
    int *q;
    int i;
    int t;
    t = p->f96;
    i = tA_DDAC[st];
    for (q = tB_DDAC + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB_DDAC[i++];
    }
    switch (tC_DDAC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_8007E104(p);
        fn_8007DD70(p);
        break;
    case 1:
        return;
    case 2:
        fn_8007DD70(p);
        if (*p->f316 > lbl_8035D6BC) fn_802490E0(p, 0);
        break;
    case 3:
        fn_802494A4(p, 2);
        break;
    case 4:
        fn_802494A4(p, 1);
        break;
    case 5:
        fn_8007D9F8(p);
        break;
    case 6:
        fn_8007DC38(p);
        break;
    case 7:
        fn_8007C9DC(p);
        break;
    case 8:
        fn_8007CE4C(p);
        break;
    case 9:
        fn_8007D04C(p);
        break;
    case 10:
        fn_8007D9C0(p);
        break;
    case 11:
        fn_8007C9D0(p);
        break;
    case 12:
        fn_8007DD04(p);
        break;
    case 13:
        fn_8007DC98(p);
        break;
    case 14:
        fn_8007CA80(p);
        fn_802494A4(p, 3);
        break;
    case 15:
        fn_8007CA80(p);
        break;
    case 16:
        fn_80249008(p, 0);
        fn_80249008(p, 1);
        break;
    case 17:
        break;
    }
}

} /* extern "C" */

} /* namespace m8004DDAC */

namespace m8004DF70 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8007E7A0(void);

void fn_8004DF70(void) {
    fn_8007E7A0();
}

} /* extern "C" */

} /* namespace m8004DF70 */

namespace m8004DF90 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8007E85C(void);

void fn_8004DF90(void) {
    fn_8007E85C();
}

} /* extern "C" */

} /* namespace m8004DF90 */

namespace m8004DFB0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
void __dl__FPv(int);
void fn_8007EBA0(int, int);
struct VCall_fn_8004DFB0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_8004DFB0(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802B8068;
        ((VCall_fn_8004DFB0_0 *)(param_1))->m();
        fn_8007EBA0((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m8004DFB0 */

namespace m8004E024 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_80359248[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8007EC14(void *);

struct C8004E024 {
    u32 f[103];
    C8004E024(u8 *b) {
        fn_8007EC14(this);
        f[0] = (u32)(b + 1240);
        f[0x15] = 0xe;
        f[0xb] = 0xe;
        f[0x1a] = 4;
        f[0x17] = 2;
        f[0x20] = 1;
        f[0x1f] = 0;
        f[0x21] = 0;
        f[0x22] = 1;
        f[0x23] = 0xb;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 648);
        f[10] = (u32)(b + 704);
        f[0xc] = (u32)(b + 872);
        f[0x1b] = (u32)(b + 632);
        f[0x1e] = (u32)(b + 600);
        f[0x31] = (u32)lbl_80359248;
        f[0x32] = 0;
        f[0x33] = 0;
        f[0x3d] = (u32)(b + 540);
        f[0x3f] = (u32)(b + 556);
        f[0x43] = 0;
    }
};

void *fn_8004E024(void) {
    u8 *base = lbl_802B7B90;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8004E024(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */

} /* namespace m8004E024 */

extern "C" {

/* Functions from 0x8004E150 to 0x8004E158, found by decomp-toolkit. */

s32 fn_8004E150(void) {
    return 1;
}

}


namespace m8004E158 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A14C;
extern volatile f32 lbl_8035A148;
extern volatile f64 lbl_8035D6C0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030292C[];
extern u8 lbl_802960E8[];
extern u32 lbl_8035D6C8;
void fn_8004E024(void);
void fn_800375E4(void);
extern u8 lbl_80302920[];

void fn_8004E158(void) {
    lbl_8035A14C = lbl_803596E0[0];
    lbl_8035A148 = fn_800EFDA4(lbl_8035D6C0);
    __register_global_object(fn_8023DC5C(lbl_8030292C, lbl_802960E8, &lbl_8035D6C8, (void *)fn_8004E024, 412), (void *)fn_800375E4, lbl_80302920);
}

__declspec(section ".ctors") static void (*const ctor_8004E158)(void) = fn_8004E158;

} /* extern "C" */

} /* namespace m8004E158 */
