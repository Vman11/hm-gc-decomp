// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A34C;
extern volatile f32 lbl_8035A348;
extern volatile f64 lbl_8035FFD0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306B84[];
extern u8 lbl_80298FA0[];
extern u8 lbl_80298FAC[];
void fn_8008A124(void);
void fn_800375E4(void);
extern u8 lbl_80306B78[];

void fn_8008A240(void) {
    lbl_8035A34C = lbl_803596E0[0];
    lbl_8035A348 = fn_800EFDA4(lbl_8035FFD0);
    __register_global_object(fn_8023DC5C(lbl_80306B84, lbl_80298FA0, lbl_80298FAC, (void *)fn_8008A124, 280), (void *)fn_800375E4, lbl_80306B78);
}

__declspec(section ".ctors") static void (*const ctor_8008A240)(void) = fn_8008A240;

} /* extern "C" */
