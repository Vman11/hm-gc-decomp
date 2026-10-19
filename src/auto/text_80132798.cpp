// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E4D28[];
void __dl__FPv(int);
void __dt__9C800FC1D4Fv(int, int);
void __dt__9C8013ECE4Fv(int, int);
void fn_800FBEA8(int, int);
struct VCall_fn_80132798_0 { char vptr_pad[0x14]; virtual void p0(); virtual void m(); };

s32 fn_80132798(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x14) = lbl_802E4D28;
        ((VCall_fn_80132798_0 *)(param_1))->m();
        if (param_1 + 0x24 != 0) {
            fn_800FBEA8((int)(param_1 + 0x24), (int)(0));
        }
        __dt__9C8013ECE4Fv((int)(param_1 + 0x1c), (int)(0xffffffff));
        __dt__9C800FC1D4Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
