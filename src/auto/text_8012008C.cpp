// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8012008C_0 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_8012008C(s32 param_1, u32 *param_2, u32 param_3) {
    if ((*(u32 *)(param_1 + 8) & 1) != 0) {
        ((VCall_fn_8012008C_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0xc) = param_3;
    *(u32 *)(param_1 + 0x24) = param_2[1];
    *(u32 *)(param_1 + 4) = *param_2;
}
}
