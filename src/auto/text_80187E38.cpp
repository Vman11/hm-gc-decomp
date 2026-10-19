// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801A0DA4(void);
struct VCall_fn_80187E38_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual int m(); };
struct VCall_fn_80187E38_1 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(int); };
struct VCall_fn_80187E38_2 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual int m(); };
struct VCall_fn_80187E38_3 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_80187E38(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;

    iVar2 = *(u32 *)(param_1 + 0xa8);
    fn_801A0DA4();
    if ((*(u32 *)(iVar2 + 0x2c) != 0) &&
          (iVar1 = ((VCall_fn_80187E38_0 *)(param_2))->m(), iVar1 != 0)) {
        if (**(u32 **)(iVar2 + 0x2c) != 0) {
            ((VCall_fn_80187E38_1 *)(**(u32 **)(iVar2 + 0x2c)))->m((u32)(*(u32 **)(iVar2 + 0x2c)));
        }
        iVar1 = ((VCall_fn_80187E38_2 *)(param_2))->m();
        ((VCall_fn_80187E38_3 *)(iVar1))->m((u32)(*(u32 *)(iVar2 + 0x2c)));
    }
}
}
