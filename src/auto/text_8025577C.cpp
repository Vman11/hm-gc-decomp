#include "common.h"

/* C8025577C is polymorphic: MWCC puts the vptr at the end of the class (0x2F0) and stores it before any member is
 * constructed. Its vtable is lbl_802F2388 (no __vt__ name), so the store comes from the inline ctor of an empty base. */

extern "C" {
extern u8 lbl_802F2388[];
extern void *lbl_8035B65C;
void fn_8014CBD8(void *p);
void fn_80254CE4(void *p);
}

struct V802F2388 { V802F2388() { *(u8 **)((u8 *)this + 0x2f0) = lbl_802F2388; } };
struct C80109410 { C80109410(); ~C80109410(); u8 b[0x58]; };
struct C80111028 { C80111028(); ~C80111028(); u8 b[0x248]; };
struct C8014CBD8 { C8014CBD8() { fn_8014CBD8(this); } u8 b[0x18]; };

struct C8025577C : V802F2388 {
    u8 pad0[0x38];
    C80109410 m38;
    C80111028 m90;
    C8014CBD8 m2D8;
    u8 *vt;
    C8025577C();
};

C8025577C::C8025577C() {
    lbl_8035B65C = this;
    fn_80254CE4(this);
}
