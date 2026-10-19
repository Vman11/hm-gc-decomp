// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B5C4;
void __dl__FPv(int);
void fn_8024EDB8(int);
struct VCall_fn_80250DA4_0 { char vptr_pad[0x10];  virtual void m(int); };

u32 * fn_80250DA4(u32 *param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != (u32 *)0x0) {
        lbl_8035B5C4 = 0;
        if (param_1[1] != 0) {
            fn_8024EDB8((int)(param_1[1]));
            iVar1 = param_1[1];
            if (iVar1 != 0) {
                ((VCall_fn_80250DA4_0 *)(iVar1))->m((u32)(1));
            }
        }
        *param_1 = 0;
        param_1[1] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
