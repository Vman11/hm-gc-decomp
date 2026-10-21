#include "common.h"

/* C801FAA9C is polymorphic: MWCC puts the vptr at the end of the class (0x100) and stores it before any member is
 * constructed. Its vtable is lbl_802EF130 (no __vt__ name), so the store comes from the inline ctor of an empty base. */

extern "C" {
extern u8 lbl_802EF130[];
}

struct V802EF130 { V802EF130() { *(u8 **)((u8 *)this + 0x100) = lbl_802EF130; } };
struct C800F9688 { C800F9688(); u8 b[0x18]; };
struct C800F9B64 { C800F9B64(); ~C800F9B64(); u8 b[0x24]; };

struct C801FAA9C : V802EF130 {
    s32 m0;
    s32 m4;
    s32 m8;
    C800F9688 mC;
    C800F9B64 m24;
    C800F9688 m48;
    C800F9B64 m60;
    C800F9688 m84;
    C800F9B64 m9C;
    C800F9688 mC0;
    C800F9B64 mD8;
    s32 mFC;
    u8 *vt;
    C801FAA9C(int a);
};

C801FAA9C::C801FAA9C(int a) {
    m0 = a;
    m4 = 0;
    m8 = 0;
    mFC = 0;
}
