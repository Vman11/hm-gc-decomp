// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80366138[0x1];
extern const f32 lbl_80366198;
s32 fn_800EB580(int, int);
void fn_80248A68(f32, int, int);

void fn_80241028(s32 param_1, u32 param_2) {
    s32 iVar1;

    iVar1 = fn_800EB580((int)(param_2), (int)(lbl_80366138));
    if ((iVar1 != 0) && (*(u32 *)(param_1 + 0x108) != 0)) {
        fn_80248A68(lbl_80366198, (int)(*(u32 *)(param_1 + 0x108)), (int)(param_2));
    }
}

} /* extern "C" */
