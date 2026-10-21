// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 __dt__9C8013ECE4Fv[];
extern u8 lbl_802BCCA8[];
void __dl__FPv(int);
void __dt__9C80233124Fv(int, int);
void fn_800E1F04(int, int, int, int);
struct VCall_dtor_8005F8AC_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * __dt__9C8005F938Fv(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802BCCA8;
        ((VCall_dtor_8005F8AC_0 *)(param_1))->m();
        fn_800E1F04((int)(param_1 + 0xc9), (int)(__dt__9C8013ECE4Fv), (int)(8), (int)(3));
        __dt__9C80233124Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
