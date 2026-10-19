// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_800F6FBC(int, int);
struct VCall_fn_8022DB6C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(int, int, int); };

void fn_8022DB6C(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    u8 auStack_18[4];

    fn_800F6FBC((int)(*(u32 *)(param_5 + 4)), (int)(auStack_18));
    ((VCall_fn_8022DB6C_0 *)(param_1))->m((u32)(param_3), (u32)(param_4), (u32)(auStack_18));
}
}
