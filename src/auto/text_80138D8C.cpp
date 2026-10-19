// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_80138D8C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };

void fn_80138D8C(s32 param_1) {
    u32 uVar1;

    uVar1 = ((VCall_fn_80138D8C_0 *)(*(s32 **)(param_1 + 0xb8)))->m((s32)(0));
    *(u32 *)(param_1 + 0xbc) = uVar1;
    *(u32 *)(param_1 + 0xdc) = 0;
}
}
