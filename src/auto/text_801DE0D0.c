// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_803308A8[];
extern u8 lbl_803308B4[];
extern f32 lbl_803596E0[];
extern f32 lbl_8035B050;
void __dt__9C800F92E8Fv();
s32 __ct__9C800F92E8Fv();
void __register_global_object();

void fn_801DE0D0(void) {
    u32 uVar1;

    lbl_8035B050 = lbl_803596E0[0];
    uVar1 = __ct__9C800F92E8Fv((void *)lbl_803308B4);
    __register_global_object(uVar1,__dt__9C800F92E8Fv,(u32)lbl_803308A8);
}
