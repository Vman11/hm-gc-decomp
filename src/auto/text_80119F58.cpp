// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80207388(int, int, int);
struct VCall_fn_80119F58_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_80119F58_1 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_80119F58(s32 param_1, u32 *param_2, u32 param_3) {
    if (*(u32 *)(param_1 + 0x7c) != 0) {
        ((VCall_fn_80119F58_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x7c) = param_3;
    ((VCall_fn_80119F58_1 *)(param_1))->m((s32)(param_2));
    fn_80207388((int)(param_1), (int)(*param_2), (int)(param_2[1]));
}
}
