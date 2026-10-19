// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8016CEF4(void);

s32 fn_8016CEC0(void) {
    s32 iVar1;
    s32 iVar2;

    iVar2 = fn_8016CEF4();
    iVar1 = 0;
    if (iVar2 != 0) {
        iVar1 = iVar2;
    }
    return iVar1;
}

} /* extern "C" */
