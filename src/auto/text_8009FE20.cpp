// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);
void fn_80242210(int);

void fn_8009FE20(u32 param_1) {
    u32 iVar1;
    u32 *piVar2;

    while (piVar2 = *(u32 **)(param_1 + 0x184), piVar2 != (u32 *)0x0) {
        if (piVar2 != (u32 *)0x0) {
            iVar1 = *piVar2;
            *(u32 *)(param_1 + 0x184) = iVar1;
            if (iVar1 != 0) {
                *(u32 *)(*(u32 *)(param_1 + 0x184) + 4) = 0;
            }
            else {
                *(u32 *)(param_1 + 0x188) = 0;
            }
        }
        __dl__FPv((int)(piVar2));
    }
    fn_80242210((int)(param_1));
}

} /* extern "C" */
