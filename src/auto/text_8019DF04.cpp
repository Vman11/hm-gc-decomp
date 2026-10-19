// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80182AE0(int, int, int);
struct VCall_fn_8019DF04_0 { char vptr_pad[0x50]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

void fn_8019DF04(u32 *param_1, u32 param_2, u32 param_3) {
    if (param_1[0xb] != 0) {
        ((VCall_fn_8019DF04_0 *)(param_1))->m();
    }
    *param_1 = 2;
    fn_80182AE0((int)(param_1), (int)(param_2), (int)(param_3));
}
}
