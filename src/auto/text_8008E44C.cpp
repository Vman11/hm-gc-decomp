// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802C8258[];
extern s32 lbl_8035A394;
void fn_8003EB20(void);

s32 fn_8008E44C(s32 param_1) {
    fn_8003EB20();
    *(u8 **)(param_1 + 0x648) = lbl_802C8258;
    lbl_8035A394 = param_1;
    *(u32 *)(param_1 + 0x654) = 0;
    *(u32 *)(param_1 + 0x64c) = 0;
    *(u32 *)(param_1 + 0x650) = 0;
    return param_1;
}

} /* extern "C" */
