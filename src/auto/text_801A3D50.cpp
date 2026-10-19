// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EA328[];
void __ct__9C801A33CCFv(void);
void fn_802007C4(int);
struct VCall_fn_801A3D50_0 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

s32 fn_801A3D50(s32 param_1) {
    __ct__9C801A33CCFv();
    *(u8 **)(param_1 + 0x1c) = lbl_802EA328;
    fn_802007C4((int)(param_1 + 0x20));
    ((VCall_fn_801A3D50_0 *)(param_1))->m();
    return param_1;
}
}
