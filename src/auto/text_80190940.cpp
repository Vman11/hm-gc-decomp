// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80190C98(u8 *);
struct VCall_fn_80190940_2 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(u32); };
struct VCall_fn_80190940_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual u32 m(); };
struct VCall_fn_80190940_1 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual VCall_fn_80190940_2 *m(); };

void fn_80190940(u8 *param_1, u8 *param_2) {
    u32 iVar1;
    VCall_fn_80190940_2 *iVar2;

    iVar1 = ((VCall_fn_80190940_0 *)param_1)->m();
    iVar2 = ((VCall_fn_80190940_1 *)param_2)->m();
    if (iVar1 == 0 || iVar2 == 0) {
        return;
    }
    iVar2->m(iVar1);
    if (*(u8 **)(param_1 + 0x50) != param_2) {
        *(u8 **)(param_1 + 0x50) = param_2;
        *(u32 *)(param_1 + 0x54) = *(u32 *)(param_2 + 0x58);
        *(u8 **)(param_2 + 0x58) = param_1;
    }
    fn_80190C98(param_1);
}

} /* extern "C" */
