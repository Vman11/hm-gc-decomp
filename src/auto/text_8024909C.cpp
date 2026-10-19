// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B488;
void fn_8023EC4C(int, int);

void fn_8024909C(s32 param_1, s32 param_2) {
    u32 iVar1;

    iVar1 = *(s32 *)(*(s32 *)(param_1 + 0x70) + param_2 * 4);
    if ((iVar1 != 0) && (*(s32 *)(iVar1 + 0x10) == 0)) {
        fn_8023EC4C((int)(lbl_8035B488), (int)(iVar1));
    }
}

} /* extern "C" */
