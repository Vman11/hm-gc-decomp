// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_80216DA4(int);
struct VCall_fn_80216EF8_0 { virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80216EF8(s32 param_1) {
    if (*(s32 *)(param_1 + 4) != 0) {
        ((VCall_fn_80216EF8_0 *)((s32 *)(param_1 + 0x10)))->m();
    }
    fn_80216DA4((int)(param_1));
}
}
