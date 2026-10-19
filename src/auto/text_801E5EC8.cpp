// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017B9D8(int);
void fn_801E65B4(void);

void fn_801E5EC8(s32 param_1) {
    fn_801E65B4();
    fn_8017B9D8((int)(param_1 + 0x38));
    *(u32 *)(param_1 + 0x34) = 0;
}

} /* extern "C" */
