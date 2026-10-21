#include "common.h"

/* C802074B8 is polymorphic: MWCC puts the vptr at the end of the class (0x78) and stores it before any member is
 * constructed. Its vtable is lbl_802EF910 (no __vt__ name), so the store comes from the inline ctor of an empty base. */

extern "C" {
extern u8 lbl_802EF910[];
void fn_801129C4(void *p);
}

struct V802EF910 { V802EF910() { *(u8 **)((u8 *)this + 0x78) = lbl_802EF910; } };
struct C800F9688 { C800F9688(); u8 b[0x18]; };
struct C800F9B64 { C800F9B64(); ~C800F9B64(); u8 b[0x24]; };
struct C801124F8 { C801124F8(); u8 b[0x14]; };

struct C802074B8 : V802EF910 {
    s32 m0;
    C800F9688 m4;
    C800F9B64 m1C;
    C801124F8 m40;
    u8 m54[0x78 - 0x54];
    u8 *vt;
    C802074B8();
};

C802074B8::C802074B8() {
    fn_801129C4(m54);
}
