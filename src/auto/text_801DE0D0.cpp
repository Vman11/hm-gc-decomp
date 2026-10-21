// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803308A8[];
extern u8 lbl_803308B4[];
extern f32 lbl_803596E0[];
extern f32 lbl_8035B050;
void __dt__9C800F92E8Fv(void);
s32 __ct__9C800F92E8Fv(int);
void __register_global_object(int, int, int);

void fn_801DE0D0(void) {
    u32 uVar1;

    lbl_8035B050 = lbl_803596E0[0];
    uVar1 = __ct__9C800F92E8Fv((int)(lbl_803308B4));
    __register_global_object((int)(uVar1), (int)(__dt__9C800F92E8Fv), (int)((u32)lbl_803308A8));
}

__declspec(section ".ctors") static void (*const ctor_801DE0D0)(void) = fn_801DE0D0;

} /* extern "C" */
