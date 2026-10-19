// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801AAD7C(int);
struct VCall_fn_801A36EC_0 { char vptr_pad[0x120];  virtual void m(int); };

void fn_801A36EC(u32 *param_1) {
    u32 iVar1;

    if (param_1[1] != 0) {
        fn_801AAD7C((int)(param_1[1]));
        iVar1 = param_1[1];
        if (iVar1 != 0) {
            ((VCall_fn_801A36EC_0 *)(iVar1))->m((u32)(1));
        }
    }
    *param_1 = 0;
    param_1[1] = 0;
}
}
