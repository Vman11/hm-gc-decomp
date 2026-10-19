// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FB3D0_0 { char vptr_pad[0x124]; virtual void p0(); virtual void m(); };

void fn_800FB3D0(u32 *param_1, u32 param_2) {
    if (*param_1 != 0) {
        ((VCall_fn_800FB3D0_0 *)(param_1))->m();
    }
    *param_1 = param_2;
}
}
