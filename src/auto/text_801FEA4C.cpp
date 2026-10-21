#include "common.h"

/* Uses the renamed symbols fn_801FEA4C -> __ct__9C801FEA4CFv (it is the constructor of C801FEA4C),
 * dtor_801FB7F8 -> __dt__9C801FB7F8Fv (base class) and fn_801FEAB0 -> __ct__9C801FE9ECFv (ctor of the
 * array element class, whose dtor is __dt__9C801FE9ECFv). */

extern "C" {
extern u8 lbl_802EF1C8[];
extern u8 lbl_802EF5C0[];
}

struct C801FB7F8 { C801FB7F8() { *(u8 **)this = lbl_802EF1C8; } ~C801FB7F8(); };
struct V802EF5C0 { u8 *vt; V802EF5C0() { vt = lbl_802EF5C0; } };
struct C801FE9EC { C801FE9EC(); ~C801FE9EC(); u8 b[0xc0]; };

struct C801FEA4C : C801FB7F8 {
    V802EF5C0 m0;
    C801FE9EC m4[1];
    C801FEA4C();
};

C801FEA4C::C801FEA4C() {
}
