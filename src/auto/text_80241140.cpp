// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern const f32 lbl_80366198;
void fn_80248AF4(f32, int, int, int, int);

void fn_80241140(u32 param_1, u32 param_2) {
    u32 iVar1;

    iVar1 = *(u32 *)(*(u32 *)(param_1 + 0xd4) + param_2 * 4);
    if ((iVar1 != 0) && (*(u32 *)(param_1 + 0x108) != 0)) {
        fn_80248AF4(lbl_80366198, (int)(*(u32 *)(param_1 + 0x108)), (int)(iVar1), (int)(0), (int)(0));
    }
}

} /* extern "C" */
