// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80190C98(void);

void fn_80197D1C(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x34) != 0) && (*(u32 *)(param_1 + 0x30) != 0)) {
        fn_80190C98();
    }
}

} /* extern "C" */
