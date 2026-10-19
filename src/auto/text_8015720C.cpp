// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035ABC0;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801717DC { char pad[0x40]; C801717DC(); ~C801717DC(); };

extern "C" {
}


extern "C" void fn_8015720C(u32 param_1) {
    u16 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (lbl_8035ABC0 == 0) {
        fn_800604C4((int)((int)(0xfffffffe)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
    fn_800F7EC0((int)((int)(lbl_8035ABC0)));
    uVar1 = *(u16 *)(param_1 + 0x78);
    uVar3 = (u32) new C801717DC[uVar1];
    *(u32 *)(param_1 + 0xa8) = uVar3;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0xa8) == 0) {
        fn_800604C4((int)((int)(0xfffffffc)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
}
}
