// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8E58[];
void __dl__FPv(void *);
void fn_800FCFA8(void *);
void fn_800FD3CC(void *, s32);

void *__dt__9C8018C334Fv(void *param_1, s16 param_2) {
    if (param_1 != NULL) {
        *(u8 **)((u8 *)param_1 + 0x30) = lbl_802E8E58;
        fn_800FCFA8(param_1);
        fn_800FD3CC(param_1, 0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
