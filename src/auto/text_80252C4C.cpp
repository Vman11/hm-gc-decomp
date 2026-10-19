// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_80252C4C_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80252C4C_1 { char vptr_pad[0x10];  virtual void m(int); };

void fn_80252C4C(u32 *param_1) {
    u32 iVar1;

    if (*param_1 != 0) {
        ((VCall_fn_80252C4C_0 *)(*param_1))->m();
        iVar1 = *param_1;
        if (iVar1 != 0) {
            ((VCall_fn_80252C4C_1 *)(iVar1))->m((u32)(1));
        }
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
}
}
