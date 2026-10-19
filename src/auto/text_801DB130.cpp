// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_801DB130_0 { virtual void p0(); virtual void p1(); virtual void m(int, int, int); };

void fn_801DB130(s32 param_1, u32 param_2, u32 param_3) {
    s32 *piVar1;

    piVar1 = *(s32 **)(param_1 + 0x140);
    if (piVar1 != (s32 *)0x0) {
        ((VCall_fn_801DB130_0 *)(piVar1))->m((s32)(param_2), (s32)(param_1), (s32)(param_3));
    }
}
}
