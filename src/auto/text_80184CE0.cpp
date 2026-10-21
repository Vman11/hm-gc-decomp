#include "common.h"

/* The member at 0x210 is built by the plain-named fn_80100CF4 (called from an inline ctor); the member
 * array at 0x10 has a ctor but no dtor (__construct_array with a null dtor). */

extern "C" {
void fn_80100CF4(void *p);
void fn_80182ED8(void *p);
}

struct C8013ECE4 { C8013ECE4(); ~C8013ECE4(); u8 b[0xc]; };
struct C8002FAE0 { C8002FAE0(); u8 b[0xc]; };
struct C80100CF4 { C80100CF4() { fn_80100CF4(this); } u8 b[0x14]; };
struct C8018C334 { C8018C334(); ~C8018C334(); };

struct C80184CE0 {
    u8 pad0[4];
    C8013ECE4 m4;
    C8002FAE0 m10[4];
    u8 pad40[0x210 - 0x40];
    C80100CF4 m210;
    C8018C334 m224;
    C80184CE0();
};

C80184CE0::C80184CE0() {
    fn_80182ED8(this);
}
