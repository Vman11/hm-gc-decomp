// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8018A850_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_8018A850(u32 *param_1, s32 param_2) {
    if ((*param_1 & 4) != 0) {
        ((VCall_fn_8018A850_0 *)(param_1))->m();
    }
    *(u32 **)(param_2 + 0x192c) = param_1 + 6;
}
}
