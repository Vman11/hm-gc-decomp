// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035B228;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);

void fn_802185C4(u32 param_1, u32 param_2) {
    u32 uVar1;

    if (*(u32 *)(lbl_8035B228 + 0x18) >= 5) {
        *(u32 *)(lbl_8035B228 + 0x1c) = *(u32 *)(lbl_8035B228 + 0x18);
    }
    else {
        *(u32 *)(lbl_8035B228 + 0x1c) = 5;
    }
    if (lbl_8035B228 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B228));
    uVar1 = __nwa__FUl((int)(param_2));
    *(u32 *)(param_1 + 400) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 400) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    *(u32 *)(lbl_8035B228 + 0x1c) = *(u32 *)(lbl_8035B228 + 0x18);
    *(u32 *)(param_1 + 0x194) = param_2;
    *(u32 *)(param_1 + 0x198) = 0;
    *(u32 *)(param_1 + 0x19c) = param_2;
    *(u32 *)(param_1 + 0x1a0) = 0;
    *(u32 *)(param_1 + 0x1a4) = 0x32;
}

} /* extern "C" */
