// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801A32FC_0 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_801A32FC(u32 *param_1, u32 *param_2, u32 param_3) {
    if ((param_1[1] & 1) != 0) {
        ((VCall_fn_801A32FC_0 *)(param_1))->m();
    }
    param_1[2] = param_3;
    *param_1 = *param_2;
}
}
