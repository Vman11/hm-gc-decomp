// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8020E6B8_0 { virtual void p0(); virtual void p1(); virtual int m(); };
struct VCall_fn_8020E6B8_1 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual int m(); };

u32 fn_8020E6B8(u32 *param_1) {
    u32 iVar1;
    u32 uVar2;

    iVar1 = ((VCall_fn_8020E6B8_0 *)(param_1))->m();
    if (iVar1 != 0) {
        uVar2 = ((VCall_fn_8020E6B8_1 *)(iVar1))->m();
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}
}
