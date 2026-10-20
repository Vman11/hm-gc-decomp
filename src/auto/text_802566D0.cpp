// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B69C;
extern volatile f32 lbl_8035B698;
extern volatile f64 lbl_80366678;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8035793C[];
extern u32 lbl_80366680;
extern u32 lbl_8036666C;
void fn_80255BD4(void);
void fn_800375E4(void);
extern u8 lbl_80357930[];

void fn_802566D0(void) {
    lbl_8035B69C = lbl_803596E0[0];
    lbl_8035B698 = fn_800EFDA4(lbl_80366678);
    __register_global_object(fn_8023DC5C(lbl_8035793C, &lbl_80366680, &lbl_8036666C, (void *)fn_80255BD4, 260), (void *)fn_800375E4, lbl_80357930);
}

__declspec(section ".ctors") static void (*const ctor_802566D0)(void) = fn_802566D0;

} /* extern "C" */
