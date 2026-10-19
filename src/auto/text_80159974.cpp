// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 __dt__9C8015C6E4Fv[];
extern u8 lbl_802E6BA8[];
void __dl__FPv(int);
void fn_800E1F04(int, int, int, int);
struct VCall_dtor_80159974_0 {  virtual void m(); };

s32 * __dt__9C801599F4Fv(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802E6BA8;
        ((VCall_dtor_80159974_0 *)(param_1))->m();
        fn_800E1F04((int)(param_1 + 0xc), (int)(__dt__9C8015C6E4Fv), (int)(0x1c), (int)(2));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
