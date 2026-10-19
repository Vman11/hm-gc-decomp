// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
u32 fn_8010FEDC(int, int, int, int);
struct VCall_fn_8023F52C_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(int); };

u32 fn_8023F52C(u32 param_1, u32 param_2, s8 *param_3, u32 param_4, u32 param_5, s32 param_6) {
    u32 *piVar1;
    u32 iVar2;
    u32 iVar3;

    iVar3 = *(u32 *)(*(u32 *)(param_1 + 0xe0) + 0xc);
    iVar2 = *(u32 *)(*(u32 *)(param_1 + 0xe0) + 0x10);
    if ((iVar3 != 0) && (iVar2 != 0)) {
        if (*param_3 != '\0') {
            iVar2 = fn_8010FEDC((int)(*(u32 *)(param_1 + 0xc)), (int)(iVar2), (int)(param_3), (int)(1));
        }
        piVar1 = (u32 *)fn_8010FEDC((int)(iVar3), (int)(iVar2), (int)(param_4), (int)(1));
        if (piVar1 != (u32 *)0x0) {
            if (param_6 != 0) {
                return *piVar1;
            }
            iVar2 = ((VCall_fn_8023F52C_0 *)(*piVar1))->m((u32)(0));
            return iVar2;
        }
    }
    return 0;
}
}
