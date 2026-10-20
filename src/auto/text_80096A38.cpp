// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A3EC;
extern volatile f32 lbl_8035A3E8;
extern volatile f64 lbl_803610D0;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306EE4[];
extern u8 lbl_80299DB0[];
extern u8 lbl_80299DBC[];
void fn_80096998(void);
void fn_800375E4(void);
extern u8 lbl_80306ED8[];

void fn_80096A38(void) {
    lbl_8035A3EC = lbl_803596E0[0];
    lbl_8035A3E8 = fn_800EFDA4(lbl_803610D0);
    __register_global_object(fn_8023DC5C(lbl_80306EE4, lbl_80299DB0, lbl_80299DBC, (void *)fn_80096998, 388), (void *)fn_800375E4, lbl_80306ED8);
}

__declspec(section ".ctors") static void (*const ctor_80096A38)(void) = fn_80096A38;

} /* extern "C" */
