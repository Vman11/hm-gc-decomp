// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

s32 fn_800BD474();

void fn_802050E0(s32 param_1) {
    s32 iVar1;

    iVar1 = 0;
    while (iVar1 == 0) {
        iVar1 = fn_800BD474(param_1 + 0x70);
    }
    iVar1 = 0;
    while (iVar1 == 0) {
        iVar1 = fn_800BD474(param_1 + 0xac);
    }
    iVar1 = 0;
    while (iVar1 == 0) {
        iVar1 = fn_800BD474(param_1 + 0xe8);
    }
}
