// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800F6E88(int, int);
struct VCall_fn_8012EC70_0 { char vptr_pad[0x38]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(); };

void fn_8012EC70(s32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5) {
    if ((*(u32 *)(param_1 + 8) & 1) != 0) {
        ((VCall_fn_8012EC70_0 *)(param_1))->m();
    }
    *(s32 *)(param_1 + 0x30) = param_3;
    *(s32 *)(param_1 + 0x14) = param_3 + 0x14;
    fn_800F6E88((int)(param_1), (int)(param_4));
    *(u32 *)(param_1 + 8) = param_5 | 1;
}
}
