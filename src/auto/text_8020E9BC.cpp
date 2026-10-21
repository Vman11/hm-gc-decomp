#include "common.h"

/* Uses the renamed symbols dtor_80211788 -> __dt__9C80211788Fv (base class) and fn_8020BB90 -> __dt__9C8020BC10Fv
 * (destructor of the element class of the member array at 0x4). */

extern "C" {
extern u8 lbl_802EFC18[];
extern u8 lbl_802EFBF0[];
}

struct C80211788 { C80211788() { *(u8 **)this = lbl_802EFC18; } ~C80211788(); };
struct V802EFBF0 { u8 *vt; V802EFBF0() { vt = lbl_802EFBF0; } };
struct C8020BC10 { C8020BC10(); ~C8020BC10(); u8 b[0xa944]; };

struct C8020E9BC : C80211788 {
    V802EFBF0 m0;
    C8020BC10 m4[2];
    s32 m1528C;
    C8020E9BC();
};

C8020E9BC::C8020E9BC() {
    m1528C = 0;
}
