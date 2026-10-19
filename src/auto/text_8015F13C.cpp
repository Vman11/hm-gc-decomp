// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8015FE00Fv[];
extern u8 __dt__9C801768A4Fv[];
extern u8 __dt__9C8015C6E4Fv[];
extern u8 __dt__9C80170688Fv[];
void fn_800E1E88(int, int);
void fn_80131ED4(int);

void fn_8015F13C(s32 param_1) {
    if (*(u32 *)(param_1 + 0x40) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x40)), (int)(__dt__9C801768A4Fv));
    }
    if (*(u32 *)(param_1 + 0x44) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x44)), (int)(__dt__9C80170688Fv));
    }
    if (*(u32 *)(param_1 + 0x48) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x48)), (int)(__dt__9C8015C6E4Fv));
    }
    if (*(u32 *)(param_1 + 0x4c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x4c)), (int)(__dt__9C8015FE00Fv));
    }
    if ((*(u32 *)(param_1 + 0x3c) & 1) != 0) {
        *(u32 *)(param_1 + 0x10) = 0;
    }
    fn_80131ED4((int)(param_1));
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x4c) = 0;
}

} /* extern "C" */
