// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
u32 fn_800F8274(int, int);
u32 fn_8019556C(int);
struct VCall_fn_801E0840_0 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };
struct VCall_fn_801E0840_1 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_801E0840(u32 param_1) {
    u32 iVar1;

    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        iVar1 = (*(u32 *)(param_1 + 0x34) != 0) ? *(u32 *)(param_1 + 0x34) : *(u32 *)(param_1 + 0x30);
        iVar1 = fn_8019556C((int)(iVar1));
        iVar1 = fn_800F8274((int)(*(u32 *)(iVar1 + 0xa8)), (int)(param_1 + 0x28));
        if (**(u32 **)(param_1 + 0x38) != 0) {
            ((VCall_fn_801E0840_0 *)(**(u32 **)(param_1 + 0x38)))->m();
        }
        ((VCall_fn_801E0840_1 *)(iVar1))->m((u32)(*(u32 *)(param_1 + 0x38)));
    }
}
}
