#include "common.h"

/* The vptr store of lbl_802E8C10 happens after the base ctor and before the member ctors; the vtable has no
 * __vt__ name, so it is modelled as a member (V802E8C10) whose inline ctor stores it. */

extern "C" {
extern u8 lbl_802E8C10[];
void fn_8018DE24(void *p);
}

struct C8018E150 { C8018E150(); ~C8018E150(); u8 b[0x68]; };
struct V802E8C10 { u8 *vt; V802E8C10() { vt = lbl_802E8C10; } };
struct C8017AB98 { C8017AB98(); ~C8017AB98(); };

struct C801883E0 : C8018E150 {
    V802E8C10 m68;
    u8 pad6C[0xa8 - 0x6c];
    C8017AB98 mA8;
    C801883E0();
};

C801883E0::C801883E0() {
    *(u16 *)(b + 4) = 3;
    fn_8018DE24(this);
}
