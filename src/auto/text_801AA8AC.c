// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_80364E98[0x4];
s32 fn_800EB580();
void fn_800F6E88();
void fn_800F9324();
void fn_800F96F0();

void fn_801AA8AC(s32 param_1, s32 param_2, u32 param_3, s8 *param_4) {
    s32 iVar1;
    u8 auStack_18[4];

    if ((param_4 == (s8 *)0x0) || (*param_4 == '\0')) {
        fn_800F9324(param_1 + 0x9c,param_2,param_3);
        iVar1 = fn_800EB580(param_3,(void *)lbl_80364E98);
        if (iVar1 == 0) {
            fn_800F6E88(auStack_18,*(u32 *)(*(s32 *)(param_2 + 0x160) + 0xc));
            fn_800F96F0(param_1 + 0xb4,auStack_18,param_2,param_3);
        }
    }
    else {
        fn_800F96F0(param_1 + 0xb4,param_4,param_2,param_3);
    }
}
