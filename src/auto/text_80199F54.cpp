// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80199F54_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int, int, int); };

void fn_80199F54(s32 param_1) {
    u32 *puVar1;

    for (puVar1 = *(u32 **)(param_1 + 4); puVar1 != (u32 *)0x0;
            puVar1 = (u32 *)puVar1[3]) {
        ((VCall_fn_80199F54_0 *)(param_1))->m((s32)(*puVar1), (s32)(puVar1[1]), (s32)(puVar1[2]));
    }
}
}
