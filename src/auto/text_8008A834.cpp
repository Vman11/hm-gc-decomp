// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A35C;
extern volatile f32 lbl_8035A358;
extern volatile f64 lbl_80360058;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_80306BE4[];
extern u8 lbl_8029900C[];
extern u8 lbl_80299018[];
void fn_8008A714(void);
void fn_800375E4(void);
extern u8 lbl_80306BD8[];

void fn_8008A834(void) {
    lbl_8035A35C = lbl_803596E0[0];
    lbl_8035A358 = fn_800EFDA4(lbl_80360058);
    __register_global_object(fn_8023DC5C(lbl_80306BE4, lbl_8029900C, lbl_80299018, (void *)fn_8008A714, 280), (void *)fn_800375E4, lbl_80306BD8);
}

__declspec(section ".ctors") static void (*const ctor_8008A834)(void) = fn_8008A834;

} /* extern "C" */
