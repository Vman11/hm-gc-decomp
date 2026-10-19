// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8020866C(int);

void fn_802084D0(u32 param_1, s32 param_2) {
    *(u32 *)(param_2 + 0x14) = 0;
    *(u32 *)(param_2 + 0xc) = 0;
    *(u32 *)(param_2 + 8) = *(u32 *)(param_2 + 8) & 0xffffffef;
    *(u32 *)(param_2 + 8) = *(u32 *)(param_2 + 8) & 0xfffffffd;
    fn_8020866C((int)(param_2));
}

} /* extern "C" */
