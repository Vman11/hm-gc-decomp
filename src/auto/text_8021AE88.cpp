#include "common.h"

/* Uses the renamed symbols dtor_8021217C -> __dt__9C8021217CFv (base class) and
 * dtor_80212860 -> __dt__9C80212860Fv (member at 0x4). */

extern "C" {
extern u8 lbl_802EFCB8[];
extern u8 lbl_802F01F0[];
void fn_802128BC(void *p);
}

struct C8021217C { C8021217C() { *(u8 **)this = lbl_802EFCB8; } ~C8021217C(); };
struct V802F01F0 { u8 *vt; V802F01F0() { vt = lbl_802F01F0; } };
struct C80212860 { C80212860() { fn_802128BC(this); } ~C80212860(); u8 b[0x18]; };
struct VCall_8021AE88 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
    virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

struct C8021AE88 : C8021217C {
    V802F01F0 m0;
    C80212860 m4;
    C8021AE88();
};

C8021AE88::C8021AE88() {
    ((VCall_8021AE88 *)this)->m();
}
