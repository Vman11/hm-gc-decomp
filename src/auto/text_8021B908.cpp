// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8021B908_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

void fn_8021B908(u32 *param_1) {
    if (param_1[3] != 0) {
        ((VCall_fn_8021B908_0 *)(param_1))->m();
    }
    *param_1 = 0;
    *(u8 *)(param_1 + 1) = 0;
    param_1[3] = 0;
}
}
