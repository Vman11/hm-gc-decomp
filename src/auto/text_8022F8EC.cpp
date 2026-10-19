// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C80129A9C[];
extern u8 __vt__9C8022F98C[];
void __dl__FPv(int);
void __dt__9C80239B40Fv(int, int);
void __dt__9C8023B4DCFv(int, int);
void __dt__9C8010500CFv(int, int);
struct VCall_dtor_8022F8EC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * __dt__9C8022F98CFv(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)__vt__9C8022F98C;
        ((VCall_dtor_8022F8EC_0 *)(param_1))->m();
        __dt__9C8023B4DCFv((int)(param_1 + 0xa5), (int)(0xffffffff));
        if ((u32)param_1 + 0x26c != 0) {
            param_1[0xa4] = (s32)__vt__9C80129A9C;
            __dt__9C8010500CFv((int)(param_1 + 0x9b), (int)(0));
        }
        __dt__9C80239B40Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
