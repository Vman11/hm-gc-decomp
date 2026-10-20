// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A37C;
extern volatile f32 lbl_8035A378;
extern volatile f64 lbl_80360328;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306CA4[];
extern u8 lbl_80299284[];
extern u8 lbl_80299290[];
void fn_8008C974(void);
void fn_800375E4(void);
extern u8 lbl_80306C98[];

void fn_8008CAD8(void) {
    lbl_8035A37C = lbl_803596E0[0];
    lbl_8035A378 = fn_800EFDA4(lbl_80360328);
    __register_global_object(fn_8023DC5C(lbl_80306CA4, lbl_80299284, lbl_80299290, (void *)fn_8008C974, 316), (void *)fn_800375E4, lbl_80306C98);
}

__declspec(section ".ctors") static void (*const ctor_8008CAD8)(void) = fn_8008CAD8;

} /* extern "C" */
