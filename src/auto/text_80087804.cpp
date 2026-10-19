// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80298E8C[];
void fn_80232C90(int);
s32 fn_8023D13C(int, int, int);

void fn_80087804(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_80298E8C), (int)(0)); /* "TurnSpeed" */
    *(u32 *)(param_1 + 0x390) = uVar1;
    fn_80232C90((int)(param_1));
}

} /* extern "C" */
