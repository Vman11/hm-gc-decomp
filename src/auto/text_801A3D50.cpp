#include "common.h"

/* Uses the renamed symbols fn_801A3D50 -> __ct__9C801A3D50Fv (it is the constructor of C801A3D50) and
 * dtor_80200750 -> __dt__9C80200750Fv (member at 0x20). */

extern "C" {
extern u8 lbl_802EA328[];
void fn_802007C4(void *p);
}

struct C801A33CC { C801A33CC(); ~C801A33CC(); u8 b[0x1c]; };
struct V802EA328 { u8 *vt; V802EA328() { vt = lbl_802EA328; } };
struct C80200750 { C80200750() { fn_802007C4(this); } ~C80200750(); };
struct VCall_801A3D50 { u8 pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void m(); };

struct C801A3D50 : C801A33CC {
    V802EA328 m1C;
    C80200750 m20;
    C801A3D50();
};

C801A3D50::C801A3D50() {
    ((VCall_801A3D50 *)this)->m();
}
