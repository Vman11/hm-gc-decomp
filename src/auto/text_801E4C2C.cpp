#include "common.h"

extern "C" {
extern f32 lbl_803652F8;
void fn_801E47B8(void *p);
}

struct C801EB864 { s32 m0; u8 b[0x10]; C801EB864(); ~C801EB864(); virtual void v0(); };
struct C8011D6B4 { C8011D6B4(); ~C8011D6B4(); u8 b[0x50]; };

struct C801E4C2C : C801EB864 {
    u8 pad18[4];
    C8011D6B4 m1C;
    u8 m6C[8];
    s32 m74;
    s32 m78;
    s32 m7C;
    s32 m80;
    f32 m84;
    s32 m88;
    s32 m8C;
    C801E4C2C();
    virtual void v0();
};

C801E4C2C::C801E4C2C() {
    fn_801E47B8(m6C);
    m74 = 0;
    m78 = 0;
    m7C = -1;
    m80 = 0;
    m88 = 0;
    m84 = lbl_803652F8;
    m8C = 0;
    m0 = 3;
}
