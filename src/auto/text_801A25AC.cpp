// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E9F30[];
void __dl__FPv(int);
void fn_801E43C4(int, int);
struct VCall_fn_801A25AC_0 { char vptr_pad[0xf4]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 fn_801A25AC(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xf4) = lbl_802E9F30;
        ((VCall_fn_801A25AC_0 *)(param_1))->m();
        fn_801E43C4((int)(param_1), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
