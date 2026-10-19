// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802BCEEC[];
extern s32 lbl_8035A1DC;
void __ct__9C80038D2CFv();
void __ct__9C8003965CFv();
void __ct__9C80039E10Fv();
void __ct__9C8003A490Fv();
void __ct__9C8003A978Fv();
void __ct__9C8003ACE0Fv();
void __ct__9C8003B394Fv();
void __ct__9C8003C388Fv();
void fn_80061894();
void __ct__9C800643B0Fv();
void fn_8014CA08();
void __ct__9C8023C9A0Fv();

s32 __ct__9C800642B8Fv(s32 param_1) {
    __ct__9C800643B0Fv();
    *(u8 **)(param_1 + 0x2a0) = lbl_802BCEEC;
    __ct__9C80038D2CFv(param_1 + 0x3410);
    fn_8014CA08(param_1 + 0x3450);
    __ct__9C8003B394Fv(param_1 + 0x3530);
    __ct__9C8003C388Fv(param_1 + 0x3550);
    __ct__9C80039E10Fv(param_1 + 0x35cc);
    __ct__9C8003A490Fv(param_1 + 0x35ec);
    __ct__9C8003A978Fv(param_1 + 0x3618);
    __ct__9C8003965CFv(param_1 + 0x364c);
    __ct__9C8023C9A0Fv(param_1 + 0x36d4);
    __ct__9C8003ACE0Fv(param_1 + 0x36d8);
    lbl_8035A1DC = param_1;
    fn_80061894(param_1);
    return param_1;
}
