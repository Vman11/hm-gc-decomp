// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80298E30[];
extern char lbl_80298E3C[];
void fn_80232C90(int);
s32 fn_8023D13C(int, int, int);

void fn_80086A28(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_80298E30), (int)(0)); /* "DamRadis" */
    *(u32 *)(param_1 + 0x394) = uVar1;
    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_80298E3C), (int)(0)); /* "ExplosionTimer" */
    *(u32 *)(param_1 + 0x398) = uVar1;
    fn_80232C90((int)(param_1));
}

} /* extern "C" */
