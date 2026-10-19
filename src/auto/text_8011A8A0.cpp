// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8011A8A0_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_8011A8A0_1 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_8011A8A0(u32 param_1, u32 param_2, u32 param_3) {
    if (*(u32 *)(param_1 + 4) != 0) {
        ((VCall_fn_8011A8A0_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 4) = param_3;
    ((VCall_fn_8011A8A0_1 *)(param_1))->m((u32)(param_2));
}
}
