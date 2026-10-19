// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035B530;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
void fn_802416D4(int, int);

void fn_8008BFF8(u32 param_1, u32 param_2) {
    u32 uVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    uVar1 = __nwa__FUl((int)(*(u32 *)(param_1 + 0x138) << 2));
    *(u32 *)(param_1 + 0x130) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x130) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_802416D4((int)(param_1), (int)(param_2));
}

} /* extern "C" */
