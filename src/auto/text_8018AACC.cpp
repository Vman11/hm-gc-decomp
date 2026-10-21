#include "common.h"

extern "C" {
extern volatile f32 lbl_80364A38;
}

struct C801A1FC0 { u8 b[0x68]; C801A1FC0(); ~C801A1FC0(); virtual void v0(); };
struct C8018B724 { C8018B724(); };

struct C8018AACC : C801A1FC0 {
    u8 pad6C[0x90 - 0x6c];
    s32 m90;
    s32 m94;
    C8018B724 m98;
    u8 pad99[0x130 - 0x99];
    s32 m130;
    C8018AACC();
    virtual void v0();
};

C8018AACC::C8018AACC() {
    *(u16 *)(b + 4) = 10;
    m130 = 0;
    m90 = 0;
    m94 = 0;
    *(f32 *)(b + 0x14) = lbl_80364A38;
    *(f32 *)(b + 0x24) = lbl_80364A38;
}
