// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8016E2ACFv[];
void fn_800E1E88(int, int);
void fn_80136BF4(int);

void fn_8016E2F8(s32 param_1) {
    if (*(u32 *)(param_1 + 0x18) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x18)), (int)(__dt__9C8016E2ACFv));
    }
    fn_80136BF4((int)(param_1));
    *(u32 *)(param_1 + 0x18) = 0;
}

} /* extern "C" */
