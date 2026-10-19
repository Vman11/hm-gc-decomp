// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AC50;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80155460 { char pad[0x50]; C80155460(); ~C80155460(); };

extern "C" {
}


extern "C" void fn_801715D0(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC50 == 0) {
        fn_800604C4((int)((int)(0xfffffffe)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
    fn_800F7EC0((int)((int)(lbl_8035AC50)));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C80155460[iVar3];
    *(u32 *)(param_1 + 0x30) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x30) == 0) {
        fn_800604C4((int)((int)(0xfffffffc)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
}
}
