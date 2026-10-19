// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C801E4C2C[];
void __dl__FPv(int);
void __dt__9C8011D6B4Fv(int, int);
void __dt__9C801EB864Fv(int, int);
void fn_801E4768(int, int);
struct VCall_fn_801E4BA0_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 __dt__9C801E4C2CFv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x14) = __vt__9C801E4C2C;
        ((VCall_fn_801E4BA0_0 *)(param_1))->m();
        fn_801E4768((int)(param_1 + 0x6c), (int)(0xffffffff));
        __dt__9C8011D6B4Fv((int)(param_1 + 0x1c), (int)(0xffffffff));
        __dt__9C801EB864Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
