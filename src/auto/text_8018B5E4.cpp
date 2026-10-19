// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AA20;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
void fn_800FC6A8(void);

void fn_8018B5E4(u32 param_1, u32 param_2) {
    u32 uVar1;

    fn_800FC6A8();
    if (lbl_8035AA20 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AA20));
    uVar1 = __nwa__FUl((int)(param_2 << 4));
    *(u32 *)(param_1 + 0x90) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x90) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}

} /* extern "C" */
