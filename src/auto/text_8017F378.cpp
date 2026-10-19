// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8017F378_0 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void m(int); };
struct VCall_fn_8017F378_1 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };
struct VCall_fn_8017F378_2 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void m(int, int); };
struct VCall_fn_8017F378_3 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_8017F378(u32 param_1) {
    u32 iVar1;

    if (*(u32 *)(param_1 + 0x260) != 0) {
        ((VCall_fn_8017F378_0 *)(*(u32 *)(param_1 + 8)))->m((u32)(0));
        ((VCall_fn_8017F378_1 *)(*(u32 *)(param_1 + 8)))->m();
        for (iVar1 = *(u32 *)(param_1 + 0x260); iVar1 != 0; iVar1 = *(u32 *)(iVar1 + 0x130)) {
            ((VCall_fn_8017F378_2 *)(iVar1))->m((u32)(*(u32 *)(param_1 + 8)), (u32)(0));
        }
        ((VCall_fn_8017F378_3 *)(*(u32 *)(param_1 + 8)))->m();
        *(u32 *)(param_1 + 0x260) = 0;
    }
}
}
