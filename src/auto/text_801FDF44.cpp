// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B118;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801FFB44 { char pad[0x2c]; C801FFB44(); ~C801FFB44(); };

extern "C" {
}


extern "C" void fn_801FDF44(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035B118 == 0) {
        fn_800604C4((int)((int)(0xfffffffe)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
    fn_800F7EC0((int)((int)(lbl_8035B118)));
    iVar3 = *(u32 *)(param_1 + 0xc);
    uVar2 = (u32) new C801FFB44[iVar3];
    *(u32 *)(param_1 + 0x30) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x30) == 0) {
        fn_800604C4((int)((int)(0xfffffffc)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
}
}
