// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0D4C[];
void __dla__FPv(int);
void __dl__FPv(int);
void __dt__9C8023B4DCFv(int, int);
void fn_8023B340(int);

s32 __dt__9C80226E64Fv(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xa0) = lbl_802F0D4C;
        if (*(u32 *)(param_1 + 0xb0) != 0) {
            if (*(u32 *)(param_1 + 0xb0) != 0) {
                __dla__FPv((int)(*(u32 *)(param_1 + 0xb0) + -0x10));
            }
        }
        if (*(u32 *)(param_1 + 0xb4) != 0) {
            if (*(u32 *)(param_1 + 0xb4) != 0) {
                __dla__FPv((int)(*(u32 *)(param_1 + 0xb4) + -0x10));
            }
        }
        if (*(u32 *)(param_1 + 0xb8) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xb8)));
        }
        if (*(u32 *)(param_1 + 0xbc) != 0) {
            if (*(u32 *)(param_1 + 0xbc) != 0) {
                __dla__FPv((int)(*(u32 *)(param_1 + 0xbc) + -0x10));
            }
        }
        if (*(u32 *)(param_1 + 0xc0) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xc0)));
        }
        if (*(u32 *)(param_1 + 0xc4) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xc4)));
        }
        if (*(u32 *)(param_1 + 200) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 200)));
        }
        if (*(u32 *)(param_1 + 0xcc) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xcc)));
        }
        if (*(u32 *)(param_1 + 0xd0) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xd0)));
        }
        if (*(u32 *)(param_1 + 0xd4) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xd4)));
        }
        if (*(u32 *)(param_1 + 0xd8) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0xd8)));
        }
        fn_8023B340((int)(param_1));
        *(u32 *)(param_1 + 0xa4) = 0;
        *(u32 *)(param_1 + 0xac) = 0;
        *(u32 *)(param_1 + 0xb0) = 0;
        *(u32 *)(param_1 + 0xb4) = 0;
        *(u32 *)(param_1 + 0xb8) = 0;
        *(u32 *)(param_1 + 0xbc) = 0;
        *(u32 *)(param_1 + 0xdc) = 0;
        *(u32 *)(param_1 + 0xe0) = 0;
        *(u32 *)(param_1 + 0xc0) = 0;
        *(u32 *)(param_1 + 0xc4) = 0;
        *(u32 *)(param_1 + 0xd8) = 0;
        *(u32 *)(param_1 + 200) = 0;
        *(u32 *)(param_1 + 0xcc) = 0;
        *(u32 *)(param_1 + 0xd0) = 0;
        *(u32 *)(param_1 + 0xd4) = 0;
        __dt__9C8023B4DCFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
