#include "common.h"

/* The base is constructed by __ct__9C80257738Fv but destroyed by __dt__9C800604C4Fv (one class, two names in
 * symbols.txt), so the base C800604C4 calls the ctor from its inline ctor. Its vptr (__vt__9C80273730) sits at
 * 0x0 and is stored before the member at 0xC0 is built: it is modelled as a member whose inline ctor stores it. */

extern "C" {
extern u8 __vt__9C80273730[];
void __ct__9C80257738Fv(void *p);
void fn_802575F0(void *p);
}

struct C800604C4 { C800604C4() { __ct__9C80257738Fv(this); } ~C800604C4(); };
struct V80273730 { u8 *vt; V80273730() { vt = __vt__9C80273730; } };
struct C8025E920 { C8025E920(); ~C8025E920(); };

struct C80273730 : C800604C4 {
    V80273730 m0;
    u8 pad4[0xc0 - 4];
    C8025E920 mC0;
    C80273730();
};

C80273730::C80273730() {
    fn_802575F0(this);
}
