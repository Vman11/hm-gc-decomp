// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E8C10[];
void __ct__9C8017AB98Fv();
void fn_8018DE24();
void __ct__9C8018E150Fv();

s32 __ct__9C801883E0Fv(s32 param_1) {
    __ct__9C8018E150Fv();
    *(u8 **)(param_1 + 0x68) = lbl_802E8C10;
    __ct__9C8017AB98Fv(param_1 + 0xa8);
    *(u16 *)(param_1 + 4) = 3;
    fn_8018DE24(param_1);
    return param_1;
}
