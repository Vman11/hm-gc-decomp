// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80104B74_0 { char vptr_pad[0x24]; virtual void p0(); virtual void m(); };

void fn_80104B74(u32 param_1) {
    u32 iVar1;

    *(u32 *)(param_1 + 0x20) = *(u32 *)(param_1 + 0x20) & 0xffffffef;
    for (iVar1 = *(u32 *)(param_1 + 8); iVar1 != 0; iVar1 = *(u32 *)(iVar1 + 4)) {
        ((VCall_fn_80104B74_0 *)(iVar1))->m();
    }
}
}
