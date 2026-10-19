// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80187774(void);
void fn_8018D85C(int, int, int);

void fn_8018771C(s32 param_1, u32 param_2) {
    fn_80187774();
    fn_8018D85C((int)(param_1), (int)(param_2), (int)(*(s32 *)(*(s32 *)(param_1 + 0xa8) + 0x1c) +
                            *(s32 *)(*(s32 *)(param_1 + 0xa8) + 0x20) + 1));
}

} /* extern "C" */
