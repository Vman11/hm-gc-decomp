// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E8530[];
void __ct__9C80128E3CFv();
void __ct__9C80155460Fv();
void __ct__9C801717DCFv();

s32 __ct__9C80179618Fv(s32 param_1) {
    __ct__9C80128E3CFv();
    *(u8 **)(param_1 + 0x34) = lbl_802E8530;
    __ct__9C801717DCFv(param_1 + 0x5c);
    __ct__9C80155460Fv(param_1 + 0x9c);
    return param_1;
}
