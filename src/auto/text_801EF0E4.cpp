// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EE708[];
void __dl__FPv(int);
void __dt__9C801E62E8Fv(int, int);
struct VCall_fn_801EF0E4_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 __dt__9C801EF158Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x14) = lbl_802EE708;
        ((VCall_fn_801EF0E4_0 *)(param_1))->m();
        __dt__9C801E62E8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
