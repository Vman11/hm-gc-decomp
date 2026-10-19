// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8015BEE8Fv[];
void fn_800E1E88(int, int);
void fn_8012EF84(int);
void fn_8016CA78(int, int);

void fn_8015C164(s32 param_1) {
    if (*(u32 *)(param_1 + 0x2c) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x2c)), (int)(__dt__9C8015BEE8Fv));
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        fn_8016CA78((int)(*(u32 *)(param_1 + 0x28)), (int)(param_1));
    }
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    fn_8012EF84((int)(param_1));
}

} /* extern "C" */
