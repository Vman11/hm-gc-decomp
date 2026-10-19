// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern s32 lbl_8035B65C;
void fn_800F6E40();
s32 fn_801104C0();
void fn_80238CF4();

void fn_80233050(s32 param_1) {
    u32 uVar1;
    u8 auStack_18[4];

    fn_800F6E40(auStack_18,param_1 + 0x8c);
    *(s32 *)(param_1 + 0xc) = lbl_8035B65C + 0x90;
    uVar1 = fn_801104C0(*(s32 *)(param_1 + 0xc),auStack_18,*(s32 *)(param_1 + 0xc) + 8,0);
    *(u32 *)(param_1 + 0x10) = uVar1;
    fn_80238CF4(param_1);
}
