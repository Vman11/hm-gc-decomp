// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void __dl__FPv(int);
struct VCall_dtor_8021539C_0 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

u32 * __dt__9C80215414Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        if (param_1[1] != 0) {
            ((VCall_dtor_8021539C_0 *)(*param_1))->m((u32)(param_1[1]));
        }
        *param_1 = 0;
        param_1[1] = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
