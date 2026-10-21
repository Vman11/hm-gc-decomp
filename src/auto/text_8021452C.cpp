#include "common.h"

/* Uses the renamed symbols dtor_8021217C -> __dt__9C8021217CFv (base class) and
 * dtor_80212860 -> __dt__9C80212860Fv (member at 0x4). */

extern "C" {
extern u8 lbl_802EFCB8[];
extern u8 lbl_802EFF90[];
void fn_802128BC(void *p);
}

struct C8021217C { C8021217C() { *(u8 **)this = lbl_802EFCB8; } ~C8021217C(); };
struct V802EFF90 { u8 *vt; V802EFF90() { vt = lbl_802EFF90; } };
struct C80212860 { C80212860() { fn_802128BC(this); } ~C80212860(); u8 b[0x18]; };
struct C80213428 { C80213428(); ~C80213428(); };

struct C8021452C : C8021217C {
    V802EFF90 m0;
    C80212860 m4;
    s32 m1C;
    s32 m20;
    s32 m24;
    C80213428 m28;
    C8021452C();
};

C8021452C::C8021452C() {
    m1C = 0;
    m20 = 0;
    m24 = 0;
}
