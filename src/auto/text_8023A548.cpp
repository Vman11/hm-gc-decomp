// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035B3B0;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void fn_800F80DC(int, void *, void *);
void fn_8023B770(int, int, void *);

void fn_8023A548(u32 param_1) {
    u32 uVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 local_18;
    u8 auStack_14[8];

    if (lbl_8035B3B0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B3B0));
    puVar2 = (u32 *)__nw__FUl((int)(0x20));
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
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8023B770((int)(*(u32 *)(param_1 + 0x1c)), (int)(*(u32 *)(param_1 + 8)), auStack_14);
    uVar3 = *(u32 *)(param_1 + 0x1c);
    uVar1 = *(u32 *)(param_1 + 4);
    puVar2 = *(u32 **)(param_1 + 0x18);
    puVar2[7] = uVar3;
    *puVar2 = uVar1;
    fn_800F80DC((int)(uVar3), auStack_14, &local_18);
    puVar2[2] = local_18;
}

} /* extern "C" */
