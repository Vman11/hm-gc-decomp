// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800F8E38(int, int);
struct VCall_fn_8023E778_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

u32 fn_8023E778(u32 *param_1, u32 param_2) {
    if (*param_1 != 0) {
        ((VCall_fn_8023E778_0 *)(param_1))->m();
    }
    fn_800F8E38((int)(param_1), (int)(param_2));
    return 0;
}
}
