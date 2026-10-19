// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_8035B3B0;
void fn_800604C4();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nw__FUl();
void fn_800F80DC();
void fn_8023B770();

void fn_8023A548(u32 param_1) {
    u32 uVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 local_18;
    u8 auStack_14[8];

    if (lbl_8035B3B0 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035B3B0);
    puVar2 = (u32 *)__nw__FUl(0x20);
    if (puVar2 != (u32 *)0x0) {
        puVar2[2] = 0xffffffff;
        puVar2[7] = 0;
        puVar2[5] = 0;
        *puVar2 = 0;
        puVar2[1] = 4;
        puVar2[4] = 0;
        puVar2[6] = 0;
    }
    *(u32 **)(param_1 + 0x18) = puVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x18) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    fn_8023B770(*(u32 *)(param_1 + 0x1c),*(u32 *)(param_1 + 8),auStack_14);
    uVar3 = *(u32 *)(param_1 + 0x1c);
    uVar1 = *(u32 *)(param_1 + 4);
    puVar2 = *(u32 **)(param_1 + 0x18);
    puVar2[7] = uVar3;
    *puVar2 = uVar1;
    fn_800F80DC(uVar3,auStack_14,&local_18);
    puVar2[2] = local_18;
}
