// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern const f32 lbl_80365458;
s32 fn_801EB764(void);
struct VCall_fn_801F06F4_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };

u32 fn_801F06F4(s32 param_1) {
    s32 iVar1;
    u32 uVar2;

    iVar1 = fn_801EB764();
    if (0 == iVar1) {
        uVar2 = 0;
    }
    else {
        if (lbl_80365458 == *(f32 *)(param_1 + 0x18)) {
            ((VCall_fn_801F06F4_0 *)(param_1))->m();
            *(s32 *)(param_1 + 0x28) = *(s32 *)(param_1 + 0x28) + 1;
        }
        uVar2 = 1;
    }
    return uVar2;
}
}
