#include "common.h"

/* Uses the renamed symbol dtor_80214FF0 -> __dt__9C80214FF0Fv (member at 0x0). */

extern "C" {
void fn_802150C8(void *p);
}

struct C80214FF0 { C80214FF0() { fn_802150C8(this); } ~C80214FF0(); u8 b[0x24]; };
struct C80210CEC { C80210CEC(); ~C80210CEC(); u8 b[8]; };

struct C80215F50 {
    C80214FF0 m0;
    C80210CEC m24;
    s32 m2C;
    s32 m30;
    s32 m34;
    C80215F50();
};

C80215F50::C80215F50() {
    m2C = 0;
    m30 = 0;
    m34 = 0;
}
