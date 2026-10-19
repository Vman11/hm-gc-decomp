// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A75C0[];
void fn_80060568(int, int, int, int);

void fn_80216194(s32 param_1, u32 param_2) {
    if (*(u32 *)(param_1 + 0x5c) < *(u32 *)(param_1 + 0x60)) {
        *(u32 *)(*(s32 *)(param_1 + 100) + *(u32 *)(param_1 + 0x5c) * 4) = param_2;
        *(s32 *)(param_1 + 0x5c) = *(s32 *)(param_1 + 0x5c) + 1;
    }
    else {
        fn_80060568((int)(lbl_802A75C0), (int)(0 /* "AtIoContext::vPushFileSysetm:  trying to push a file system onto a full stack!\n" */), (int)(0), (int)(0));
    }
}

} /* extern "C" */
