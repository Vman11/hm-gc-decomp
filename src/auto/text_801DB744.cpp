// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801DB744_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };
struct VCall_fn_801DB744_1 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };

u32 fn_801DB744(s32 param_1) {
    if (*(u32 *)(param_1 + 0x138) != 0) {
        ((VCall_fn_801DB744_0 *)(*(u32 *)(param_1 + 0x138)))->m();
    }
    if (*(u32 *)(param_1 + 0x134) != 0) {
        ((VCall_fn_801DB744_1 *)(*(u32 *)(param_1 + 0x134)))->m();
    }
    return 0;
}
}
