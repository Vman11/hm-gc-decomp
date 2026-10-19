// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801A3B68_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_801A3B68_1 { virtual void p0(); virtual void p1(); virtual void m(int); };
struct VCall_fn_801A3B68_2 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

void fn_801A3B68(s32 param_1) {
    if (*(s32 **)(param_1 + 0xc) != (s32 *)0x0) {
        if (*(void **)(param_1 + 0x18) != NULL) {
            ((VCall_fn_801A3B68_0 *)(*(s32 **)(param_1 + 0xc)))->m((u32)(*(void **)(param_1 + 0x18)));
        }
        if (*(void **)(param_1 + 0x14) != NULL) {
            ((VCall_fn_801A3B68_1 *)(*(s32 **)(param_1 + 0xc)))->m((u32)(*(void **)(param_1 + 0x14)));
        }
    }
    ((VCall_fn_801A3B68_2 *)(param_1))->m();
}
}
