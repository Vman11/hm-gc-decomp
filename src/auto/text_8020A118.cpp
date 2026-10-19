// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EF9B8[];
void __dl__FPv(int);
void __dt__9C80209008Fv(int, int);
void __dt__9C802113F8Fv(int, int);
struct VCall_fn_8020A118_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

s32 __dt__9C8020A1A4Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x10) = lbl_802EF9B8;
        ((VCall_fn_8020A118_0 *)(param_1))->m();
        __dt__9C80209008Fv((int)(param_1 + 0x68), (int)(0xffffffff));
        __dt__9C80209008Fv((int)(param_1 + 0x1c), (int)(0xffffffff));
        __dt__9C802113F8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
