// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80170728_0 { char vptr_pad[0x74]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual int m(); };

u32 fn_80170728(s32 param_1) {
    u32 uVar1;

    if (((*(u32 *)(*(s32 *)(param_1 + 4) + 0xc) & 0x600) == 0) ||
          (uVar1 = ((VCall_fn_80170728_0 *)(*(s32 *)(param_1 + 4)))->m(), uVar1 < 2)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(u32 *)(param_1 + 0x1dc) >> 3 & 1;
    }
    return uVar1;
}
}
