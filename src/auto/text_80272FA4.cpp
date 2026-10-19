// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802F3644[];
void __dl__FPv(int);
void fn_80249ECC(int, int);
struct VCall_dtor_80272FA4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * dtor_80272FA4(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802F3644;
        ((VCall_dtor_80272FA4_0 *)(param_1))->m();
        fn_80249ECC((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
