// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8005D6D0(void);

void fn_80086DD4(s32 param_1) {
    *(u32 *)(param_1 + 0x38c) = 0xff;
    if ((*(u8 *)(param_1 + 0x374) & 1) == 0) {
        fn_8005D6D0();
    }
}

} /* extern "C" */
