// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_8032E7A8[];
extern u8 lbl_8032E7B4[];
void __dt__9C8016E11CFv();
s32 __ct__9C80207028Fv();
void __register_global_object();

void fn_8016E0E0(void) {
    u32 uVar1;

    uVar1 = __ct__9C80207028Fv((u32)lbl_8032E7B4);
    __register_global_object(uVar1,__dt__9C8016E11CFv,(u32)lbl_8032E7A8);
}
