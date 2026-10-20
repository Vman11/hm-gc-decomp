// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3D4;
extern volatile f32 lbl_8035A3D0;
extern volatile f64 lbl_80360F30;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306E54[];
extern u8 lbl_80299BA8[];
extern u32 lbl_80360F38;
void fn_80094810(void);
void fn_800375E4(void);
extern u8 lbl_80306E48[];

void fn_80094944(void) {
    lbl_8035A3D4 = lbl_803596E0[0];
    lbl_8035A3D0 = fn_800EFDA4(lbl_80360F30);
    __register_global_object(fn_8023DC5C(lbl_80306E54, lbl_80299BA8, &lbl_80360F38, (void *)fn_80094810, 380), (void *)fn_800375E4, lbl_80306E48);
}

__declspec(section ".ctors") static void (*const ctor_80094944)(void) = fn_80094944;

} /* extern "C" */
