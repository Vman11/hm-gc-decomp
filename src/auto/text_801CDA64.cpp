// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801CDA64_0 { char vptr_pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

u32 fn_801CDA64(s32 param_1) {
    if (*(s32 *)(param_1 + 0x30) != 0) {
        ((VCall_fn_801CDA64_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x30) = 1;
    return 0;
}
}
