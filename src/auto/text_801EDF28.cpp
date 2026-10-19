// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801EF8D0(int, int, int);
struct VCall_fn_801EDF28_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_801EDF28_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_801EDF28(s32 *param_1, u32 param_2, s32 param_3) {
    ((VCall_fn_801EDF28_0 *)(param_1))->m();
    fn_801EF8D0((int)(param_1), (int)(param_2), (int)(param_3));
    if (*(s8 *)(param_1 + 10) == '\0') {
        ((VCall_fn_801EDF28_1 *)(param_3))->m((s32)(0x1e));
    }
}
}
