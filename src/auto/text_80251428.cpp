// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
s32 fn_800F8274(void);
struct VCall_fn_80251428_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };

void fn_80251428(void) {
    s32 iVar1;

    iVar1 = fn_800F8274();
    if (iVar1 != 0) {
        if ((*(s32 *)(iVar1 + 0x14) != 0) && (*(s32 **)(iVar1 + 0x10) != (s32 *)0x0)) {
            ((VCall_fn_80251428_0 *)(*(s32 **)(iVar1 + 0x10)))->m();
        }
        *(u32 *)(iVar1 + 0x14) = 0;
    }
}
}
