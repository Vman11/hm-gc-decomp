// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80298DE4[];
extern char lbl_8035FDD4[0x7];
extern char lbl_8035FDDC[0x7];
void fn_8005F38C(void);
s32 fn_8023D13C(int, int, int);

void fn_80085858(s32 param_1) {
    u32 uVar1;

    fn_8005F38C();
    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_8035FDD4), (int)(0)); /* "Spread" */
    *(u32 *)(param_1 + 0x38c) = uVar1;
    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_80298DE4), (int)(0)); /* "VertDist" */
    *(u32 *)(param_1 + 0x390) = uVar1;
    uVar1 = fn_8023D13C((int)(param_1), (int)(lbl_8035FDDC), (int)(0)); /* "Period" */
    *(u32 *)(param_1 + 0x394) = uVar1;
}

} /* extern "C" */
