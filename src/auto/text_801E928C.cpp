// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801907D8(int);

void fn_801E928C(u32 param_1) {
    u32 iVar1;

    iVar1 = (*(u32 *)(param_1 + 0x3c) != 0) ? *(u32 *)(param_1 + 0x3c) : *(u32 *)(param_1 + 0x38);
    if (*(u32 *)(iVar1 + 0x50) != 0) {
        fn_801907D8((int)(iVar1));
    }
}

} /* extern "C" */
