// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80159544_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

void fn_80159544(s32 param_1, s32 param_2) {
    *(s32 *)(param_1 + 0x14) = param_2;
    ((VCall_fn_80159544_0 *)(*(s32 *)(param_1 + 0x18) + *(s32 *)(*(s32 *)(param_1 + 0x18) + 0xd0) * 0x68
                                             ))->m();
    *(u32 *)(*(s32 *)(param_1 + 0x18) + 0xd4) =
              *(s32 *)(*(s32 *)(param_1 + 0x18) + 0xd4) + param_2 + 7 & 0xfffffff8;
}
}
