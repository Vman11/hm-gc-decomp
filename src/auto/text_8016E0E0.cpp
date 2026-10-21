// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032E7A8[];
extern u8 lbl_8032E7B4[];
void __dt__9C8016E11CFv(void);
s32 __ct__9C80207028Fv(int);
void __register_global_object(int, int, int);

void fn_8016E0E0(void) {
    u32 uVar1;

    uVar1 = __ct__9C80207028Fv((int)((u32)lbl_8032E7B4));
    __register_global_object((int)(uVar1), (int)(__dt__9C8016E11CFv), (int)((u32)lbl_8032E7A8));
}

__declspec(section ".ctors") static void (*const ctor_8016E0E0)(void) = fn_8016E0E0;

} /* extern "C" */
