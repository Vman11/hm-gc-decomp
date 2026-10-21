// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE4DC[];
void __dl__FPv(void *);
void __dt__9C801EFA90Fv(void *, int);
void fn_801EF83C(void *);
u32 * __dt__9C801ED250Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EE4DC;
        fn_801EF83C(param_1);
        __dt__9C801EFA90Fv(param_1, (int)(0));
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
