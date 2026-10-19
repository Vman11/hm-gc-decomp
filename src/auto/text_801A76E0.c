// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void __dla__FPv();
void fn_800FB064();
void fn_800FB0F8();
void fn_801A6EC8();
s32 fn_80207198();

void fn_801A76E0(s32 param_1, s32 param_2, u32 param_3, u32 param_4) {
    u32 uVar1;
    u32 local_18;
    u8 auStack_14 [12];

    switch (param_2) {
    case 0x89:
        fn_800FB0F8(param_4,&local_18);
        fn_800FB064(param_4,auStack_14);
        uVar1 = fn_80207198(*(u32 *)(*(s32 *)(param_1 + 0x74) + 8),local_18,auStack_14);
        *(u32 *)(param_1 + 0x168) = uVar1;
        __dla__FPv(local_18);
        break;
    default:
        fn_801A6EC8();
    }
}
