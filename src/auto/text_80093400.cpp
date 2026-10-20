// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3C4;
extern volatile f32 lbl_8035A3C0;
extern volatile f64 lbl_80360D50;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306DF4[];
extern u8 lbl_80299A18[];
extern u8 lbl_80299A24[];
void fn_800932D8(void);
void fn_800375E4(void);
extern u8 lbl_80306DE8[];

void fn_80093400(void) {
    lbl_8035A3C4 = lbl_803596E0[0];
    lbl_8035A3C0 = fn_800EFDA4(lbl_80360D50);
    __register_global_object(fn_8023DC5C(lbl_80306DF4, lbl_80299A18, lbl_80299A24, (void *)fn_800932D8, 284), (void *)fn_800375E4, lbl_80306DE8);
}

__declspec(section ".ctors") static void (*const ctor_80093400)(void) = fn_80093400;

} /* extern "C" */
