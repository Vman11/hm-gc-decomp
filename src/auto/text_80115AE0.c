// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80115B6C();
void fn_801165A8();
void fn_80116A70();
void fn_80116B10();

u32 fn_80115AE0(s32 param_1, u32 param_2, s32 param_3) {
    u32 uVar1;
    u8 auStack_28[2];
    u32 local_24;
    u8 auStack_20 [24];

    uVar1 = *(u32 *)(param_3 + 4);
    fn_80116B10(param_2,*(u32 *)(param_3 + 8),&local_24);
    fn_80116A70(local_24,auStack_28);
    fn_80115B6C(local_24,0,0,auStack_20);
    fn_801165A8(*(u32 *)(param_1 + 0x27a8),auStack_20,uVar1);
    return 0;
}
