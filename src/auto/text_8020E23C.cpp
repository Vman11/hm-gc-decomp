// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8020E23C_0 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual int m(); };
struct VCall_fn_8020E23C_1 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual int m(); };
struct VCall_fn_8020E23C_2 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual int m(); };
struct VCall_fn_8020E23C_3 { char vptr_pad[0x10]; virtual void p0(); virtual int m(); };

u32 fn_8020E23C(s32 param_1, s32 param_2) {
    s32 iVar1;
    u32 uVar2;

    iVar1 = ((VCall_fn_8020E23C_0 *)(param_1))->m();
    if (iVar1 != 0) {
        iVar1 = ((VCall_fn_8020E23C_2 *)(param_1))->m();
        if ((u32)iVar1 == 0) {
            uVar2 = 0xd;
        }
        else {
            *(u32 *)(param_1 + 0x6a4) = 0;
            uVar2 = ((VCall_fn_8020E23C_3 *)(param_2))->m();
        }
    }
    else {
        iVar1 = ((VCall_fn_8020E23C_1 *)(param_1))->m();
        uVar2 = 0xc;
        if ((*(u32 *)(iVar1 + 8) & 2) != 0) {
            uVar2 = 0xb;
        }
    }
    return uVar2;
}
}
