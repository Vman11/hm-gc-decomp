// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void __dl__FPv(int);

s32 fn_8011640C(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        if (*(u32 *)(param_1 + 0x6c) != 0) {
            if (*(s32 *)(param_1 + 0x80) == 0) {
                __dla__FPv((int)(*(s32 *)(param_1 + 0x6c)));
            }
        }
        *(u32 *)(param_1 + 0x6c) = 0;
        *(u32 *)(param_1 + 0x70) = 0;
        *(u32 *)(param_1 + 0x84) = 0;
        *(u32 *)(param_1 + 0x88) = 0;
        *(u32 *)(param_1 + 0xa4) = 0;
        *(u8 *)(param_1 + 100) = 0;
        *(u32 *)(param_1 + 0x80) = 0;
        *(u32 *)(param_1 + 0x74) = 0;
        *(u32 *)(param_1 + 0x78) = 4;
        *(u32 *)(param_1 + 0x7c) = 0xffffffff;
        *(u32 *)(param_1 + 0xa8) = 0;
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
