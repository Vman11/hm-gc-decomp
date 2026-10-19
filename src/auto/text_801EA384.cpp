// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_800F6CD0(int, int);
s32 fn_801DF7E0(int);
struct VCall_fn_801EA384_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };

void fn_801EA384(s32 param_1, u32 param_2, u32 param_3, s32 param_4) {
    s32 iVar1;

    if ((((*(u32 *)(param_1 + 4) & 1) != 0) &&
            (((*(s32 *)(param_1 + 0x5c) < 0 || (param_4 == *(s32 *)(param_1 + 0x5c))) &&
              (iVar1 = fn_801DF7E0((int)(param_1)), iVar1 != 0)))) &&
          (iVar1 = fn_800F6CD0((int)(param_2), (int)(param_1 + 0x54)), iVar1 != 0)) {
        ((VCall_fn_801EA384_0 *)(param_1))->m();
    }
}
}
