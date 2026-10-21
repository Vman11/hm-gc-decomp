#include "common.h"

// Uses the renamed symbols fn_80154634 -> __ct__9C80154634Fv (it is a ctor) and dtor_8012C6F8 -> __dt__9C8012C6F8Fv
// (base, whose ctor is inline: vtable lbl_802E4580). A placement-new wrapper keeping the fn_ name adds a null check.

extern "C" {
extern u8 lbl_802E4580[];
extern u8 lbl_802E68E0[];
}

struct C8012C6F8 {
    C8012C6F8() { *(void **)this = lbl_802E4580; }
    ~C8012C6F8();
};

// vtable pointer at +0x0 (stored after the base, before the members)
struct C802E68E0 {
    void *vt;
    C802E68E0() { vt = lbl_802E68E0; }
};

struct C801544CC {
    u8 b[0x10];
    C801544CC();
};

struct C80154634 : C8012C6F8 {
    C802E68E0 vt;
    C801544CC m4;
    C80154634();
};

C80154634::C80154634() {
}
