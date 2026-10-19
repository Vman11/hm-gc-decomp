// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8010C3AC(int);
struct VCall_fn_80109570_0 { char vptr_pad[0x8];  virtual void m(int); };

void fn_80109570(u32 param_1) {
    u32 iVar1;

    iVar1 = *(u32 *)(param_1 + 0x1c);
    if (iVar1 != 0) {
        if (iVar1 != 0) {
            ((VCall_fn_80109570_0 *)(iVar1))->m((u32)(1));
        }
    }
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    fn_8010C3AC((int)(param_1));
}
}
