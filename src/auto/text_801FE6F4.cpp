// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EF5A8[];
void __dl__FPv(int);
void fn_801FB680(int, int);
struct VCall_fn_801FE6F4_0 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 fn_801FE6F4(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 4) = lbl_802EF5A8;
        ((VCall_fn_801FE6F4_0 *)(param_1))->m();
        fn_801FB680((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
