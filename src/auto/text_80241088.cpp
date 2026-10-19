// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern const f32 lbl_80366198;
void fn_80248A14(int, int, f32);

void fn_80241088(s32 param_1, s32 param_2) {
    if ((*(u32 *)(*(u32 *)(param_1 + 0xd4) + param_2 * 4) != 0) && (*(u32 *)(param_1 + 0x108) != 0)) {
        fn_80248A14((int)(*(u32 *)(param_1 + 0x108)), (int)(*(u32 *)(*(u32 *)(param_1 + 0xd4) + param_2 * 4)), lbl_80366198);
    }
}

} /* extern "C" */
