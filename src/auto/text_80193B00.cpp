// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80193B00_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

s32 fn_80193B00(s32 param_1, s32 param_2) {
    s32 iVar1;

    if (*(u32 *)(param_1 + 0x60) >= *(u32 *)(param_1 + 0x54)) {
        ((VCall_fn_80193B00_0 *)(param_2))->m((s32)(0x27));
    }
    iVar1 = *(s32 *)(param_1 + 0x60);
    *(s32 *)(param_1 + 0x60) = iVar1 + 1;
    return *(s32 *)(param_1 + 0x3c) + iVar1 * 0x34;
}
}
