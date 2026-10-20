// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A49C;
extern volatile f32 lbl_8035A498;
extern volatile f64 lbl_80362108;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80307204[];
extern u8 lbl_8029B100[];
extern u8 lbl_8029B10C[];
void fn_800A95E4(void);
void fn_800375E4(void);
extern u8 lbl_803071F8[];

void fn_800A96D4(void) {
    lbl_8035A49C = lbl_803596E0[0];
    lbl_8035A498 = fn_800EFDA4(lbl_80362108);
    __register_global_object(fn_8023DC5C(lbl_80307204, lbl_8029B100, lbl_8029B10C, (void *)fn_800A95E4, 508), (void *)fn_800375E4, lbl_803071F8);
}

__declspec(section ".ctors") static void (*const ctor_800A96D4)(void) = fn_800A96D4;

} /* extern "C" */
