// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_801E76F0(int, int, int);
struct VCall_fn_801E142C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801E142C(s32 *param_1, u32 param_2, u32 param_3) {
    ((VCall_fn_801E142C_0 *)(param_1))->m();
    fn_801E76F0((int)(param_1), (int)(param_2), (int)(param_3));
    param_1[0x11] = *(s32 *)(param_1[2] + 0xc0);
}
}
