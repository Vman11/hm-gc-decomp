// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E68B0[];
void __dl__FPv(int);
void __dt__9C8012C6B4Fv(int, int);
void fn_801541F4(int, int);
struct VCall_fn_8015444C_0 { char vptr_pad[0x28];  virtual void m(); };

s32 fn_8015444C(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x28) = lbl_802E68B0;
        ((VCall_fn_8015444C_0 *)(param_1))->m();
        fn_801541F4((int)(param_1 + 0x2c), (int)(0xffffffff));
        __dt__9C8012C6B4Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
