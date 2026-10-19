// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8020E100_0 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual int m(); };
struct VCall_fn_8020E100_1 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual int m(); };

u32 fn_8020E100(s32 param_1, u32 param_2, u32 *param_3) {
    s32 iVar1;
    u32 uVar2;

    iVar1 = ((VCall_fn_8020E100_0 *)(param_1))->m();
    if (iVar1 != 0) {
        uVar2 = 0;
        *param_3 = 0;
    }
    else {
        iVar1 = ((VCall_fn_8020E100_1 *)(param_1))->m();
        uVar2 = 0xc;
        if ((*(u32 *)(iVar1 + 8) & 2) != 0) {
            uVar2 = 0xb;
        }
    }
    return uVar2;
}
}
