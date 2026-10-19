// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memcpy(void *, const void *, unsigned long);

void fn_800FB61C(s32 param_1, s32 param_2, s32 param_3) {
    s32 iVar1;

    iVar1 = *(s32 *)(param_1 + 0x10) + *(s32 *)(param_1 + 4) * 2;
    memcpy((void *)(iVar1 + param_2 * 2),(void *)(iVar1 + param_3 * 2 + 2),
                  ((*(s32 *)(param_1 + 8) - *(s32 *)(param_1 + 4)) - param_3) * 2);
    *(s32 *)(param_1 + 8) = *(s32 *)(param_1 + 8) - ((param_3 - param_2) + 1);
}

} /* extern "C" */
