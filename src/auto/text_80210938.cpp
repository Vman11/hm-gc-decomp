// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80210938_0 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_80210938(u32 *param_1) {
    if (param_1[1] != 0) {
        ((VCall_fn_80210938_0 *)(*param_1))->m((u32)(param_1[1]));
    }
    *param_1 = 0;
    param_1[1] = 0;
}
}
