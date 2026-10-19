// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80179618Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);
void fn_8012D680(int);
void fn_8016CAB8(int, int);

void fn_8015AEA4(s32 param_1) {
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_8016CAB8((int)(*(u32 *)(param_1 + 0x28)), (int)(param_1));
    }
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(__dt__9C80179618Fv));
    }
    if (*(void **)(param_1 + 0x30) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x30)));
    }
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    fn_8012D680((int)(param_1));
}

} /* extern "C" */
