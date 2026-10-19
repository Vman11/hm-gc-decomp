// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802EF130[];
void __dl__FPv(int);
void __dt__9C800F9B64Fv(int, int);
struct VCall_fn_801FAA04_0 { char vptr_pad[0x100]; virtual void p0(); virtual void p1(); virtual void m(); };

s32 __dt__9C801FAA04Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x100) = lbl_802EF130;
        ((VCall_fn_801FAA04_0 *)(param_1))->m();
        __dt__9C800F9B64Fv((int)(param_1 + 0xd8), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x9c), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x60), (int)(0xffffffff));
        __dt__9C800F9B64Fv((int)(param_1 + 0x24), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
