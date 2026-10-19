// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80115B6C();
void fn_801164AC();
void fn_80116810();
void fn_80116A70();
void fn_80116B10();

u32 fn_80115800(s32 param_1, u32 param_2, s32 param_3) {
    u8 auStack_60 [68];
    u8 auStack_b0 [80];
    u32 local_b4;
    u8 auStack_b8 [4];

    fn_80116B10(param_2,*(u32 *)(param_3 + 8),&local_b4);
    fn_80116A70(local_b4,auStack_b8);
    fn_80115B6C(local_b4,0,0,auStack_b0);
    fn_801164AC(*(u32 *)(param_1 + 0x27a8),auStack_b0,auStack_60,*(u32 *)(param_3 + 0xc)
                          );
    fn_80116B10(param_2,*(u32 *)(param_3 + 4),&local_b4);
    fn_80116810(local_b4,auStack_60,*(u32 *)(param_3 + 0x10));
    return 0;
}
