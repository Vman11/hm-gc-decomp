// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801A1480_0 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_801A1480(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x78) != 0) && (*(u32 *)(param_1 + 0x30) != 0)) {
        ((VCall_fn_801A1480_0 *)(*(u32 *)(param_1 + 0x30)))->m((u32)(*(u32 *)(param_1 + 0x78)));
    }
}
}
