#include "common.h"

/* Two bases: C801EB864 at 0x0 (vptr at 0x14) and a second one at 0x18 whose out-of-line ctor has the plain
 * name fn_801965E0 (called from an inline ctor). The two vptrs are stored by hand. */

extern "C" {
extern u8 __vt__9C801EAE64[];
void fn_801965E0(void *p);
}

struct C801EB864 { s32 m0; u8 b[0x14]; C801EB864(); ~C801EB864(); };
struct C801965E0 { u8 b[4]; C801965E0() { fn_801965E0(this); } };

struct C801EAE64 : C801EB864, C801965E0 {
    s32 m1C;
    s32 m20;
    s32 m24;
    s32 m28;
    s32 m2C;
    s32 m30;
    s32 m34;
    s32 m38;
    s32 m3C;
    s32 m40;
    C801EAE64();
};

C801EAE64::C801EAE64() {
    *(u8 **)((u8 *)this + 0x14) = __vt__9C801EAE64;
    *(u8 **)((u8 *)this + 0x18) = __vt__9C801EAE64 + 0x2c;
    m20 = 0;
    m1C = 0;
    m28 = 0;
    m24 = 0;
    m30 = 0;
    m2C = 0;
    m38 = 0;
    m3C = 0;
    m40 = 0;
    m34 = 0;
    m0 = 12;
}
