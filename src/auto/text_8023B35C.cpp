// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8014C8C8(int, int, int, int);
struct VCall_fn_8023B35C_0 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual int m(); };

void fn_8023B35C(s32 param_1, u32 param_2) {
    u32 uVar1;

    *(u32 *)(param_1 + 0x90) = param_2;
    uVar1 = ((VCall_fn_8023B35C_0 *)(**(s32 **)(param_1 + 0x90)))->m();
    *(u32 *)(param_1 + 0x1c) = uVar1;
    fn_8014C8C8((int)(param_1), (int)(0x8880), (int)(0), (int)(1));
    *(u32 *)(param_1 + 0x98) = 0;
}
}
