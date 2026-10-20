// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A194;
extern volatile f32 lbl_8035A190;
extern volatile f64 lbl_8035E428;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80302ADC[];
extern u8 lbl_802970F8[];
extern u32 lbl_8035E430;
void fn_8005C228(void);
void fn_800375E4(void);
extern u8 lbl_80302AD0[];

void fn_8005C2C8(void) {
    lbl_8035A194 = lbl_803596E0[0];
    lbl_8035A190 = fn_800EFDA4(lbl_8035E428);
    __register_global_object(fn_8023DC5C(lbl_80302ADC, lbl_802970F8, &lbl_8035E430, (void *)fn_8005C228, 368), (void *)fn_800375E4, lbl_80302AD0);
}

__declspec(section ".ctors") static void (*const ctor_8005C2C8)(void) = fn_8005C2C8;

} /* extern "C" */
