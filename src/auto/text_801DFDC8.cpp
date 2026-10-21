#include "common.h"

/* Two bases: C801EB864 at 0x0 (vptr at 0x14) and C80031B94 at 0x18 (vptr at 0x1C), whose out-of-line ctor
 * has the plain name fn_8010344C (called from an inline ctor). The two vptrs are stored by hand. */

extern "C" {
extern u8 __vt__9C801DFDC8[];
void fn_8010344C(void *p);
void fn_8017ADD0(void *p);
}

struct C801EB864 { s32 m0; u8 b[0x14]; C801EB864(); ~C801EB864(); };
struct C80031B94 { u8 b[8]; C80031B94() { fn_8010344C(this); } ~C80031B94(); };

struct C801DFDC8 : C801EB864, C80031B94 {
    s32 m20;
    s32 m24;
    s32 m28;
    s32 m2C;
    s32 m30;
    u8 m34[0x50 - 0x34];
    s32 m50;
    C801DFDC8();
};

C801DFDC8::C801DFDC8() {
    *(u8 **)((u8 *)this + 0x14) = __vt__9C801DFDC8;
    *(u8 **)((u8 *)this + 0x1c) = __vt__9C801DFDC8 + 0x2c;
    m24 = 0;
    m20 = 0;
    fn_8017ADD0(m34);
    m50 = 0;
    m2C = 0;
    m28 = -1;
    m30 = 0x20;
    m0 = 1;
}
