// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF678[];
void __dl__FPv(void *);
void fn_801FE890(void *);
void fn_801FE970(void *, int);

u32 * __dt__9C80200750Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EF678;
        param_1[0x32] = 0;
        fn_801FE890(param_1 + 1);
        fn_801FE970(param_1 + 1, (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
