// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80248334(int, int, int);

void fn_80236D24(u32 param_1, u32 param_2) {
    u32 iVar1;

    if ((*(u32 *)(param_1 + 0x20c) != 0) &&
          (iVar1 = *(u32 *)(*(u32 *)(param_1 + 0x20c) + 0x108), iVar1 != 0)) {
        fn_80248334((int)(iVar1), (int)(0), (int)(param_2));
    }
}

} /* extern "C" */
