// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80241628_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(); };
struct VCall_fn_80241628_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(); };

void fn_80241628(s32 param_1, s32 param_2, s32 param_3) {
    s32 iVar1;

    if ((param_2 != *(s32 *)(param_1 + 0xd8)) && (param_2 < *(s32 *)(param_1 + 0x80))) {
        iVar1 = *(s32 *)(param_1 + 0xd8);
        if ((iVar1 >= 0) && (iVar1 < *(s32 *)(param_1 + 0x80))) {
            ((VCall_fn_80241628_0 *)(*(s32 **)(*(s32 *)(param_1 + 0xc0) + iVar1 * 4)))->m();
        }
        *(s32 *)(param_1 + 0xd8) = param_2;
        if (param_3 == 0) {
            ((VCall_fn_80241628_1 *)(*(s32 **)(*(s32 *)(param_1 + 0xc0) + param_2 * 4)))->m();
        }
    }
}
}
