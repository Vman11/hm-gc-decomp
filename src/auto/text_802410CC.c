// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_80366138[0x1];
extern const f32 lbl_80366198;
s32 fn_800EB580();
void fn_80248B54();

void fn_802410CC(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;

    iVar1 = fn_800EB580(param_2,(void *)lbl_80366138);
    if ((iVar1 != 0) && (*(u32 *)(param_1 + 0x108) != 0)) {
        fn_80248B54(lbl_80366198,*(u32 *)(param_1 + 0x108),param_2,0,param_3);
    }
}
