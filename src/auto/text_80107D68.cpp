// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80104068(void);
struct VCall_fn_80107D68_0 { char vptr_pad[0x24]; virtual void p0(); virtual void m(); };

void fn_80107D68(u32 param_1, s32 param_2) {
    fn_80104068();
    ((VCall_fn_80107D68_0 *)(param_2))->m();
}
}
