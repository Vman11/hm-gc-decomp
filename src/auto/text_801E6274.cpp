// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EDB60[];
void __dl__FPv(int);
void __dt__9C801EB864Fv(int, int);
struct VCall_fn_801E6274_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 __dt__9C801E62E8Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x14) = lbl_802EDB60;
        ((VCall_fn_801E6274_0 *)(param_1))->m();
        __dt__9C801EB864Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
