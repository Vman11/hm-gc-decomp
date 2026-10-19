// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_801335E8(int);
struct VCall_fn_8016C900_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(int, int, int); };

s32 fn_8016C900(s32 param_1, u32 param_2) {
    s32 iVar1;

    iVar1 = fn_801335E8((int)(param_1 + 0x2a1c));
    ((VCall_fn_8016C900_0 *)(iVar1))->m((s32)(param_1), (s32)(param_2), (s32)(0));
    return iVar1;
}
}
