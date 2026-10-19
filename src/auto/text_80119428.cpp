// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 fn_800F75B0[];
extern u8 lbl_802E3A38[];
void __dl__FPv(int);
void fn_800E1F04(int, int, int, int);
struct VCall_fn_80119428_0 { char vptr_pad[0x298]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 fn_80119428(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x298) = lbl_802E3A38;
        ((VCall_fn_80119428_0 *)(param_1))->m();
        if (param_1 + 4 != 0) {
            fn_800E1F04((int)(param_1 + 0x10), (int)(fn_800F75B0), (int)(0x28), (int)(0x10));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
