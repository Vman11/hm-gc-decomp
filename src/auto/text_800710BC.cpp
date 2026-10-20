// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A20C;
extern volatile f32 lbl_8035A208;
extern volatile f64 lbl_8035F320;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_803067A4[];
extern u8 lbl_80298010[];
extern u32 lbl_8035F328;
void fn_80070B70(void);
void fn_800375E4(void);
extern u8 lbl_80306798[];

void fn_800710BC(void) {
    lbl_8035A20C = lbl_803596E0[0];
    lbl_8035A208 = fn_800EFDA4(lbl_8035F320);
    __register_global_object(fn_8023DC5C(lbl_803067A4, lbl_80298010, &lbl_8035F328, (void *)fn_80070B70, 668), (void *)fn_800375E4, lbl_80306798);
}

__declspec(section ".ctors") static void (*const ctor_800710BC)(void) = fn_800710BC;

} /* extern "C" */
