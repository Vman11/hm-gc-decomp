// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019B990(int, int);
void fn_8019BA24(int, int);

void fn_801F6728(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        if (*(s32 *)(param_1 + 0xc) == 0x23) {
            fn_8019BA24((int)(*(u32 *)(*(s32 *)(param_1 + 8) + 0xd8)), (int)(*(u32 *)(param_1 + 0x78)));
        }
        else {
            fn_8019B990((int)(*(u32 *)(*(s32 *)(param_1 + 8) + 0xd8)), (int)(*(u32 *)(param_1 + 0x78)));
        }
    }
}

} /* extern "C" */
