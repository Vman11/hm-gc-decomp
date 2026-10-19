// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C801FF850Fv[];
extern u8 __dt__9C802065B8Fv[];
void fn_800E1E88(int, int);
void fn_801FC25C(void);

void fn_801FF8C4(s32 param_1) {
    fn_801FC25C();
    if (*(u32 *)(param_1 + 0x24) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x24)), (int)(__dt__9C801FF850Fv));
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x28)), (int)(__dt__9C802065B8Fv));
    }
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
}

} /* extern "C" */
