// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802F197C[];
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
struct VCall_dtor_8023B964_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

u32 * __dt__9C8023B9E4Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        param_1[4] = (u32)lbl_802F197C;
        if (*param_1 != 0) {
            ((VCall_dtor_8023B964_0 *)(param_1))->m();
        }
        __dt__9C800F92E8Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
