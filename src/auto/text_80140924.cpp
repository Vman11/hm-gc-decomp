// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801071C0(void);

void fn_80140924(s32 param_1, s32 param_2) {
    *(u32 *)(param_1 + 0x10) = *(u32 *)(param_2 + 0x10);
    fn_801071C0();
}

} /* extern "C" */
