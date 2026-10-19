// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_802151F4_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };

s32 fn_802151F4(s32 param_1) {
    s32 iVar1;

    iVar1 = ((VCall_fn_802151F4_0 *)(*(s32 *)(param_1 + 4)))->m();
    if (iVar1 == 7) {
        iVar1 = 7;
    }
    return iVar1;
}
}
