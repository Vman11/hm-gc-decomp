// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AAC0;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_800EB764(int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
u32 strlen(int);

void fn_8010CC84(u32 param_1, s8 *param_2) {
    u32 sVar1;
    u32 uVar2;

    if (*(u32 *)(param_1 + 4) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 4)));
    }
    if (lbl_8035AAC0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AAC0));
    sVar1 = strlen((int)(param_2));
    uVar2 = __nwa__FUl((int)(sVar1 + 1));
    *(u32 *)(param_1 + 4) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 4) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_800EB764((int)(*(u32 *)(param_1 + 4)), (int)(param_2));
}

} /* extern "C" */
