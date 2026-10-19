// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80190F14(int);
void fn_8019AD10(int, int);
struct VCall_fn_8018FAB0_0 { char vptr_pad[0xc];  virtual void m(int); };

void fn_8018FAB0(s32 param_1) {
    u32 iVar1;

    if (*(u32 **)(param_1 + 0x40) != (u32 *)0x0) {
        fn_8019AD10((int)(**(u32 **)(param_1 + 0x40)), (int)(param_1));
    }
    if ((*(s32 *)(param_1 + 0x70) != 0) && (iVar1 = *(u32 *)(param_1 + 0x6c), iVar1 != 0)) {
        if (iVar1 != 0) {
            ((VCall_fn_8018FAB0_0 *)(iVar1))->m((s32)(1));
        }
    }
    fn_80190F14((int)(param_1));
    *(u32 *)(param_1 + 0x6c) = 0;
    *(u32 *)(param_1 + 0x70) = 0;
}
}
