#include "common.h"
extern "C" void fn_8003F140(void);
extern "C" void fn_8003F18C(void);
extern "C" void fn_8003F1DC(void);
extern "C" void fn_8003FB68(void);
extern "C" void fn_8003FB6C(void);
namespace m800AEA64 {  extern "C" void fn_800AEA64(u8 *p, s32 n); }
namespace m800AEB6C {  extern "C" void fn_800AEB6C(void); }
namespace m800AEB8C {  extern "C" void fn_800AEB8C(void); }
namespace m800AEBAC {  extern "C" void fn_800AEBAC(void); }
namespace m800AEBCC {  extern "C" s32 * fn_800AEBCC(s32 *param_1, s16 param_2); }
extern "C" void fn_800AED5C(void);
extern "C" void fn_8023D198(void);
extern "C" void fn_8023F5F4(void);
extern "C" void fn_80240054(void);
extern "C" void fn_802416D4(void);
extern "C" void fn_80241D80(void);
extern "C" void fn_80242210(void);
extern "C" void fn_80249AC4(void);
extern "C" {
extern char lbl_803629A8[];
extern char lbl_803629B0[];
extern char lbl_803629B8[];
extern char lbl_803629BC[];
extern char lbl_803629C0[];
extern char lbl_803629C8[];
extern char lbl_803629D0[];
u32 lbl_802D4D90[163] = { 0x00000000, 0x000000FA, 0x000001F4, 0x000002EE, 0x55495C4D, 0x454D4341, 0x52445C00, 0x41545449, 0x43000000, 0x42414C4C, 0x524F4F4D, 0x4348494C, 0x4452454E, 0x434F4E53, 0x45525600, 0x44494E52, 0x4F4F4D00, 0x464F5945, 0x52000000, 0x47414C4C, 0x45525900, 0x47524156, 0x45594400, 0x47524F4F, 0x4D000000, 0x47525448, 0x414C4C00, 0x47554553, 0x54000000, 0x48414C4C, 0x41420000, 0x48414C4C, 0x43440000, 0x4B495443, 0x48454E00, 0x4C414200, 0x00000000, 0x4D555345, 0x554D0000, 0x4D414944, 0x00000000, 0x4D415354, 0x52424544, 0x4D415553, 0x4F4C4D00, 0x4D454153, 0x55524500, 0x544F5952, 0x4F4F4D00, 0x4F425345, 0x52560000, 0x50414E54, 0x52590000, 0x5041524C, 0x4F520000, 0x53495454, 0x494E4700, 0x53545245, 0x54434800, 0x53554E52, 0x4F4F4D00, 0x57494E54, 0x45520000, 0x5449544C, 0x45000000, 0x53504952, 0x49540000, 0x474C4F42, 0x414C0000, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x40000000, 0x00000000, 0x3F800000, 0x3F800000, 0x00000000, 0xBF800000, 0x3F800000, 0x00000000, 0x00000000, 0x3F800000, 0x3F800000, 0x00000000, 0x3F800000, 0xBF800000, 0x00000000, 0x00000006, 0x00000009, 0x0000000C, 0x0000000F, 0x00000012, 0x00000015, 0x00000018, 0x0000001B, 0x00000000, 0x00000006, 0x00000009, 0x0000000C, 0x0000000F, 0x00000012, 0x00000015, 0x00000018, 0x0000001B, 0x00000000, 0x00000006, 0x00000040, 0x00000043, 0x00000046, 0x00000049, 0x0000004C, 0x0000004F, 0x00000052, 0x00000055, 0x0000001E, 0x00000021, 0x00000024, 0x00000027, 0x0000002A, 0x0000002D, 0x00000030, 0x00000033, (u32)&lbl_803629A8, 0x00000000, 0x4372636C, 0x44756D52, 0x00000000, (u32)&lbl_803629B0, (u32)&lbl_803629B8, (u32)&lbl_803629BC, (u32)&lbl_803629B0, (u32)&lbl_803629C0, (u32)&lbl_803629C8, (u32)&lbl_803629D0, (u32)&lbl_803629B0, 0x00000000, 0x00000001, (u32)&lbl_803629C0, 0x00000001, 0x00000001, (u32)&lbl_803629C8, 0x00000002, 0x00000001, (u32)&lbl_803629D0, 0x00000003, 0x00000001, 0x00000000, 0x00000001, 0x00000002, 0x00000003 };
static s32 tA[4] = { 0x00000000, 0x00000003, 0x00000004, 0x00000007 };
static s32 tB[9] = { 0x00000001, 0x00000001, 0x00000001, 0x00000003, 0x00000001, 0x00000001, 0x00000001, 0x00000002, 0x00000001 };
static s32 tC[9] = { 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000003, 0x00000004, 0x00000003, 0x00000003, 0x00000005 };
}
extern "C" void *lbl_802D5074[20] = { 0, 0, (void *)m800AEBCC::fn_800AEBCC, (void *)fn_80249AC4, (void *)m800AEBAC::fn_800AEBAC, (void *)fn_80242210, (void *)m800AEB8C::fn_800AEB8C, (void *)fn_8023D198, (void *)fn_800AED5C, (void *)m800AEA64::fn_800AEA64, (void *)fn_80241D80, (void *)fn_8003F140, (void *)fn_8003F18C, (void *)m800AEB6C::fn_800AEB6C, (void *)fn_8003FB68, (void *)fn_802416D4, (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8003FB6C };
namespace m800AEA64 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
void fn_80241628(u8 *, int, int);
void fn_802494A4(u8 *, int);
void fn_8023F864(u8 *, int);
void fn_8023F9C8(u8 *, int);
void fn_800AEA64(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    i = tA[n];
    t = *(s32 *)(p + 96);
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_8023F864(p, 0);
        break;
    case 2:
        fn_8023F9C8(p, 0);
        break;
    case 3:
        return;
    case 4:
        fn_802494A4(p, 2);
        break;
    case 5:
        fn_802494A4(p, 1);
        break;
    case 6:
        break;
    }
}

} /* extern "C" */

} /* namespace m800AEA64 */

