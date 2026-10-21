#include "common.h"

/* C801AAEA0 is polymorphic: MWCC puts the vptr at the end of the class (0x120) and stores it before any member is
 * constructed. Its vtable is lbl_802EAAB8 (no __vt__ name), so the store comes from the inline ctor of an empty base. */

extern "C" {
extern u8 lbl_802EAAB8[];
extern volatile f32 lbl_80364E9C;
extern f32 lbl_80364EA0;
extern f32 lbl_80364EA4;
void fn_801A6E60(void *p);
}

struct V802EAAB8 { V802EAAB8() { *(u8 **)((u8 *)this + 0x120) = lbl_802EAAB8; } };
struct C800F9688 { C800F9688(); u8 b[0x18]; };
struct C800F9B64 { C800F9B64(); ~C800F9B64(); u8 b[0x24]; };
struct C801A6A24 { C801A6A24(); u8 b[0x14]; };

struct C801AAEA0 : V802EAAB8 {
    s32 m0;
    s32 m4;
    s32 m8;
    s32 mC;
    s32 m10;
    s32 m14;
    s32 m18;
    s32 m1C;
    s32 m20;
    C800F9688 m24;
    C800F9B64 m3C;
    C800F9688 m60;
    C800F9B64 m78;
    C800F9688 m9C;
    C800F9B64 mB4;
    C801A6A24 mD8;
    u8 mEC[0x110 - 0xec];
    f32 m110;
    f32 m114;
    f32 m118;
    f32 m11C;
    u8 *vt;
    C801AAEA0();
};

C801AAEA0::C801AAEA0() {
    fn_801A6E60(mEC);
    m8 = 0;
    m0 = 0;
    m4 = 0;
    mC = 0;
    m10 = 0;
    m14 = 0;
    m8 = 0;
    m18 = 0;
    m110 = lbl_80364E9C;
    m114 = lbl_80364E9C;
    m118 = lbl_80364EA0;
    m11C = lbl_80364EA4;
    m1C = 0;
    m20 = 0;
}
