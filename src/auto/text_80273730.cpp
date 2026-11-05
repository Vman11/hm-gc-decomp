#include "common.h"

/* Its vptr (__vt__9C80273730) sits at
 * 0x0 and is stored before the member at 0xC0 is built: it is modelled as a member whose inline ctor stores it. */

extern "C" {
extern u8 __vt__9C80273730[];
void __ct__9C80257738Fv(void *p);
void fn_802575F0(void *p);
}

/* Base class C80257738 (ctor __ct__9C80257738Fv, dtor __dt__9C80257738Fv): the inline ctor takes a dummy
 * defaulted int so its mangled name does not clash with the extern "C" ctor it calls. */
struct C80257738 { C80257738(int = 0) { __ct__9C80257738Fv(this); } ~C80257738(); };
struct V80273730 { u8 *vt; V80273730() { vt = __vt__9C80273730; } };
struct C8025E920 { C8025E920(); ~C8025E920(); };

struct C80273730 : C80257738 {
    V80273730 m0;
    u8 pad4[0xc0 - 4];
    C8025E920 mC0;
    C80273730();
};

C80273730::C80273730() {
    fn_802575F0(this);
}
