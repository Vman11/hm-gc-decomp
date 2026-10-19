// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E3968[];
void __dl__FPv(int);
struct VCall_fn_80118CB8_0 { char vptr_pad[0x3c]; virtual void p0(); virtual void m(); };

s32 __dt__9C80118D20Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x3c) = lbl_802E3968;
        ((VCall_fn_80118CB8_0 *)(param_1))->m();
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
