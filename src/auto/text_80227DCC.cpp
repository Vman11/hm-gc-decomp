// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B65C;
s32 fn_801104C0(int, int, int, int);
s32 fn_80239024(void);

u32 fn_80227DCC(s32 param_1) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = fn_80239024();
    *(s32 *)(param_1 + 0xc) = lbl_8035B65C + 0x90;
    uVar2 = fn_801104C0((int)(*(s32 *)(param_1 + 0xc)), (int)(param_1 + 0x8c), (int)(*(s32 *)(param_1 + 0xc) + 8), (int)(0));
    *(u32 *)(param_1 + 0x10) = uVar2;
    return uVar1;
}

} /* extern "C" */
