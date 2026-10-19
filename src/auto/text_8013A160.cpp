// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8014C7E4(int, int);
struct VCall_fn_8013A160_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void m(); };

void fn_8013A160(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    param_1[2] = param_2;
    *param_1 = param_3;
    fn_8014C7E4((int)(param_1 + 4), (int)(param_4));
    ((VCall_fn_8013A160_0 *)(param_1))->m();
}
}
