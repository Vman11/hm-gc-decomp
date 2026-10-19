// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8008EB10 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(void *, s32, s32, s32, s32); };
extern f32 lbl_803606AC;
void fn_8023FE08(void *, f32);
void fn_80242174(void *, f32);

void fn_8008EB10(u8 *p, f32 f) {
    if (*(s32 *)(p + 0x164) != 0) {
        (*(V_8008EB10 **)(p + 0xE0))->m(p + 0x158, 0, 0, 0, 0);
        *(s32 *)(p + 0x164) = 0;
    }
    fn_8023FE08(p, f);
    if (*(s32 *)(p + 0x60) == 2 && *(s32 *)(p + 0x16C) != 0) {
        *(f32 *)(p + 0x168) += f;
        fn_80242174(p, lbl_803606AC / *(f32 *)(p + 0x168));
    }
}

} /* extern "C" */
