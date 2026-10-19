// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80216B48(int);
void fn_80216BD4(int);
void fn_80216DA0(void);

void fn_80216E9C(u32 param_1, u32 param_2) {
    u32 iVar1;

    fn_80216DA0();
    iVar1 = (*(u32 *)(param_2 + 8) != 0) ? *(u32 *)(param_2 + 8) : *(u32 *)(param_2 + 4);
    fn_80216BD4((int)(iVar1));
    iVar1 = (*(u32 *)(param_2 + 0xc) != 0) ? *(u32 *)(param_2 + 0xc) : *(u32 *)(param_2 + 4);
    fn_80216B48((int)(iVar1));
}

} /* extern "C" */
