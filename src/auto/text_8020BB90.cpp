// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EFA90[];
void __dl__FPv(int);
void __dt__9C802116C4Fv(int, int);
void fn_8020E4FC(int, int);
struct VCall_fn_8020BB90_0 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 fn_8020BB90(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x60) = lbl_802EFA90;
        ((VCall_fn_8020BB90_0 *)(param_1))->m();
        fn_8020E4FC((int)(param_1 + 100), (int)(0xffffffff));
        __dt__9C802116C4Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
