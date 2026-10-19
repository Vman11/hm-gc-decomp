// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E6DF0[];
void __ct__9C8012EE18Fv();
void __ct__9C80155460Fv();
void __ct__9C801717DCFv();

s32 __ct__9C8015BEE8Fv(s32 param_1) {
    __ct__9C8012EE18Fv();
    *(u8 **)(param_1 + 0x38) = lbl_802E6DF0;
    __ct__9C801717DCFv(param_1 + 0x3c);
    __ct__9C80155460Fv(param_1 + 0x7c);
    return param_1;
}
