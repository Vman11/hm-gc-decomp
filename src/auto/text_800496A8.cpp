// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A12C;
extern volatile f32 lbl_8035A128;
extern volatile f64 lbl_8035D250;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030286C[];
extern u8 lbl_80295BD8[];
extern u32 lbl_8035D258;
void fn_80049570(void);
void fn_800375E4(void);
extern u8 lbl_80302860[];

void fn_800496A8(void) {
    lbl_8035A12C = lbl_803596E0[0];
    lbl_8035A128 = fn_800EFDA4(lbl_8035D250);
    __register_global_object(fn_8023DC5C(lbl_8030286C, lbl_80295BD8, &lbl_8035D258, (void *)fn_80049570, 304), (void *)fn_800375E4, lbl_80302860);
}

__declspec(section ".ctors") static void (*const ctor_800496A8)(void) = fn_800496A8;

} /* extern "C" */
