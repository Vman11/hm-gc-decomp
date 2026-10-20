// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3DC;
extern volatile f32 lbl_8035A3D8;
extern volatile f64 lbl_80360FC0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306E84[];
extern u8 lbl_80299BF4[];
extern u8 lbl_80299C00[];
void fn_80095340(void);
void fn_800375E4(void);
extern u8 lbl_80306E78[];

void fn_800953E0(void) {
    lbl_8035A3DC = lbl_803596E0[0];
    lbl_8035A3D8 = fn_800EFDA4(lbl_80360FC0);
    __register_global_object(fn_8023DC5C(lbl_80306E84, lbl_80299BF4, lbl_80299C00, (void *)fn_80095340, 340), (void *)fn_800375E4, lbl_80306E78);
}

__declspec(section ".ctors") static void (*const ctor_800953E0)(void) = fn_800953E0;

} /* extern "C" */
