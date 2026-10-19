// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D5F20(int, int, int, int, int, int);
void fn_800D944C(int, int, int, int);
void fn_801554E4(int, int, int, int, int, int);

void fn_80174D34(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    if ((((*param_1 != param_3) || (param_1[7] != param_4)) || (*(u8 *)(param_1 + 8) != 0)) ||
          ((*(u8 *)((u32)param_1 + 0x22) != 0 || (*(u8 *)((u32)param_1 + 0x23) != 0)))) {
        *param_1 = param_3;
        if (*param_1 != 0) {
            fn_801554E4((int)(*param_1), (int)(param_2), (int)(param_4 >> 7 & 1), (int)(param_1[10]), (int)(param_1[0xb]), (int)(0));
            fn_800D944C((int)(*(u8 *)((u32)param_1 + 0x21)), (int)(0), (int)(0), (int)(4));
        }
        else {
            fn_800D944C((int)(*(u8 *)((u32)param_1 + 0x21)), (int)(0xff), (int)(0xff), (int)(4));
        }
        param_1[7] = param_1[7] & 0xffffff7f;
        param_1[7] = param_1[7] | param_4 & 0x80;
        fn_800D5F20((int)(0), (int)(0), (int)(4), (int)(0x3c), (int)(0), (int)(0x7d));
    }
}

} /* extern "C" */
