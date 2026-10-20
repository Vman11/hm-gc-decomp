// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A33C;
extern volatile f32 lbl_8035A338;
extern volatile f64 lbl_8035FF40;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306B24[];
extern u8 lbl_80298F40[];
extern u8 lbl_80298F4C[];
void fn_80089AA4(void);
void fn_800375E4(void);
extern u8 lbl_80306B18[];

void fn_80089C4C(void) {
    lbl_8035A33C = lbl_803596E0[0];
    lbl_8035A338 = fn_800EFDA4(lbl_8035FF40);
    __register_global_object(fn_8023DC5C(lbl_80306B24, lbl_80298F40, lbl_80298F4C, (void *)fn_80089AA4, 1108), (void *)fn_800375E4, lbl_80306B18);
}

__declspec(section ".ctors") static void (*const ctor_80089C4C)(void) = fn_80089C4C;

} /* extern "C" */
