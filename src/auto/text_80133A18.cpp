// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800F8E38(int, int);
void fn_80135F28(int, int, int);
struct VCall_fn_80133A18_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80133A18_1 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void m(int); };

void fn_80133A18(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        ((VCall_fn_80133A18_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x14) = param_3;
    fn_800F8E38((int)(param_1), (int)(*(u32 *)(param_1 + 0x14)));
    ((VCall_fn_80133A18_1 *)(param_1))->m((s32)(param_2));
    fn_80135F28((int)(param_2), (int)(param_1), (int)(param_4));
}
}
