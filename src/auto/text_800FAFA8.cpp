// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FAFA8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FAFA8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_800FAFA8(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FAFA8_0 *)(param_1))->m();
    if (iVar1 != 7) {
        ((VCall_fn_800FAFA8_1 *)(param_1))->m((u32)(8));
    }
}
}
