// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A364;
extern volatile f32 lbl_8035A360;
extern volatile f64 lbl_803600C8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306C14[];
extern u8 lbl_80299074[];
extern u32 lbl_803600D0;
void fn_8008B00C(void);
void fn_800375E4(void);
extern u8 lbl_80306C08[];

void fn_8008B0B4(void) {
    lbl_8035A364 = lbl_803596E0[0];
    lbl_8035A360 = fn_800EFDA4(lbl_803600C8);
    __register_global_object(fn_8023DC5C(lbl_80306C14, lbl_80299074, &lbl_803600D0, (void *)fn_8008B00C, 336), (void *)fn_800375E4, lbl_80306C08);
}

__declspec(section ".ctors") static void (*const ctor_8008B0B4)(void) = fn_8008B0B4;

} /* extern "C" */
