// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_801EF8D0(int, int, int);
struct VCall_fn_801F0EE4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801F0EE4(s32 *param_1, u32 param_2, u32 param_3) {
    ((VCall_fn_801F0EE4_0 *)(param_1))->m();
    param_1[3] = 0x35;
    fn_801EF8D0((int)(param_1), (int)(param_2), (int)(param_3));
    param_1[0xb] = *(s32 *)(param_1[2] + 0xc0);
    param_1[10] = *(s32 *)(param_1[2] + 0xc4);
}
}
