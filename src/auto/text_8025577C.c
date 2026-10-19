// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802F2388[];
extern s32 lbl_8035B65C;
void __ct__9C80109410Fv();
void __ct__9C80111028Fv();
void fn_8014CBD8();
void fn_80254CE4();

s32 __ct__9C8025577CFv(s32 param_1) {
    *(u8 **)(param_1 + 0x2f0) = lbl_802F2388;
    __ct__9C80109410Fv(param_1 + 0x38);
    __ct__9C80111028Fv(param_1 + 0x90);
    fn_8014CBD8(param_1 + 0x2d8);
    lbl_8035B65C = param_1;
    fn_80254CE4(param_1);
    return param_1;
}
