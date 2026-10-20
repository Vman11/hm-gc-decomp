// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A4CC;
extern volatile f32 lbl_8035A4C8;
extern volatile f64 lbl_80362558;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307324[];
extern u8 lbl_8029B3D0[];
extern u32 lbl_80362560;
void fn_800AC228(void);
void fn_800375E4(void);
extern u8 lbl_80307318[];

void fn_800AC430(void) {
    lbl_8035A4CC = lbl_803596E0[0];
    lbl_8035A4C8 = fn_800EFDA4(lbl_80362558);
    __register_global_object(fn_8023DC5C(lbl_80307324, lbl_8029B3D0, &lbl_80362560, (void *)fn_800AC228, 312), (void *)fn_800375E4, lbl_80307318);
}

__declspec(section ".ctors") static void (*const ctor_800AC430)(void) = fn_800AC430;

} /* extern "C" */
