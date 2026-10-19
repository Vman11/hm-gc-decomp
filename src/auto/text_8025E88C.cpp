// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __dt__9C8025EDC0Fv[];
void __dl__FPv(int);
void fn_800E1E88(int, int);
struct VCall_dtor_8025E88C_0 { char vptr_pad[0x10];  virtual void m(int); };

u32 * __dt__9C8025E920Fv(u32 *param_1, s16 param_2) {
    u32 iVar1;

    if (param_1 != (u32 *)0x0) {
        fn_800E1E88((int)(param_1[1]), (int)(__dt__9C8025EDC0Fv));
        iVar1 = *param_1;
        if (iVar1 != 0) {
            if (iVar1 != 0) {
                ((VCall_dtor_8025E88C_0 *)(iVar1))->m((u32)(1));
            }
        }
        param_1[3] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
