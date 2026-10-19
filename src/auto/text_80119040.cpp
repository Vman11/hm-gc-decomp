// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AB28;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
extern void *memset(void *, int, unsigned long);

void fn_80119040(u32 *param_1, u32 param_2) {
    u32 iVar1;

    if (*param_1 != 0) {
        __dla__FPv((int)(*param_1));
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[1] = param_2;
    if (lbl_8035AB28 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AB28));
    iVar1 = __nwa__FUl((int)(param_1[1] << 2));
    *param_1 = iVar1;
    fn_800F7E98();
    if (*param_1 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    memset((void *)*param_1,0,param_1[1] << 2);
}

} /* extern "C" */
