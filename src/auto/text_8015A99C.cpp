// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035ABD8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80179618 { char pad[0xec]; C80179618(); ~C80179618(); };

extern "C" {
}


extern "C" void fn_8015A99C(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035ABD8 == 0) {
        fn_800604C4((int)((int)(0xfffffffe)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
    fn_800F7EC0((int)((int)(lbl_8035ABD8)));
    iVar3 = *(u32 *)(param_1 + 0x1c);
    uVar2 = (u32) new C80179618[iVar3];
    *(u32 *)(param_1 + 0x2c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x2c) == 0) {
        fn_800604C4((int)((int)(0xfffffffc)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
}
}
