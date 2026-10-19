// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019B9E4(int, int);
void fn_8019BA78(int, int);
void fn_801F74D8(int);

void fn_801F6780(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        if (*(void **)(param_1 + 0x7c) != NULL) {
            *(s32 *)(*(s32 *)(param_1 + 0x78) + 0x58) = *(s32 *)(param_1 + 0x7c);
        }
        if (*(void **)(param_1 + 0x80) != NULL) {
            *(s32 *)(*(s32 *)(param_1 + 0x78) + 0x54) = *(s32 *)(param_1 + 0x80);
        }
        if (*(s32 *)(param_1 + 0xc) == 0x21) {
            fn_8019BA78((int)(*(u32 *)(*(s32 *)(param_1 + 8) + 0xd8)), (int)(*(u32 *)(param_1 + 0x78)));
        }
        else {
            fn_8019B9E4((int)(*(u32 *)(*(s32 *)(param_1 + 8) + 0xd8)), (int)(*(u32 *)(param_1 + 0x78)));
        }
        fn_801F74D8((int)(param_1));
    }
}

} /* extern "C" */
