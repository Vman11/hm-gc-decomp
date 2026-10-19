// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8018E150Fv[];
void fn_800E1E88(int, int);
void fn_80242210(int);

void fn_8009560C(s32 param_1) {
    if (*(u32 *)(param_1 + 0x130) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x130)), (int)(__dt__9C8018E150Fv));
        *(u32 *)(param_1 + 0x130) = 0;
    }
    fn_80242210((int)(param_1));
}

} /* extern "C" */
