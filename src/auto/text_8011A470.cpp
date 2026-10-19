// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8011A470_0 { char vptr_pad[0x74]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_8011A470(u32 *param_1, u32 *param_2, u32 param_3) {
    if (*param_1 != 0) {
        ((VCall_fn_8011A470_0 *)(param_1))->m();
    }
    *param_1 = param_3;
    param_1[0x1c] = *param_2;
}
}
