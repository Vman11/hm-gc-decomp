// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801768A4Fv[];
extern u8 __dt__9C8015C6E4Fv[];
extern u8 __dt__9C8015F26CFv[];
extern u8 __dt__9C80170688Fv[];
void __dla__FPv(int);
void fn_800E1E88(int, int);
void fn_801339D8(int);
void fn_8016CAF8(int, int);

void fn_801607FC(s32 param_1) {
    if (*(u32 *)(param_1 + 0x24) != 0) {
        fn_8016CAF8((int)(*(u32 *)(param_1 + 0x24)), (int)(param_1));
        *(u32 *)(param_1 + 0x24) = 0;
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x28)), (int)(__dt__9C8015F26CFv));
        *(u32 *)(param_1 + 0x28) = 0;
    }
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(__dt__9C801768A4Fv));
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x30)), (int)(__dt__9C8015C6E4Fv));
    }
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(__dt__9C80170688Fv));
    }
    if (*(void **)(param_1 + 0x3c) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x3c)));
    }
    fn_801339D8((int)(param_1));
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
}

} /* extern "C" */
