// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801D6E5C(int, int, int, int);
struct VCall_fn_8026F0F4_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };

void fn_8026F0F4(s32 param_1, s32 param_2, u32 param_3, u32 param_4) {
    s32 iVar1;

    if (param_2 != 0) {
        *(u32 *)(param_1 + 0xc) = param_4;
        if (*(u32 *)(param_1 + 0xc) != 0) {
            fn_801D6E5C((int)(param_4), (int)(param_1), (int)(1), (int)(1));
        }
        *(u32 *)(param_1 + 8) = param_2;
        fn_801D6E5C((int)(*(u32 *)(param_1 + 8)), (int)(param_1), (int)(1), (int)(1));
        *(u32 *)(param_1 + 4) = param_3;
        iVar1 = *(u32 *)(*(u32 *)(param_1 + 4) + 0x11c);
        ((VCall_fn_8026F0F4_0 *)(iVar1))->m((s32)(0));
    }
}
}
