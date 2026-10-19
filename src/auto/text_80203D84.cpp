// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80201630Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);
void fn_801FD51C(int);
void fn_80207608(int);

void fn_80203D84(s32 param_1) {
    if (*(u32 *)(param_1 + 0x24) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x24)), (int)(__dt__9C80201630Fv));
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x28)));
    }
    if ((*(u32 *)(param_1 + 0x20) != 0) && (*(u32 *)(param_1 + 0x18) != 0)) {
        fn_80207608((int)(*(u32 *)(param_1 + 0x20)));
    }
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    fn_801FD51C((int)(param_1));
}

} /* extern "C" */
