#include "common.h"

/* C80255A20 is polymorphic: MWCC puts the vptr at the end of the class (0xC0) and stores it before any member is
 * constructed. Its vtable is lbl_802F23D8 (no __vt__ name), so the store comes from the inline ctor of an empty base. */

extern "C" {
extern u8 lbl_802F23D8[];
extern s32 lbl_8035B680;
extern void *lbl_8035B684;
}

struct V802F23D8 { V802F23D8() { *(u8 **)((u8 *)this + 0xc0) = lbl_802F23D8; } };
struct C80108990 { C80108990(); ~C80108990(); u8 b[0x80]; };
struct C80109410 { C80109410(); ~C80109410(); u8 b[0x20]; };

struct C80255A20 : V802F23D8 {
    s32 m0;
    s32 m4;
    C80108990 m8;
    C80109410 m88;
    s32 mA8;
    s32 mAC;
    u8 padB0[8];
    s32 mB8;
    s32 mBC;
    u8 *vt;
    C80255A20();
};

C80255A20::C80255A20() {
    if (lbl_8035B684 == 0) {
        lbl_8035B684 = this;
    }
    lbl_8035B680 = 0;
    mA8 = 0;
    m4 = 0;
    mAC = 0;
    mB8 = 0;
    mBC = 1;
}
