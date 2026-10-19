// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80253FC0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void m(int); };
struct VCall_fn_80253FC0_1 { char vptr_pad[0x74];  virtual void m(int); };

void fn_80253FC0(u32 param_1) {
    u32 iVar1;

    if (*(u32 *)(param_1 + 0x10) != 0) {
        ((VCall_fn_80253FC0_0 *)(*(u32 **)(*(u32 *)(param_1 + 4) + 0x10)))->m((u32)(*(u32 *)(param_1 + 0x10)));
    }
    iVar1 = *(u32 *)(param_1 + 0x14);
    if (iVar1 != 0) {
        if (iVar1 != 0) {
            ((VCall_fn_80253FC0_1 *)(iVar1))->m((u32)(1));
        }
    }
}
}
