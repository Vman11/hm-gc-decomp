// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E4418[];
void __dl__FPv(int);
void __dt__9C800F92E8Fv(int, int);
struct VCall_fn_8012C1E8_0 { char vptr_pad[0xa4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(); };

u32 * fn_8012C1E8(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        param_1[0x29] = (u32)lbl_802E4418;
        if (*param_1 != 0) {
            ((VCall_fn_8012C1E8_0 *)(param_1))->m();
        }
        __dt__9C800F92E8Fv((int)(param_1 + 0x19), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0x14), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 0xf), (int)(0xffffffff));
        __dt__9C800F92E8Fv((int)(param_1 + 10), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
