// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029848C[];
extern char lbl_8029849C[];
s32 fn_8005D138(void);
s32 fn_8023D13C(int, int, int);

u32 fn_800797B4(s32 param_1) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = fn_8005D138();
    uVar2 = fn_8023D13C((int)(param_1), (int)(lbl_8029848C), (int)(1)); /* "rAcceleration" */
    *(u32 *)(param_1 + 0x348) = uVar2;
    uVar2 = fn_8023D13C((int)(param_1), (int)(lbl_8029849C), (int)(1)); /* "rLockRadius" */
    *(u32 *)(param_1 + 0x34c) = uVar2;
    return uVar1;
}

} /* extern "C" */
