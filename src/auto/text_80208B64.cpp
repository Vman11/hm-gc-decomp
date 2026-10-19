// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_800BD474(int);
struct VCall_fn_80208B64_0 { virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80208B64(s32 *param_1) {
    if (param_1[0x10] != 0) {
        ((VCall_fn_80208B64_0 *)(param_1))->m();
    }
    fn_800BD474((int)(param_1 + 1));
    param_1[0x10] = 0;
}
}
