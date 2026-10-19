// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void __dla__FPv(int);
void fn_80210938(int);
void fn_80214E80(int);
struct VCall_fn_80215BFC_0 { char vptr_pad[0x124];  virtual void m(int); };

void fn_80215BFC(u32 param_1) {
    u32 iVar1;

    if ((*(s32 *)(param_1 + 0x34) != 0) && (iVar1 = *(s32 *)(param_1 + 0x2c), iVar1 != 0)) {
        if (iVar1 != 0) {
            ((VCall_fn_80215BFC_0 *)(iVar1))->m((u32)(1));
        }
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x30)));
    }
    fn_80214E80((int)(param_1));
    fn_80210938((int)(param_1 + 0x24));
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
}
}
