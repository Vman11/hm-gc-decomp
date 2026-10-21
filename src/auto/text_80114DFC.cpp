// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80116794(void *, u32);
void fn_80116B10(void *, u32, void *);
s32 fn_80116C38(void *, void *, void *);

u32 fn_80114DFC(void *param_1, void *param_2, u8 *param_3) {
    s32 iVar1;
    u32 local_54;
    u32 local_58;
    u8 auStack_50[68];

    fn_80116B10(param_2, *(u32 *)(param_3 + 4), &local_54);
    fn_80116794(auStack_50, local_54);
    iVar1 = fn_80116C38(param_2, auStack_50, &local_58);
    if (iVar1 != 0) {
        local_58 = 0xffffffff;
    }
    return local_58;
}

} /* extern "C" */
