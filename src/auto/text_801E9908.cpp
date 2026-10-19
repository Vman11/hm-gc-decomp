// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E77D8(void);

void fn_801E9908(s32 param_1) {
    if (*(s32 *)(param_1 + 8) != 0) {
        fn_801E77D8();
        *(u32 *)(param_1 + 4) = 0x1c;
        *(u32 *)(param_1 + 0x48) = 0;
        *(u32 *)(param_1 + 0x44) = 0;
    }
}

} /* extern "C" */
