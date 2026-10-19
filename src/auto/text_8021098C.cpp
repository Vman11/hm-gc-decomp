// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8021098C_0 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(int); };

u32 fn_8021098C(u32 *param_1) {
    u32 uVar1;

    if (param_1[1] != 0) {
        uVar1 = ((VCall_fn_8021098C_0 *)(*param_1))->m((u32)(param_1[1]));
    }
    else {
        uVar1 = 0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    return uVar1;
}
}
