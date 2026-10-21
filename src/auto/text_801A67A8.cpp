#include "common.h"

/* C801A67A8 is polymorphic: MWCC puts the vptr at the end of the class (0x168) and stores it before any member is
 * constructed. Its vtable is lbl_802EA628 (no __vt__ name), so the store comes from the inline ctor of an empty base. */

extern "C" {
extern u8 lbl_802EA628[];
void fn_801A6380(void *p);
}

struct V802EA628 { V802EA628() { *(u8 **)((u8 *)this + 0x168) = lbl_802EA628; } };
struct C800F92E8 { C800F92E8(); ~C800F92E8(); u8 b[0x14]; };

struct C801A67A8 : V802EA628 {
    u8 pad0[0x78];
    C800F92E8 m78;
    C800F92E8 m8C;
    C800F92E8 mA0;
    C800F92E8 mB4;
    C800F92E8 mC8;
    C800F92E8 mDC;
    C800F92E8 mF0;
    C800F92E8 m104;
    C800F92E8 m118;
    C800F92E8 m12C;
    C800F92E8 m140;
    C800F92E8 m154;
    u8 *vt;
    C801A67A8();
};

C801A67A8::C801A67A8() {
    fn_801A6380(this);
}
