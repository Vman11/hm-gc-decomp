// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80208A20(int, int, int);
struct VCall_fn_80208F1C_0 { char vptr_pad[0x4]; virtual void p0(); virtual void m(); };

void fn_80208F1C(u32 *param_1, u32 param_2, u32 param_3) {
    if (*param_1 != 0) {
        ((VCall_fn_80208F1C_0 *)(param_1))->m();
    }
    fn_80208A20((int)(param_1), (int)(param_2), (int)(param_3));
    param_1[2] = param_3;
    param_1[0x12] = 0;
}
}
