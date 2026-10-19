// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8020E3E0(int);
void fn_802115F8(int);

void fn_8020BACC(s32 param_1) {
    fn_8020E3E0((int)(param_1 + 100));
    *(u32 *)(param_1 + 0x91c) = 0;
    *(u32 *)(param_1 + 0x920) = 0;
    fn_802115F8((int)(param_1));
}

} /* extern "C" */
