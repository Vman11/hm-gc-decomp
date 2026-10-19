// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802AFA70[];
void __ct__9C8002F9F4Fv();
void fn_80033824();
void __ct__9C80037904Fv();
void __ct__9C80037F20Fv();
void __ct__9C800390F8Fv();
void __ct__9C8010B8F8Fv();
void __ct__9C80111028Fv();
void __ct__9C801AD710Fv();
void __ct__9C8025577CFv();

s32 __ct__9C80034A10Fv(s32 param_1) {
    __ct__9C8025577CFv();
    *(u8 **)(param_1 + 0x2f0) = lbl_802AFA70;
    __ct__9C80111028Fv(param_1 + 0x304);
    __ct__9C80111028Fv(param_1 + 0x4f4);
    __ct__9C8010B8F8Fv(param_1 + 0x6e4);
    __ct__9C801AD710Fv(param_1 + 0x6f8);
    __ct__9C80037F20Fv(param_1 + 0x770);
    __ct__9C800390F8Fv(param_1 + 0x7cc);
    __ct__9C80037904Fv(param_1 + 0x804);
    __ct__9C8002F9F4Fv(param_1 + 0x818);
    fn_80033824(param_1);
    return param_1;
}
