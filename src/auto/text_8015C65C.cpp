// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C8012F4C8[];
extern u8 lbl_802E6E50[];
void __dl__FPv(int);
void __dt__9C800FC080Fv(int, int);
struct VCall_fn_8015C65C_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void m(); };

u32 __dt__9C8015C6E4Fv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 8) = lbl_802E6E50;
        ((VCall_fn_8015C65C_0 *)(param_1))->m();
        if (param_1 != 0) {
            *(u8 **)(param_1 + 8) = __vt__9C8012F4C8;
            __dt__9C800FC080Fv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
