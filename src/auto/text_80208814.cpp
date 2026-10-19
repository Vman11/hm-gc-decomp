// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_80208814_0 { virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80208814(u32 *param_1) {
    if (param_1[4] != 0) {
        ((VCall_fn_80208814_0 *)(param_1))->m();
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
}
}
