// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 fn_8014B660[];
extern u8 fn_8014B6C0[];
void __construct_array(int, int, int, int, int);
void fn_8014AD60(void);

s32 __ct__9C8014A9A8Fv(s32 param_1) {
    fn_8014AD60();
    __construct_array((int)(param_1 + 8), (int)(fn_8014B6C0), (int)(fn_8014B660), (int)(0x10), (int)(8));
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0x88) = 0;
    *(u32 *)(param_1 + 0x8c) = 0;
    *(u32 *)(param_1 + 0x90) = 0;
    return param_1;
}

} /* extern "C" */
