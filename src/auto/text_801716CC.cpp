// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80155460Fv[];
extern u8 __dt__9C80155E80Fv[];
void fn_800E1E88(int, int);
void fn_80138008(int);
void fn_8016CB78(int, int);

void fn_801716CC(s32 param_1) {
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_8016CB78((int)(*(u32 *)(param_1 + 0x2c)), (int)(param_1));
    }
    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x34)), (int)(__dt__9C80155E80Fv));
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x30)), (int)(__dt__9C80155460Fv));
    }
    fn_80138008((int)(param_1));
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
}

} /* extern "C" */
