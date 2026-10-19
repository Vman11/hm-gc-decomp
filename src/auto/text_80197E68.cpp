// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8018E0BC(int, int, int, int);
struct VCall_fn_80197E68_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };

void fn_80197E68(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    if ((*param_1 & 1) != 0) {
        ((VCall_fn_80197E68_0 *)(param_1))->m();
    }
    fn_8018E0BC((int)(param_1), (int)(param_2), (int)(param_3), (int)(param_4));
}
}
