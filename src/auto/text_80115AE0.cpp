// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80115B6C(int, int, int, void *);
void fn_801165A8(int, void *, int);
void fn_80116A70(int, void *);
void fn_80116B10(int, int, void *);

u32 fn_80115AE0(s32 param_1, u32 param_2, s32 param_3) {
    u32 uVar1;
    u8 auStack_28[2];
    u32 local_24;
    u8 auStack_20 [24];

    uVar1 = *(u32 *)(param_3 + 4);
    fn_80116B10((int)(param_2), (int)(*(u32 *)(param_3 + 8)), &local_24);
    fn_80116A70((int)(local_24), auStack_28);
    fn_80115B6C((int)(local_24), (int)(0), (int)(0), auStack_20);
    fn_801165A8((int)(*(u32 *)(param_1 + 0x27a8)), auStack_20, (int)(uVar1));
    return 0;
}

} /* extern "C" */
