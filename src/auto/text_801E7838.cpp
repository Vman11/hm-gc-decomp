// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802EDCD0[];
void __dl__FPv(int);
void __dt__9C801EFA90Fv(int, int);
struct VCall_fn_801E7838_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

s32 * fn_801E7838(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802EDCD0;
        ((VCall_fn_801E7838_0 *)(param_1))->m();
        __dt__9C801EFA90Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
