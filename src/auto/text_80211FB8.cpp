// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8021B2D0(void);

void fn_80211FB8(s32 param_1) {
    fn_8021B2D0();
    *(u32 *)(param_1 + 0x34) = 1;
}

} /* extern "C" */