namespace m800AEB6C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8023FE08(void);

void fn_800AEB6C(void) {
    fn_8023FE08();
}

} /* extern "C" */

} /* namespace m800AEB6C */

namespace m800AEB8C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_800AEB8C(void) {
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m800AEB8C */

namespace m800AEBAC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8023F214(void);

void fn_800AEBAC(void) {
    fn_8023F214();
}

} /* extern "C" */

} /* namespace m800AEBAC */

namespace m800AEBCC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_800AEBCC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_800AEBCC(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802D5074;
        ((VCall_fn_800AEBCC_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m800AEBCC */

struct C8024262C { u32 w[70]; C8024262C(); ~C8024262C(); };
namespace m800AEC40 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern char lbl_803594C0[4];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct D800AEC40 : C8024262C {
    D800AEC40(u8 *b) {
        w[0] = (u32)(b + 0x2e4);
        w[21] = 4;
        w[11] = 4;
        w[26] = 3;
        w[23] = 0;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 0;
        w[35] = 0;
        w[37] = 1;
        w[22] = (u32)(b + 0x23c);
        w[10] = (u32)(b + 0x24c);
        w[12] = (u32)(b + 0x27c);
        w[27] = (u32)(b + 0x230);
        w[30] = 0;
        w[49] = (u32)lbl_803594C0;
        w[50] = 0;
        w[51] = 0;
        w[61] = 0;
        w[63] = 0;
        w[67] = (u32)(b + 0x21c);
    }
};
extern "C" D800AEC40 *fn_800AEC40(void) {
    u8 *b = (u8 *)lbl_802D4D90;
    D800AEC40 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D800AEC40(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}

} /* namespace m800AEC40 */
