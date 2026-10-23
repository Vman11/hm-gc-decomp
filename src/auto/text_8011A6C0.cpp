// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C80064938[];
extern u8 lbl_802E3C00[];
void __dl__FPv(int);
void __dt__9C8011AF8CFv(int, int);
void __dt__9C8021E444Fv(int, int);
struct VCall_dtor_8011A6C0_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

s32 __dt__9C80064820Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2a0) = lbl_802E3C00;
        ((VCall_dtor_8011A6C0_0 *)(param_1))->m();
        if (param_1 + 0x2c24 != 0) {
            *(u8 **)(param_1 + 0x2c2c) = __vt__9C80064938;
            __dt__9C8021E444Fv((int)(param_1 + 0x2c24), (int)(0));
        }
        __dt__9C8011AF8CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
