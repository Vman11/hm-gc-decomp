// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
u32 fn_800FB33C(int);
struct VCall_fn_8018E20C_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_8018E20C(u32 param_1, u32 param_2, u32 param_3) {
    u32 uVar1;

    if (param_3 == 0x6b) {
        uVar1 = fn_800FB33C((int)(param_2));
        *(u32 *)(param_1 + 8) = uVar1;
    }
    else {
        ((VCall_fn_8018E20C_0 *)(param_2))->m((u32)(0x1e));
    }
}
}
