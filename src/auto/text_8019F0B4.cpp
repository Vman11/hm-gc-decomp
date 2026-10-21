#include "common.h"

/* Uses the renamed symbols fn_80186B0C -> __ct__9C80186B0CFv and dtor_80186A98 -> __dt__9C80186B0CFv
 * (ctor/dtor of the class of the member array at 0x90 and of the member at 0xB8). */

extern "C" {
extern f32 lbl_80364D60;
extern f32 lbl_80364D3C;
extern f32 lbl_80364D64;
extern volatile f32 lbl_80364D40;
extern volatile f32 lbl_80364D68;
}

struct C801A1FC0 { u8 b[0x68]; C801A1FC0(); ~C801A1FC0(); virtual void v0(); };
struct C80186B0C { C80186B0C(); ~C80186B0C(); u8 b[0x14]; };

struct C8019F0B4 : C801A1FC0 {
    u8 pad6C[0x90 - 0x6c];
    C80186B0C m90[2];
    C80186B0C mB8;
    s32 mCC;
    s32 mD0;
    u8 padD4[4];
    f32 mD8;
    f32 mDC;
    f32 mE0;
    s32 mE4;
    s32 mE8;
    f32 mEC;
    f32 mF0;
    f32 mF4;
    f32 mF8;
    f32 mFC;
    f32 m100;
    f32 m104;
    C8019F0B4();
    virtual void v0();
};

C8019F0B4::C8019F0B4() {
    *(u16 *)(b + 4) = 9;
    mCC = 0;
    mD0 = 0;
    mD8 = lbl_80364D60;
    mDC = lbl_80364D3C;
    mE0 = lbl_80364D64;
    mE4 = 100;
    mE8 = 100;
    m104 = lbl_80364D40;
    mEC = lbl_80364D40;
    mF0 = lbl_80364D40;
    mF4 = lbl_80364D68;
    mF8 = lbl_80364D40;
    mFC = lbl_80364D40;
    m100 = lbl_80364D68;
}
