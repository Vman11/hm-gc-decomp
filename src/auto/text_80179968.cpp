// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AD60;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);

void fn_80179968(u32 *param_1) {
    u32 iVar1;

    if (*param_1 != 0) {
        if (param_1[2] != 0) {
            __dla__FPv((int)(param_1[2]));
        }
        if (*param_1 != 0) {
            __dla__FPv((int)(*param_1));
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
    }
    if (lbl_8035AD60 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AD60));
    iVar1 = __nwa__FUl((int)(0x600));
    *param_1 = iVar1;
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    if (lbl_8035AD60 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AD60));
    iVar1 = __nwa__FUl((int)(0x400));
    param_1[2] = iVar1;
    fn_800F7E98();
    if (param_1[2] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}

} /* extern "C" */
