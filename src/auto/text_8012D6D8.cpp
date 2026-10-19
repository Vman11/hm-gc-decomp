// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800F8E38(int, int);
void fn_80135DD4(int, int, int);
struct VCall_fn_8012D6D8_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8012D6D8_1 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

void fn_8012D6D8(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        ((VCall_fn_8012D6D8_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x1c) = param_3;
    fn_800F8E38((int)(param_1), (int)(*(u32 *)(param_1 + 0x1c)));
    ((VCall_fn_8012D6D8_1 *)(param_1))->m();
    fn_80135DD4((int)(param_2), (int)(param_1), (int)(param_4));
}
}
