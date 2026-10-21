// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802F218C[];
extern s32 lbl_8035B5E4;
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
void __dt__9C801188F8Fv(int, int);
struct VCall_fn_802521BC_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

s32 fn_802521BC(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x10) = lbl_802F218C;
        lbl_8035B5E4 = 0;
        ((VCall_fn_802521BC_0 *)(param_1))->m();
        __dt__9C801188F8Fv((int)(param_1 + 0x38), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
