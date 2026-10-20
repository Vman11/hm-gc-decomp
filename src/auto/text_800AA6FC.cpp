// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4B4;
extern volatile f32 lbl_8035A4B0;
extern volatile f64 lbl_803621F8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307294[];
extern u8 lbl_8029B1BC[];
extern u8 lbl_8029B1C8[];
void fn_800AA5BC(void);
void fn_800375E4(void);
extern u8 lbl_80307288[];

void fn_800AA6FC(void) {
    lbl_8035A4B4 = lbl_803596E0[0];
    lbl_8035A4B0 = fn_800EFDA4(lbl_803621F8);
    __register_global_object(fn_8023DC5C(lbl_80307294, lbl_8029B1BC, lbl_8029B1C8, (void *)fn_800AA5BC, 300), (void *)fn_800375E4, lbl_80307288);
}

__declspec(section ".ctors") static void (*const ctor_800AA6FC)(void) = fn_800AA6FC;

} /* extern "C" */
