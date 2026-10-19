// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AC48;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8016E2AC { char pad[0x38]; C8016E2AC(); ~C8016E2AC(); };

extern "C" {
}


extern "C" void fn_8016E17C(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC48 == 0) {
        fn_800604C4((int)((int)(0xfffffffe)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
    fn_800F7EC0((int)((int)(lbl_8035AC48)));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C8016E2AC[iVar3];
    *(u32 *)(param_1 + 0x18) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x18) == 0) {
        fn_800604C4((int)((int)(0xfffffffc)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
    }
}
}
