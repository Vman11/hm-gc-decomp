// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035A9F4;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
void fn_801AA84C(int, int, int, int);

void fn_801CC6CC(u32 *param_1, u32 param_2) {
    u32 uVar1;

    if (lbl_8035A9F4 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035A9F4));
    uVar1 = __nwa__FUl((int)(8));
    param_1[0x10] = uVar1;
    fn_800F7E98();
    if (param_1[0x10] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    *(u8 *)param_1[0x10] = 0;
    fn_801AA84C((int)(*param_1), (int)(param_1[9]), (int)(param_1[0x10]), (int)(*(u32 *)(param_2 + (u32)*(u8 *)(param_1 + 0xf) * 4)));
}

} /* extern "C" */
