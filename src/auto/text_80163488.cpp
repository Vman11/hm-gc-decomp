// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801632A0Fv[];
void fn_800E1E88(int, int);
void fn_80134570(int);
void fn_8016C9F8(int, int);

void fn_80163488(s32 param_1) {
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x1c)), (int)(__dt__9C801632A0Fv));
    }
    if (*(u32 *)(param_1 + 0x18) != 0) {
        fn_8016C9F8((int)(*(u32 *)(param_1 + 0x18)), (int)(param_1));
    }
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    fn_80134570((int)(param_1));
}

} /* extern "C" */
