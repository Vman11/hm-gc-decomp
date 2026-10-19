// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80115B6C();
void fn_80116728();
void fn_80116A70();
void fn_80116B10();

u32 fn_80115930(s32 param_1, u32 param_2, s32 param_3) {
    u32 local_60;
    u32 local_64;
    u8 auStack_68 [4];
    u8 auStack_5c[80];

    fn_80116B10(param_2,*(u32 *)(param_3 + 4),&local_64);
    fn_80116A70(local_64,auStack_68);
    fn_80115B6C(local_64,0,0,auStack_5c);
    fn_80116728(*(u32 *)(param_1 + 0x27a8),auStack_5c,&local_60);
    return local_60;
}
