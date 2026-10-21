#include "common.h"

extern "C" {
extern volatile f32 lbl_803654D0;
void fn_80121E1C(void *p);
void fn_80121658(void *p);
void fn_80121DC8(void *p, void *q);
}

struct C801EFA90R { virtual void v0(); };
struct C801EFA90 : C801EFA90R { u8 b[0x24]; C801EFA90(); ~C801EFA90(); };

struct C801F786C : C801EFA90 {
    u8 m28[0x10];
    u8 m38[0x10];
    f32 m48;
    f32 m4C;
    f32 m50;
    f32 m54;
    f32 m58;
    f32 m5C;
    f32 m60;
    f32 m64;
    s32 m68;
    f32 m6C;
    f32 m70;
    s32 m74;
    C801F786C();
    virtual void v0();
};

C801F786C::C801F786C() {
    u8 buf[16];
    fn_80121E1C(m28);
    fn_80121E1C(m38);
    fn_80121658(buf);
    fn_80121DC8(m38, buf);
    m50 = lbl_803654D0;
    m54 = lbl_803654D0;
    m58 = lbl_803654D0;
    m5C = lbl_803654D0;
    m60 = lbl_803654D0;
    m64 = lbl_803654D0;
    m68 = 0;
    m6C = lbl_803654D0;
    m70 = lbl_803654D0;
    m74 = 0;
    m48 = lbl_803654D0;
    m4C = lbl_803654D0;
}
