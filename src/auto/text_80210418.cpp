#include "common.h"

/* Uses the renamed symbol dtor_8021217C -> __dt__9C8021217CFv (destructor of the base class). */

extern "C" {
extern u8 lbl_802EFCB8[];
extern u8 lbl_802EFC88[];
void fn_802128BC(void *p);
}

struct C8021217C { C8021217C() { *(u8 **)this = lbl_802EFCB8; } ~C8021217C(); };
struct V802EFC88 { u8 *vt; V802EFC88() { vt = lbl_802EFC88; } };
struct C80212860 { C80212860() { fn_802128BC(this); } ~C80212860(); u8 b[0x18]; };

struct C80210418 : C8021217C {
    V802EFC88 m0;
    C80212860 m4;
    s32 m1C;
    s32 m20;
    s32 m24;
    s32 m28;
    s32 m2C;
    s32 m30;
    C80210418();
};

C80210418::C80210418() {
    m1C = 0;
    m20 = 0;
    m24 = 0;
    m28 = 0;
    m2C = 0;
    m30 = 0;
}
