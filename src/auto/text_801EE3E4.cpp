// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801EF83C(int);
struct VCall_fn_801EE3E4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(); };
struct VCall_fn_801EE3E4_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(int); };

void fn_801EE3E4(s32 *param_1) {
    s32 *piVar1;

    if (param_1[2] != 0) {
        if ((param_1[9] & 1U) != 0) {
            ((VCall_fn_801EE3E4_0 *)(param_1))->m();
        }
        if ((u32)param_1[2] != 0) {
            piVar1 = (s32 *)**(u32 **)(param_1[2] + 0xe4);
            ((VCall_fn_801EE3E4_1 *)(piVar1))->m((s32)(param_1[10]));
        }
        fn_801EF83C((int)(param_1));
        param_1[1] = 0x15;
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        param_1[0xd] = 0;
        param_1[10] = 0;
    }
}
}
