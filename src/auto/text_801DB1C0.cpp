// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801DB1C0_0 {  virtual int m(int); };

u32 fn_801DB1C0(s32 param_1) {
    s32 *piVar1;
    u32 uVar2;

    piVar1 = *(s32 **)(param_1 + 0x140);
    if (piVar1 != (s32 *)0x0) {
        uVar2 = ((VCall_fn_801DB1C0_0 *)(piVar1))->m((s32)(param_1));
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}
}
