// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802D6CB0[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_800B168C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_800B168C(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802D6CB0;
        ((VCall_fn_800B168C_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
