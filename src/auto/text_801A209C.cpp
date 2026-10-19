// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801A2970(void);
struct VCall_fn_801A209C_0 { char vptr_pad[0x8c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };
struct VCall_fn_801A209C_1 { virtual void p0(); virtual void m(); };

void fn_801A209C(s32 param_1, u32 param_2) {
    fn_801A2970();
    ((VCall_fn_801A209C_0 *)(param_1))->m((s32)(param_2));
    ((VCall_fn_801A209C_1 *)(param_1 + 0x90))->m();
    *(s32 *)(param_1 + 0x84) = param_1 + 0x90;
}
}
