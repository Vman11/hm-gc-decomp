// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80140924(void);

void fn_801900E0(s32 param_1, s32 param_2) {
    fn_80140924();
    *(u32 *)(param_1 + 0x14) = *(u32 *)(param_2 + 0x14);
}

} /* extern "C" */
