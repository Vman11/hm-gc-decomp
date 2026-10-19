// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_8035C2F8[0x4];
s32 fn_800F6CD0();
void fn_8024118C();

void fn_8003FBF0(u32 param_1, s32 param_2, u32 param_3) {
    s32 iVar1;

    if ((param_2 != 0) && (iVar1 = fn_800F6CD0(param_2,(void *)lbl_8035C2F8), iVar1 == 0)) {
        fn_8024118C(param_1,param_2,param_3);
    }
}
