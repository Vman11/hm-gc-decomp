// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void __dla__FPv(int);
void fn_8023D1A0(int);
struct VCall_fn_8024BADC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };

void fn_8024BADC(u32 *param_1) {
    if (param_1[0x17] != 0) {
        __dla__FPv((int)(param_1[0x17]));
    }
    if (param_1[0x18] != 0) {
        __dla__FPv((int)(param_1[0x18]));
    }
    if (param_1[0x1b] != 0) {
        __dla__FPv((int)(param_1[0x1b]));
    }
    if (param_1[0x19] != 0) {
        __dla__FPv((int)(param_1[0x19]));
    }
    if (param_1[0x1a] != 0) {
        __dla__FPv((int)(param_1[0x1a]));
    }
    ((VCall_fn_8024BADC_0 *)(param_1))->m();
    fn_8023D1A0((int)(param_1));
}
}
