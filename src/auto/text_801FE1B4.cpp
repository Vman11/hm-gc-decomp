// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801FE2ECFv[];
extern u8 __dt__9C801FFB44Fv[];
extern u8 __dt__9C80201F10Fv[];
extern u8 __dt__9C80204170Fv[];
void fn_800E1E88(int, int);
void fn_801FAB34(int);

void fn_801FE1B4(s32 param_1) {
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(__dt__9C801FE2ECFv));
        *(u32 *)(param_1 + 0x34) = 0;
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x30)), (int)(__dt__9C801FFB44Fv));
        *(u32 *)(param_1 + 0x30) = 0;
    }
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(__dt__9C80201F10Fv));
        *(u32 *)(param_1 + 0x2c) = 0;
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x28)), (int)(__dt__9C80204170Fv));
        *(u32 *)(param_1 + 0x28) = 0;
    }
    fn_801FAB34((int)(param_1));
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
}

} /* extern "C" */
