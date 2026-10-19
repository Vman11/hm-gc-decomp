// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802CF058[];
void __dl__FPv(int);
void fn_801BBB90(int, int);
struct VCall_fn_8009F2B4_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

s32 fn_8009F2B4(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x80) = lbl_802CF058;
        ((VCall_fn_8009F2B4_0 *)(param_1))->m();
        fn_801BBB90((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
