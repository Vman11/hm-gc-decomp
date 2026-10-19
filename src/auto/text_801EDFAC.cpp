// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_800F6E88(int, int);
void fn_801EF9A0(int, int);
struct VCall_fn_801EDFAC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801EDFAC(s32 *param_1, s32 param_2) {
    ((VCall_fn_801EDFAC_0 *)(param_1))->m();
    fn_801EF9A0((int)(param_1), (int)(param_2));
    fn_800F6E88((int)(param_1 + 10), (int)(param_2 + 8));
}
}
