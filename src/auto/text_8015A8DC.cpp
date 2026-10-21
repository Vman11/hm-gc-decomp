// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6C28[];
void __dl__FPv(void *);
void fn_80154530(void *);
void fn_801545B0(void *, int);

u32 * fn_8015A8DC(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802E6C28;
        fn_80154530(param_1 + 1);
        fn_801545B0(param_1 + 1, (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
