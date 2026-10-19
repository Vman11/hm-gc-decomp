// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void __dl__FPv(int);
void fn_801B3110(void);
void fn_801D6910(int);

void fn_801D69C0(s32 param_1) {
    u32 *puVar1;

    fn_801B3110();
    while (puVar1 = *(u32 **)(param_1 + 0x168), puVar1 != (u32 *)0x0) {
        *(u32 *)(param_1 + 0x168) = puVar1[1];
        __dla__FPv((int)(*puVar1));
        __dl__FPv((int)(puVar1));
    }
    if (*(void **)(param_1 + 0x31c) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x31c)));
    }
    fn_801D6910((int)(param_1));
}

} /* extern "C" */
