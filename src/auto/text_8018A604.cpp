#include "common.h"

extern "C" {
extern volatile f32 lbl_803649FC;
extern f32 lbl_80364A20;
extern f32 lbl_80364A24;
extern f32 lbl_803649F8;
void fn_8014AB08(void *);
}

struct C8013ECE4 { C8013ECE4(); ~C8013ECE4(); u8 b[8]; };

struct C8018A604 {
    s32 m0;
    s32 m4;
    C8013ECE4 m8;
    u8 m10[0x10];
    u8 m20[0x10];
    u8 m30[0x10];
    f32 m40;
    f32 m44;
    f32 m48;
    f32 m4C;
    s32 m50;
    s32 m54;
    f32 m58;
    f32 m5C;
    C8018A604();
};

C8018A604::C8018A604() {
    m0 = 0;
    m4 = 0;
    fn_8014AB08(m10);
    fn_8014AB08(m20);
    fn_8014AB08(m30);
    m40 = lbl_803649FC;
    m44 = lbl_803649FC;
    m48 = lbl_80364A20;
    m4C = lbl_80364A24;
    m50 = 0;
    m54 = 0;
    m58 = lbl_803649FC;
    m5C = lbl_803649F8;
}
