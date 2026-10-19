// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8015EAF4_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual int m(); };

u32 fn_8015EAF4(u32 *param_1, u32 param_2) {
    u32 iVar1;

    if (*param_1 != 0) {
        iVar1 = param_1[0x10] + param_2 * 0x68;
    }
    else {
        iVar1 = ((VCall_fn_8015EAF4_0 *)(param_1[6]))->m();
    }
    return iVar1;
}
}
