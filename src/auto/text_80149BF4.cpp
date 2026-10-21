#include "common.h"

// Uses the renamed symbols fn_80149BF4 -> __ct__9C80149BF4Fv (it is a ctor) and dtor_801F5E3C -> __dt__9C801F5F94Fv
// (member at +0x4, whose ctor is fn_801F5F94(this, 1)).

extern "C" {
void fn_801F2F54(void *);
void fn_801F5F94(void *, s32);
}

struct C801F5F94 {
    u8 b[0x48];
    C801F5F94(s32 n) { fn_801F5F94(this, n); }
    ~C801F5F94();
};

struct C801F2F54 {
    u8 b[0x10];
    C801F2F54() { fn_801F2F54(this); }
};

struct C80149BF4 {
    u32 f0;
    C801F5F94 m4;
    u8 b4C[0x54];
    C801F2F54 mA0;
    u8 bB0[0x9328];
    u32 f93D8;
    C80149BF4();
};

C80149BF4::C80149BF4() : m4(1) {
    u32 *p = (u32 *)this;
    p[0x1c] = 0;
    p[0x1d] = 0;
    p[0x13] = 0;
    p[0x24] = 0;
    p[0x26] = 0;
    p[0x27] = 0;
    p[0x25] = 0;
    p[0x24f6] = 0;
    *p = 0;
}
