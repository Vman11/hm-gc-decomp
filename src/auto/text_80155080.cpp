// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void __dla__FPv(int);
void fn_8013494C(int);
void fn_80160EE0(int);
struct VCall_fn_80155080_0 { char vptr_pad[0x20]; virtual void p0(); virtual void m(); };
struct VCall_fn_80155080_1 { char vptr_pad[0x20];  virtual void m(int); };

void fn_80155080(u32 param_1) {
    u32 iVar1;

    if (((*(u16 *)(param_1 + 0x18) & 0x2000) != 0) && (*(u32 *)(param_1 + 0x44) != 0)) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x44)));
    }
    if (*(u32 *)(param_1 + 0x48) != 0) {
        ((VCall_fn_80155080_0 *)(*(u32 *)(param_1 + 0x48)))->m();
        iVar1 = *(u32 *)(param_1 + 0x48);
        if (iVar1 != 0) {
            ((VCall_fn_80155080_1 *)(iVar1))->m((u32)(1));
        }
    }
    fn_80160EE0((int)(param_1 + 0x24));
    fn_8013494C((int)(param_1));
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x4c) = 0;
}
}
