// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802F1958[];
void __dl__FPv(int);
struct VCall_fn_8023B6A8_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 fn_8023B6A8(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xc) = lbl_802F1958;
        ((VCall_fn_8023B6A8_0 *)(param_1))->m();
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
