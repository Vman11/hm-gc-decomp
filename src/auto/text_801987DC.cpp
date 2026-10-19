// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FF930(int, int);
void fn_8017B580(void);

void fn_801987DC(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    if (param_5 == 0x41) {
        fn_800FF930((int)(param_1 + 0x14), (int)(param_4));
    }
    else {
        fn_8017B580();
    }
}

} /* extern "C" */
