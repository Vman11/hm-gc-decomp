// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);
void __dt__9C801150D4Fv(void *, int);
void fn_801150CC(void *);
void fn_8011558C(void *);
void fn_80116048(void *, int);

u32 * __dt__9C80114FC8Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        fn_8011558C(param_1 + 2);
        fn_801150CC(param_1 + 1);
        *param_1 = 0;
        fn_80116048(param_1 + 2, (int)(0xffffffff));
        __dt__9C801150D4Fv(param_1 + 1, (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
