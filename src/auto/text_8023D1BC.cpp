// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_8023D1BC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_8023D1BC_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

u32 fn_8023D1BC(s32 *param_1) {
    s32 iVar1;

    iVar1 = ((VCall_fn_8023D1BC_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_8023D1BC_1 *)(param_1))->m();
    }
    param_1[2] = 1;
    return 0;
}
}
