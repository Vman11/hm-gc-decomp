#include "common.h"

/* The vptr store of lbl_802E96D0 happens after the base ctor and before the member ctors; the vtable has no
 * __vt__ name, so it is modelled as a member (V802E96D0) whose inline ctor stores it. */

extern "C" {
extern u8 lbl_802E96D0[];
void fn_80193BD0(void *p);
}

struct C800F92E8 { C800F92E8(); ~C800F92E8(); u8 b[0x10]; };
struct V802E96D0 { u8 *vt; V802E96D0() { vt = lbl_802E96D0; } };
struct C80105EE8 { C80105EE8(); ~C80105EE8(); };

struct C80195170 : C800F92E8 {
    V802E96D0 m10;
    C80105EE8 m14;
    C80195170();
};

C80195170::C80195170() {
    fn_80193BD0(this);
}
