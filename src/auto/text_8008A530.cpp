// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A354;
extern volatile f32 lbl_8035A350;
extern volatile f64 lbl_80360010;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306BB4[];
extern u8 lbl_80298FD0[];
extern u8 lbl_80298FDC[];
void fn_8008A414(void);
void fn_800375E4(void);
extern u8 lbl_80306BA8[];

void fn_8008A530(void) {
    lbl_8035A354 = lbl_803596E0[0];
    lbl_8035A350 = fn_800EFDA4(lbl_80360010);
    __register_global_object(fn_8023DC5C(lbl_80306BB4, lbl_80298FD0, lbl_80298FDC, (void *)fn_8008A414, 280), (void *)fn_800375E4, lbl_80306BA8);
}

__declspec(section ".ctors") static void (*const ctor_8008A530)(void) = fn_8008A530;

} /* extern "C" */
