// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C80137FA8[];
extern u8 lbl_802E8310[];
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
struct VCall_dtor_80171754_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

u32 __dt__9C801717DCFv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x10) = lbl_802E8310;
        ((VCall_dtor_80171754_0 *)(param_1))->m();
        if (param_1 != 0) {
            *(u8 **)(param_1 + 0x10) = __vt__9C80137FA8;
            __dt__9C800F92E8Fv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
