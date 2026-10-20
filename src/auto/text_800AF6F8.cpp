// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4E4;
extern volatile f32 lbl_8035A4E0;
extern volatile f64 lbl_80362AE0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803073B4[];
extern u8 lbl_8029B804[];
extern u8 lbl_8029B810[];
void fn_800AF53C(void);
void fn_800375E4(void);
extern u8 lbl_803073A8[];

void fn_800AF6F8(void) {
    lbl_8035A4E4 = lbl_803596E0[0];
    lbl_8035A4E0 = fn_800EFDA4(lbl_80362AE0);
    __register_global_object(fn_8023DC5C(lbl_803073B4, lbl_8029B804, lbl_8029B810, (void *)fn_800AF53C, 312), (void *)fn_800375E4, lbl_803073A8);
}

__declspec(section ".ctors") static void (*const ctor_800AF6F8)(void) = fn_800AF6F8;

} /* extern "C" */
