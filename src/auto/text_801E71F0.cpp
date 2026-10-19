// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801E71F0_0 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(int); };

void fn_801E71F0(s32 param_1) {
    ((VCall_fn_801E71F0_0 *)(**(s32 **)(param_1 + 0x38)))->m((u32)(*(s32 **)(param_1 + 0x38)));
}
}
