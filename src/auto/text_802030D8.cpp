#include "common.h"

/* Uses the renamed symbols dtor_801FD4C4 -> __dt__9C801FD4C4Fv (base class), dtor_80203800 -> __dt__9C80203800Fv and
 * dtor_802054B0 -> __dt__9C802054B0Fv (members of the anonymous union at 0x98). */

extern "C" {
extern u8 lbl_802EF7C0[];
extern volatile f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_801FD50C(void *p);
void fn_8020383C(void *p);
void fn_802054EC(void *p);
void fn_80206A04(void *p);
}

struct C801FD4C4 { C801FD4C4() { fn_801FD50C(this); } ~C801FD4C4(); };
struct V802EF7C0 { u8 *vt; V802EF7C0() { vt = lbl_802EF7C0; } };
struct C80203800 { C80203800() { fn_8020383C(this); } ~C80203800(); };
struct C802054B0 { C802054B0() { fn_802054EC(this); } ~C802054B0(); u8 b[0x10]; };
struct C80206A04 { C80206A04() { fn_80206A04(this); } };

struct C802030D8 : C801FD4C4 {
    V802EF7C0 m0;
    f32 m4;
    f32 m8;
    f32 mC;
    s32 m10;
    s32 m14;
    s32 m18;
    u8 m1C;
    s32 m20;
    s32 m24;
    s32 m28;
    f32 m2C;
    s32 m30;
    u8 pad34[0x98 - 0x34];
    union { C80203800 m98a; C802054B0 m98b; C80206A04 m98c; };
    C802030D8();
};

C802030D8::C802030D8() {
    m10 = 0;
    m18 = 0;
    m14 = 0;
    m30 = 0;
    m1C = 0;
    m20 = 0;
    m24 = 0;
    m4 = lbl_80365730;
    m8 = lbl_80365730;
    mC = lbl_80365730;
    m28 = 0;
    m2C = lbl_80365734;
}
