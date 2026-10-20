// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A11C;
extern volatile f32 lbl_8035A118;
extern volatile f64 lbl_8035D128;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030280C[];
extern u8 lbl_80295A84[];
extern u32 lbl_8035D130;
void fn_80047B30(void);
void fn_800375E4(void);
extern u8 lbl_80302800[];

void fn_80047D30(void) {
    lbl_8035A11C = lbl_803596E0[0];
    lbl_8035A118 = fn_800EFDA4(lbl_8035D128);
    __register_global_object(fn_8023DC5C(lbl_8030280C, lbl_80295A84, &lbl_8035D130, (void *)fn_80047B30, 312), (void *)fn_800375E4, lbl_80302800);
}

__declspec(section ".ctors") static void (*const ctor_80047D30)(void) = fn_80047D30;

} /* extern "C" */
