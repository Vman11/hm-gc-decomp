#include "common.h"

/* The vptr store of lbl_802E8C90 happens after the base ctor and before the member ctors; the vtable has no
 * __vt__ name, so it is modelled as a member (V802E8C90) whose inline ctor stores it. */

extern "C" {
extern u8 lbl_802E8C90[];
void *memset(void *, int, unsigned long);
}

struct C8019A4B0 { C8019A4B0(); ~C8019A4B0(); u8 b[8]; };
struct V802E8C90 { u8 *vt; V802E8C90() { vt = lbl_802E8C90; } };
struct C8018F358 { C8018F358(); ~C8018F358(); };

struct C801897A8 : C8019A4B0 {
    V802E8C90 m8;
    u32 mC;
    u32 m10;
    u8 m14[0x10];
    C8018F358 m24;
    C801897A8();
};

C801897A8::C801897A8() {
    mC = 0;
    m10 = 0;
    memset(m14, 0, 0x10);
}
