// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80364E98[0x4];
s32 strcmp(int, void *);
void fn_800F6E88(void *, int);
void fn_800F9324(int, int, int);
void fn_800F96F0(int, void *, int, int);

void fn_801AA8AC(s32 param_1, s32 param_2, u32 param_3, s8 *param_4) {
    s32 iVar1;
    u8 auStack_18[4];

    if ((param_4 == (s8 *)0x0) || (*param_4 == '\0')) {
        fn_800F9324((int)(param_1 + 0x9c), (int)(param_2), (int)(param_3));
        iVar1 = strcmp((int)(param_3), lbl_80364E98);
        if (iVar1 == 0) {
            fn_800F6E88(auStack_18, (int)(*(u32 *)(*(s32 *)(param_2 + 0x160) + 0xc)));
            fn_800F96F0((int)(param_1 + 0xb4), auStack_18, (int)(param_2), (int)(param_3));
        }
    }
    else {
        fn_800F96F0((int)(param_1 + 0xb4), param_4, (int)(param_2), (int)(param_3));
    }
}

} /* extern "C" */
