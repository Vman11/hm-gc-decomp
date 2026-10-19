// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80108860(int, int, int);
struct VCall_fn_801197D4_0 { char vptr_pad[0x84]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_801197D4_1 { char vptr_pad[0x84]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_801197D4(s32 param_1, u32 *param_2, u32 param_3) {
    if (*(u32 *)(param_1 + 0x80) != 0) {
        ((VCall_fn_801197D4_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x80) = param_3;
    ((VCall_fn_801197D4_1 *)(param_1))->m((s32)(param_2));
    fn_80108860((int)(param_1), (int)(*param_2), (int)(param_2[1]));
}
}
