// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EEAB8[];
void __dl__FPv(void *);
void fn_801EF83C(void *);
void fn_801F77F8(void *, int);

u32 * fn_801F6B40(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EEAB8;
        fn_801EF83C(param_1);
        fn_801F77F8(param_1, (int)(0));
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
