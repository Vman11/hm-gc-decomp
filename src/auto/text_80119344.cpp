// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035A9F4;
void fn_800F7CDC(int);
u32 fn_800F7E70(void);
void fn_800F7E98(void);

void fn_80119344(u32 *param_1) {
    u32 iVar1;

    if ((lbl_8035A9F4 != 0) && (iVar1 = fn_800F7E70(), iVar1 != 0)) {
        fn_800F7E98();
    }
    fn_800F7CDC((int)(param_1 + 1));
    *param_1 = 0;
}

} /* extern "C" */
