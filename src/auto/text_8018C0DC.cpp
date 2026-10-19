// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8018B724Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);

void fn_8018C0DC(s32 param_1) {
    if (*(void **)(param_1 + 0x38) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x38)));
        *(u32 *)(param_1 + 0x38) = 0;
    }
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(__dt__9C8018B724Fv));
        *(u32 *)(param_1 + 0x34) = 0;
    }
}

} /* extern "C" */
