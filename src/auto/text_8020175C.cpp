// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8020109C(int);
void fn_80203170(int);

void fn_8020175C(s32 param_1) {
    u32 uVar1;

    uVar1 = *(u32 *)(param_1 + 8);
    if ((uVar1 & 8) != 0) {
        if ((uVar1 & 0x400) != 0) {
            if (((uVar1 & 0x80) == 0) && (*(u32 *)(param_1 + 0x24) != 0)) {
                fn_80203170((int)(*(u32 *)(param_1 + 0x24)));
            }
        }
        else if (((uVar1 & 0x200) != 0) && (*(u32 *)(param_1 + 0x24) != 0)) {
            fn_8020109C((int)(*(u32 *)(param_1 + 0x24)));
        }
        *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xfffffff7;
    }
}

} /* extern "C" */
