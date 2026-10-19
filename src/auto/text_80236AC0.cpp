// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct VCall_fn_80236AC0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(int, int, int, int, int); };

void fn_80236AC0(s32 *param_1) {
    if (param_1[0x94] != 0) {
        param_1[0x94] = 0;
        ((VCall_fn_80236AC0_0 *)(param_1))->m((s32)(param_1 + 0x91), (s32)(0), (s32)(0), (s32)(0), (s32)(0));
    }
}
}
