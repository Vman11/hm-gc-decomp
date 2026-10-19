// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
u32 fn_800F8274(int, int);
void fn_80190C98(int);
struct VCall_fn_80190888_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_80190888_1 { char vptr_pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_80190888(u32 param_1, u32 *param_2, u32 param_3) {
    u32 iVar1;
    u32 iVar2;

    iVar1 = ((VCall_fn_80190888_0 *)(param_1))->m();
    if ((iVar1 != 0) && (iVar2 = fn_800F8274((int)(param_2[0x2a]), (int)(param_3)), iVar2 != 0)) {
        *param_2 = *param_2 & 0xfff7ffff;
        ((VCall_fn_80190888_1 *)(iVar2))->m((u32)(iVar1));
        if (*(u32 **)(param_1 + 0x50) != param_2) {
            *(u32 **)(param_1 + 0x50) = param_2;
            *(u32 *)(param_1 + 0x54) = param_2[0x16];
            param_2[0x16] = param_1;
        }
        fn_80190C98((int)(param_1));
    }
}
}
