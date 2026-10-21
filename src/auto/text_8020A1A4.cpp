#include "common.h"

/* The vptr store of lbl_802EF9B8 happens after the base ctor and before the member ctors; the vtable has no
 * __vt__ name, so it is modelled as a member (V802EF9B8) whose inline ctor stores it. */

extern "C" {
extern u8 lbl_802EF9B8[];
}

struct C802113F8 { C802113F8(); ~C802113F8(); u8 b[0x10]; };
struct V802EF9B8 { u8 *vt; V802EF9B8() { vt = lbl_802EF9B8; } };
struct C80209008 { C80209008(); ~C80209008(); u8 b[0x4c]; };

struct C8020A1A4 : C802113F8 {
    V802EF9B8 m10;
    s32 m14;
    s32 m18;
    C80209008 m1C;
    C80209008 m68;
    s32 mB4;
    C8020A1A4();
};

C8020A1A4::C8020A1A4() {
    m18 = 0;
    mB4 = 0;
    m14 = -1;
}
