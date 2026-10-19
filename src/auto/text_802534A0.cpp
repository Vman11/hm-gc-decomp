// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
s32 fn_802524C4(int, int);
struct VCall_fn_802534A0_0 { virtual void p0(); virtual void p1(); virtual void m(int); };

void fn_802534A0(s32 param_1, s32 param_2) {
    u32 *puVar1;

    if (((*(void **)(param_1 + 0x10) != NULL) && (*(s32 *)(param_1 + 0x14) == 1)) &&
          (puVar1 = (u32 *)
                              fn_802524C4((int)(*(u32 *)(param_1 + 0xc)), (int)(*(u32 *)(param_2 + 8))),
          puVar1 != (u32 *)0x0)) {
        *(u32 *)(param_2 + 0xc) = *puVar1;
        ((VCall_fn_802534A0_0 *)(*(s32 **)(param_1 + 0x10)))->m((s32)(param_2));
    }
}
}
