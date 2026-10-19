// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memcpy(void *, const void *, unsigned long);

void fn_80113BF4(s32 param_1, void *param_2, s32 param_3, s32 param_4) {
    memcpy((void *)(*(s32 *)(param_1 + 0xc) + param_3 * 4),param_2,param_4 << 2);
}

} /* extern "C" */
