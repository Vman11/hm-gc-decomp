// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A0D4;
extern volatile f32 lbl_8035A0D0;
extern volatile f64 lbl_8035C3F8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030268C[];
extern u8 lbl_802950F8[];
extern u8 lbl_80295104[];
void fn_80041514(void);
void fn_800375E4(void);
extern u8 lbl_80302680[];

void fn_800416BC(void) {
    lbl_8035A0D4 = lbl_803596E0[0];
    lbl_8035A0D0 = fn_800EFDA4(lbl_8035C3F8);
    __register_global_object(fn_8023DC5C(lbl_8030268C, lbl_802950F8, lbl_80295104, (void *)fn_80041514, 308), (void *)fn_800375E4, lbl_80302680);
}

__declspec(section ".ctors") static void (*const ctor_800416BC)(void) = fn_800416BC;

} /* extern "C" */
