// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_8035B138;
void __dla__FPv();
void fn_800604C4();
void fn_800EB764();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nwa__FUl();
u32 strlen();

void fn_80201C7C(u32 param_1, u32 param_2, s8 *param_3) {
    u32 sVar1;
    u32 uVar2;

    if (*(u32 *)(param_1 + 0x20) != 0) {
        __dla__FPv(*(u32 *)(param_1 + 0x20));
        *(u32 *)(param_1 + 0x20) = 0;
    }
    if (param_3 != (s8 *)0x0) {
        sVar1 = strlen(param_3) + 1;
        if (lbl_8035B138 == 0) {
            fn_800604C4(0xfffffffe,0,0,0);
        }
        fn_800F7EC0(lbl_8035B138);
        uVar2 = __nwa__FUl(sVar1);
        *(u32 *)(param_1 + 0x20) = uVar2;
        fn_800F7E98();
        if (*(u32 *)(param_1 + 0x20) == 0) {
            fn_800604C4(0xfffffffc,0,0,0);
        }
        fn_800EB764(*(u32 *)(param_1 + 0x20),param_3);
    }
}
