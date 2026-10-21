#include "common.h"

extern "C" {
extern f32 lbl_8036531C;
void fn_801071F8(void *p);
}

struct C801EB864 { s32 m0; u8 b[0x10]; C801EB864(); ~C801EB864(); virtual void v0(); };

struct C801E6C80 : C801EB864 {
    s32 m18;
    s32 m1C;
    f32 m20;
    s32 m24;
    s32 m28;
    s32 m2C;
    s32 m30;
    u8 m34[4];
    C801E6C80();
    virtual void v0();
};

C801E6C80::C801E6C80() {
    fn_801071F8(m34);
    m18 = 0;
    m1C = 0;
    m28 = 0;
    m2C = 0;
    m30 = 0;
    m24 = 0;
    m20 = lbl_8036531C;
    m0 = 5;
}
