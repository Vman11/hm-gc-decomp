// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8010E21C_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void m(int, int, int, int, int); };

void fn_8010E21C(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7) {
    *(u32 *)(param_1 + 0x30) = param_3;
    ((VCall_fn_8010E21C_0 *)(param_1))->m((s32)(param_2), (s32)(param_4), (s32)(param_5), (s32)(param_6), (s32)(param_7));
}
}
