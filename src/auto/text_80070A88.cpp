// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802C1E1C[];
extern u8 lbl_802C2418[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_80070A88_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_80070A88(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802C1E1C;
        ((VCall_fn_80070A88_0 *)(param_1))->m();
        if (param_1 != (s32 *)0x0) {
            *param_1 = (s32)lbl_802C2418;
            __dt__9C8024262CFv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
