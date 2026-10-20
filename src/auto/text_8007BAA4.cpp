// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A2CC;
extern volatile f32 lbl_8035A2C8;
extern volatile f64 lbl_8035F7A8;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803068B4[];
extern u8 lbl_802986A0[];
extern u32 lbl_8035F7B0;
void fn_8007B9CC(void);
void fn_800375E4(void);
extern u8 lbl_803068A8[];

void fn_8007BAA4(void) {
    lbl_8035A2CC = lbl_803596E0[0];
    lbl_8035A2C8 = fn_800EFDA4(lbl_8035F7A8);
    __register_global_object(fn_8023DC5C(lbl_803068B4, lbl_802986A0, &lbl_8035F7B0, (void *)fn_8007B9CC, 432), (void *)fn_800375E4, lbl_803068A8);
}

__declspec(section ".ctors") static void (*const ctor_8007BAA4)(void) = fn_8007BAA4;

} /* extern "C" */
